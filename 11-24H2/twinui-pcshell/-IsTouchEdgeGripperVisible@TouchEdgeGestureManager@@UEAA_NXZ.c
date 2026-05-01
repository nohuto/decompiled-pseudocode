/*
 * XREFs of ?IsTouchEdgeGripperVisible@TouchEdgeGestureManager@@UEAA_NXZ @ 0x18058D090
 * Callers:
 *     <none>
 * Callees:
 *     ??$IsTouchEdgeGripperVisible@AEA_N@TouchEdgeGestureTelemetry@@SAXAEA_N@Z @ 0x18058C2B0 (--$IsTouchEdgeGripperVisible@AEA_N@TouchEdgeGestureTelemetry@@SAXAEA_N@Z.c)
 *     ?IsGripperVisible@TouchEdgeGripperHost@@QEAA_NXZ @ 0x180595A90 (-IsGripperVisible@TouchEdgeGripperHost@@QEAA_NXZ.c)
 */

char __fastcall TouchEdgeGestureManager::IsTouchEdgeGripperVisible(TouchEdgeGripperHost **this)
{
  char v1; // bl
  bool IsGripperVisible; // [rsp+30h] [rbp+8h] BYREF

  IsGripperVisible = TouchEdgeGripperHost::IsGripperVisible(this[11]);
  v1 = IsGripperVisible;
  TouchEdgeGestureTelemetry::IsTouchEdgeGripperVisible<bool &>((char *)&IsGripperVisible);
  return v1;
}
