/*
 * XREFs of HalpPciReadSecondaryBusNumber @ 0x1405528DC
 * Callers:
 *     HalpPciConvertDevicePathToRid @ 0x140552828 (HalpPciConvertDevicePathToRid.c)
 * Callees:
 *     HalpGetPCIData @ 0x14026640C (HalpGetPCIData.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall HalpPciReadSecondaryBusNumber(unsigned __int16 a1, char a2, char a3, char a4, unsigned __int8 *a5)
{
  int v9; // r8d
  unsigned int v10; // ebx
  char v12[25]; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int8 v13; // [rsp+49h] [rbp-5Fh]
  unsigned __int8 v14; // [rsp+4Ah] [rbp-5Eh]

  memset_0(v12, 0, 0x40uLL);
  v9 = 32 * (a4 & 7);
  v10 = 0;
  if ( (unsigned int)HalpGetPCIData(a1, a2, a3 & 0x1F | (unsigned int)v9, v12, 0, 0x40u) == 64 )
  {
    if ( (v12[14] & 0x7F) == 1 && v13 > (unsigned int)v12[24] && v14 >= v13 )
      *a5 = v13;
    else
      return (unsigned int)-1073741810;
  }
  else
  {
    return (unsigned int)-1073740669;
  }
  return v10;
}
