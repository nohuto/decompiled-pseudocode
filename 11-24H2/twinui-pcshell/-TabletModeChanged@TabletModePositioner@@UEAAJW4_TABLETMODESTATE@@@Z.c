/*
 * XREFs of ?TabletModeChanged@TabletModePositioner@@UEAAJW4_TABLETMODESTATE@@@Z @ 0x18051FF30
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ @ 0x18051B87C (-InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ.c)
 *     ?SetTabletMode@TabletModePositioner@@AEAAXW4_TABLETMODESTATE@@@Z @ 0x18051CBA8 (-SetTabletMode@TabletModePositioner@@AEAAXW4_TABLETMODESTATE@@@Z.c)
 */

__int64 __fastcall TabletModePositioner::TabletModeChanged(__int64 a1, int a2)
{
  IUnknown **v4; // rdi
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 88) != 1 )
    return 2147947423LL;
  if ( a2 != *(_DWORD *)(a1 + 92) )
  {
    v4 = (IUnknown **)(a1 - 144);
    TabletModePositioner::SetTabletMode(a1 - 144, a2);
    if ( *(_DWORD *)(a1 + 92) == 1 )
    {
      v5 = TabletModePositioner::InitializeAppLayoutForTabletModeEntry(v4);
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x49C,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v5);
      *(_BYTE *)(a1 + 96) = 1;
    }
  }
  return 0LL;
}
