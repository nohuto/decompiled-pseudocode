/*
 * XREFs of ?TabletModeChanged@FullScreenPositioner@@UEAAJW4_TABLETMODESTATE@@@Z @ 0x180325C50
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18009B530 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@Z @ 0x180324FB0 (-PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@.c)
 */

__int64 __fastcall FullScreenPositioner::TabletModeChanged(__int64 a1, int a2)
{
  bool v3; // zf
  __int64 v4; // rsi
  struct IApplicationView *v5; // rdx
  struct IApplicationView **v6; // rbp
  struct IApplicationView **i; // rdi

  if ( *(_DWORD *)(a1 + 180) )
  {
    v3 = a2 == 1;
    v4 = a1 - 152;
    v5 = *(struct IApplicationView **)(a1 + 72);
    *(_BYTE *)(a1 + 240) = v3;
    if ( v5 )
      FullScreenPositioner::PositionView(a1 - 152, v5, 0LL, 1u);
    v6 = *(struct IApplicationView ***)(a1 + 88);
    for ( i = *(struct IApplicationView ***)(a1 + 80); i != v6; ++i )
    {
      if ( !SHIsSameObject(*(struct IUnknown **)(a1 + 72), (struct IUnknown *)*i) )
        FullScreenPositioner::PositionView(v4, *i, 2LL, 1u);
    }
  }
  return 0LL;
}
