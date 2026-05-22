/*
 * XREFs of ?SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z @ 0x18006BE10
 * Callers:
 *     <none>
 * Callees:
 *     ?SendHeatDeviceCommand@HeatDeviceCollection@@QEAAJKPEAX@Z @ 0x18006BF90 (-SendHeatDeviceCommand@HeatDeviceCollection@@QEAAJKPEAX@Z.c)
 *     ?GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180078518 (-GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnTrackingRequestedHeartbeat@SpatialRimDeviceCollection@@QEAAJK@Z @ 0x1800D7E44 (-OnTrackingRequestedHeartbeat@SpatialRimDeviceCollection@@QEAAJK@Z.c)
 *     ?SetInputDeviceHapticsFeedback@SpatialRimDeviceCollection@@QEAAJKEEG@Z @ 0x1800D881C (-SetInputDeviceHapticsFeedback@SpatialRimDeviceCollection@@QEAAJKEEG@Z.c)
 *     ?OnButtonEnabledOnIdleChanged@MobileButtonDeviceCollection@@QEAAXKW4_Button@@_N@Z @ 0x1800DA56C (-OnButtonEnabledOnIdleChanged@MobileButtonDeviceCollection@@QEAAXKW4_Button@@_N@Z.c)
 *     ?SetTrackingEnabled@GazeDeviceCollection@@QEAAJKH@Z @ 0x1800DD024 (-SetTrackingEnabled@GazeDeviceCollection@@QEAAJKH@Z.c)
 */

__int64 __fastcall RIMRawInputProvider::SendCommandToInputDevice(RIMRawInputProvider *this, unsigned int a2, void **a3)
{
  HeatDeviceCollection *v4; // r9
  __int64 i; // rcx
  __int64 v6; // r8
  int v7; // ebx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // r11
  unsigned int v14; // edx
  __int64 v15; // r10
  unsigned int v16; // edx
  __int64 v17; // r10
  __int64 v18; // r11
  unsigned int v19; // edx
  __int64 v20; // r10
  __int64 v21; // r11
  int v22; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct DeviceInfo *v24; // [rsp+50h] [rbp+18h] BYREF

  switch ( *(_DWORD *)a3 )
  {
    case 1:
      v4 = (HeatDeviceCollection *)*((_QWORD *)this + 10);
      for ( i = 0LL; (unsigned int)i < 0x100; i = (unsigned int)(i + 1) )
      {
        v6 = *((_QWORD *)v4 + i + 78);
        if ( v6 && (!*(_QWORD *)(v6 + 16) || *(_DWORD *)(v6 + 40) == a2) )
        {
          v7 = HeatDeviceCollection::SendHeatDeviceCommand(v4, a2, a3[1]);
          if ( v7 >= 0 )
            return 0LL;
          v9 = 353LL;
          goto LABEL_28;
        }
      }
      return 0LL;
    case 2:
      if ( (int)RIMDeviceCollection::GetDeviceInfo(*((RIMDeviceCollection **)this + 7), a2, &v24) >= 0 )
      {
        v7 = SpatialRimDeviceCollection::SetInputDeviceHapticsFeedback(
               *(SpatialRimDeviceCollection **)(v20 + 56),
               v19,
               *(_BYTE *)(v21 + 8),
               *(_BYTE *)(v21 + 9),
               *(_WORD *)(v21 + 10));
        if ( v7 < 0 )
        {
          v9 = 371LL;
          goto LABEL_28;
        }
      }
      return 0LL;
    case 3:
      if ( (int)RIMDeviceCollection::GetDeviceInfo(*((RIMDeviceCollection **)this + 11), a2, &v24) >= 0 )
      {
        v7 = GazeDeviceCollection::SetTrackingEnabled(*(GazeDeviceCollection **)(v17 + 88), v16, *(_DWORD *)(v18 + 8));
        if ( v7 < 0 )
        {
          v9 = 386LL;
          goto LABEL_28;
        }
      }
      return 0LL;
    case 4:
      if ( (int)RIMDeviceCollection::GetDeviceInfo(*((RIMDeviceCollection **)this + 7), a2, &v24) >= 0 )
      {
        v7 = SpatialRimDeviceCollection::OnTrackingRequestedHeartbeat(*(SpatialRimDeviceCollection **)(v15 + 56), v14);
        if ( v7 < 0 )
        {
          v9 = 401LL;
          goto LABEL_28;
        }
      }
      return 0LL;
    case 6:
      if ( (int)RIMDeviceCollection::GetDeviceInfo(*((RIMDeviceCollection **)this + 5), a2, &v24) >= 0 )
      {
        LOBYTE(v11) = *(_DWORD *)(v13 + 12) != 0;
        MobileButtonDeviceCollection::OnButtonEnabledOnIdleChanged(
          *(_QWORD *)(v12 + 40),
          v10,
          *(unsigned int *)(v13 + 8),
          v11);
      }
      return 0LL;
  }
  v7 = -2147467263;
  v9 = 427LL;
LABEL_28:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimrawinputprovider.cpp",
    (const char *)(unsigned int)v7,
    v22);
  return (unsigned int)v7;
}
