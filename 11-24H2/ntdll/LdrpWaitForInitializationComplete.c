/*
 * XREFs of LdrpWaitForInitializationComplete @ 0x1800AE930
 * Callers:
 *     LdrpInitializeInternal @ 0x1800AE9E0 (LdrpInitializeInternal.c)
 *     _LdrpInitialize @ 0x1800AEAE4 (_LdrpInitialize.c)
 * Callees:
 *     LdrpLogInternal @ 0x180040780 (LdrpLogInternal.c)
 *     NtWaitForSingleObject @ 0x1801600D0 (NtWaitForSingleObject.c)
 *     ZwDelayExecution @ 0x1801606D0 (ZwDelayExecution.c)
 */

void __fastcall LdrpWaitForInitializationComplete(_DWORD *a1, HANDLE *a2)
{
  NTSTATUS v3; // eax
  NTSTATUS v4; // eax
  LARGE_INTEGER DelayInterval; // [rsp+48h] [rbp+10h] BYREF

  if ( *a2 )
  {
    v3 = NtWaitForSingleObject(*a2, 0, 0LL);
    if ( v3 >= 0 )
      return;
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      1292,
      (__int64)"LdrpWaitForInitializationComplete",
      1,
      "NtWaitForSingleObject failed with status 0x%08lx, fallback to delay loop\n",
      v3);
  }
  DelayInterval.QuadPart = -300000LL;
  while ( *a1 == 1 )
  {
    v4 = ZwDelayExecution(0, &DelayInterval);
    if ( v4 < 0 )
      LdrpLogInternal(
        "minkernel\\ldr\\ldrinit.c",
        1310,
        (__int64)"LdrpWaitForInitializationComplete",
        1,
        "Delaying execution for hot patch initialization failed with status 0x%08lx\n",
        v4);
  }
}
