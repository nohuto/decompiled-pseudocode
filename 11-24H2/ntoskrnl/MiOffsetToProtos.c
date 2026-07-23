/*
 * XREFs of MiOffsetToProtos @ 0x1402C28D0
 * Callers:
 *     MiRemoveMappedPtes @ 0x1402915D0 (MiRemoveMappedPtes.c)
 *     MiCompleteProtoPteFault @ 0x14034D360 (MiCompleteProtoPteFault.c)
 *     MmMapViewInSystemCache @ 0x140356F24 (MmMapViewInSystemCache.c)
 *     MiAddMappedPtes @ 0x140391F90 (MiAddMappedPtes.c)
 *     MiInsertInSystemSpace @ 0x140393BFC (MiInsertInSystemSpace.c)
 *     MiReferenceDataSubsections @ 0x1403953D8 (MiReferenceDataSubsections.c)
 *     MiSetSystemCodeProtection @ 0x1404289BC (MiSetSystemCodeProtection.c)
 *     MiSystemImageHasPrivateFixups @ 0x140441660 (MiSystemImageHasPrivateFixups.c)
 *     MiDereferenceDataSubsections @ 0x14068CD90 (MiDereferenceDataSubsections.c)
 *     MiPfPrepareReadList @ 0x14093919C (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140939D28 (MiPfPrepareSequentialReadList.c)
 *     MiLogRelocationRva @ 0x14093E524 (MiLogRelocationRva.c)
 *     MiScanRelocationPage @ 0x140976FE0 (MiScanRelocationPage.c)
 *     MiRelocateImage @ 0x140AEA57C (MiRelocateImage.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiGetControlAreaPtes @ 0x1402C2B60 (MiGetControlAreaPtes.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiLocatePagefileSubsection @ 0x1403D2A80 (MiLocatePagefileSubsection.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiOffsetToProtos(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 ControlAreaPtes; // rax
  unsigned __int64 v7; // rcx
  KIRQL v8; // al
  _QWORD *v9; // rbx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  _QWORD *v15; // r10
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r9
  unsigned __int64 i; // rax
  char v20[32]; // [rsp+20h] [rbp-B8h] BYREF
  unsigned int v21; // [rsp+40h] [rbp-98h]
  unsigned int v22; // [rsp+44h] [rbp-94h]
  __int64 retaddr; // [rsp+D8h] [rbp+0h]

  *a3 = a2 >> 12;
  ControlAreaPtes = MiGetControlAreaPtes();
  v7 = *a3;
  if ( *a3 >= ControlAreaPtes )
    return 0LL;
  if ( !*(_QWORD *)(a1 + 64) )
    return MiLocatePagefileSubsection(a1 + 128, a3);
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
  {
    v9 = (_QWORD *)(a1 + 128);
    for ( i = *(unsigned int *)(a1 + 172); v7 >= i; i = *((unsigned int *)v9 + 11) )
    {
      v7 -= i;
      *a3 = v7;
      v9 = (_QWORD *)v9[2];
    }
  }
  else
  {
    memset_0(v20, 0, 0x98uLL);
    if ( a2 >= 0x40000000000000LL )
    {
      v9 = 0LL;
    }
    else
    {
      v8 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 72));
      v9 = *(_QWORD **)(a1 + 296);
      v10 = a2 >> 12;
      v11 = v8;
      v12 = *((unsigned int *)v9 + 9) | ((v9[4] & 0xFFC0) << 26);
      v13 = v12 + *((unsigned int *)v9 + 10);
      if ( v10 < v12 )
        goto LABEL_20;
      if ( *((_DWORD *)v9 + 8) < 0x100000u )
        --v13;
      if ( v10 > v13 )
      {
LABEL_20:
        v15 = *(_QWORD **)(a1 + 280);
        v22 = v10;
        v21 = (WORD2(v10) << 6) ^ (v21 ^ (WORD2(v10) << 6)) & 0xFFFF003F;
        if ( !v15 )
          goto LABEL_33;
        do
        {
          v16 = *((unsigned int *)v15 - 5) | ((unsigned __int64)(*(_DWORD *)(v15 - 3) & 0xFFC0) << 26);
          v17 = v16 + *((unsigned int *)v15 - 4);
          v18 = v22 | ((unsigned __int64)((unsigned __int16)v21 & 0xFFC0) << 26);
          if ( *((_DWORD *)v15 - 6) < 0x100000u )
            --v17;
          if ( v18 > v17 )
          {
            v15 = (_QWORD *)v15[1];
          }
          else
          {
            if ( v18 >= v16 )
              break;
            v15 = (_QWORD *)*v15;
          }
        }
        while ( v15 );
        if ( v15 )
        {
          v9 = v15 - 7;
          *(_QWORD *)(a1 + 296) = v15 - 7;
        }
        else
        {
LABEL_33:
          v9 = 0LL;
        }
      }
      if ( (_BYTE)v11 == 17 )
      {
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      }
      else
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        {
          _InterlockedAnd((volatile signed __int32 *)(a1 + 72), 0xBFFFFFFF);
          _InterlockedDecrement((volatile signed __int32 *)(a1 + 72));
        }
        else
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented((volatile signed __int32 *)(a1 + 72), retaddr);
        }
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v11);
        __writecr8(v11);
      }
    }
    *a3 -= *((unsigned int *)v9 + 9) | ((v9[4] & 0xFFC0) << 26);
  }
  return (__int64)v9;
}
