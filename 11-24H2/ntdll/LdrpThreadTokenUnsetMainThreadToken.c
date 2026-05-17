/*
 * XREFs of LdrpThreadTokenUnsetMainThreadToken @ 0x1800F93E8
 * Callers:
 *     LdrpLoadDllInternal @ 0x18000B460 (LdrpLoadDllInternal.c)
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 */

__int64 LdrpThreadTokenUnsetMainThreadToken()
{
  unsigned int v0; // ebx

  v0 = NtClose(LdrpMainThreadToken);
  LdrpMainThreadToken = 0LL;
  LdrpLogInternal(
    (__int64)"minkernel\\ldr\\ldrapi.c",
    4414,
    (__int64)"LdrpThreadTokenUnsetMainThreadToken",
    2,
    "Status: 0x%x\n",
    v0);
  return v0;
}
