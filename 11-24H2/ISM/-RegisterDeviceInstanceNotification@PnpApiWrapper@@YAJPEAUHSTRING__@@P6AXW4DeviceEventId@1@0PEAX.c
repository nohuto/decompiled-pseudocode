/*
 * XREFs of ?RegisterDeviceInstanceNotification@PnpApiWrapper@@YAJPEAUHSTRING__@@P6AXW4DeviceEventId@1@0PEAX@Z2AEAPEAX@Z @ 0x1800E6A00
 * Callers:
 *     ?Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z @ 0x18008D4BC (-Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ?RegisterDeviceEventHandler@Details@PnpApiWrapper@@YAJAEAU_CM_NOTIFY_FILTER@@P6AXW4DeviceEventId@2@PEAUHSTRING__@@PEAX@Z3AEAPEAX@Z @ 0x1800E6864 (-RegisterDeviceEventHandler@Details@PnpApiWrapper@@YAJAEAU_CM_NOTIFY_FILTER@@P6AXW4DeviceEventId.c)
 */

__int64 __fastcall PnpApiWrapper::RegisterDeviceInstanceNotification(
        PnpApiWrapper *this,
        HSTRING a2,
        void (__high *a3)(enum PnpApiWrapper::DeviceEventId, HSTRING, void *),
        _QWORD *a4)
{
  PCWSTR StringRawBuffer; // rax
  struct _CM_NOTIFY_FILTER *v8; // rdx
  UINT32 length[4]; // [rsp+20h] [rbp-1C8h] BYREF
  _DWORD v10[3]; // [rsp+30h] [rbp-1B8h] BYREF
  _BYTE v11[4]; // [rsp+3Ch] [rbp-1ACh] BYREF
  _BYTE v12[400]; // [rsp+40h] [rbp-1A8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+0h]

  memset_0(v11, 0, 0x194uLL);
  length[0] = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(0LL, length);
  if ( length[0] < 0xC8 )
  {
    v10[0] = 416;
    v10[2] = 2;
    v10[1] = length[0] != 0 ? 0 : 2;
    _o_wcscpy_s(v12, 200LL, StringRawBuffer);
    return PnpApiWrapper::Details::RegisterDeviceEventHandler((PnpApiWrapper::Details *)v10, v8, a3, a4);
  }
  else
  {
    *a4 = 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x393,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
