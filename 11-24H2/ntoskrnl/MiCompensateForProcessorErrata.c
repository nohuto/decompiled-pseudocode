/*
 * XREFs of MiCompensateForProcessorErrata @ 0x140C59EE8
 * Callers:
 *     MiInitNucleus @ 0x140C51428 (MiInitNucleus.c)
 * Callees:
 *     strstr @ 0x1404FB270 (strstr.c)
 */

__int64 __fastcall MiCompensateForProcessorErrata(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 v2; // rdx
  __int64 result; // rax

  if ( (((MiFlags & 0xFFFFFFFFFF9FFFFFuLL | ((unsigned __int64)(KiKvaShadowMode & 3) << 21)) >> 21) & 3) != 0 )
  {
    switch ( ((MiFlags & 0xFFFFFFFFFF9FFFFFuLL | ((unsigned __int64)(KiKvaShadowMode & 3) << 21)) >> 21) & 3 )
    {
      case 1uLL:
        word_140E2EEC4 = 0;
        break;
      case 2uLL:
        word_140E2EEC4 = 256;
        break;
      case 3uLL:
        word_140E2EEC4 = 1;
        break;
    }
    if ( SpcImplementedPhysicalBits > 0 )
    {
      byte_140E01303 = 4;
      qword_140E2DCC0 = 1LL << ((unsigned __int8)SpcImplementedPhysicalBits - 1);
      byte_140E01302 = SpcImplementedPhysicalBits - 1;
    }
  }
  else
  {
    word_140E2EEC4 = 1;
  }
  v1 = MiFlags & 0xFFFFFFFFF39FFFFFuLL | ((unsigned __int64)(KiKvaShadowMode & 3) << 21) & 0xFFFFFFFFF3FFFFFFuLL | 0x8000000;
  MiFlags = v1;
  if ( KiAccessBitErrata == 1 )
  {
    v2 = v1 | 0x2000000;
  }
  else
  {
    if ( KiAccessBitErrata != 2 )
      goto LABEL_16;
    v2 = v1 & 0xFFFFFFFFF3FFFFFFuLL;
  }
  MiFlags = v2;
LABEL_16:
  if ( strstr(*(const char **)(a1 + 216), "NOACCESSBITREPLACEMENT") )
    MiFlags &= 0xFFFFFFFFF3FFFFFFuLL;
  result = MiFlags;
  if ( (((unsigned __int64)MiFlags >> 26) & 3) != 0 )
  {
    if ( (((unsigned __int64)MiFlags >> 26) & 3) == 1 )
    {
      byte_140E2DC09 = 1;
      goto LABEL_24;
    }
    if ( (((unsigned __int64)MiFlags >> 26) & 3) == 2 )
    {
      byte_140E2DC09 = -1;
      goto LABEL_24;
    }
  }
  byte_140E2DC09 = 0;
LABEL_24:
  if ( (KeFeatureBits & 0x200000) != 0 )
  {
    result = MiFlags | 0x100;
  }
  else
  {
    if ( (KeFeatureBits & 0x1000000) == 0 )
      goto LABEL_29;
    result = MiFlags | 0x200;
  }
  MiFlags = result;
LABEL_29:
  if ( (KeFeatureBits & 0x400000000000LL) != 0 )
  {
    result |= 0x1000000uLL;
    MiFlags = result;
  }
  return result;
}
