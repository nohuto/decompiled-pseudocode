/*
 * XREFs of ?GetDeviceGuidProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAU_GUID@@@Z @ 0x180034570
 * Callers:
 *     ?AddInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z @ 0x1800E5230 (-AddInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAVPnpDeviceWatcher@@PEAPEAV1@@Z @ 0x1800E55AC (-MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAVPnpDeviceWatcher@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAUHSTRING__@@@Z @ 0x1800346D0 (-GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAU.c)
 *     ?ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z @ 0x1800349D8 (-ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wcscmp_0 @ 0x1801CF184 (wcscmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall PnpApiWrapper::Details::GetDeviceGuidProperty(
        PnpApiWrapper::Details *this,
        unsigned int (*a2)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *),
        void *a3,
        const struct _DEVPROPKEY *a4)
{
  unsigned int v6; // eax
  unsigned int v7; // edx
  unsigned int v8; // edi
  int DeviceStringProperty; // eax
  unsigned int v10; // ebx
  HSTRING v11; // rcx
  const wchar_t *StringRawBuffer; // rax
  __int64 result; // rax
  HSTRING *v14; // [rsp+20h] [rbp-30h]
  int v15; // [rsp+30h] [rbp-20h] BYREF
  int v16; // [rsp+38h] [rbp-18h] BYREF
  HSTRING string; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  HSTRING v19; // [rsp+60h] [rbp+10h] BYREF

  v15 = 0;
  LODWORD(v19) = 16;
  v14 = &v19;
  v6 = ((__int64 (__fastcall *)(unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *), void *, int *))this)(
         a2,
         a3,
         &v15);
  v8 = v6;
  if ( !v6 )
    return 0LL;
  a4->fmtid = GUID_NULL;
  if ( v6 == 37 )
  {
    WindowsDeleteString(0LL);
    string = 0LL;
    v16 = *(_DWORD *)a2;
    DeviceStringProperty = PnpApiWrapper::Details::GetDeviceStringProperty(
                             (PnpApiWrapper::Details *)Adapters::GetDeviceNodeProperty,
                             (unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *))&v16,
                             (void *)&DEVPKEY_Device_InstanceId,
                             (const struct _DEVPROPKEY *)&string,
                             &v19);
    v10 = DeviceStringProperty;
    v11 = string;
    if ( string )
    {
      if ( DeviceStringProperty < 0 )
      {
LABEL_13:
        WindowsDeleteString(v11);
        return v10;
      }
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      if ( wcscmp_0(StringRawBuffer, L"HTREE\\ROOT\\0") )
      {
        WindowsDeleteString(string);
        goto LABEL_7;
      }
      v10 = 1;
    }
    else
    {
      if ( DeviceStringProperty < 0 )
        goto LABEL_13;
      v10 = -2147467259;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2FD,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
        (const char *)0x80004005LL,
        (int)v14);
    }
    v11 = string;
    goto LABEL_13;
  }
LABEL_7:
  v10 = PnpApiWrapper::Details::ConfigretToHresult((PnpApiWrapper::Details *)v8, v7);
  result = 2147943568LL;
  if ( v10 == -2147023728 )
    return result;
  if ( (v10 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x183,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
      (const char *)v10,
      (int)v14);
    return v10;
  }
  return 0LL;
}
