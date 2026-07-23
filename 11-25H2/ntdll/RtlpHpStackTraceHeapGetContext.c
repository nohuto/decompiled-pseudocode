/*
 * XREFs of RtlpHpStackTraceHeapGetContext @ 0x180120780
 * Callers:
 *     RtlpHpStackTraceRemoveStack @ 0x1800DF5A0 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x18014D580 (RtlpHpStackTraceHeapSerialize.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x180003870 (RtlRunOnceExecuteOnce.c)
 *     RtlRunOnceBeginInitialize @ 0x18008E110 (RtlRunOnceBeginInitialize.c)
 */

NTSTATUS __fastcall RtlpHpStackTraceHeapGetContext(__int64 a1, int a2, PVOID *a3)
{
  __int64 v4; // rax
  _RTL_RUN_ONCE *v5; // rcx
  NTSTATUS result; // eax
  PVOID Context; // [rsp+30h] [rbp+8h] BYREF

  Context = 0LL;
  v4 = 112LL;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    v4 = 368LL;
  v5 = (_RTL_RUN_ONCE *)(v4 + a1);
  if ( a2 )
    result = RtlRunOnceExecuteOnce(v5, RtlpHpPerHeapStackTraceInitialize, 0LL, &Context);
  else
    result = RtlRunOnceBeginInitialize(v5, 1u, &Context);
  if ( result >= 0 )
  {
    *a3 = Context;
    return 0;
  }
  return result;
}
