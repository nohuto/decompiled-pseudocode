/*
 * XREFs of xxxSendMinRectMessages @ 0x1C000E178
 * Callers:
 *     NtUserGetWindowMinimizeRect @ 0x1C000E000 (NtUserGetWindowMinimizeRect.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C005E99C (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0109880 (xxxRealDefWindowProc.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0215824 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxMinimizeHungWindow @ 0x1C0224300 (xxxMinimizeHungWindow.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C00AD510 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00AD580 (PopAndFreeW32ThreadLock.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00B29B8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01278C0 (xxxSendTransformableMessageTimeout.c)
 */

__int64 __fastcall xxxSendMinRectMessages(unsigned __int64 *a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned __int64 v3; // rbp
  __int64 v4; // r14
  void *v5; // rcx
  unsigned int v6; // ebx
  ULONG_PTR v7; // rsi
  unsigned int *v8; // rcx
  __int128 v10; // [rsp+50h] [rbp-58h] BYREF
  __int64 v11; // [rsp+60h] [rbp-48h]
  __int128 v12; // [rsp+68h] [rbp-40h] BYREF
  __int64 v13; // [rsp+78h] [rbp-30h]
  __int64 v14; // [rsp+B0h] [rbp+8h] BYREF

  v2 = 0;
  if ( a1 )
    v3 = *a1;
  else
    v3 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  if ( ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) != 0 )
  {
    xxxCallHook(5, v3, a2, 10);
    v2 = 1;
  }
  v4 = *(_QWORD *)(gptiCurrent + 464LL);
  if ( *(_QWORD *)(v4 + 240) )
  {
    PushW32ThreadLock(*(_QWORD *)(gptiCurrent + 456LL), &v10, UserDereferenceObject);
    v5 = *(void **)(gptiCurrent + 456LL);
    if ( v5 )
      ObfReferenceObject(v5);
    v6 = 0;
    v7 = 0LL;
    while ( 1 )
    {
      v8 = *(unsigned int **)(v4 + 240);
      if ( !v8 || v8[3] || v6 >= *v8 )
        break;
      if ( *(_QWORD *)&v8[4 * v6 + 6] == v7 )
        ++v6;
      if ( v6 >= *v8 )
        break;
      v7 = *(_QWORD *)&v8[4 * v6 + 6];
      if ( !v7 )
        break;
      v14 = 0LL;
      v13 = 0LL;
      v12 = 0LL;
      ThreadLock(v7, &v12);
      if ( xxxSendTransformableMessageTimeout(v7, 0, 100, (__int64)&v14, 1, 0) )
        v2 = 1;
      ThreadUnlock1();
    }
    PopAndFreeW32ThreadLock(&v10);
  }
  return v2;
}
