/*
 * XREFs of ?SnapToLocation@SnapServiceProvider@@UEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@W4SNAP_TO_LOCATION_FLAGS@@PEAUtagRECT@@@Z @ 0x1805A9360
 * Callers:
 *     ?SnapToLocation@SnapServiceProvider@@W7EAAJPEAUIApplicationView@@W4SNAP_LOCATION@@W4SNAP_TO_LOCATION_FLAGS@@PEAUtagRECT@@@Z @ 0x1805A9420 (-SnapToLocation@SnapServiceProvider@@W7EAAJPEAUIApplicationView@@W4SNAP_LOCATION@@W4SNAP_TO_LOCA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x18011C760 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?HandleDesktopModeSnapping@SnapServiceProvider@@AEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@W4SNAP_TO_LOCATION_FLAGS@@PEAUtagRECT@@@Z @ 0x1805A8E18 (-HandleDesktopModeSnapping@SnapServiceProvider@@AEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@W4SN.c)
 *     ?HandleTabletModeSnapping@SnapServiceProvider@@AEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@PEAUtagRECT@@@Z @ 0x1805A8F74 (-HandleTabletModeSnapping@SnapServiceProvider@@AEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@PEAUt.c)
 */

__int64 __fastcall SnapServiceProvider::SnapToLocation(TabletModeHelpers *a1, GUID *a2, int a3, char a4, _OWORD *a5)
{
  int v9; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a5 )
    *a5 = 0LL;
  if ( TabletModeHelpers::IsTabletMode(a1, (enum _TABLETMODESTATE *)a2) )
  {
    v9 = SnapServiceProvider::HandleTabletModeSnapping((__int64)a1, a2, a3, (__int64)a5);
    if ( v9 < 0 )
    {
      v10 = 62LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapserviceprovider.cpp",
        (const char *)(unsigned int)v9);
      return (unsigned int)v9;
    }
  }
  else
  {
    v9 = SnapServiceProvider::HandleDesktopModeSnapping((__int64)a1, (struct IApplicationView *)a2, a3, a4, a5);
    if ( v9 < 0 )
    {
      v10 = 66LL;
      goto LABEL_6;
    }
  }
  return 0LL;
}
