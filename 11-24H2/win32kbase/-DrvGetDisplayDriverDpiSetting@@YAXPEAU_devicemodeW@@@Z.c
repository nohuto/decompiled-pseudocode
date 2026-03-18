/*
 * XREFs of ?DrvGetDisplayDriverDpiSetting@@YAXPEAU_devicemodeW@@@Z @ 0x140013658
 * Callers:
 *     DrvGetDisplayDriverParameters @ 0x140012FAC (DrvGetDisplayDriverParameters.c)
 *     ?DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z @ 0x1400C7EA0 (-DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DrvGetDisplayDriverDpiSetting(struct _devicemodeW *a1)
{
  __int64 v2; // rax
  WORD v3; // ax

  v2 = *(_QWORD *)(W32GetSessionState() + 88);
  if ( *(_DWORD *)(v2 + 1112) )
    v3 = *(_WORD *)(v2 + 1080);
  else
    v3 = 96;
  a1->dmLogPixels = v3;
}
