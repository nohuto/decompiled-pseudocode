/*
 * XREFs of TppWorkerFindTask @ 0x180023100
 * Callers:
 *     TppWorkerThread @ 0x1800238D0 (TppWorkerThread.c)
 * Callees:
 *     TppAdjustRunningThreadGoalWithLock @ 0x1800252B4 (TppAdjustRunningThreadGoalWithLock.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18004A470 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     TppQueueRemoveHead @ 0x1800DEFA0 (TppQueueRemoveHead.c)
 *     TppAreNodeWorkersSteadyState @ 0x1800EF6A8 (TppAreNodeWorkersSteadyState.c)
 *     TppETWWorkerNodeSwitch @ 0x1800F76FC (TppETWWorkerNodeSwitch.c)
 *     NtSetInformationThread @ 0x180161E30 (NtSetInformationThread.c)
 *     ZwAlertThreadByThreadIdEx @ 0x180162AC0 (ZwAlertThreadByThreadIdEx.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall TppWorkerFindTask(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r13
  unsigned __int64 Number; // rsi
  unsigned int v6; // r12d
  int Group; // edi
  int v8; // eax
  int v9; // r14d
  __int64 i; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  int v14; // r15d
  __int16 v15; // di
  int v16; // eax
  unsigned int v17; // r15d
  __int64 v18; // r13
  _QWORD *j; // rdx
  volatile signed __int64 *v20; // rbx
  volatile signed __int32 *v21; // rcx
  char *SchedulerSharedDataSlot; // r8
  unsigned int k; // r9d
  volatile signed __int32 **v24; // rdx
  __int64 v25; // rdi
  volatile signed __int64 v26; // rax
  volatile signed __int64 *v27; // rsi
  signed __int64 v28; // rax
  char *v29; // rdx
  __int64 v30; // rsi
  unsigned int m; // ecx
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
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // r15
  __int64 v56; // rax
  __int64 v57; // r11
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // rcx
  __int64 n; // r9
  __int64 v62; // rax
  signed __int64 v63; // rax
  __int64 v64; // rbx
  _QWORD *v65; // rsi
  _QWORD *v66; // rax
  __int16 v67; // [rsp+30h] [rbp-A8h]
  int v68; // [rsp+34h] [rbp-A4h] BYREF
  int v69; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v70; // [rsp+40h] [rbp-98h]
  _QWORD *v71; // [rsp+48h] [rbp-90h]
  __int64 v72; // [rsp+50h] [rbp-88h]
  _QWORD *v73; // [rsp+58h] [rbp-80h]
  _QWORD v74[2]; // [rsp+60h] [rbp-78h] BYREF
  __int128 v75; // [rsp+70h] [rbp-68h] BYREF
  __int128 v76; // [rsp+80h] [rbp-58h] BYREF

  v3 = a2;
  v73 = a3;
  v72 = a2;
  Number = NtCurrentTeb()->CurrentIdealProcessor.Number;
  v6 = TppNumberNodes;
  Group = NtCurrentTeb()->CurrentIdealProcessor.Group;
  if ( !a1 || (v8 = *(_DWORD *)(a1 + 440)) == 0 )
    v8 = MEMORY[0x7FFE03C0];
  if ( *(_DWORD *)(a1 + 424) != v8 )
  {
    RtlAcquireSRWLockExclusive(a1 + 72);
    TppAdjustRunningThreadGoalWithLock(a1);
    RtlReleaseSRWLockExclusive(a1 + 72);
  }
  v9 = 0;
  for ( i = 0LL; (unsigned int)i < TppNumberNodes; i = (unsigned int)(i + 1) )
  {
    v11 = *(_QWORD *)(a1 + 48) + 16LL * (unsigned int)(Group + TppMaximumGroups * i);
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
  v67 = -1;
  v15 = -1;
  v16 = *(_DWORD *)(a1 + 428);
  v68 = 0;
  v75 = 0LL;
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
    v51 = TppMaximumGroups * v6;
    v52 = 1LL << Number;
    v53 = 2LL * (unsigned int)(v51 + v14);
    if ( ((1LL << Number) & *(_QWORD *)(v50 + 16LL * (unsigned int)(v51 + v14))) != 0 )
    {
      v15 = v14;
    }
    else
    {
      for ( i = 0LL; (unsigned __int16)i < (unsigned int)TppMaximumGroups; LOWORD(i) = i + 1 )
      {
        if ( (_WORD)i != (_WORD)v14 )
        {
          v53 = 2LL * ((unsigned int)v51 + (unsigned __int16)i);
          if ( (v52 & *(_QWORD *)(v50 + 16LL * ((unsigned int)v51 + (unsigned __int16)i))) != 0 )
          {
            v15 = i;
            break;
          }
        }
      }
    }
    *(_DWORD *)(v3 + 352) = v6;
    *(_WORD *)(v3 + 362) = v15;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v53, i, v51, v52) )
      v54 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v54 = 2147353478LL;
    if ( *(_BYTE *)v54 )
      TppETWWorkerNodeSwitch(a1, v13, v6, (unsigned __int16)v14, v15);
    NtSetInformationThread(-2LL, 30LL, &v75);
    LOWORD(v68) = v15;
    BYTE2(v68) = Number;
    NtSetInformationThread(-2LL, 33LL, &v68);
  }
  v17 = v6;
  if ( *(_DWORD *)(a1 + 428) == -1 && *(_DWORD *)(v3 + 356) >= 0x10u && !(unsigned int)TppAreNodeWorkersSteadyState(a1) )
  {
    do
    {
LABEL_44:
      if ( *(_BYTE *)(a1 + 377) )
        return 0LL;
      v64 = 0LL;
      v65 = (_QWORD *)(a1 + 16);
LABEL_110:
      ;
    }
    while ( v64 > 2 );
    while ( 1 )
    {
      v25 = TppQueueRemoveHead(*v65 + 24LL * v17);
      if ( v25 )
        break;
      if ( ++v17 >= TppNumberNodes )
        v17 = 0;
      if ( v17 == v6 )
      {
        ++v64;
        ++v65;
        goto LABEL_110;
      }
    }
  }
  else
  {
    v18 = 0LL;
    v70 = 0LL;
    for ( j = (_QWORD *)(a1 + 16); ; j = v71 + 1 )
    {
      v71 = j;
      if ( v18 > 2 )
      {
        v3 = v72;
        v17 = v6;
        goto LABEL_44;
      }
      v20 = (volatile signed __int64 *)(*j + 24LL * v6);
      v21 = (volatile signed __int32 *)(v20 + 2);
      SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( SchedulerSharedDataSlot )
      {
        for ( k = 0; k < 8; ++k )
        {
          v24 = (volatile signed __int32 **)&SchedulerSharedDataSlot[8 * k];
          if ( !*v24 )
          {
            if ( v24 )
              *v24 = v21;
            break;
          }
        }
      }
      if ( _interlockedbittestandset64(v21, 0LL) )
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
              v63 = _InterlockedCompareExchange64(v27, v41 - 4, v41);
              v48 = v41 == v63;
              v41 = v63;
              if ( v48 )
              {
                v18 = v70;
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
                v66 = v45;
                v45 = (_QWORD *)*v45;
                v45[2] = v66;
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
            v55 = *(_QWORD *)(v46 + 16);
            v56 = *(_QWORD *)(v46 + 24);
            _interlockedbittestandset((volatile signed __int32 *)(v46 + 36), 2u);
            if ( !_interlockedbittestandreset((volatile signed __int32 *)(v46 + 36), 1u) )
              ZwAlertThreadByThreadIdEx(v56, v43, v45, v44);
            v46 = v55;
          }
          while ( v55 );
          v18 = v70;
        }
      }
LABEL_27:
      v29 = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( v29 )
      {
        v30 = (unsigned __int64)v27 & 0x7FFFFFFFFFFFFFFCLL;
        for ( m = 0; m < 8; ++m )
        {
          v32 = &v29[8 * m];
          if ( (*(_QWORD *)v32 & 0x7FFFFFFFFFFFFFFCLL) == v30 )
          {
            if ( v32 )
            {
              *v32 |= 2u;
              if ( v32[7] < 0 )
              {
                v74[1] = 0LL;
                v74[0] = (v32 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
                NtSetInformationThread(-2LL, 56LL, v74);
              }
              *(_QWORD *)v32 = 0LL;
            }
            break;
          }
        }
      }
      if ( (volatile signed __int64 *)v25 != v20 )
        break;
      v70 = ++v18;
    }
    v3 = v72;
    v17 = v6;
  }
  *v73 = v25 - 16;
  v33 = *(unsigned int *)(v3 + 352);
  v34 = *(_BYTE *)(v25 - 16 + 12);
  v35 = *(unsigned __int16 *)(v3 + 362);
  v36 = *(_DWORD *)(a1 + 428);
  v69 = 0;
  v76 = 0LL;
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
    v57 = *(_QWORD *)(a1 + 48);
    v58 = TppMaximumGroups * v17;
    v59 = 1LL << v34;
    v60 = 2LL * (unsigned int)(v58 + v35);
    if ( ((1LL << v34) & *(_QWORD *)(v57 + 16LL * (unsigned int)(v58 + v35))) != 0 )
    {
      n = (unsigned __int16)v35;
LABEL_80:
      v67 = n;
    }
    else
    {
      for ( n = 0LL; (unsigned __int16)n < (unsigned int)TppMaximumGroups; LOWORD(n) = n + 1 )
      {
        if ( (_WORD)n != (_WORD)v35 )
        {
          v60 = 2LL * ((unsigned int)v58 + (unsigned __int16)n);
          if ( (v59 & *(_QWORD *)(v57 + 16LL * ((unsigned int)v58 + (unsigned __int16)n))) != 0 )
            goto LABEL_80;
        }
      }
      n = 0xFFFFLL;
    }
    *(_DWORD *)(v3 + 352) = v17;
    *(_WORD *)(v3 + 362) = n;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v60, v58, v59, n) )
      v62 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v62 = 2147353478LL;
    if ( *(_BYTE *)v62 )
      TppETWWorkerNodeSwitch(a1, v33, v17, (unsigned __int16)v35, v67);
    NtSetInformationThread(-2LL, 30LL, &v76);
    LOWORD(v69) = v67;
    BYTE2(v69) = v34;
    NtSetInformationThread(-2LL, 33LL, &v69);
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
