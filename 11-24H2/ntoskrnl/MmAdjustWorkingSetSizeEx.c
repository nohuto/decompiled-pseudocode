/*
 * XREFs of MmAdjustWorkingSetSizeEx @ 0x14046C954
 * Callers:
 *     ?KiUpdateProcessConcurrencyCounts@@YAXXZ @ 0x1403396B0 (-KiUpdateProcessConcurrencyCounts@@YAXXZ.c)
 *     CmSiAcquireProcessLockedPagesCharge @ 0x14046C798 (CmSiAcquireProcessLockedPagesCharge.c)
 *     MmAdjustWorkingSetSize @ 0x14046C870 (MmAdjustWorkingSetSize.c)
 *     CmSiReleaseProcessLockedPagesCharge @ 0x14046C89C (CmSiReleaseProcessLockedPagesCharge.c)
 *     KeSetExpectedConcurrencyCountProcess @ 0x1405BDC84 (KeSetExpectedConcurrencyCountProcess.c)
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x14060C444 (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x14060C70C (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     CmSiSetProcessWorkingSetMaximum @ 0x140669CCC (CmSiSetProcessWorkingSetMaximum.c)
 *     PspSetQuotaLimits @ 0x140999A58 (PspSetQuotaLimits.c)
 *     NtSetSystemInformation @ 0x140AE2BE0 (NtSetSystemInformation.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x140243400 (MiUnlockWorkingSetExclusive.c)
 *     MiLockWorkingSetCoreExclusive @ 0x140296038 (MiLockWorkingSetCoreExclusive.c)
 *     MiUnlockWorkingSetCoreExclusive @ 0x140296808 (MiUnlockWorkingSetCoreExclusive.c)
 *     MiLockWorkingSetExclusive @ 0x1403367E0 (MiLockWorkingSetExclusive.c)
 *     MiReturnResident @ 0x140338A10 (MiReturnResident.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiChargeResident @ 0x14033DD30 (MiChargeResident.c)
 *     MiTrimWorkingSet @ 0x140390208 (MiTrimWorkingSet.c)
 *     MiMapWorkingSetTypeToVm @ 0x14046A564 (MiMapWorkingSetTypeToVm.c)
 *     MiCheckWsLimits @ 0x14046CDC8 (MiCheckWsLimits.c)
 *     PsReturnProcessQuota @ 0x14046CF18 (PsReturnProcessQuota.c)
 *     PsChargeProcessQuota @ 0x14046CF4C (PsChargeProcessQuota.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MmAdjustWorkingSetSizeEx(
        unsigned __int64 a1,
        unsigned __int64 a2,
        int a3,
        char a4,
        int a5,
        _BYTE *a6)
{
  unsigned int v6; // ebx
  _KPROCESS *Process; // r13
  __int64 p_Blink; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r14
  __int64 v17; // rdx
  int v18; // esi
  struct _KPRCB *v19; // r9
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // r14
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  int v28; // r14d
  int v29; // eax
  char v30; // al
  unsigned __int64 v31; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v32; // [rsp+38h] [rbp-C8h] BYREF
  ULONG *v33; // [rsp+40h] [rbp-C0h]
  __int64 v34; // [rsp+48h] [rbp-B8h]
  __int128 v35; // [rsp+50h] [rbp-B0h] BYREF
  int v36; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int8 v37; // [rsp+69h] [rbp-97h]
  __int64 v38; // [rsp+80h] [rbp-80h]
  __int64 v39; // [rsp+88h] [rbp-78h]
  __int64 v40; // [rsp+90h] [rbp-70h]
  __int64 (__fastcall *v41)(__int64, ULONG_PTR, __int64); // [rsp+108h] [rbp+8h]
  __int64 (__fastcall *v42)(__int64); // [rsp+110h] [rbp+10h]
  __int128 *v43; // [rsp+118h] [rbp+18h]
  unsigned __int8 v44; // [rsp+170h] [rbp+70h]
  __int16 v46; // [rsp+188h] [rbp+88h]

  v6 = 0;
  Process = 0LL;
  *a6 = 0;
  if ( a3 )
  {
    if ( (unsigned int)(a3 - 1) > 3 )
      return 3221225713LL;
    if ( a3 == 1 )
    {
      v27 = *((_QWORD *)qword_140E300C8 + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
      p_Blink = (v27 + 18816) & -(__int64)(*(_BYTE *)(v27 + 18524) != 0);
    }
    else
    {
      p_Blink = (__int64)MiMapWorkingSetTypeToVm(a3);
    }
  }
  else
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    p_Blink = (__int64)&Process[2].ReadyListHead.Blink;
  }
  if ( !p_Blink )
    return 3221225713LL;
  if ( a1 != -1LL || a2 != -1LL )
  {
    v33 = (ULONG *)*((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(p_Blink + 174));
    v44 = MiLockWorkingSetExclusive(p_Blink);
    MiLockWorkingSetCoreExclusive(p_Blink, v12, v13, v14);
    if ( !a3 && (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
    {
      v18 = -1073741558;
      goto LABEL_16;
    }
    if ( a1 )
      v15 = a1 >> 12;
    else
      v15 = *(_QWORD *)(p_Blink + 112);
    v32 = v15;
    if ( a2 )
      v16 = a2 >> 12;
    else
      v16 = *(_QWORD *)(p_Blink + 120);
    v31 = v16;
    v18 = MiCheckWsLimits(p_Blink, (unsigned int)&v32, (unsigned int)&v31, a5, 0);
    if ( (v18 & 0xC0000000) == 0xC0000000 )
      goto LABEL_16;
    v20 = *(_QWORD *)(p_Blink + 112);
    v21 = *(_QWORD *)(p_Blink + 16);
    v34 = v21;
    if ( v32 > v20 )
    {
      v22 = v32 - v20;
      *a6 = 1;
      if ( !a4 )
      {
        v18 = -1073741727;
        goto LABEL_16;
      }
      if ( !a3 )
      {
        v18 = PsChargeProcessQuota(Process, v17, v22);
        if ( v18 < 0 )
          goto LABEL_16;
      }
      if ( !(unsigned int)MiChargeResident(v33, v22, 512LL, v19) )
      {
        if ( !a3 )
          PsReturnProcessQuota(Process, v17, v22);
        v18 = -1073741670;
        goto LABEL_16;
      }
      v21 = v34;
    }
    else
    {
      v22 = v20 - v32;
      if ( v32 < *(_QWORD *)(v21 + 32) )
      {
        v18 = -1073741748;
        goto LABEL_16;
      }
    }
    if ( v31 < *(_QWORD *)(p_Blink + 128) )
    {
      if ( *(_QWORD *)(v21 + 32) + 6LL >= v31 )
      {
        v18 = -1073741748;
        if ( *a6 )
        {
          if ( !a3 )
            PsReturnProcessQuota(Process, v17, v22);
          MiReturnResident((__int64)v33, v22);
        }
        goto LABEL_16;
      }
      _InterlockedOr((volatile signed __int32 *)(p_Blink + 188), 2u);
    }
    if ( !*a6 && v22 )
    {
      if ( !a3 )
        PsReturnProcessQuota(Process, v17, v22);
      MiReturnResident((__int64)v33, v22);
    }
    *(_QWORD *)(p_Blink + 120) = v31;
    *(_QWORD *)(p_Blink + 112) = v32;
    if ( !a5 )
    {
LABEL_16:
      MiUnlockWorkingSetCoreExclusive(p_Blink);
      MiUnlockWorkingSetExclusive(p_Blink, v44);
      return (unsigned int)v18;
    }
    v28 = 0;
    ExAcquireSpinLockExclusiveAtDpcLevel(&SpinLock);
    v29 = *(_DWORD *)(p_Blink + 184);
    v46 = v29;
    if ( (a5 & 4) != 0 )
    {
      LOBYTE(v29) = v29 | 0x80;
    }
    else
    {
      if ( (a5 & 8) == 0 )
      {
LABEL_45:
        if ( (a5 & 1) != 0 )
        {
          v30 = v29 | 0x40;
        }
        else
        {
          if ( (a5 & 2) == 0 )
          {
            if ( !v28 )
            {
LABEL_48:
              ExReleaseSpinLockExclusiveFromDpcLevel(&SpinLock);
              goto LABEL_16;
            }
LABEL_61:
            *(_WORD *)(p_Blink + 184) = v46;
            goto LABEL_48;
          }
          v30 = v29 & 0xBF;
        }
        LOBYTE(v46) = v30;
        goto LABEL_61;
      }
      LOBYTE(v29) = v29 & 0x7F;
    }
    v28 = 1;
    LOBYTE(v46) = v29;
    goto LABEL_45;
  }
  v35 = 0LL;
  memset_0(&v36, 0, 0xC0uLL);
  v36 = 6;
  v43 = &v35;
  v38 = p_Blink;
  v41 = MiEmptyPte;
  v42 = MiEmptyWorkingSetTail;
  v39 = 0LL;
  v40 = -1LL;
  v37 = MiLockWorkingSetShared(p_Blink, v24, v25, v26);
  if ( (*(_DWORD *)(p_Blink + 184) & 0xF) == 0
    && (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
    v6 = -1073741558;
  }
  else
  {
    MiTrimWorkingSet(p_Blink, 0xFFFFFFFFFFFFFFFFuLL, v37, 0, 64);
  }
  MiUnlockWorkingSetShared(p_Blink, v37);
  return v6;
}
