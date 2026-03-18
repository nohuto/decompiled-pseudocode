/*
 * XREFs of HalpSetPCIData @ 0x14048FA14
 * Callers:
 *     HalSetBusDataByOffset @ 0x14048F900 (HalSetBusDataByOffset.c)
 * Callees:
 *     HalpReadPCIConfig @ 0x14028179C (HalpReadPCIConfig.c)
 *     HalpWritePCIConfig @ 0x14048FB0C (HalpWritePCIConfig.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 */

__int64 __fastcall HalpSetPCIData(
        unsigned __int16 a1,
        __int64 a2,
        __int64 a3,
        const void *a4,
        unsigned int a5,
        size_t Size)
{
  unsigned int v6; // r12d
  unsigned int v7; // r14d
  int v8; // ebx
  char v9; // di
  unsigned int v10; // r15d
  int v12; // edx
  unsigned int v13; // eax
  int v15; // edx
  __int64 v16; // [rsp+20h] [rbp-A9h]
  char v17; // [rsp+30h] [rbp-99h]
  _OWORD v19[4]; // [rsp+40h] [rbp-89h] BYREF
  _OWORD v20[4]; // [rsp+80h] [rbp-49h] BYREF

  v6 = a5;
  v7 = 4096;
  v8 = a3;
  v9 = a2;
  if ( (unsigned int)Size <= 0x1000 )
    v7 = Size;
  v10 = 0;
  v17 = a2;
  if ( a5 < 0x40 )
  {
    LODWORD(v16) = 0;
    HalpReadPCIConfig(a1, a2, a3, v19, v16, 0x40u);
    if ( LOWORD(v19[0]) != 0xFFFF && (BYTE14(v19[0]) & 0x7F) == 0 )
    {
      v10 = 64 - a5;
      v20[0] = v19[0];
      if ( 64 - a5 > v7 )
        v10 = v7;
      v20[1] = v19[1];
      v20[2] = v19[2];
      v20[3] = v19[3];
      memmove((char *)v20 + a5, a4, v10);
      v9 = v17;
      LOBYTE(v15) = v17;
      HalpWritePCIConfig(a1, v15, v8, (unsigned int)v20 + a5, a5, v10);
      v6 = v10 + a5;
      v13 = v10 + (_DWORD)a4;
      v7 -= v10;
      goto LABEL_6;
    }
    return 0LL;
  }
  LODWORD(v16) = 0;
  HalpReadPCIConfig(a1, a2, a3, v19, v16, 4u);
  if ( LOWORD(v19[0]) == 0xFFFF )
    return 0LL;
  v13 = (unsigned int)a4;
LABEL_6:
  if ( v7 )
  {
    if ( v6 >= 0x40 )
    {
      LOBYTE(v12) = v9;
      HalpWritePCIConfig(a1, v12, v8, v13, v6, v7);
      v10 += v7;
    }
  }
  return v10;
}
