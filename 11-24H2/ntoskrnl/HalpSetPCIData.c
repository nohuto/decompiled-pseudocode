/*
 * XREFs of HalpSetPCIData @ 0x140489544
 * Callers:
 *     HalSetBusDataByOffset @ 0x140489430 (HalSetBusDataByOffset.c)
 * Callees:
 *     HalpReadPCIConfig @ 0x1403AA68C (HalpReadPCIConfig.c)
 *     HalpWritePCIConfig @ 0x14048963C (HalpWritePCIConfig.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall HalpSetPCIData(
        unsigned __int16 a1,
        char a2,
        unsigned int a3,
        const void *a4,
        unsigned int a5,
        size_t Size)
{
  unsigned int v6; // r12d
  unsigned int v7; // r14d
  char v9; // di
  unsigned int v10; // r15d
  int v12; // edx
  unsigned int v13; // eax
  int v15; // edx
  _OWORD v18[4]; // [rsp+40h] [rbp-89h] BYREF
  _OWORD v19[4]; // [rsp+80h] [rbp-49h] BYREF

  v6 = a5;
  v7 = 4096;
  v9 = a2;
  if ( (unsigned int)Size <= 0x1000 )
    v7 = Size;
  v10 = 0;
  if ( a5 < 0x40 )
  {
    HalpReadPCIConfig(a1, a2, a3, v18, 0, 0x40u);
    if ( LOWORD(v18[0]) != 0xFFFF && (BYTE14(v18[0]) & 0x7F) == 0 )
    {
      v10 = 64 - a5;
      v19[0] = v18[0];
      if ( 64 - a5 > v7 )
        v10 = v7;
      v19[1] = v18[1];
      v19[2] = v18[2];
      v19[3] = v18[3];
      memmove((char *)v19 + a5, a4, v10);
      v9 = a2;
      LOBYTE(v15) = a2;
      HalpWritePCIConfig(a1, v15, a3, (unsigned int)v19 + a5, a5, v10);
      v6 = v10 + a5;
      v13 = v10 + (_DWORD)a4;
      v7 -= v10;
      goto LABEL_6;
    }
    return 0LL;
  }
  HalpReadPCIConfig(a1, a2, a3, v18, 0, 4u);
  if ( LOWORD(v18[0]) == 0xFFFF )
    return 0LL;
  v13 = (unsigned int)a4;
LABEL_6:
  if ( v7 )
  {
    if ( v6 >= 0x40 )
    {
      LOBYTE(v12) = v9;
      HalpWritePCIConfig(a1, v12, a3, v13, v6, v7);
      v10 += v7;
    }
  }
  return v10;
}
