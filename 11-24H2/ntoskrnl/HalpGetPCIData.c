/*
 * XREFs of HalpGetPCIData @ 0x14026640C
 * Callers:
 *     HalGetBusDataByOffset @ 0x140488FB0 (HalGetBusDataByOffset.c)
 *     HalpPciReadSecondaryBusNumber @ 0x1405528DC (HalpPciReadSecondaryBusNumber.c)
 * Callees:
 *     HalpReadPCIConfig @ 0x14026566C (HalpReadPCIConfig.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 */

__int64 __fastcall HalpGetPCIData(
        unsigned __int16 a1,
        char a2,
        unsigned int a3,
        char *a4,
        unsigned int a5,
        unsigned int Size)
{
  unsigned int v6; // r14d
  unsigned int v7; // ebp
  unsigned int v11; // esi
  unsigned int v13; // esi
  _WORD v15[32]; // [rsp+30h] [rbp-98h] BYREF

  v6 = a5;
  v7 = 4096;
  if ( Size <= 0x1000 )
    v7 = Size;
  v11 = 0;
  if ( a5 < 0x40 )
  {
    HalpReadPCIConfig(a1, a2, a3, v15, 0, 0x40u);
    v13 = 2;
    if ( v15[0] != 0xFFFF )
      v13 = 64;
    if ( v13 >= a5 )
    {
      v11 = v13 - a5;
      if ( v11 > v7 )
        v11 = v7;
      memmove(a4, (char *)v15 + a5, v11);
      a4 += v11;
      v6 = v11 + a5;
      v7 -= v11;
      goto LABEL_10;
    }
    return 0LL;
  }
  HalpReadPCIConfig(a1, a2, a3, v15, 0, 4u);
  if ( v15[0] == 0xFFFF )
    return 0LL;
LABEL_10:
  if ( v7 )
  {
    if ( v6 >= 0x40 )
    {
      HalpReadPCIConfig(a1, a2, a3, a4, v6, v7);
      v11 += v7;
    }
  }
  return v11;
}
