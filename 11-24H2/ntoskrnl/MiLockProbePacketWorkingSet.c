/*
 * XREFs of MiLockProbePacketWorkingSet @ 0x14020AFF0
 * Callers:
 *     MiFaultInProbeAddress @ 0x14020ABF4 (MiFaultInProbeAddress.c)
 *     MiInitializeProbePacketVm @ 0x14020AD30 (MiInitializeProbePacketVm.c)
 *     MiProbeAndLockPacket @ 0x140237CC0 (MiProbeAndLockPacket.c)
 *     MiProbeLeafPteAccess @ 0x1402394D0 (MiProbeLeafPteAccess.c)
 *     MmProbeAndLockSelectedPages @ 0x140390AC0 (MmProbeAndLockSelectedPages.c)
 *     MiSplitReducedCommitClonePage @ 0x1404F6C58 (MiSplitReducedCommitClonePage.c)
 * Callees:
 *     MiLockWorkingSetSharedAtDpc @ 0x14020BF58 (MiLockWorkingSetSharedAtDpc.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140219B50 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140241380 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall MiLockProbePacketWorkingSet(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  unsigned int v4; // edi
  _DWORD *v5; // rsi
  unsigned __int8 v6; // bp
  _DWORD *MmInternal; // rcx
  unsigned __int8 CurrentIrql; // di
  __int64 v9; // rax
  signed __int32 v10; // eax
  signed __int32 v11; // ett

  *(_DWORD *)(a1 + 72) &= 0xFFFFFFCF;
  v2 = *(_QWORD *)(a1 + 104);
  if ( KeGetCurrentIrql() == 2 )
  {
    *(_BYTE *)(a1 + 76) = 17;
    MiLockWorkingSetSharedAtDpc(v2);
  }
  else
  {
    if ( (*(_DWORD *)(v2 + 184) & 0xFu) >= 6 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    }
    else
    {
      if ( (*(_DWORD *)(v2 + 184) & 0xF) == 1 )
        v3 = &unk_140E38880;
      else
        v3 = (_QWORD *)(v2 + 192);
      v4 = (KeGetPcr()->Prcb.Number >> 1) & 3;
      v5 = (_DWORD *)(*v3 + ((unsigned __int64)v4 << 6));
      v6 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v6, 2LL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        _m_prefetchw(v5);
        v10 = *v5 & 0x7FFFFFFF;
        while ( 1 )
        {
          v11 = v10;
          v10 = _InterlockedCompareExchange(v5, v10 + 1, v10);
          if ( v11 == v10 )
            break;
          if ( v10 < 0 )
          {
            ExpWaitForSpinLockSharedAndAcquire(v5, v6);
            break;
          }
        }
      }
      else
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v5, v6);
      }
      MmInternal = KeGetCurrentPrcb()->MmInternal;
      if ( MmInternal )
        MmInternal[81] = v4;
      CurrentIrql = v6;
    }
    *(_BYTE *)(a1 + 76) = CurrentIrql;
  }
  LOBYTE(v9) = *(_DWORD *)(a1 + 72) & 0xF;
  if ( (_BYTE)v9 == 1 )
  {
    v9 = *(_QWORD *)(a1 + 88);
    if ( *(_QWORD *)(v9 + 640) )
      *(_DWORD *)(a1 + 72) |= 0x10u;
  }
  return v9;
}
