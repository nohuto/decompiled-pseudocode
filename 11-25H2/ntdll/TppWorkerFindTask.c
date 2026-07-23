/*
 * XREFs of TppWorkerFindTask @ 0x18007D4E0
 * Callers:
 *     TppWorkerThread @ 0x18007DCB0 (TppWorkerThread.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x18007F694 (TppAdjustRunningThreadGoalWithLock.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18009E150 (RtlpAcquireSRWLockExclusiveContended.c)
 *     TppQueueRemoveHead @ 0x18009ED70 (TppQueueRemoveHead.c)
 *     TppAreNodeWorkersSteadyState @ 0x1800F0F60 (TppAreNodeWorkersSteadyState.c)
 *     TppETWWorkerNodeSwitch @ 0x1800F935C (TppETWWorkerNodeSwitch.c)
 *     NtSetInformationThread @ 0x1801633C0 (NtSetInformationThread.c)
 *     ZwAlertThreadByThreadIdEx @ 0x180164050 (ZwAlertThreadByThreadIdEx.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall TppWorkerFindTask(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r13
  unsigned __int64 Number; // rsi
  unsigned int v6; // r12d
  int Group; // edi
  int v8; // eax
  int v9; // r14d
  unsigned int i; // edx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  int v14; // r15d
  __int16 v15; // di
  int v16; // eax
  unsigned int v17; // r15d
  __int64 v18; // r13
  _QWORD *k; // rdx
  volatile signed __int64 *v20; // rbx
  void *v21; // rcx
  char *SchedulerSharedDataSlot; // r8
  unsigned int m; // r9d
  char *v24; // rdx
  __int64 v25; // rdi
  volatile signed __int64 v26; // rax
  volatile signed __int64 *v27; // rsi
  signed __int64 v28; // rax
  char *v29; // rdx
  __int64 v30; // rsi
  unsigned int n; // ecx
  char *v32; // r15
  __int64 v33; // rbx
  char v34; // si
  int v35; // edi
  int v36; // eax
  unsigned int v37; // eax
  __int64 v39; // rdx
  signed __int64 v40; // rcx
  signed __int64 v41; // rdx
  signed __int64 v42; // rtt
  volatile signed __int64 *v43; // r13
  unsigned __int64 v44; // r9
  _QWORD *v45; // r8
  __int64 v46; // rcx
  __int64 v47; // rax
  bool v48; // zf
  signed __int64 v49; // rax
  __int64 v50; // r11
  __int64 v51; // rcx
  __int64 v52; // r15
  __int64 v53; // rax
  __int64 v54; // r11
  unsigned __int16 ii; // r9
  __int64 v56; // rax
  signed __int64 v57; // rax
  unsigned __int16 j; // dx
  __int64 v59; // rbx
  _QWORD *v60; // rsi
  _QWORD *v61; // rax
  __int16 v62; // [rsp+30h] [rbp-A8h]
  int v63; // [rsp+34h] [rbp-A4h] BYREF
  int v64; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v65; // [rsp+40h] [rbp-98h]
  _QWORD *v66; // [rsp+48h] [rbp-90h]
  __int64 v67; // [rsp+50h] [rbp-88h]
  _QWORD *v68; // [rsp+58h] [rbp-80h]
  _QWORD v69[2]; // [rsp+60h] [rbp-78h] BYREF
  __int128 ThreadInformation; // [rsp+70h] [rbp-68h] BYREF
  __int128 v71; // [rsp+80h] [rbp-58h] BYREF

  v3 = a2;
  v68 = a3;
  v67 = a2;
  Number = NtCurrentTeb()->CurrentIdealProcessor.Number;
  v6 = TppNumberNodes;
  Group = NtCurrentTeb()->CurrentIdealProcessor.Group;
  if ( !a1 || (v8 = *(_DWORD *)(a1 + 440)) == 0 )
    v8 = MEMORY[0x7FFE03C0];
  if ( *(_DWORD *)(a1 + 424) != v8 )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
    TppAdjustRunningThreadGoalWithLock(a1);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
  }
  v9 = 0;
  for ( i = 0; i < TppNumberNodes; ++i )
  {
    v11 = *(_QWORD *)(a1 + 48) + 16LL * (Group + TppMaximumGroups * i);
    if ( *(_WORD *)(v11 + 8) == (_WORD)Group )
    {
      v12 = *(_QWORD *)v11;
      if ( _bittest64(&v12, Number) )
      {
        v6 = i;
        break;
      }
    }
  }
  v13 = *(unsigned int *)(v3 + 352);
  v14 = *(unsigned __int16 *)(v3 + 362);
  v62 = -1;
  v15 = -1;
  v16 = *(_DWORD *)(a1 + 428);
  v63 = 0;
  ThreadInformation = 0LL;
  if ( v6 == (_DWORD)v13 )
  {
    if ( v16 == -1 && !*(_BYTE *)(v3 + 360) )
    {
      *(_BYTE *)(v3 + 360) = 1;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v6));
    }
  }
  else
  {
    if ( v16 == -1 )
    {
      if ( *(_BYTE *)(v3 + 360) )
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v13));
      else
        *(_BYTE *)(v3 + 360) = 1;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v6));
    }
    v50 = *(_QWORD *)(a1 + 48);
    if ( ((1LL << Number) & *(_QWORD *)(v50 + 16LL * (TppMaximumGroups * v6 + v14))) != 0 )
    {
      v15 = v14;
    }
    else
    {
      for ( j = 0; j < (unsigned int)TppMaximumGroups; ++j )
      {
        if ( j != (_WORD)v14 && ((1LL << Number) & *(_QWORD *)(v50 + 16LL * (TppMaximumGroups * v6 + j))) != 0 )
        {
          v15 = j;
          break;
        }
      }
    }
    *(_DWORD *)(v3 + 352) = v6;
    *(_WORD *)(v3 + 362) = v15;
    if ( RtlGetCurrentServiceSessionId() )
      v51 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v51 = 2147353478LL;
    if ( *(_BYTE *)v51 )
      TppETWWorkerNodeSwitch(a1, v13, v6, (unsigned __int16)v14, v15);
    NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadGroupInformation, &ThreadInformation, 0x10u);
    LOWORD(v63) = v15;
    BYTE2(v63) = Number;
    NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadIdealProcessorEx, &v63, 4u);
  }
  v17 = v6;
  if ( *(_DWORD *)(a1 + 428) == -1 && *(_DWORD *)(v3 + 356) >= 0x10u && !(unsigned int)TppAreNodeWorkersSteadyState(a1) )
  {
    do
    {
LABEL_44:
      if ( *(_BYTE *)(a1 + 377) )
        return 0LL;
      v59 = 0LL;
      v60 = (_QWORD *)(a1 + 16);
LABEL_110:
      ;
    }
    while ( v59 > 2 );
    while ( 1 )
    {
      v25 = TppQueueRemoveHead(*v60 + 24LL * v17);
      if ( v25 )
        break;
      if ( ++v17 >= TppNumberNodes )
        v17 = 0;
      if ( v17 == v6 )
      {
        ++v59;
        ++v60;
        goto LABEL_110;
      }
    }
  }
  else
  {
    v18 = 0LL;
    v65 = 0LL;
    for ( k = (_QWORD *)(a1 + 16); ; k = v66 + 1 )
    {
      v66 = k;
      if ( v18 > 2 )
      {
        v3 = v67;
        v17 = v6;
        goto LABEL_44;
      }
      v20 = (volatile signed __int64 *)(*k + 24LL * v6);
      v21 = (void *)(v20 + 2);
      SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( SchedulerSharedDataSlot )
      {
        for ( m = 0; m < 8; ++m )
        {
          v24 = &SchedulerSharedDataSlot[8 * m];
          if ( !*(_QWORD *)v24 )
          {
            if ( v24 )
              *(_QWORD *)v24 = v21;
            break;
          }
        }
      }
      if ( _interlockedbittestandset64((volatile signed __int32 *)v21, 0LL) )
        RtlpAcquireSRWLockExclusiveContended(v21);
      v25 = *v20;
      if ( *(volatile signed __int64 **)(*v20 + 8) != v20
        || (v26 = *(_QWORD *)v25, *(_QWORD *)(*(_QWORD *)v25 + 8LL) != v25) )
      {
        __fastfail(3u);
      }
      *v20 = v26;
      v27 = v20 + 2;
      *(_QWORD *)(v26 + 8) = v20;
      v28 = _InterlockedCompareExchange64(v20 + 2, 0LL, 1LL);
      if ( v28 != 1 )
      {
        do
        {
          v39 = 3LL;
          v40 = v28 & 6;
          if ( v40 != 2 )
            v39 = -1LL;
          v41 = v28 + v39;
          v42 = v28;
          v28 = _InterlockedCompareExchange64(v27, v41, v28);
        }
        while ( v42 != v28 );
        if ( v40 == 2 )
        {
          v43 = v20 + 2;
          while ( 1 )
          {
            while ( (v41 & 1) != 0 )
            {
              v57 = _InterlockedCompareExchange64(v27, v41 - 4, v41);
              v48 = v41 == v57;
              v41 = v57;
              if ( v48 )
              {
                v18 = v65;
                goto LABEL_27;
              }
            }
            v44 = v41 & 0xFFFFFFFFFFFFFFF0uLL;
            v45 = (_QWORD *)(v41 & 0xFFFFFFFFFFFFFFF0uLL);
            v46 = *(_QWORD *)((v41 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
            if ( !v46 )
            {
              do
              {
                v61 = v45;
                v45 = (_QWORD *)*v45;
                v45[2] = v61;
                v46 = v45[1];
              }
              while ( !v46 );
              if ( v45 != (_QWORD *)v44 )
                *(_QWORD *)((v41 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v46;
            }
            if ( (*(_DWORD *)(v46 + 36) & 1) != 0 )
            {
              v47 = *(_QWORD *)(v46 + 16);
              if ( v47 )
                break;
            }
            v43 = 0LL;
            v49 = _InterlockedCompareExchange64(v27, 0LL, v41);
            v48 = v41 == v49;
            v41 = v49;
            if ( v48 )
              goto LABEL_70;
          }
          *(_QWORD *)((v41 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v47;
          *(_QWORD *)(v46 + 16) = 0LL;
          _InterlockedAnd64(v27, 0xFFFFFFFFFFFFFFFBuLL);
          do
          {
LABEL_70:
            v52 = *(_QWORD *)(v46 + 16);
            v53 = *(_QWORD *)(v46 + 24);
            _interlockedbittestandset((volatile signed __int32 *)(v46 + 36), 2u);
            if ( !_interlockedbittestandreset((volatile signed __int32 *)(v46 + 36), 1u) )
              ZwAlertThreadByThreadIdEx(v53, v43, v45, v44);
            v46 = v52;
          }
          while ( v52 );
          v18 = v65;
        }
      }
LABEL_27:
      v29 = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( v29 )
      {
        v30 = (unsigned __int64)v27 & 0x7FFFFFFFFFFFFFFCLL;
        for ( n = 0; n < 8; ++n )
        {
          v32 = &v29[8 * n];
          if ( (*(_QWORD *)v32 & 0x7FFFFFFFFFFFFFFCLL) == v30 )
          {
            if ( v32 )
            {
              *v32 |= 2u;
              if ( v32[7] < 0 )
              {
                v69[1] = 0LL;
                v69[0] = (v32 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
                NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadUpdateLockOwnership, v69, 0x10u);
              }
              *(_QWORD *)v32 = 0LL;
            }
            break;
          }
        }
      }
      if ( (volatile signed __int64 *)v25 != v20 )
        break;
      v65 = ++v18;
    }
    v3 = v67;
    v17 = v6;
  }
  *v68 = v25 - 16;
  v33 = *(unsigned int *)(v3 + 352);
  v34 = *(_BYTE *)(v25 - 16 + 12);
  v35 = *(unsigned __int16 *)(v3 + 362);
  v36 = *(_DWORD *)(a1 + 428);
  v64 = 0;
  v71 = 0LL;
  if ( v17 == (_DWORD)v33 )
  {
    if ( v36 == -1 && !*(_BYTE *)(v3 + 360) )
    {
      *(_BYTE *)(v3 + 360) = 1;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v17));
    }
  }
  else
  {
    if ( v36 == -1 )
    {
      if ( *(_BYTE *)(v3 + 360) )
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v33));
      else
        *(_BYTE *)(v3 + 360) = 1;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v17));
    }
    v54 = *(_QWORD *)(a1 + 48);
    if ( ((1LL << v34) & *(_QWORD *)(v54 + 16LL * (TppMaximumGroups * v17 + v35))) != 0 )
    {
      ii = v35;
LABEL_80:
      v62 = ii;
    }
    else
    {
      for ( ii = 0; ii < (unsigned int)TppMaximumGroups; ++ii )
      {
        if ( ii != (_WORD)v35 && ((1LL << v34) & *(_QWORD *)(v54 + 16LL * (TppMaximumGroups * v17 + ii))) != 0 )
          goto LABEL_80;
      }
      ii = -1;
    }
    *(_DWORD *)(v3 + 352) = v17;
    *(_WORD *)(v3 + 362) = ii;
    if ( RtlGetCurrentServiceSessionId() )
      v56 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v56 = 2147353478LL;
    if ( *(_BYTE *)v56 )
      TppETWWorkerNodeSwitch(a1, v33, v17, (unsigned __int16)v35, v62);
    NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadGroupInformation, &v71, 0x10u);
    LOWORD(v64) = v62;
    BYTE2(v64) = v34;
    NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadIdealProcessorEx, &v64, 4u);
  }
  if ( v17 == v6 )
  {
    v37 = *(_DWORD *)(v3 + 356);
    if ( v37 < 0x10 )
      v9 = v37 + 1;
    else
      v9 = 16;
  }
  *(_DWORD *)(v3 + 356) = v9;
  return 1LL;
}
