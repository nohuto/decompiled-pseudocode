/*
 * XREFs of ReferenceObjectEx @ 0x140030DA0
 * Callers:
 *     DupObjData @ 0x140006F90 (DupObjData.c)
 *     AsyncEvalObject @ 0x1400120D0 (AsyncEvalObject.c)
 *     PerformMutexDriverCallbacks @ 0x14002E494 (PerformMutexDriverCallbacks.c)
 *     ResetSignal @ 0x140030AC0 (ResetSignal.c)
 *     Wait @ 0x140030C40 (Wait.c)
 *     CreateNativeNameSpaceObject @ 0x140052F04 (CreateNativeNameSpaceObject.c)
 *     AMLIGetNamespaceOverrideObject @ 0x14006C8CC (AMLIGetNamespaceOverrideObject.c)
 *     NestAsyncEvalObject @ 0x14006D32C (NestAsyncEvalObject.c)
 *     FindObjSymbol @ 0x14006E470 (FindObjSymbol.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ReferenceObjectEx(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)gdwfAMLI;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 112));
  return result;
}
