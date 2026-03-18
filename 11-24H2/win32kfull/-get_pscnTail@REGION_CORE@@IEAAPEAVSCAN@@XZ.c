/*
 * XREFs of ?get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400A345C
 * Callers:
 *     ?bFindFirstScan@XCLIPOBJ@@IEAAHXZ @ 0x1400A2458 (-bFindFirstScan@XCLIPOBJ@@IEAAHXZ.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400A315C (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 * Callees:
 *     ?RegionCore_get_pscnTail_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x1400A360C (-RegionCore_get_pscnTail_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     ??$IsBaseRustExportsEnabled@$00@@YA_NXZ @ 0x1400CFC10 (--$IsBaseRustExportsEnabled@$00@@YA_NXZ.c)
 */

struct SCAN *__fastcall REGION_CORE::get_pscnTail(REGION_CORE *this)
{
  struct REGION_CORE *v2; // rdx

  if ( (unsigned __int8)IsBaseRustExportsEnabled<1>() )
    return Win32kRS::RegionCore_get_pscnTail_mut(this, v2);
  else
    return (struct SCAN *)(*(_QWORD *)this + *((_QWORD *)this + 2));
}
