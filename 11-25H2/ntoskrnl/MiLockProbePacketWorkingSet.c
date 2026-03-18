/*
 * XREFs of MiLockProbePacketWorkingSet @ 0x1402FC680
 * Callers:
 *     MmProbeAndLockSelectedPages @ 0x1402AABA0 (MmProbeAndLockSelectedPages.c)
 *     MiProbeAndLockPacket @ 0x1402AC750 (MiProbeAndLockPacket.c)
 *     MiProbeLeafPteAccess @ 0x1402ADF50 (MiProbeLeafPteAccess.c)
 *     MiFaultInProbeAddress @ 0x1402FC28C (MiFaultInProbeAddress.c)
 *     MiInitializeProbePacketVm @ 0x1402FC3C0 (MiInitializeProbePacketVm.c)
 *     MiSplitReducedCommitClonePage @ 0x1404F6C24 (MiSplitReducedCommitClonePage.c)
 * Callees:
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140212BC0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1402FB704 (MiLockWorkingSetSharedAtDpc.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FD480 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall MiLockProbePacketWorkingSet(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  unsigned int v4; // esi
  _DWORD *v5; // rdi
  unsigned __int8 v6; // bp
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  _DWORD *MmInternal; // rcx
  unsigned __int8 CurrentIrql; // di
  __int64 v11; // rax

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
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    }
    else
    {
      if ( (*(_DWORD *)(v2 + 184) & 0xF) == 1 )
        v3 = &unk_140E38500;
      else
        v3 = (_QWORD *)(v2 + 192);
      v4 = (KeGetPcr()->Prcb.Number >> 1) & 3;
      v5 = (_DWORD *)(*v3 + ((unsigned __int64)v4 << 6));
      v6 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v6);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        _m_prefetchw(v5);
        v7 = *v5 & 0x7FFFFFFF;
        while ( 1 )
        {
          v8 = v7;
          v7 = _InterlockedCompareExchange(v5, v7 + 1, v7);
          if ( v8 == v7 )
            break;
          if ( v7 < 0 )
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
  LOBYTE(v11) = *(_DWORD *)(a1 + 72) & 0xF;
  if ( (_BYTE)v11 == 1 )
  {
    v11 = *(_QWORD *)(a1 + 88);
    if ( *(_QWORD *)(v11 + 640) )
      *(_DWORD *)(a1 + 72) |= 0x10u;
  }
  return v11;
}
