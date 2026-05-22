/*
 * XREFs of ?GetDeviceInstanceId@PnpApiWrapper@@YAJPEAUHSTRING__@@AEAPEAU2@@Z @ 0x1800344D8
 * Callers:
 *     ?FindDeviceListEntryByInterfacePath@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x180034410 (-FindDeviceListEntryByInterfacePath@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEnt.c)
 * Callees:
 *     ?GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAUHSTRING__@@@Z @ 0x1800346D0 (-GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAU.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall PnpApiWrapper::GetDeviceInstanceId(PnpApiWrapper *this, const struct _DEVPROPKEY *a2, HSTRING *a3)
{
  __int64 result; // rax
  HSTRING *v5; // [rsp+20h] [rbp-8h]
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PnpApiWrapper *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = this;
  result = PnpApiWrapper::Details::GetDeviceStringProperty(
             (PnpApiWrapper::Details *)PnpApiWrapper::Adapters::GetDeviceInterfaceProperty,
             (unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *))&v8,
             (void *)&DEVPKEY_Device_InstanceId,
             a2,
             v5);
  if ( !*(_QWORD *)&a2->fmtid.Data1 && (int)result >= 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x311,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
      (const char *)0x80004005LL,
      v6);
    return 2147500037LL;
  }
  return result;
}
