/*
 * XREFs of ??$WindowEventDispatcher_CreatedLegacyWindowWrapper@PEBGPEBGAEAI@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG0AEAI@Z @ 0x18043100C
 * Callers:
 *     ??0LegacyWindowWrapper@@QEAA@PEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@3456@W4AppModelKind@3456@UAppViewId@3456@PEAUIWindow@3456@UWindowId@3456@PEBGW4WindowCreatedType@@@Z @ 0x1804311F4 (--0LegacyWindowWrapper@@QEAA@PEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@A.c)
 *     ??0LegacyUwpWindowWrapper@@QEAA@PEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@W4AppModelKind@WindowManagement@ApplicationModel@56@UUwpWindowContextId@3456@PEAUIWindow@9ApplicationModel@56@UWindowId@9ApplicationModel@56@PEBGW4WindowCreatedType@@_K@Z @ 0x180437494 (--0LegacyUwpWindowWrapper@@QEAA@PEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@Uwp.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18001B8F0 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?Provider@ViewManagerInteropLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800207E4 (-Provider@ViewManagerInteropLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

int __fastcall ViewManagerInteropTraceLogging::WindowEventDispatcher_CreatedLegacyWindowWrapper<unsigned short const *,unsigned short const *,unsigned int &>(
        const WCHAR **a1,
        const WCHAR **a2,
        unsigned int *a3)
{
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // r9
  const WCHAR *v8; // rdx
  __int64 v9; // r8
  const WCHAR *v11; // [rsp+40h] [rbp-18h] BYREF
  const WCHAR *v12; // [rsp+48h] [rbp-10h] BYREF
  int v13; // [rsp+78h] [rbp+20h] BYREF

  v6 = ViewManagerInteropLogging::Provider();
  if ( *(_DWORD *)v6 > 5u )
  {
    v8 = *a2;
    v9 = *a3;
    v12 = *a1;
    v11 = v8;
    v13 = v9;
    LODWORD(v6) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                    (__int64)v6,
                    byte_1807F88A7,
                    v9,
                    v7,
                    &v12,
                    &v11,
                    (__int64)&v13);
  }
  return (int)v6;
}
