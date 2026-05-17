/*
 * XREFs of LdrpCallTlsInitializers @ 0x180012F30
 * Callers:
 *     LdrShutdownProcess @ 0x180002B70 (LdrShutdownProcess.c)
 *     LdrShutdownThread @ 0x1800045E0 (LdrShutdownThread.c)
 *     LdrpInitializeThread @ 0x180012810 (LdrpInitializeThread.c)
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 *     LdrpInitializeNode @ 0x18006FB00 (LdrpInitializeNode.c)
 *     LdrpProcessDetachNode @ 0x1800E3114 (LdrpProcessDetachNode.c)
 * Callees:
 *     RtlReportException @ 0x180001490 (RtlReportException.c)
 *     LdrpCallInitRoutine @ 0x180012C90 (LdrpCallInitRoutine.c)
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 *     RtlRaiseStatus @ 0x180014DE0 (RtlRaiseStatus.c)
 *     RtlpAcquireSRWLockSharedContended @ 0x180017E40 (RtlpAcquireSRWLockSharedContended.c)
 *     NtSetInformationThread @ 0x180161E30 (NtSetInformationThread.c)
 *     ZwAlertThreadByThreadIdEx @ 0x180162AC0 (ZwAlertThreadByThreadIdEx.c)
 */

struct _TEB *__fastcall LdrpCallTlsInitializers(unsigned int a1, __int64 a2)
{
  _QWORD *v4; // rdx
  _QWORD *SchedulerSharedDataSlot; // r8
  unsigned int i; // r9d
  signed __int64 v7; // rax
  char v8; // cl
  _UNKNOWN **v9; // rbx
  _UNKNOWN **j; // rax
  signed __int64 v11; // rax
  signed __int64 v12; // rcx
  _BYTE *v13; // rsi
  struct _TEB *result; // rax
  _QWORD *v15; // rdx
  __int64 *v16; // rbx
  __int64 v17; // rsi
  unsigned int n; // ecx
  signed __int64 v19; // r8
  bool v20; // zf
  signed __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 k; // rdx
  __int64 v24; // r8
  __int64 v25; // rax
  signed __int64 v26; // rdx
  signed __int64 v27; // rax
  __int64 *v28; // r14
  unsigned __int64 v29; // r9
  _QWORD *v30; // r8
  __int64 m; // rcx
  __int64 v32; // rax
  signed __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rsi
  signed __int64 v36; // rax
  _QWORD v37[5]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v38; // [rsp+88h] [rbp-40h]
  __int128 v39; // [rsp+90h] [rbp-38h]

