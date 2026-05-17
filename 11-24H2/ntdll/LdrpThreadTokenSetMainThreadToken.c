/*
 * XREFs of LdrpThreadTokenSetMainThreadToken @ 0x1800F0760
 * Callers:
 *     LdrpLoadDllInternal @ 0x18000B460 (LdrpLoadDllInternal.c)
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 *     NtOpenThreadToken @ 0x180162110 (NtOpenThreadToken.c)
 */

__int64 LdrpThreadTokenSetMainThreadToken()
{
  unsigned int v0; // ebx
  void *v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0LL;
  v0 = NtOpenThreadToken(-2LL, 131100LL, 0LL, &v2);
  LdrpMainThreadToken = v2;
  if ( v0 != -1073741700 )
    LdrpLogInternal(
      (__int64)"minkernel\\ldr\\ldrapi.c",
      4376,
      (__int64)"LdrpThreadTokenSetMainThreadToken",
      2,
      "Status: 0x%x\n",
      v0);
  return v0;
}
