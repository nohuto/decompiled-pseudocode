/*
 * XREFs of ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEBGAEBV10@@Z @ 0x1801BBE20
 * Callers:
 *     ?TriggerCompatBackupIfUserJsonImpacted@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX_N@Z @ 0x18029C068 (-TriggerCompatBackupIfUserJsonImpacted@AppBackupListener@implementation@Shell@Internal@Windows@w.c)
 *     ?LaunchSnippingToolApp@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x1803A3668 (-LaunchSnippingToolApp@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experie.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@U_String_constructor_concat_tag@1@AEBV01@QEBG_K23@Z @ 0x1801BC25C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@U_String_constructor_concat.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802CF544 (-_Xlen_string@std@@YAXXZ.c)
 */

void *__fastcall std::operator+<unsigned short>(void *a1, __int64 a2, _QWORD *Src)
{
  unsigned __int64 v4; // r9
  __int64 v5; // rcx

  v4 = -1LL;
  do
    ++v4;
  while ( *(_WORD *)(a2 + 2 * v4) );
  v5 = Src[2];
  if ( 0x7FFFFFFFFFFFFFFELL - v5 < v4 )
    std::_Xlen_string();
  if ( Src[3] > 7uLL )
    Src = (_QWORD *)*Src;
  std::wstring::wstring(a1, v4, Src, v5);
  return a1;
}
