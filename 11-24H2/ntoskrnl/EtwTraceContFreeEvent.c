/*
 * XREFs of EtwTraceContFreeEvent @ 0x140398504
 * Callers:
 *     MmFreeContiguousMemory @ 0x140398060 (MmFreeContiguousMemory.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

BOOLEAN __fastcall EtwTraceContFreeEvent(__int64 a1, __int64 a2)
{
  BOOLEAN result; // al
  _QWORD v5[2]; // [rsp+40h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-28h] BYREF

  result = EtwEventEnabled(EtwpMemoryProvRegHandle, &KERNEL_MEM_EVENT_CONT_FREE);
  if ( result )
  {
    v5[0] = a1;
    UserData.Ptr = (ULONGLONG)v5;
    v5[1] = a2;
    *(_QWORD *)&UserData.Size = 16LL;
    return EtwWriteEx(EtwpMemoryProvRegHandle, &KERNEL_MEM_EVENT_CONT_FREE, 0LL, 1u, 0LL, 0LL, 1u, &UserData);
  }
  return result;
}
