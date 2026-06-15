/*
 * XREFs of ?QueryInterface@?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14006FF80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CSystemAudioDeviceExclusive>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        char **a3)
{
  return ATL::CComObject<CSystemAudioDeviceExclusive>::QueryInterface((char *)(a1 - 16), a2, a3);
}
