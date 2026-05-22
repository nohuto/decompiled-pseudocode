/*
 * XREFs of ?SetTrackingEnabled@GazeDeviceCollection@@QEAAJKH@Z @ 0x1800D9E34
 * Callers:
 *     ?SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z @ 0x18006BFE0 (-SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z.c)
 * Callees:
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180068174 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TrySetTrackingEnabled@GazeHidDevice@@QEAAJ_N@Z @ 0x1800DD7B8 (-TrySetTrackingEnabled@GazeHidDevice@@QEAAJ_N@Z.c)
 */

__int64 __fastcall GazeDeviceCollection::SetTrackingEnabled(GazeDeviceCollection *this, int a2, int a3)
{
  int Device; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  GazeHidDevice *v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0LL;
  Device = RIMDeviceCollection::FindDevice(this, a2, 0LL, &v8, 0LL);
  if ( Device < 0 )
  {
    v5 = 239LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazedevicecollection.cpp",
      (const char *)(unsigned int)Device);
    return (unsigned int)Device;
  }
  Device = GazeHidDevice::TrySetTrackingEnabled(v8, a3 != 0);
  if ( Device < 0 )
  {
    v5 = 242LL;
    goto LABEL_3;
  }
  return 0LL;
}
