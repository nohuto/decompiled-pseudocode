/*
 * XREFs of ?QueryInterface@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140071690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CSystemAudioDeviceShared>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        char **a3)
{
  return ATL::CComObject<CSystemAudioDeviceShared>::QueryInterface((CSystemAudioDeviceShared *)(a1 - 24), a2, a3);
}
