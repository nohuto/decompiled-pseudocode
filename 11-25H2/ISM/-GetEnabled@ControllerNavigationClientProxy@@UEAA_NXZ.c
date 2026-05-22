/*
 * XREFs of ?GetEnabled@ControllerNavigationClientProxy@@UEAA_NXZ @ 0x1801761D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTouchEnabled@BamoShellGesturesClientProxy@@UEAA_NXZ @ 0x180077490 (-GetTouchEnabled@BamoShellGesturesClientProxy@@UEAA_NXZ.c)
 */

char __fastcall ControllerNavigationClientProxy::GetEnabled(ControllerNavigationClientProxy *this)
{
  bool TouchEnabled; // al
  char v3; // dl

  TouchEnabled = BamoShellGesturesClientProxy::GetTouchEnabled(this);
  v3 = 0;
  if ( TouchEnabled )
    return *((_BYTE *)this + 80) == 0;
  return v3;
}
