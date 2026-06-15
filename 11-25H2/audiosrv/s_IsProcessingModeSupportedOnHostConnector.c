/*
 * XREFs of s_IsProcessingModeSupportedOnHostConnector @ 0x180103050
 * Callers:
 *     <none>
 * Callees:
 *     ?IsProcessingModeSupportedOnHostConnector@CPolicyConfig@@QEAAHPEBGU_GUID@@@Z @ 0x180100F48 (-IsProcessingModeSupportedOnHostConnector@CPolicyConfig@@QEAAHPEBGU_GUID@@@Z.c)
 */

__int64 __fastcall s_IsProcessingModeSupportedOnHostConnector(
        CPolicyConfig *a1,
        const unsigned __int16 *a2,
        struct _GUID *a3,
        _DWORD *a4)
{
  struct _GUID v5; // [rsp+20h] [rbp-18h] BYREF

  v5 = *a3;
  *a4 = CPolicyConfig::IsProcessingModeSupportedOnHostConnector(a1, a2, &v5);
  return 0LL;
}
