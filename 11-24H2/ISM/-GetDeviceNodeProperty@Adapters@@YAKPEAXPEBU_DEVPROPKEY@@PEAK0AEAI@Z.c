/*
 * XREFs of ?GetDeviceNodeProperty@Adapters@@YAKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z @ 0x180034540
 * Callers:
 *     ?GetDeviceGUIDProperty@Details@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01PEAU_GUID@@@Z @ 0x1800CB868 (-GetDeviceGUIDProperty@Details@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01PEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

CONFIGRET __fastcall Adapters::GetDeviceNodeProperty(
        Adapters *this,
        const DEVPROPKEY *a2,
        const struct _DEVPROPKEY *a3,
        BYTE *a4,
        PULONG PropertyBufferSize)
{
  return CM_Get_DevNode_PropertyW(this->numAdapters, a2, &a3->fmtid.Data1, a4, PropertyBufferSize, 0);
}
