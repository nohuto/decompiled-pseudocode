/*
 * XREFs of HalpGetChipHacks @ 0x140C15AEC
 * Callers:
 *     HalpPiix4Detect @ 0x140B6C308 (HalpPiix4Detect.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall HalpGetChipHacks(__int16 a1, __int16 a2, unsigned __int8 a3, _DWORD *a4)
{
  __int64 i; // rax
  unsigned int v5; // ecx
  int v6; // ecx

  if ( !HalpErrataChipHacksInitialized )
    KeBugCheckEx(
      0x5Cu,
      0x8000uLL,
      (ULONG_PTR)"HalpGetChipHacks",
      (ULONG_PTR)"minkernel\\hals\\lib\\errata\\chiphacks.c",
      0x127uLL);
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= HalpChipHackCount )
      return 3221226021LL;
    if ( *(_WORD *)(HalpChipHacksTable + 8 * i) == a1 && *(_WORD *)(HalpChipHacksTable + 8 * i + 2) == a2 )
      break;
  }
  v5 = *(_DWORD *)(HalpChipHacksTable + 8 * i + 4);
  if ( a3 && HIBYTE(v5) && a3 >= HIBYTE(v5) )
    v5 >>= 12;
  v6 = v5 & 0xFFF;
  *a4 = v6;
  if ( (HalpWAETDeviceFlags & 2) != 0 )
    *a4 = v6 & 0xFFFFFFFE;
  return 0LL;
}
