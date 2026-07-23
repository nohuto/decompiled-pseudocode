/*
 * XREFs of EtwTraceContAllocationEvent @ 0x1403960E8
 * Callers:
 *     MiAllocateContiguousMemory @ 0x140395A6C (MiAllocateContiguousMemory.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwpGetDurationSince @ 0x14039623C (EtwpGetDurationSince.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

BOOLEAN __fastcall EtwTraceContAllocationEvent(
        PVOID BaseAddress,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        unsigned __int8 a11,
        int a12,
        __int64 a13)
{
  BOOLEAN result; // al
  PHYSICAL_ADDRESS PhysicalAddress; // rbx
  _QWORD v19[7]; // [rsp+48h] [rbp-79h] BYREF
  int v20; // [rsp+80h] [rbp-41h]
  int v21; // [rsp+84h] [rbp-3Dh]
  int v22; // [rsp+88h] [rbp-39h]
  int v23; // [rsp+8Ch] [rbp-35h]
  int v24; // [rsp+90h] [rbp-31h]
  int v25; // [rsp+94h] [rbp-2Dh]
  int v26; // [rsp+98h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A8h] [rbp-19h] BYREF

  result = EtwEventEnabled(EtwpMemoryProvRegHandle, &KERNEL_MEM_EVENT_CONT_ALLOCATION);
  if ( result )
  {
    PhysicalAddress.QuadPart = -1LL;
    if ( BaseAddress )
      PhysicalAddress = MmGetPhysicalAddress(BaseAddress);
    v26 = 0;
    UserData.Reserved = 0;
    v19[0] = EtwpGetDurationSince(a13);
    v19[4] = a5 << 12;
    v20 = a6;
    v21 = a7;
    v22 = a8;
    v23 = a9;
    v24 = a10;
    v25 = a11;
    UserData.Ptr = (ULONGLONG)v19;
    v19[1] = a2;
    v19[2] = a3 << 12;
    v19[3] = (a4 << 12) | 0xFFF;
    v19[5] = PhysicalAddress.QuadPart;
    v19[6] = BaseAddress;
    UserData.Size = 84;
    return EtwWriteEx(EtwpMemoryProvRegHandle, &KERNEL_MEM_EVENT_CONT_ALLOCATION, 0LL, 1u, 0LL, 0LL, 1u, &UserData);
  }
  return result;
}
