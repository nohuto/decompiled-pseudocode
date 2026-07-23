/*
 * XREFs of EtwTraceMdlAllocationEvent @ 0x1403948E0
 * Callers:
 *     MiAllocatePagesForMdl @ 0x14039469C (MiAllocatePagesForMdl.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwpGetDurationSince @ 0x14039623C (EtwpGetDurationSince.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

BOOLEAN __fastcall EtwTraceMdlAllocationEvent(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8)
{
  BOOLEAN result; // al
  __int64 DurationSince; // rax
  _QWORD v14[6]; // [rsp+40h] [rbp-39h] BYREF
  int v15; // [rsp+70h] [rbp-9h]
  int v16; // [rsp+74h] [rbp-5h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-1h] BYREF

  result = EtwEventEnabled(EtwpMemoryProvRegHandle, &KERNEL_MEM_EVENT_MDL_ALLOCATION);
  if ( result )
  {
    DurationSince = EtwpGetDurationSince(a8);
    UserData.Reserved = 0;
    v14[0] = DurationSince;
    v15 = a6;
    v16 = a7;
    v14[1] = a5;
    UserData.Ptr = (ULONGLONG)v14;
    v14[5] = a1;
    v14[2] = a2;
    v14[3] = a3;
    v14[4] = a4;
    UserData.Size = 56;
    return EtwWriteEx(EtwpMemoryProvRegHandle, &KERNEL_MEM_EVENT_MDL_ALLOCATION, 0LL, 1u, 0LL, 0LL, 1u, &UserData);
  }
  return result;
}
