/*
 * XREFs of ?xxxGetArrangeRectFromHitTarget@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind@@W4THRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x140269330
 * Callers:
 *     ?xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@2@Z @ 0x14024C8C0 (-xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x140025C9C (GetMonitorWorkRectForWindow.c)
 *     ?xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind@@PEAUtagRECT@@@Z @ 0x140187530 (-xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind.c)
 */

char __fastcall xxxGetArrangeRectFromHitTarget(__int64 a1, __int64 a2, unsigned int a3, int a4, int *a5)
{
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  char v14[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( xxxGetArrangeRectFromShell(a1, a2, a3, a5) )
    return 1;
  if ( !a4 )
  {
    *(_OWORD *)a5 = *(_OWORD *)GetMonitorWorkRectForWindow((__int64)v14, a2, *(const struct tagWND **)(a1 + 16));
    v9 = *(_DWORD *)(a1 + 116);
    v10 = a5[1];
    if ( v9 >= a5[3] - v10 )
      v9 = a5[3] - v10;
    if ( *(_DWORD *)(a1 + 108) > v9 )
      v9 = *(_DWORD *)(a1 + 108);
    v11 = v10 + v9;
    v12 = *a5;
    a5[3] = v11;
    v13 = *(_DWORD *)(a1 + 112);
    if ( v13 >= a5[2] - v12 )
      v13 = a5[2] - v12;
    if ( *(_DWORD *)(a1 + 104) > v13 )
      v13 = *(_DWORD *)(a1 + 104);
    a5[2] = v12 + v13;
    return 1;
  }
  return 0;
}
