/*
 * XREFs of HalpValidPCISlot @ 0x14028182C
 * Callers:
 *     HalpReadPCIConfig @ 0x14028179C (HalpReadPCIConfig.c)
 *     HalpWritePCIConfig @ 0x14048FB0C (HalpWritePCIConfig.c)
 * Callees:
 *     HalpReadPCIConfig @ 0x14028179C (HalpReadPCIConfig.c)
 *     HalpWritePCIConfig @ 0x14048FB0C (HalpWritePCIConfig.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

char __fastcall HalpValidPCISlot(unsigned __int16 a1, __int64 a2, unsigned int a3)
{
  char v3; // si
  int v6; // ebx
  int v7; // edx
  __int64 v8; // [rsp+20h] [rbp-48h]
  _WORD v9[7]; // [rsp+30h] [rbp-38h] BYREF
  char v10; // [rsp+3Eh] [rbp-2Ah] BYREF

  v3 = a2;
  if ( a3 < 0x100 )
  {
    if ( (a3 & 0xE0) == 0 )
      return 1;
    v6 = a3 & 0x1F;
    LODWORD(v8) = 0;
    HalpReadPCIConfig(a1, a2, a3 & 0x1F, v9, v8, 0x10u);
    if ( v9[0] != 0xFFFF )
    {
      if ( v10 < 0 )
        return 1;
      if ( v9[0] == 0x8086 && v9[1] == 4654 )
      {
        v10 |= 0x80u;
        LOBYTE(v7) = v3;
        HalpWritePCIConfig(a1, v7, v6, (unsigned int)&v10, 14, 1);
        return 1;
      }
    }
  }
  return 0;
}
