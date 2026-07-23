/*
 * XREFs of ExpCreateWorkerThread @ 0x1408F8A28
 * Callers:
 *     ExpPartitionCreatePoolInternal @ 0x1408F7C7C (ExpPartitionCreatePoolInternal.c)
 *     ExpWorkQueueManagerThread @ 0x1408F84F0 (ExpWorkQueueManagerThread.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KeBoostPriorityThread @ 0x1404DD768 (KeBoostPriorityThread.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ExpNodeCreateSystemThread @ 0x1408F8B1C (ExpNodeCreateSystemThread.c)
 */

__int64 __fastcall ExpCreateWorkerThread(__int64 a1, int a2)
{
  signed __int32 v3; // eax
  signed __int32 v4; // ett
  int SystemThread; // edi
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp+18h]

  Handle = 0LL;
  _m_prefetchw((const void *)(a1 + 712));
  v3 = *(_DWORD *)(a1 + 712);
  do
  {
    v4 = v3;
    v3 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 712), (v3 + 1) | 0x4000, v3);
  }
  while ( v4 != v3 );
  SystemThread = ExpNodeCreateSystemThread(
                   *(_QWORD *)(a1 + 696),
                   **(_QWORD **)(a1 + 688),
                   a2,
                   *(_QWORD *)(**(_QWORD **)(a1 + 688) + 128LL));
  if ( SystemThread < 0 )
  {
    _m_prefetchw((const void *)(a1 + 712));
    v7 = *(_DWORD *)(a1 + 712);
    do
    {
      v8 = v7;
      v7 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 712), (v7 & 0x3FFF) - 1, v7);
    }
    while ( v8 != v7 );
  }
  else
  {
    Object = 0LL;
    if ( ObReferenceObjectByHandle(Handle, 0x20u, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL) >= 0 )
    {
      KeBoostPriorityThread((__int64)Object, 8);
      ObfDereferenceObject(Object);
    }
    ZwClose(Handle);
  }
  return (unsigned int)SystemThread;
}
