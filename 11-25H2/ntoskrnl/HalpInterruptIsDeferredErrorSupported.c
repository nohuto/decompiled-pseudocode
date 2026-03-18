/*
 * XREFs of HalpInterruptIsDeferredErrorSupported @ 0x14053FCB4
 * Callers:
 *     HalpIsCmciImplemented @ 0x140B3C2F4 (HalpIsCmciImplemented.c)
 * Callees:
 *     HalpInterruptFindLines @ 0x140445644 (HalpInterruptFindLines.c)
 *     HalpGetCpuInfo @ 0x14048D3A0 (HalpGetCpuInfo.c)
 */

bool HalpInterruptIsDeferredErrorSupported()
{
  char CpuInfo; // al
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF
  int v3; // [rsp+34h] [rbp+Ch]

  LOBYTE(v2) = 0;
  CpuInfo = HalpGetCpuInfo(0LL, 0LL, 0LL, (unsigned __int8 *)&v2);
  if ( ((unsigned __int8)v2 & (unsigned __int8)-(CpuInfo != 0)) != 1 || *(_DWORD *)(HalpInterruptController + 240) != 2 )
    return 0;
  v2 = *(_DWORD *)(HalpInterruptController + 256);
  v3 = -8;
  return HalpInterruptFindLines(&v2) != 0LL;
}
