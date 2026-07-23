/*
 * XREFs of HalpPciIsAddressWithinMcfg @ 0x14042AE70
 * Callers:
 *     HalpPciGetDeviceLocationFromPhysicalAddress @ 0x14042AE30 (HalpPciGetDeviceLocationFromPhysicalAddress.c)
 * Callees:
 *     <none>
 */

char __fastcall HalpPciIsAddressWithinMcfg(unsigned __int64 a1, _WORD *a2, _BYTE *a3, int *a4)
{
  unsigned int i; // eax
  __int64 v7; // r11
  unsigned __int64 v8; // r9
  __int64 v9; // rcx

  for ( i = 0; ; ++i )
  {
    if ( i >= HalpPciMcfgTableCount )
      return 0;
    v7 = HalpPciMcfgTable + 16LL * i;
    v8 = *(_QWORD *)(v7 + 44);
    if ( a1 >= v8
      && a1 < v8 + ((*(unsigned __int8 *)(v7 + 55) - (unsigned int)*(unsigned __int8 *)(v7 + 54) + 1) << 20)
      && (!HalpPciUseNvidiaAlternateAddress || (a1 & 0xF00) == 0) )
    {
      break;
    }
  }
  v9 = a1 - v8;
  *a2 = *(_WORD *)(v7 + 52);
  *a3 = v9 >> 20;
  *a4 = ((unsigned __int8)*a4 ^ ((unsigned __int8)*a4 ^ (unsigned __int8)(v9 >> 15)) & 0x1F) & 0x1F ^ (unsigned __int8)(32 * (v9 >> 12));
  return 1;
}
