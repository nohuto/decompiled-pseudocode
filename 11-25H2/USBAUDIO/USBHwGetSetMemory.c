/*
 * XREFs of USBHwGetSetMemory @ 0x140035C10
 * Callers:
 *     USBHwGetMicArrayDescriptor @ 0x140035758 (USBHwGetMicArrayDescriptor.c)
 *     USBCntrlGetSetMem @ 0x140039A00 (USBCntrlGetSetMem.c)
 * Callees:
 *     USBHwGetSetProperty @ 0x14003BFD0 (USBHwGetSetProperty.c)
 */

__int64 __fastcall USBHwGetSetMemory(
        int a1,
        unsigned __int8 a2,
        char a3,
        int a4,
        __int16 a5,
        __int16 a6,
        int a7,
        __int64 a8)
{
  __int16 v9; // [rsp+30h] [rbp-28h]

  v9 = a4;
  LOBYTE(a4) = a2;
  return USBHwGetSetProperty(a1, (a3 != 0) + 27, a2 >> 7, a4, 0, a6, v9, a5, a8, a7);
}
