/*
 * XREFs of ?GetDeviceInterfaceProperty@Adapters@@YAKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z @ 0x1800CBDF8
 * Callers:
 *     ?GetDeviceStringProperty@Details@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x1800CBA3C (-GetDeviceStringProperty@Details@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAV-$vector@V-$basic.c)
 * Callees:
 *     <none>
 */

CONFIGRET __fastcall Adapters::GetDeviceInterfaceProperty(
        Adapters *this,
        const DEVPROPKEY *a2,
        const struct _DEVPROPKEY *a3,
        BYTE *a4,
        PULONG PropertyBufferSize)
{
  return CM_Get_Device_Interface_PropertyW((LPCWSTR)this, a2, &a3->fmtid.Data1, a4, PropertyBufferSize, 0);
}
