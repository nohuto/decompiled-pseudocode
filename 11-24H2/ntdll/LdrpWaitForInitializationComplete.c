/*
 * XREFs of LdrpWaitForInitializationComplete @ 0x180066750
 * Callers:
 *     LdrpInitializeInternal @ 0x180066800 (LdrpInitializeInternal.c)
 *     _LdrpInitialize @ 0x180066904 (_LdrpInitialize.c)
 * Callees:
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 *     NtWaitForSingleObject @ 0x180161D10 (NtWaitForSingleObject.c)
 *     ZwDelayExecution @ 0x180162310 (ZwDelayExecution.c)
 */

void __fastcall LdrpWaitForInitializationComplete(_DWORD *a1, HANDLE *a2)
{
  NTSTATUS v3; // eax
  int v4; // eax
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  if ( *a2 )
  {
    v3 = NtWaitForSingleObject(*a2, 0, 0LL);
    if ( v3 >= 0 )
      return;
    LdrpLogInternal(
      (__int64)"minkernel\\ldr\\ldrinit.c",
      1292,
      (__int64)"LdrpWaitForInitializationComplete",
      1,
      "NtWaitForSingleObject failed with status 0x%08lx, fallback to delay loop\n",
      v3);
  }
  v5 = -300000LL;
  while ( *a1 == 1 )
  {
    v4 = ZwDelayExecution(0LL, &v5);
    if ( v4 < 0 )
      LdrpLogInternal(
        (__int64)"minkernel\\ldr\\ldrinit.c",
        1310,
        (__int64)"LdrpWaitForInitializationComplete",
        1,
        "Delaying execution for hot patch initialization failed with status 0x%08lx\n",
        v4);
  }
}
