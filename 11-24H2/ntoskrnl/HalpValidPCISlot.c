/*
 * XREFs of HalpValidPCISlot @ 0x1403AA71C
 * Callers:
 *     HalpReadPCIConfig @ 0x1403AA68C (HalpReadPCIConfig.c)
 *     HalpWritePCIConfig @ 0x14048963C (HalpWritePCIConfig.c)
 * Callees:
 *     HalpReadPCIConfig @ 0x1403AA68C (HalpReadPCIConfig.c)
 *     HalpWritePCIConfig @ 0x14048963C (HalpWritePCIConfig.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall HalpValidPCISlot(unsigned __int16 a1, char a2, unsigned int a3)
{
  unsigned int v6; // ebx
  int v7; // edx
  _WORD v8[7]; // [rsp+30h] [rbp-38h] BYREF
  char v9; // [rsp+3Eh] [rbp-2Ah] BYREF

  if ( a3 < 0x100 )
  {
    if ( (a3 & 0xE0) == 0 )
      return 1;
    v6 = a3 & 0x1F;
    HalpReadPCIConfig(a1, a2, v6, v8, 0, 0x10u);
    if ( v8[0] != 0xFFFF )
    {
      if ( v9 < 0 )
        return 1;
      if ( v8[0] == 0x8086 && v8[1] == 4654 )
      {
        v9 |= 0x80u;
        LOBYTE(v7) = a2;
        HalpWritePCIConfig(a1, v7, v6, (unsigned int)&v9, 14, 1);
        return 1;
      }
    }
  }
  return 0;
}
