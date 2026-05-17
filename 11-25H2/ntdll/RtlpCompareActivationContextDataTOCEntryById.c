/*
 * XREFs of RtlpCompareActivationContextDataTOCEntryById @ 0x1800DB7B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpCompareActivationContextDataTOCEntryById(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 >= *a2 )
    return *a1 > *a2;
  else
    return 0xFFFFFFFFLL;
}
