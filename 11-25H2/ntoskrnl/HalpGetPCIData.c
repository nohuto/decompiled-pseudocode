/*
 * XREFs of HalpGetPCIData @ 0x140470DD8
 * Callers:
 *     HalGetBusDataByOffset @ 0x140470CB0 (HalGetBusDataByOffset.c)
 *     HalpPciReadSecondaryBusNumber @ 0x14054FFDC (HalpPciReadSecondaryBusNumber.c)
 * Callees:
 *     HalpReadPCIConfig @ 0x14028179C (HalpReadPCIConfig.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 */

__int64 __fastcall HalpGetPCIData(
        unsigned __int16 a1,
        __int64 a2,
        __int64 a3,
        char *a4,
        unsigned int a5,
        unsigned int Size)
{
  unsigned int v6; // r14d
  unsigned int v7; // ebp
  unsigned int v9; // ebx
  char v10; // r12
  unsigned int v11; // esi
  unsigned int v13; // esi
  __int64 v14; // rdx
  __int64 v16; // [rsp+20h] [rbp-A8h]
  __int64 v17; // [rsp+20h] [rbp-A8h]
  _WORD v18[32]; // [rsp+30h] [rbp-98h] BYREF

  v6 = a5;
  v7 = 4096;
  v9 = a3;
  if ( Size <= 0x1000 )
    v7 = Size;
  v10 = a2;
  v11 = 0;
  if ( a5 < 0x40 )
  {
    LODWORD(v16) = 0;
    HalpReadPCIConfig(a1, a2, a3, v18, v16, 0x40u);
    v13 = 2;
    if ( v18[0] != 0xFFFF )
      v13 = 64;
    if ( v13 >= a5 )
    {
      v11 = v13 - a5;
      if ( v11 > v7 )
        v11 = v7;
      memmove(a4, (char *)v18 + a5, v11);
      a4 += v11;
      v6 = v11 + a5;
      v7 -= v11;
      goto LABEL_10;
    }
    return 0LL;
  }
  LODWORD(v16) = 0;
  HalpReadPCIConfig(a1, a2, a3, v18, v16, 4u);
  if ( v18[0] == 0xFFFF )
    return 0LL;
LABEL_10:
  if ( v7 )
  {
    if ( v6 >= 0x40 )
    {
      LODWORD(v17) = v6;
      LOBYTE(v14) = v10;
      HalpReadPCIConfig(a1, v14, v9, a4, v17, v7);
      v11 += v7;
    }
  }
  return v11;
}
