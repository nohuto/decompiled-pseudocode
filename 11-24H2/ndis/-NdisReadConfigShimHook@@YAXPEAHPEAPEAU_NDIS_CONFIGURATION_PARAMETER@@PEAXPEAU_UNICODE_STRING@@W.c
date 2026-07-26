/*
 * XREFs of ?NdisReadConfigShimHook@@YAXPEAHPEAPEAU_NDIS_CONFIGURATION_PARAMETER@@PEAXPEAU_UNICODE_STRING@@W4_NDIS_PARAMETER_TYPE@@@Z @ 0x1400AE390
 * Callers:
 *     <none>
 * Callees:
 *     NdisReadConfiguration @ 0x140044D40 (NdisReadConfiguration.c)
 */

void __fastcall NdisReadConfigShimHook(
        int *a1,
        struct _NDIS_CONFIGURATION_PARAMETER **a2,
        void *a3,
        struct _UNICODE_STRING *a4,
        enum _NDIS_PARAMETER_TYPE a5)
{
  NdisReadConfiguration(a1, a2, a3, a4, a5);
  if ( !*a1 && a5 == NdisParameterInteger )
  {
    if ( RtlEqualUnicodeString(a4, &stru_14011A6C0, 1u) )
    {
      (*a2)->ParameterType = NdisParameterInteger;
      (*a2)->ParameterData.IntegerData = 393299;
    }
  }
}
