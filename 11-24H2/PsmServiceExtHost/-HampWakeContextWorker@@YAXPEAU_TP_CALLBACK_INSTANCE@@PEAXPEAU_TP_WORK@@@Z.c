/*
 * XREFs of ?HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180015210
 * Callers:
 *     <none>
 * Callees:
 *     CemRcObjectDereference @ 0x180014EE0 (CemRcObjectDereference.c)
 *     ?HampWakeContextComputeNextState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@T_HAM_HOST_WAKE_CONTEXT_EVENTS@@PEAU_HAM_HOST_WAKE_CONTEXT_WORKER_STATE@@@Z @ 0x180015890 (-HampWakeContextComputeNextState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@T_HAM_HOST_WAKE_CONTEXT_EVENTS@.c)
 *     ?HampWakeContextTryUpdateActivityState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_HOST_WAKE_CONTEXT_WORKER_STATE@@@Z @ 0x180015B8C (-HampWakeContextTryUpdateActivityState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_HOST_WAKE_CONTEX.c)
 *     ?HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180017170 (-HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextCloseActivity@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180037F7C (-HampWakeContextCloseActivity@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextDestroy@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x1800411C4 (-HampWakeContextDestroy@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall HampWakeContextWorker(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  DWORD v3; // ebx
  _QWORD *Value; // rsi
  unsigned __int8 v6; // bl
  _BYTE *v7; // r14
  DWORD v8; // ecx
  __int64 *v9; // rax
  __int64 v10; // rdx
  bool v11; // zf
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  DWORD v14; // ebx
  DWORD v15; // ecx
  __int64 *v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // r15
  __int128 v19; // xmm1
  __int64 v20; // xmm0_8
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  DWORD v24; // ebp
  _QWORD *v25; // rbx
  DWORD CurrentThreadId; // eax
  DWORD v27; // ecx
  char v28; // bl
  __int64 *v29; // rax
  __int64 v30; // rcx
  DWORD v31; // ebp
  _QWORD *v32; // rbx
  __int64 *v33; // rax
  __int64 v34; // rcx
  unsigned __int64 v35; // rbx
  signed __int64 v36; // r13
  bool v37; // cc
  signed __int64 v38; // r13
  unsigned __int64 v39; // [rsp+20h] [rbp-F8h] BYREF
  __int128 v40; // [rsp+28h] [rbp-F0h] BYREF
  __int128 v41; // [rsp+38h] [rbp-E0h]
  __int64 v42; // [rsp+48h] [rbp-D0h]
  _OWORD TlsValue[8]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v44; // [rsp+D0h] [rbp-48h]

  v3 = HampLockTrackerId;
  memset(TlsValue, 0, sizeof(TlsValue));
  v42 = 0LL;
  v44 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker == 0");
    TlsSetValue(v3, TlsValue);
    v3 = HampLockTrackerId;
  }
  if ( *((_QWORD *)a2 + 3) )
  {
    if ( v3 != -1 )
    {
      Value = TlsGetValue(v3);
      if ( (*(_QWORD *)TlsGetValue(v3) & 0xFFFFFFFFFFFFF800uLL) != 0 )
        NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
      *Value |= 0x800uLL;
      ++Value[12];
    }
    RtlAcquireSRWLockExclusive(a2 + 40);
    *((_DWORD *)a2 + 12) = GetCurrentThreadId();
    *((_DWORD *)a2 + 45) = GetCurrentThreadId();
    do
    {
      v6 = a2[185];
      if ( !v6 )
      {
        v7 = a2 + 184;
        goto LABEL_11;
      }
      v15 = HampLockTrackerId;
      a2[185] = 0;
      if ( v15 != -1 )
      {
        v16 = (__int64 *)TlsGetValue(v15);
        v17 = *v16;
        if ( (*v16 & 0x800) == 0 )
          NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
        v11 = v16[12]-- == 1;
        if ( v11 )
          *v16 = v17 & 0xFFFFFFFFFFFFF7FFuLL;
      }
      *((_DWORD *)a2 + 12) = 0;
      RtlReleaseSRWLockExclusive(a2 + 40);
      if ( (v6 & 4) != 0 && (a2[160] & 2) != 0 )
      {
        HampWakeContextCloseActivity((struct _HAM_HOST_WAKE_CONTEXT *)a2);
        *((_QWORD *)a2 + 16) = 0LL;
      }
      HampWakeContextComputeNextState(a2, v6, &v40);
      HampWakeContextTryUpdateActivityState(
        (struct _HAM_HOST_WAKE_CONTEXT *)a2,
        (struct _HAM_HOST_WAKE_CONTEXT_WORKER_STATE *)&v40);
      v39 = 0LL;
      v18 = -1LL;
      v19 = v41;
      *((_OWORD *)a2 + 8) = v40;
      v20 = v42;
      *((_OWORD *)a2 + 9) = v19;
      *((_QWORD *)a2 + 20) = v20;
      v21 = *((_QWORD *)a2 + 17);
      v22 = *((_QWORD *)a2 + 18);
      if ( v21 < v22 && v22 != -1LL )
        v18 = *((_QWORD *)a2 + 18);
      v23 = *((_QWORD *)a2 + 19);
      if ( v21 < v23 && v23 < v18 )
        v18 = *((_QWORD *)a2 + 19);
      TpWaitForTimer(*((_QWORD *)a2 + 13), 1LL);
      v24 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        v25 = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v24) & 0xFFFFFFFFFFFFF800uLL) != 0 )
          NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
        *v25 |= 0x800uLL;
        ++v25[12];
      }
      RtlAcquireSRWLockExclusive(a2 + 40);
      CurrentThreadId = GetCurrentThreadId();
      v27 = HampLockTrackerId;
      v7 = a2 + 184;
      *((_DWORD *)a2 + 12) = CurrentThreadId;
      v28 = a2[184];
      a2[184] = v28 & 0xFB;
      if ( v27 != -1 )
      {
        v29 = (__int64 *)TlsGetValue(v27);
        v30 = *v29;
        if ( (*v29 & 0x800) == 0 )
          NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
        v11 = v29[12]-- == 1;
        if ( v11 )
          *v29 = v30 & 0xFFFFFFFFFFFFF7FFuLL;
      }
      *((_DWORD *)a2 + 12) = 0;
      RtlReleaseSRWLockExclusive(a2 + 40);
      if ( (v28 & 4) != 0 )
        CemRcObjectDereference(a2);
      if ( v18 != -1LL )
      {
        v39 = *((_QWORD *)a2 + 17) - v18;
        HampWakeContextAcquireLockExclusive((struct _HAM_HOST_WAKE_CONTEXT *)a2);
        *v7 |= 4u;
        if ( _InterlockedIncrement64((volatile signed __int64 *)a2 + 3) <= 1 )
          __fastfail(0xEu);
        if ( HampLockTrackerId != -1 )
        {
          v33 = (__int64 *)TlsGetValue(HampLockTrackerId);
          v34 = *v33;
          if ( (*v33 & 0x800) == 0 )
            NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
          v11 = v33[12]-- == 1;
          if ( v11 )
            *v33 = v34 & 0xFFFFFFFFFFFFF7FFuLL;
        }
        *((_DWORD *)a2 + 12) = 0;
        RtlReleaseSRWLockExclusive(a2 + 40);
        TpSetTimerEx(*((_QWORD *)a2 + 13), &v39, 0LL, 0LL);
      }
      v31 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        v32 = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v31) & 0xFFFFFFFFFFFFF800uLL) != 0 )
          NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
        *v32 |= 0x800uLL;
        ++v32[12];
      }
      RtlAcquireSRWLockExclusive(a2 + 40);
      *((_DWORD *)a2 + 12) = GetCurrentThreadId();
    }
    while ( (a2[160] & 1) == 0 );
    *v7 |= 2u;
LABEL_11:
    *v7 &= ~1u;
    v8 = HampLockTrackerId;
    *((_DWORD *)a2 + 45) = 0;
    if ( v8 != -1 )
    {
      v9 = (__int64 *)TlsGetValue(v8);
      v10 = *v9;
      if ( (*v9 & 0x800) == 0 )
        NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
      v11 = v9[12]-- == 1;
      if ( v11 )
        *v9 = v10 & 0xFFFFFFFFFFFFF7FFuLL;
    }
    *((_DWORD *)a2 + 12) = 0;
    RtlReleaseSRWLockExclusive(a2 + 40);
    _m_prefetchw(a2 + 24);
    v12 = *((_QWORD *)a2 + 3);
    while ( v12 - 1 > 0 )
    {
      v13 = v12;
      v12 = _InterlockedCompareExchange64((volatile signed __int64 *)a2 + 3, v12 - 1, v12);
      if ( v13 == v12 )
        goto LABEL_18;
    }
    if ( v12 != 1 )
      __fastfail(0xEu);
    v35 = *((_QWORD *)a2 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( *((_QWORD *)a2 + 2) == -1LL )
    {
      if ( _InterlockedDecrement64((volatile signed __int64 *)a2 + 3) <= -1 )
        __fastfail(0xEu);
      (*(void (__fastcall **)(char *))(v35 + 24))(a2);
    }
    else
    {
      RtlAcquireSRWLockExclusive(v35 + 16);
      v36 = _InterlockedExchangeAdd64((volatile signed __int64 *)a2 + 3, 0xFFFFFFFFFFFFFFFFuLL);
      v37 = v36 <= 1;
      v38 = v36 - 1;
      if ( v37 )
      {
        if ( v38 )
          __fastfail(0xEu);
        RtlReleaseSRWLockExclusive(v35 + 16);
        (*(void (__fastcall **)(char *))(v35 + 24))(a2);
      }
      else
      {
        RtlReleaseSRWLockExclusive(v35 + 16);
      }
    }
  }
  else
  {
    HampWakeContextDestroy((struct _HAM_HOST_WAKE_CONTEXT *)a2);
  }
LABEL_18:
  v14 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v14, 0LL);
  }
}
