/*
 * XREFs of RtlpHpStackTraceHeapGetContext @ 0x18011EEB0
 * Callers:
 *     RtlpHpStackTraceRemoveStack @ 0x1800E28F0 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x18014BFD0 (RtlpHpStackTraceHeapSerialize.c)
 * Callees:
 *     RtlRunOnceBeginInitialize @ 0x18003A720 (RtlRunOnceBeginInitialize.c)
 *     RtlRunOnceExecuteOnce @ 0x180098200 (RtlRunOnceExecuteOnce.c)
 */

__int64 __fastcall RtlpHpStackTraceHeapGetContext(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v4; // rax
  volatile signed __int64 *v5; // rcx
  __int64 result; // rax
  unsigned __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  v4 = 112LL;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    v4 = 368LL;
  v5 = (volatile signed __int64 *)(v4 + a1);
  if ( a2 )
    result = RtlRunOnceExecuteOnce(
               v5,
               (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))RtlpHpPerHeapStackTraceInitialize,
               0LL,
               &v7);
  else
    result = RtlRunOnceBeginInitialize(v5, 1, &v7);
  if ( (int)result >= 0 )
  {
    *a3 = v7;
    return 0LL;
  }
  return result;
}
