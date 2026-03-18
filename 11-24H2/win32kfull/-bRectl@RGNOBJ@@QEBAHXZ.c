/*
 * XREFs of ?bRectl@RGNOBJ@@QEBAHXZ @ 0x1400CE7DC
 * Callers:
 *     ?vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z @ 0x14032BD28 (-vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z.c)
 * Callees:
 *     ?RegionCore_is_rect@Win32kRS@@YAHPEBVREGION_CORE@@@Z @ 0x1400CE83C (-RegionCore_is_rect@Win32kRS@@YAHPEBVREGION_CORE@@@Z.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x1400CE8CC (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 */

__int64 __fastcall RGNOBJ::bRectl(RGNOBJ *this)
{
  Win32kRS *v1; // rbx
  const struct REGION_CORE *v2; // rdx
  unsigned int v3; // edi

  v1 = (Win32kRS *)((*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL));
  v3 = 0;
  if ( GetBaseRustGlobals() )
    LOBYTE(v3) = (unsigned int)Win32kRS::RegionCore_is_rect(v1, v2) != 0;
  else
    LOBYTE(v3) = REGION_CORE::get_sizeScan(v1) == 56;
  return v3;
}
