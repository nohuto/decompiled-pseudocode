/*
 * XREFs of PiPnpRtlApplyMandatoryDeviceContainerFiltersCallback @ 0x140A5C790
 * Callers:
 *     <none>
 * Callees:
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x1408CF5C0 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 */

__int64 __fastcall PiPnpRtlApplyMandatoryDeviceContainerFiltersCallback(__int64 a1, __int64 a2, _BYTE *a3)
{
  _BYTE *v3; // rbx
  __int64 result; // rax

  v3 = (_BYTE *)(a2 + 16);
  result = PiPnpRtlApplyMandatoryDeviceFilters(
             *(_QWORD **)a2,
             *(const WCHAR **)(a1 + 16),
             0LL,
             *(struct _SECURITY_SUBJECT_CONTEXT **)(a2 + 8),
             (_BYTE *)(a2 + 16));
  if ( (int)result >= 0 )
    *a3 = *v3;
  return result;
}
