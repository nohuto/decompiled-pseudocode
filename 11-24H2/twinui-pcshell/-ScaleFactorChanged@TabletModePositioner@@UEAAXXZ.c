/*
 * XREFs of ?ScaleFactorChanged@TabletModePositioner@@UEAAXXZ @ 0x18051CB70
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LayoutEnvironmentChanged@TabletModePositioner@@AEAAJXZ @ 0x18051BFF4 (-LayoutEnvironmentChanged@TabletModePositioner@@AEAAJXZ.c)
 */

void __fastcall TabletModePositioner::ScaleFactorChanged(IUnknown *this)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = TabletModePositioner::LayoutEnvironmentChanged(this - 14);
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x298,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v1);
}