  v4 = 0LL;
  SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0; i < 8; ++i )
    {
      if ( !SchedulerSharedDataSlot[i] )
      {
        v4 = &SchedulerSharedDataSlot[i];
        break;
      }
    }
  }
  if ( v4 )
    *v4 = &LdrpTlsLock;
  v7 = _InterlockedCompareExchange64(&LdrpTlsLock, 17LL, 0LL);
  if ( v7 )
    RtlpAcquireSRWLockSharedContended(&LdrpTlsLock, v4, v7);
  v8 = 0;
  v9 = 0LL;
  for ( j = (_UNKNOWN **)LdrpTlsList; j != &LdrpTlsList; j = (_UNKNOWN **)*j )
  {
    v9 = j;
    if ( j[7] == (_UNKNOWN *)a2 )
    {
      v8 = 1;
      break;
    }
  }
  if ( !v8 )
    v9 = 0LL;
  v11 = _InterlockedCompareExchange64(&LdrpTlsLock, 0LL, 17LL);
  v12 = v11;
  if ( v11 != 17 )
  {
    if ( (v11 & 1) == 0 )
      RtlRaiseStatus(3221226084LL);
    while ( (v12 & 2) == 0 )
    {
      v19 = 0LL;
      if ( (v12 & 0xFFFFFFFFFFFFFFF0uLL) != 0x10 )
        v19 = v12 - 16;
      v21 = _InterlockedCompareExchange64(&LdrpTlsLock, v19, v12);
      v20 = v12 == v21;
      v12 = v21;
      if ( v20 )
        goto LABEL_18;
    }
    if ( (v12 & 8) != 0 )
    {
      v22 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0uLL);
      for ( k = *(_QWORD *)((v12 & 0xFFFFFFFFFFFFFFF0uLL) + 8); !k; k = v22[1] )
        v22 = (_QWORD *)*v22;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(k + 32), 0xFFFFFFFF) > 1 )
        goto LABEL_18;
      v24 = -9LL;
    }
    else
    {
      v24 = -1LL;
    }
    while ( 1 )
    {
      if ( (v12 & 4) != 0 || (v25 = v24 + 4, (v12 & 2) == 0) )
        v25 = v24;
      v26 = v25 + v12;
      v27 = _InterlockedCompareExchange64(&LdrpTlsLock, v25 + v12, v12);
      if ( v12 == v27 )
        break;
      v12 = v27;
    }
    if ( (v12 & 6) == 2 )
    {
      v28 = &LdrpTlsLock;
      while ( 1 )
      {
        while ( (v26 & 1) != 0 )
        {
          v36 = _InterlockedCompareExchange64(&LdrpTlsLock, v26 - 4, v26);
          v20 = v26 == v36;
          v26 = v36;
          if ( v20 )
            goto LABEL_18;
        }
        v29 = v26 & 0xFFFFFFFFFFFFFFF0uLL;
        v30 = (_QWORD *)(v26 & 0xFFFFFFFFFFFFFFF0uLL);
        for ( m = *(_QWORD *)((v26 & 0xFFFFFFFFFFFFFFF0uLL) + 8); !m; m = v30[1] )
        {
          v34 = v30;
          v30 = (_QWORD *)*v30;
          v30[2] = v34;
        }
        if ( v30 != (_QWORD *)v29 )
          *(_QWORD *)((v26 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = m;
        if ( (*(_DWORD *)(m + 36) & 1) != 0 )
        {
          v32 = *(_QWORD *)(m + 16);
          if ( v32 )
            break;
        }
        v28 = 0LL;
        v33 = _InterlockedCompareExchange64(&LdrpTlsLock, 0LL, v26);
        v20 = v26 == v33;
        v26 = v33;
        if ( v20 )
          goto LABEL_65;
      }
      *(_QWORD *)((v26 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v32;
      *(_QWORD *)(m + 16) = 0LL;
      _InterlockedAnd64(&LdrpTlsLock, 0xFFFFFFFFFFFFFFFBuLL);
      do
      {
LABEL_65:
        v37[2] = 0LL;
        v37[3] = 0LL;
        v39 = 0LL;
        v35 = *(_QWORD *)(m + 16);
        v37[4] = v35;
        v38 = *(_QWORD *)(m + 24);
        _interlockedbittestandset((volatile signed __int32 *)(m + 36), 2u);
        if ( !_interlockedbittestandreset((volatile signed __int32 *)(m + 36), 1u) )
          ZwAlertThreadByThreadIdEx(v38, v28, v30, v29);
        m = v35;
      }
      while ( v35 );
    }
  }
LABEL_18:
  v13 = 0LL;
  result = NtCurrentTeb();
  v15 = result->SchedulerSharedDataSlot;
  if ( v15 )
  {
    for ( n = 0; n < 8; ++n )
    {
      result = (struct _TEB *)(v15[n] & 0x7FFFFFFFFFFFFFFCLL);
      if ( result == (struct _TEB *)((unsigned __int64)&LdrpTlsLock & 0x7FFFFFFFFFFFFFFCLL) )
      {
        v13 = &v15[n];
        break;
      }
    }
  }
  if ( v13 )
  {
    *v13 |= 2u;
    if ( (char)v13[7] < 0 )
    {
      v37[1] = 0LL;
      v37[0] = (v13 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
      result = (struct _TEB *)NtSetInformationThread(-2LL, 56LL, v37);
    }
    *(_QWORD *)v13 = 0LL;
  }
  if ( v9 )
  {
    v16 = (__int64 *)v9[5];
    if ( v16 )
    {
      while ( 1 )
      {
        v17 = *v16;
        if ( !*v16 )
          break;
        ++v16;
        LdrpLogInternal(
          (int)"minkernel\\ldr\\ldrtls.c",
          1187,
          (int)"LdrpCallTlsInitializers",
          2,
          "Calling TLS callback %p for DLL \"%wZ\" at %p\n",
          v17);
        result = (struct _TEB *)LdrpCallInitRoutine((__int64)ImageTlsCallbackCaller, *(_QWORD *)(a2 + 48), a1, v17);
      }
    }
  }
  return result;
}
