/*
 * XREFs of EtwTraceWorkingSetInSwapStoreFail @ 0x140A43B9C
 * Callers:
 *     MiInSwapStoreWorker @ 0x140A43A40 (MiInSwapStoreWorker.c)
 * Callees:
 *     EtwProviderEnabled @ 0x140262770 (EtwProviderEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     PsGetProcessId @ 0x140427BE0 (PsGetProcessId.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

BOOLEAN __fastcall EtwTraceWorkingSetInSwapStoreFail(PEPROCESS Process, int a2)
{
  BOOLEAN result; // al
  unsigned int ProcessId; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF
  int *v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+50h] [rbp-18h]
  int v8; // [rsp+54h] [rbp-14h]
  int v9; // [rsp+78h] [rbp+10h] BYREF

  v9 = a2;
  result = EtwProviderEnabled(EtwpMemoryProvRegHandle, 0, 0x80uLL);
  if ( result )
  {
    UserData.Reserved = 0;
    v8 = 0;
    ProcessId = (unsigned int)PsGetProcessId(Process);
    UserData.Size = 4;
    UserData.Ptr = (ULONGLONG)&ProcessId;
    v6 = &v9;
    v7 = 4;
    return EtwWrite(EtwpMemoryProvRegHandle, &KERNEL_MEM_EVENT_WS_INSWAP_STORE_FAIL, 0LL, 2u, &UserData);
  }
  return result;
}
