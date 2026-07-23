/*
 * XREFs of LdrpThreadTokenUnsetMainThreadToken @ 0x1800FB008
 * Callers:
 *     LdrpLoadDllInternal @ 0x18004A300 (LdrpLoadDllInternal.c)
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     NtClose @ 0x180163400 (NtClose.c)
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
