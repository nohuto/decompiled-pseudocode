/*
 * XREFs of ?GetDeviceGUIDProperty@Details@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01PEAU_GUID@@@Z @ 0x1800CB868
 * Callers:
 *     ?IsHIDMouse@MouseProcessor@@AEAA_NPEBULegacyDeviceInfo@@@Z @ 0x180197F44 (-IsHIDMouse@MouseProcessor@@AEAA_NPEBULegacyDeviceInfo@@@Z.c)
 * Callees:
 *     ?GetDeviceNodeProperty@Adapters@@YAKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z @ 0x180034540 (-GetDeviceNodeProperty@Adapters@@YAKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Details::GetDeviceGUIDProperty(
        unsigned int (*a1)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *),
        Adapters *a2,
        const struct _DEVPROPKEY *a3,
        BYTE *a4)
{
  CONFIGRET DeviceNodeProperty; // eax
  signed int v5; // eax
  unsigned int v6; // ebx
  __int64 result; // rax
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  ULONG v10; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+44h] [rbp+Ch]
  int v12; // [rsp+50h] [rbp+18h] BYREF
  int v13; // [rsp+54h] [rbp+1Ch]

  v13 = HIDWORD(a3);
  v11 = HIDWORD(a1);
  v12 = 0;
  v10 = 16;
  DeviceNodeProperty = Adapters::GetDeviceNodeProperty(
                         a2,
                         &DEVPKEY_Device_BusTypeGuid,
                         (const struct _DEVPROPKEY *)&v12,
                         a4,
                         &v10);
  v5 = CM_MapCrToWin32Err(DeviceNodeProperty, 0x507u);
  v6 = v5;
  if ( v5 > 0 )
    v6 = (unsigned __int16)v5 | 0x80070000;
  result = 2147943568LL;
  if ( v6 != -2147023728 )
  {
    if ( (v6 & 0x80000000) != 0 )
    {
      v8 = 133LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\pnphelper\\lib\\details.cpp",
        (const char *)v6);
      return v6;
    }
    if ( v12 != 13 )
    {
      v6 = -2147418113;
      v8 = 135LL;
      goto LABEL_6;
    }
    return 0LL;
  }
  return result;
}
