/*
 * XREFs of USBHwSyncGetStringDescriptor @ 0x14002D008
 * Callers:
 *     USBHwGetDeviceIDString @ 0x14002D384 (USBHwGetDeviceIDString.c)
 *     USBParseGetUnitString @ 0x1400381B4 (USBParseGetUnitString.c)
 *     USBCntrlGetDescriptor @ 0x140039280 (USBCntrlGetDescriptor.c)
 * Callees:
 *     USBHwGetDescriptor @ 0x14002D100 (USBHwGetDescriptor.c)
 */

__int64 __fastcall USBHwSyncGetStringDescriptor(
        int a1,
        unsigned __int8 a2,
        unsigned __int16 a3,
        _BYTE *a4,
        int a5,
        unsigned int *a6)
{
  int v7; // esi
  int v8; // ebp
  int Descriptor; // ecx
  unsigned int v12; // [rsp+48h] [rbp+10h] BYREF

  v7 = a3;
  v8 = a2;
  v12 = 4;
  if ( (int)USBHwGetDescriptor(a1, 3, a2, a3, (__int64)&v12, (__int64)a4) >= 0
    || (v12 = 255, Descriptor = USBHwGetDescriptor(a1, 3, v8, v7, (__int64)&v12, (__int64)a4), Descriptor >= 0) )
  {
    if ( v12 < 4 || *a4 <= 4u )
      return (unsigned int)-1073741668;
    v12 = (unsigned __int8)*a4;
    Descriptor = USBHwGetDescriptor(a1, 3, v8, v7, (__int64)&v12, (__int64)a4);
    if ( Descriptor < 0 )
      return (unsigned int)Descriptor;
    if ( v12 > 0xFF || v12 != (unsigned __int8)*a4 )
      return (unsigned int)-1073741668;
    if ( a6 )
      *a6 = v12;
  }
  return (unsigned int)Descriptor;
}
