/*
 * XREFs of LdrpThreadTokenUnsetMainThreadToken @ 0x1800F3FB8
 * Callers:
 *     LdrpLoadDllInternal @ 0x180037E60 (LdrpLoadDllInternal.c)
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpLogInternal @ 0x180040780 (LdrpLogInternal.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 */

__int64 LdrpThreadTokenUnsetMainThreadToken()
{
  unsigned __int32 v0; // ebx

  v0 = NtClose(LdrpMainThreadToken);
  LdrpMainThreadToken = 0LL;
  LdrpLogInternal(
    "minkernel\\ldr\\ldrapi.c",
    4414,
    (__int64)"LdrpThreadTokenUnsetMainThreadToken",
    2,
    "Status: 0x%x\n",
    v0);
  return v0;
}
