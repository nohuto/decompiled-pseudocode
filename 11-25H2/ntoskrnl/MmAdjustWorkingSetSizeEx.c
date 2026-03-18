/*
 * XREFs of MmAdjustWorkingSetSizeEx @ 0x1403C5254
 * Callers:
 *     ?KiUpdateProcessConcurrencyCounts@@YAXXZ @ 0x1403AE380 (-KiUpdateProcessConcurrencyCounts@@YAXXZ.c)
 *     CmSiAcquireProcessLockedPagesCharge @ 0x1403C50A0 (CmSiAcquireProcessLockedPagesCharge.c)
 *     MmAdjustWorkingSetSize @ 0x1403C5170 (MmAdjustWorkingSetSize.c)
 *     CmSiReleaseProcessLockedPagesCharge @ 0x1403C519C (CmSiReleaseProcessLockedPagesCharge.c)
 *     KeSetExpectedConcurrencyCountProcess @ 0x1405BC648 (KeSetExpectedConcurrencyCountProcess.c)
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x140601E54 (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x14060211C (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     CmSiSetProcessWorkingSetMaximum @ 0x14065D024 (CmSiSetProcessWorkingSetMaximum.c)
 *     NtSetSystemInformation @ 0x1408E97E0 (NtSetSystemInformation.c)
 *     PspSetQuotaLimits @ 0x1409C2688 (PspSetQuotaLimits.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x140211FE0 (MiLockWorkingSetExclusive.c)
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiChargeResident @ 0x14022CAE0 (MiChargeResident.c)
 *     MiReturnResident @ 0x14022F8D0 (MiReturnResident.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402B7680 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockWorkingSetCoreExclusive @ 0x14037F48C (MiUnlockWorkingSetCoreExclusive.c)
 *     MiMapWorkingSetTypeToVm @ 0x1403C248C (MiMapWorkingSetTypeToVm.c)
 *     MiLockWorkingSetCoreExclusive @ 0x1403C3B04 (MiLockWorkingSetCoreExclusive.c)
 *     MiTrimWorkingSet @ 0x1403C4734 (MiTrimWorkingSet.c)
 *     MiCheckWsLimits @ 0x1403C56C4 (MiCheckWsLimits.c)
 *     PsChargeProcessQuota @ 0x1403C5C54 (PsChargeProcessQuota.c)
 *     PsReturnProcessQuota @ 0x1403C5C8C (PsReturnProcessQuota.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r14
  __int64 v14; // rdx
  int v15; // esi
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // r14
  __int64 v20; // rcx
  int v21; // r14d
  int v22; // eax
  char v23; // al
  unsigned __int64 v24; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-C8h] BYREF
  ULONG *v26; // [rsp+40h] [rbp-C0h]
  __int64 v27; // [rsp+48h] [rbp-B8h]
  __int128 v28; // [rsp+50h] [rbp-B0h] BYREF
  int v29; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int8 v30; // [rsp+69h] [rbp-97h]
  __int64 v31; // [rsp+80h] [rbp-80h]
  __int64 v32; // [rsp+88h] [rbp-78h]
  __int64 v33; // [rsp+90h] [rbp-70h]
  __int64 (__fastcall *v34)(__int64, ULONG_PTR, __int64); // [rsp+108h] [rbp+8h]
  __int64 (__fastcall *v35)(); // [rsp+110h] [rbp+10h]
  __int128 *v36; // [rsp+118h] [rbp+18h]
  unsigned __int8 v37; // [rsp+170h] [rbp+70h]
  __int16 v39; // [rsp+188h] [rbp+88h]

  v6 = 0;
  Process = 0LL;
  *a6 = 0;
  if ( a3 )
  {
    if ( (unsigned int)(a3 - 1) > 3 )
      return 3221225713LL;
    if ( a3 == 1 )
    {
      v20 = *((_QWORD *)qword_140E2FD48 + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
      p_Blink = (v20 + 18816) & -(__int64)(*(_BYTE *)(v20 + 18524) != 0);
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
    v26 = (ULONG *)*((_QWORD *)qword_140E2FD48 + *(unsigned __int16 *)(p_Blink + 174));
    v37 = MiLockWorkingSetExclusive(p_Blink);
    MiLockWorkingSetCoreExclusive(p_Blink);
    if ( !a3 && (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
    {
      v15 = -1073741558;
      goto LABEL_16;
    }
    if ( a1 )
      v12 = a1 >> 12;
    else
      v12 = *(_QWORD *)(p_Blink + 112);
    v25 = v12;
    if ( a2 )
      v13 = a2 >> 12;
    else
      v13 = *(_QWORD *)(p_Blink + 120);
    v24 = v13;
    v15 = MiCheckWsLimits(p_Blink, (unsigned int)&v25, (unsigned int)&v24, a5, 0);
    if ( (v15 & 0xC0000000) == 0xC0000000 )
      goto LABEL_16;
    v16 = *(_QWORD *)(p_Blink + 112);
    v17 = *(_QWORD *)(p_Blink + 16);
    v27 = v17;
    if ( v25 > v16 )
    {
      v18 = v25 - v16;
      *a6 = 1;
      if ( !a4 )
      {
        v15 = -1073741727;
        goto LABEL_16;
      }
      if ( !a3 )
      {
        v15 = PsChargeProcessQuota(Process, v14, v18);
        if ( v15 < 0 )
          goto LABEL_16;
      }
      if ( !(unsigned int)MiChargeResident(v26, v18, 512LL) )
      {
        if ( !a3 )
          PsReturnProcessQuota(Process, v14, v18);
        v15 = -1073741670;
        goto LABEL_16;
      }
      v17 = v27;
    }
    else
    {
      v18 = v16 - v25;
      if ( v25 < *(_QWORD *)(v17 + 32) )
      {
        v15 = -1073741748;
        goto LABEL_16;
      }
    }
    if ( v24 < *(_QWORD *)(p_Blink + 128) )
    {
      if ( *(_QWORD *)(v17 + 32) + 6LL >= v24 )
      {
        v15 = -1073741748;
        if ( *a6 )
        {
          if ( !a3 )
            PsReturnProcessQuota(Process, v14, v18);
          MiReturnResident((__int64)v26, v18);
        }
        goto LABEL_16;
      }
      _InterlockedOr((volatile signed __int32 *)(p_Blink + 188), 2u);
    }
    if ( !*a6 && v18 )
    {
      if ( !a3 )
        PsReturnProcessQuota(Process, v14, v18);
      MiReturnResident((__int64)v26, v18);
    }
    *(_QWORD *)(p_Blink + 120) = v24;
    *(_QWORD *)(p_Blink + 112) = v25;
    if ( !a5 )
    {
LABEL_16:
      MiUnlockWorkingSetCoreExclusive(p_Blink);
      MiUnlockWorkingSetExclusive(p_Blink, v37);
      return (unsigned int)v15;
    }
    v21 = 0;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E37180);
    v22 = *(_DWORD *)(p_Blink + 184);
    v39 = v22;
    if ( (a5 & 4) != 0 )
    {
      LOBYTE(v22) = v22 | 0x80;
    }
    else
    {
      if ( (a5 & 8) == 0 )
      {
LABEL_43:
        if ( (a5 & 1) != 0 )
        {
          v23 = v22 | 0x40;
        }
        else
        {
          if ( (a5 & 2) == 0 )
          {
            if ( !v21 )
            {
LABEL_46:
              ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E37180);
              goto LABEL_16;
            }
LABEL_61:
            *(_WORD *)(p_Blink + 184) = v39;
            goto LABEL_46;
          }
          v23 = v22 & 0xBF;
        }
        LOBYTE(v39) = v23;
        goto LABEL_61;
      }
      LOBYTE(v22) = v22 & 0x7F;
    }
    v21 = 1;
    LOBYTE(v39) = v22;
    goto LABEL_43;
  }
  v28 = 0LL;
  memset_0(&v29, 0, 0xC0uLL);
  v29 = 6;
  v36 = &v28;
  v31 = p_Blink;
  v34 = MiEmptyPte;
  v35 = MiEmptyWorkingSetTail;
  v32 = 0LL;
  v33 = -1LL;
  v30 = MiLockWorkingSetShared(p_Blink);
  if ( (*(_DWORD *)(p_Blink + 184) & 0xF) == 0
    && (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
    v6 = -1073741558;
  }
  else
  {
    MiTrimWorkingSet(p_Blink, 0xFFFFFFFFFFFFFFFFuLL, v30, 0, 64);
  }
  MiUnlockWorkingSetShared(p_Blink, v30);
  return v6;
}
