/*
 * XREFs of IopIoRingDispatchCancel @ 0x14070A49C
 * Callers:
 *     IopProcessIoRingEntry @ 0x1406EC178 (IopProcessIoRingEntry.c)
 * Callees:
 *     IopCompleteIoRingEntry @ 0x1402A2AE0 (IopCompleteIoRingEntry.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     IopCancelIoFile @ 0x140A2F65C (IopCancelIoFile.c)
 *     IopIoRingReferenceFileObject @ 0x140AB691C (IopIoRingReferenceFileObject.c)
 */

LONG __fastcall IopIoRingDispatchCancel(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  struct _KTHREAD *CurrentThread; // r9
  char v7; // [rsp+20h] [rbp-38h]
  __int128 v8; // [rsp+40h] [rbp-18h] BYREF
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  Object = 0LL;
  v2 = *(unsigned int *)(a2 + 16);
  v8 = 0LL;
  if ( (v2 & 0xFFFFFFFE) != 0 )
  {
    LODWORD(v8) = -1069154303;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    LOBYTE(v2) = v2 & 1;
    LOBYTE(CurrentThread) = CurrentThread->PreviousMode;
    v7 = 0;
    LODWORD(v8) = IopIoRingReferenceFileObject(
                    a1,
                    *(_QWORD *)(a2 + 24),
                    v2,
                    CurrentThread,
                    v7,
                    0,
                    &Object,
                    0LL,
                    v8,
                    *((_QWORD *)&v8 + 1));
    if ( (int)v8 >= 0 )
      LODWORD(v8) = IopCancelIoFile(Object, *(_QWORD *)(a2 + 32));
    if ( Object )
      ObfDereferenceObject(Object);
  }
  return IopCompleteIoRingEntry(a1, *(_QWORD *)(a2 + 8), &v8, 0);
}
