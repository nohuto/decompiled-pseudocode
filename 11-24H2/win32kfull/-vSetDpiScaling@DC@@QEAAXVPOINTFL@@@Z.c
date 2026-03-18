/*
 * XREFs of ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1401481EC
 * Callers:
 *     GreSelectRedirectionBitmap @ 0x1400CD670 (GreSelectRedirectionBitmap.c)
 *     GreHintDCWnd @ 0x1400CDA90 (GreHintDCWnd.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x140148174 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 * Callees:
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x14014823C (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1401482C8 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 */

__int64 __fastcall DC::vSetDpiScaling(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 520) |= 5u;
  *(_DWORD *)(a1 + 36) |= 0x10u;
  *(_QWORD *)(a1 + 524) = a2;
  DC::vUpdateCachedDPIScaleValue((DC *)a1);
  result = DC::bDpiScaledSurface((DC *)a1);
  if ( (_DWORD)result )
  {
    result = *(_QWORD *)(a1 + 496);
    *(_QWORD *)(a1 + 532) = *(_QWORD *)(result + 668);
  }
  return result;
}
