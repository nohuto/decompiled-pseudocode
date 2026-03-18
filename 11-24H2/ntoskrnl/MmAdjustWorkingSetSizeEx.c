/*
 * XREFs of MmAdjustWorkingSetSizeEx @ 0x1403CD164
 * Callers:
 *     ?KiUpdateProcessConcurrencyCounts@@YAXXZ @ 0x140210350 (-KiUpdateProcessConcurrencyCounts@@YAXXZ.c)
 *     CmSiAcquireProcessLockedPagesCharge @ 0x1403CCFA8 (CmSiAcquireProcessLockedPagesCharge.c)
 *     MmAdjustWorkingSetSize @ 0x1403CD080 (MmAdjustWorkingSetSize.c)
 *     CmSiReleaseProcessLockedPagesCharge @ 0x1403CD0AC (CmSiReleaseProcessLockedPagesCharge.c)
 *     KeSetExpectedConcurrencyCountProcess @ 0x1405C06B0 (KeSetExpectedConcurrencyCountProcess.c)
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x14060DE84 (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x14060E14C (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     CmSiSetProcessWorkingSetMaximum @ 0x140668AF4 (CmSiSetProcessWorkingSetMaximum.c)
 *     PspSetQuotaLimits @ 0x1409AFD58 (PspSetQuotaLimits.c)
 *     NtSetSystemInformation @ 0x140AE1300 (NtSetSystemInformation.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14020D480 (MiLockWorkingSetExclusive.c)
 *     MiReturnResident @ 0x14020F6B0 (MiReturnResident.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x140218550 (MiUnlockWorkingSetExclusive.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiChargeResident @ 0x1402F5FA0 (MiChargeResident.c)
 *     MiLockWorkingSetCoreExclusive @ 0x140379CE4 (MiLockWorkingSetCoreExclusive.c)
 *     MiUnlockWorkingSetCoreExclusive @ 0x140379DAC (MiUnlockWorkingSetCoreExclusive.c)
 *     PsChargeProcessQuota @ 0x1403CCF70 (PsChargeProcessQuota.c)
 *     MiCheckWsLimits @ 0x1403CD5D8 (MiCheckWsLimits.c)
 *     PsReturnProcessQuota @ 0x1403CD728 (PsReturnProcessQuota.c)
 *     MiTrimWorkingSet @ 0x1403CF15C (MiTrimWorkingSet.c)
 *     MiMapWorkingSetTypeToVm @ 0x14047013C (MiMapWorkingSetTypeToVm.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MmAdjustWorkingSetSizeEx(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        char a4,
        int a5,
        _BYTE *a6)
{
  unsigned int v6; // ebx
  _KPROCESS *Process; // r13
  __int64 p_Blink; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r14
  __int64 v16; // rdx
  int v17; // esi
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // r14
  int v22; // r8d
  __int64 v23; // rcx
  int v24; // r14d
  int v25; // eax
  char v26; // al
  unsigned __int64 v27; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v28; // [rsp+38h] [rbp-C8h] BYREF
  ULONG *v29; // [rsp+40h] [rbp-C0h]
  __int64 v30; // [rsp+48h] [rbp-B8h]
  __int128 v31; // [rsp+50h] [rbp-B0h] BYREF
  int v32; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int8 v33; // [rsp+69h] [rbp-97h]
  __int64 v34; // [rsp+80h] [rbp-80h]
  __int64 v35; // [rsp+88h] [rbp-78h]
  __int64 v36; // [rsp+90h] [rbp-70h]
  __int64 (__fastcall *v37)(__int64, unsigned __int64, int); // [rsp+108h] [rbp+8h]
  __int64 (__fastcall *v38)(); // [rsp+110h] [rbp+10h]
  __int128 *v39; // [rsp+118h] [rbp+18h]
  unsigned __int8 v40; // [rsp+170h] [rbp+70h]
  __int16 v42; // [rsp+188h] [rbp+88h]

  v6 = 0;
  Process = 0LL;
  *a6 = 0;
  if ( a3 )
  {
    if ( a3 - 1 > 3 )
      return 3221225713LL;
    if ( a3 == 1 )
    {
      v23 = *((_QWORD *)qword_140E2FF88 + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
      p_Blink = (v23 + 18816) & -(__int64)(*(_BYTE *)(v23 + 18524) != 0);
    }
    else
    {
      p_Blink = MiMapWorkingSetTypeToVm(a3);
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
    v29 = (ULONG *)*((_QWORD *)qword_140E2FF88 + *(unsigned __int16 *)(p_Blink + 174));
    v40 = MiLockWorkingSetExclusive(p_Blink);
    MiLockWorkingSetCoreExclusive(p_Blink, v12, v13);
    if ( !a3 && (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
    {
      v17 = -1073741558;
      goto LABEL_16;
    }
    if ( a1 )
      v14 = a1 >> 12;
    else
      v14 = *(_QWORD *)(p_Blink + 112);
    v28 = v14;
    if ( a2 )
      v15 = a2 >> 12;
    else
      v15 = *(_QWORD *)(p_Blink + 120);
    v27 = v15;
    v17 = MiCheckWsLimits(p_Blink, (unsigned int)&v28, (unsigned int)&v27, a5, 0);
    if ( (v17 & 0xC0000000) == 0xC0000000 )
      goto LABEL_16;
    v18 = *(_QWORD *)(p_Blink + 112);
    v19 = *(_QWORD *)(p_Blink + 16);
    v30 = v19;
    if ( v28 > v18 )
    {
      v20 = v28 - v18;
      *a6 = 1;
      if ( !a4 )
      {
        v17 = -1073741727;
        goto LABEL_16;
      }
      if ( !a3 )
      {
        v17 = PsChargeProcessQuota((__int64)Process, v16, v20);
        if ( v17 < 0 )
          goto LABEL_16;
      }
      if ( !(unsigned int)MiChargeResident(v29, v20, 512LL) )
      {
        if ( !a3 )
          PsReturnProcessQuota(Process, v16, v20);
        v17 = -1073741670;
        goto LABEL_16;
      }
      v19 = v30;
    }
    else
    {
      v20 = v18 - v28;
      if ( v28 < *(_QWORD *)(v19 + 32) )
      {
        v17 = -1073741748;
        goto LABEL_16;
      }
    }
    if ( v27 < *(_QWORD *)(p_Blink + 128) )
    {
      if ( *(_QWORD *)(v19 + 32) + 6LL >= v27 )
      {
        v17 = -1073741748;
        if ( *a6 )
        {
          if ( !a3 )
            PsReturnProcessQuota(Process, v16, v20);
          MiReturnResident((__int64)v29, v20);
        }
        goto LABEL_16;
      }
      _InterlockedOr((volatile signed __int32 *)(p_Blink + 188), 2u);
    }
    if ( !*a6 && v20 )
    {
      if ( !a3 )
        PsReturnProcessQuota(Process, v16, v20);
      MiReturnResident((__int64)v29, v20);
    }
    *(_QWORD *)(p_Blink + 120) = v27;
    *(_QWORD *)(p_Blink + 112) = v28;
    if ( !a5 )
    {
LABEL_16:
      MiUnlockWorkingSetCoreExclusive(p_Blink);
      MiUnlockWorkingSetExclusive(p_Blink, v40);
      return (unsigned int)v17;
    }
    v24 = 0;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E373C0);
    v25 = *(_DWORD *)(p_Blink + 184);
    v42 = v25;
    if ( (a5 & 4) != 0 )
    {
      LOBYTE(v25) = v25 | 0x80;
    }
    else
    {
      if ( (a5 & 8) == 0 )
      {
LABEL_45:
        if ( (a5 & 1) != 0 )
        {
          v26 = v25 | 0x40;
        }
        else
        {
          if ( (a5 & 2) == 0 )
          {
            if ( !v24 )
            {
LABEL_48:
              ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E373C0);
              goto LABEL_16;
            }
LABEL_61:
            *(_WORD *)(p_Blink + 184) = v42;
            goto LABEL_48;
          }
          v26 = v25 & 0xBF;
        }
        LOBYTE(v42) = v26;
        goto LABEL_61;
      }
      LOBYTE(v25) = v25 & 0x7F;
    }
    v24 = 1;
    LOBYTE(v42) = v25;
    goto LABEL_45;
  }
  v31 = 0LL;
  memset_0(&v32, 0, 0xC0uLL);
  v32 = 6;
  v39 = &v31;
  v34 = p_Blink;
  v37 = MiEmptyPte;
  v38 = MiEmptyWorkingSetTail;
  v35 = 0LL;
  v36 = -1LL;
  v33 = MiLockWorkingSetShared(p_Blink);
  if ( (*(_DWORD *)(p_Blink + 184) & 0xF) == 0
    && (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
    v6 = -1073741558;
  }
  else
  {
    LOBYTE(v22) = v33;
    MiTrimWorkingSet(p_Blink, -1, v22, 0, 64);
  }
  MiUnlockWorkingSetShared(p_Blink, v33);
  return v6;
}
