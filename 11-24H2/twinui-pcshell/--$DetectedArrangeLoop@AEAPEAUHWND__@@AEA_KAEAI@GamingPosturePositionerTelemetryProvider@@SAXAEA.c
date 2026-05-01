/*
 * XREFs of ??$DetectedArrangeLoop@AEAPEAUHWND__@@AEA_KAEAI@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@AEA_KAEAI@Z @ 0x1804F4C68
 * Callers:
 *     ?ArrangeViewForFullScreen@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1804FA678 (-ArrangeViewForFullScreen@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?OnShellTrackedWindowPosChanged@GamingPosturePositioner@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagRECT@@@Z @ 0x1805042F0 (-OnShellTrackedWindowPosChanged@GamingPosturePositioner@@UEAAXPEAUHWND__@@PEAUIApplicationView@@.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800CC51C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x180505628 (-Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

int __fastcall GamingPosturePositionerTelemetryProvider::DetectedArrangeLoop<HWND__ * &,unsigned __int64 &,unsigned int &>(
        __int64 *a1,
        __int64 *a2,
        int *a3)
{
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // rdx
  int v8; // r8d
  int v10; // [rsp+38h] [rbp-29h] BYREF
  __int64 v11; // [rsp+40h] [rbp-21h] BYREF
  __int64 v12; // [rsp+48h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+58h] [rbp-9h] BYREF
  __int64 *v14; // [rsp+78h] [rbp+17h]
  __int64 v15; // [rsp+80h] [rbp+1Fh]
  __int64 *v16; // [rsp+88h] [rbp+27h]
  __int64 v17; // [rsp+90h] [rbp+2Fh]
  int *v18; // [rsp+98h] [rbp+37h]
  __int64 v19; // [rsp+A0h] [rbp+3Fh]

  v6 = GamingPosturePositionerTelemetryProvider::Provider();
  if ( *(_DWORD *)v6 > 5u )
  {
    v7 = *a2;
    v8 = *a3;
    v12 = *a1;
    v18 = &v10;
    v16 = &v11;
    v14 = &v12;
    v10 = v8;
    v11 = v7;
    v19 = 4LL;
    v17 = 8LL;
    v15 = 8LL;
    LODWORD(v6) = tlgWriteTransfer_EventWriteTransfer((__int64)v6, byte_180807E87, 0LL, 0LL, 5u, &v13);
  }
  return (int)v6;
}
