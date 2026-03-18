/*
 * XREFs of IopIoRingReferenceFileObject @ 0x140ABAC5C
 * Callers:
 *     IopIoRingDispatchCancel @ 0x14071659C (IopIoRingDispatchCancel.c)
 *     IopIoRingDispatchFlush @ 0x14071665C (IopIoRingDispatchFlush.c)
 *     IopIoRingDispatchReadScatter @ 0x14071673C (IopIoRingDispatchReadScatter.c)
 *     IopIoRingDispatchWrite @ 0x140716E78 (IopIoRingDispatchWrite.c)
 *     IopIoRingDispatchWriteGather @ 0x140717020 (IopIoRingDispatchWriteGather.c)
 *     IopIoRingDispatchRead @ 0x140A94B48 (IopIoRingDispatchRead.c)
 * Callees:
 *     IopReferenceFileObject @ 0x1403F5300 (IopReferenceFileObject.c)
 *     ObReferenceFileObjectForWrite @ 0x140988C30 (ObReferenceFileObjectForWrite.c)
 */

__int64 __fastcall IopIoRingReferenceFileObject(
        __int64 a1,
        void *a2,
        char a3,
        char a4,
        char a5,
        ACCESS_MASK a6,
        struct _DMA_ADAPTER **a7,
        POBJECT_HANDLE_INFORMATION a8)
{
  void *v8; // r10

  v8 = a2;
  if ( a3 )
  {
    if ( (unsigned int)a2 >= *(_DWORD *)(a1 + 192) )
      return 3221226705LL;
    v8 = *(void **)(*(_QWORD *)(a1 + 200) + 8LL * (unsigned int)a2);
  }
  if ( a5 )
    return ObReferenceFileObjectForWrite((ULONG_PTR)v8, a4, a7, (int *)a8);
  else
    return IopReferenceFileObject(v8, a6, a4, (PVOID *)a7, a8);
}
