/*
 * XREFs of ?ApertureCorruptionCheck@VIDMM_GLOBAL@@QEBAJ_N@Z @ 0x140043E48
 * Callers:
 *     ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@_N@Z @ 0x140093560 (-Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@_N@Z.c)
 * Callees:
 *     ?ApertureCorruptionCheck@VIDMM_PHYSICAL_ADAPTER@@QEBAJ_N@Z @ 0x14004AA44 (-ApertureCorruptionCheck@VIDMM_PHYSICAL_ADAPTER@@QEBAJ_N@Z.c)
 */

int __fastcall VIDMM_GLOBAL::ApertureCorruptionCheck(VIDMM_GLOBAL *this, bool a2)
{
  unsigned __int16 i; // bx
  int result; // eax

  for ( i = 0; (unsigned int)i < *((_DWORD *)this + 1736); ++i )
  {
    result = VIDMM_PHYSICAL_ADAPTER::ApertureCorruptionCheck(
               *(VIDMM_PHYSICAL_ADAPTER **)(*((_QWORD *)this + 5029) + 8LL * i),
               a2);
    if ( result < 0 )
      return result;
  }
  return 0;
}
