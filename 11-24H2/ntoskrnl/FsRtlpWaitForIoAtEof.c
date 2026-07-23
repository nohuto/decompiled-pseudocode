/*
 * XREFs of FsRtlpWaitForIoAtEof @ 0x1402E1598
 * Callers:
 *     FsRtlAcquireEofLock @ 0x1402E13D0 (FsRtlAcquireEofLock.c)
 *     FsRtlGetIoAtEof @ 0x14042CC40 (FsRtlGetIoAtEof.c)
 * Callees:
 *     PsGetIoPriorityThread @ 0x14022BEB0 (PsGetIoPriorityThread.c)
 *     IoBoostThreadIoPriority @ 0x14022E320 (IoBoostThreadIoPriority.c)
 *     PsBoostThreadIoEx @ 0x14027E3A0 (PsBoostThreadIoEx.c)
 *     FsRtlReleaseHeaderMutex @ 0x1402C6D00 (FsRtlReleaseHeaderMutex.c)
 *     KeSetPriorityBoost @ 0x1402DFC90 (KeSetPriorityBoost.c)
 *     KeQueryPriorityThread @ 0x1402E24A0 (KeQueryPriorityThread.c)
 *     FsRtlAcquireHeaderMutex @ 0x14031D7D0 (FsRtlAcquireHeaderMutex.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 */

char __fastcall FsRtlpWaitForIoAtEof(__int64 a1, volatile signed __int32 *a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r15
  KSPIN_LOCK *v6; // r14
  int IoPriorityThread; // esi
  int v8; // eax
  int v9; // r9d
  KPRIORITY PriorityThread; // edi
  __int64 v11; // rcx
  __int64 **v12; // rcx
  KPRIORITY v13; // eax
  int *v14; // rdx
  int v15; // eax
  __int64 v17; // [rsp+30h] [rbp-40h] BYREF
  __int64 **v18; // [rsp+38h] [rbp-38h]
  __int16 Object; // [rsp+40h] [rbp-30h] BYREF
  char v20; // [rsp+42h] [rbp-2Eh]
  char v21; // [rsp+43h] [rbp-2Dh]
  int v22; // [rsp+44h] [rbp-2Ch]
  _QWORD v23[4]; // [rsp+48h] [rbp-28h] BYREF
  KPRIORITY v24; // [rsp+68h] [rbp-8h]
  int v25; // [rsp+6Ch] [rbp-4h]

  v17 = 0LL;
  v18 = 0LL;
  v21 = 0;
  CurrentThread = KeGetCurrentThread();
  v6 = *(KSPIN_LOCK **)a1;
  IoPriorityThread = PsGetIoPriorityThread((__int64)CurrentThread);
  if ( IoPriorityThread >= 2 )
    IoPriorityThread = 2;
  if ( !*(_BYTE *)(a1 + 36) && IoPriorityThread > 1 )
  {
    v8 = PsGetIoPriorityThread((__int64)v6);
    if ( v8 < v9 )
    {
      PsBoostThreadIoEx((__int64)v6, 0, 0, 0LL);
      IoBoostThreadIoPriority(v6, IoPriorityThread, 0);
      *(_BYTE *)(a1 + 36) = 1;
    }
  }
  PriorityThread = KeQueryPriorityThread(CurrentThread);
  if ( PriorityThread >= 15 )
    PriorityThread = 15;
  if ( PriorityThread > *(_DWORD *)(a1 + 32) )
  {
    *(_DWORD *)(a1 + 32) = PriorityThread;
    if ( PriorityThread > KeQueryPriorityThread((PKTHREAD)v6) )
      KeSetPriorityBoost((__int64)v6, PriorityThread);
  }
  v11 = *(_QWORD *)(a1 + 16);
  while ( v11 != a1 + 8 )
  {
    v13 = *(_DWORD *)(v11 + 56);
    v14 = (int *)(v11 + 60);
    if ( v13 < PriorityThread )
    {
      v13 = PriorityThread;
    }
    else if ( *v14 >= IoPriorityThread )
    {
      break;
    }
    *(_DWORD *)(v11 + 56) = v13;
    v15 = *v14;
    v11 = *(_QWORD *)(v11 + 8);
    if ( IoPriorityThread > *v14 )
      v15 = IoPriorityThread;
    *v14 = v15;
  }
  v22 = 0;
  v23[1] = v23;
  v23[0] = v23;
  v12 = *(__int64 ***)(a1 + 16);
  Object = 1;
  v20 = 6;
  v23[3] = CurrentThread;
  v24 = PriorityThread;
  v25 = IoPriorityThread;
  v23[2] = a3;
  if ( *v12 != (__int64 *)(a1 + 8) )
    __fastfail(3u);
  v18 = v12;
  v17 = a1 + 8;
  *v12 = &v17;
  *(_QWORD *)(a1 + 16) = &v17;
  FsRtlReleaseHeaderMutex(a1, a2);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  FsRtlAcquireHeaderMutex(a1, a2);
  if ( a3 >= 0 && a3 <= *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL) )
    return 0;
  if ( IoPriorityThread < 2 && !*(_BYTE *)(a1 + 36) && v25 >= 2 )
  {
    PsBoostThreadIoEx((__int64)CurrentThread, 0, 0, 0LL);
    *(_BYTE *)(a1 + 36) = 1;
  }
  return 1;
}
