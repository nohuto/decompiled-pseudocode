/*
 * XREFs of TppCancelTimer @ 0x180088C90
 * Callers:
 *     TpSetWaitEx @ 0x18004CAE0 (TpSetWaitEx.c)
 *     TppCancelWait @ 0x1800876C0 (TppCancelWait.c)
 *     TpReleaseTimer @ 0x180088160 (TpReleaseTimer.c)
 *     TpWaitForTimer @ 0x1800889F0 (TpWaitForTimer.c)
 *     TpReleaseWait @ 0x18008ADA0 (TpReleaseWait.c)
 *     TppTimerpStopCallbackGeneration @ 0x180106240 (TppTimerpStopCallbackGeneration.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     TppETWTimerCancelled @ 0x180087180 (TppETWTimerCancelled.c)
 *     TppPHExtractMin @ 0x180088F30 (TppPHExtractMin.c)
 *     TppUpdateSubQueueTimer @ 0x180088FE0 (TppUpdateSubQueueTimer.c)
 *     NtWaitForAlertByThreadId @ 0x180163CA0 (NtWaitForAlertByThreadId.c)
 */

char __fastcall TppCancelTimer(__int64 a1, _RTL_SRWLOCK *a2, char a3)
{
  char v3; // al
  bool v7; // di
  struct _PEB *v9; // rax
  __int64 v10; // r14
  _DWORD *SharedData; // rcx
  __int64 v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rdx
  _QWORD **v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // r8
  _QWORD *v19; // rdx
  __int64 v20; // r8
  _QWORD *v21; // r9
  __int64 v22; // rax
  _QWORD **v23; // rcx
  _QWORD *v24; // r11
  __int64 v25; // rax
  _QWORD *v26; // rdx
  _QWORD *v27; // rax
  __int64 v28; // rdx
  _QWORD *v29; // r8
  signed __int64 v30; // rax
  signed __int64 v31; // rdx
  _QWORD v32[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_BYTE *)(a1 + 354);
  v7 = (v3 & 2) != 0;
  if ( (v3 & 1) == 0 )
  {
    *(_QWORD *)(a1 + 328) = 0LL;
    if ( !a3 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
    return 0;
  }
  v9 = NtCurrentPeb();
  v10 = 1LL;
  if ( !v7 )
    v10 = 16LL;
  SharedData = v9->SharedData;
  v12 = (__int64)&a2[v10];
  if ( SharedData && *SharedData )
    v13 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v13 = 2147353478LL;
  if ( *(_BYTE *)v13 )
    TppETWTimerCancelled(v12, a1);
  RtlAcquireSRWLockExclusive(a2);
  if ( *(_BYTE *)(a1 + 352) )
  {
    v14 = *(_QWORD *)(v12 + 16);
    v15 = (_QWORD **)(v12 + 16);
    v16 = (_QWORD *)(a1 + 248);
    if ( a1 + 248 != v14 )
    {
      v17 = *v16;
      if ( *(_QWORD **)(*v16 + 8LL) != v16 )
        goto LABEL_16;
      v18 = *(_QWORD **)(a1 + 256);
      if ( (_QWORD *)*v18 != v16
        || (*v18 = v17,
            *(_QWORD *)(v17 + 8) = v18,
            v19 = (_QWORD *)(a1 + 264),
            *(_QWORD *)(a1 + 256) = a1 + 248,
            *v16 = v16,
            v20 = *(_QWORD *)(a1 + 264),
            v21 = *v15,
            *(_QWORD *)(v20 + 8) != a1 + 264) )
      {
LABEL_16:
        __fastfail(3u);
      }
      v21[1] = v19;
      *v21 = v20;
      *(_QWORD *)(v20 + 8) = v21;
      *v19 = v21;
      v14 = a1 + 248;
      *v15 = v16;
    }
    *(_QWORD *)(v14 + 32) = 0LL;
    TppPHExtractMin(v15);
    v22 = *(_QWORD *)(v12 + 8);
    v23 = (_QWORD **)(v12 + 8);
    v24 = (_QWORD *)(a1 + 288);
    if ( a1 + 288 != v22 )
    {
      v25 = *v24;
      if ( *(_QWORD **)(*v24 + 8LL) != v24 )
        goto LABEL_16;
      v26 = *(_QWORD **)(a1 + 296);
      if ( (_QWORD *)*v26 != v24 )
        goto LABEL_16;
      *v26 = v25;
      *(_QWORD *)(v25 + 8) = v26;
      v27 = (_QWORD *)(a1 + 304);
      *(_QWORD *)(a1 + 296) = a1 + 288;
      *v24 = v24;
      v28 = *(_QWORD *)(a1 + 304);
      v29 = *v23;
      if ( *(_QWORD *)(v28 + 8) != a1 + 304 )
        goto LABEL_16;
      v29[1] = v27;
      *v29 = v28;
      *(_QWORD *)(v28 + 8) = v29;
      *v27 = v29;
      v22 = a1 + 288;
      *v23 = v24;
    }
    *(_QWORD *)(v22 + 32) = 0LL;
    TppPHExtractMin(v23);
    TppUpdateSubQueueTimer(v12, v7);
    *(_BYTE *)(a1 + 352) = 0;
    RtlReleaseSRWLockExclusive(a2);
    *(_DWORD *)(a1 + 348) = 0;
    *(_QWORD *)(a1 + 328) = 0LL;
    *(_BYTE *)(a1 + 354) = 0;
    if ( !a3 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
    return 1;
  }
  else
  {
    RtlReleaseSRWLockExclusive(a2);
    *(_BYTE *)(a1 + 354) |= 4u;
    v32[1] = NtCurrentTeb()->ClientId.UniqueThread;
    _m_prefetchw((const void *)(a1 + 336));
    v30 = *(_QWORD *)(a1 + 336);
    do
    {
      v31 = v30;
      v32[0] = v30;
      v30 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 336), (signed __int64)v32, v30);
    }
    while ( v30 != v31 );
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
    NtWaitForAlertByThreadId((PVOID)(a1 + 336), 0LL);
    if ( a3 )
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
    return 0;
  }
}
