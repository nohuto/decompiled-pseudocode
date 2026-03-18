/*
 * XREFs of EtwTraceContFreeEvent @ 0x14038BB9C
 * Callers:
 *     MmFreeContiguousMemory @ 0x14038B3D0 (MmFreeContiguousMemory.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
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
