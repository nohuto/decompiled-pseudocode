/*
 * XREFs of PspSiloGetSuiteMaskStringFromRegistry @ 0x140773484
 * Callers:
 *     PspSiloInitializeUserSharedData @ 0x140773644 (PspSiloInitializeUserSharedData.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlpQueryRegistryValues @ 0x1409B4DD0 (RtlpQueryRegistryValues.c)
 */

__int64 __fastcall PspSiloGetSuiteMaskStringFromRegistry(_OWORD *a1)
{
  __int64 result; // rax
  ULONG v3; // [rsp+20h] [rbp-98h]
  __int128 v4; // [rsp+30h] [rbp-88h] BYREF
  int v5[4]; // [rsp+40h] [rbp-78h] BYREF
  const wchar_t *v6; // [rsp+50h] [rbp-68h]
  __int128 *v7; // [rsp+58h] [rbp-60h]
  int v8; // [rsp+60h] [rbp-58h]

  v4 = 0LL;
  memset_0(v5, 0, 0x70uLL);
  v5[2] = 308;
  v8 = 117440512;
  v6 = L"ProductSuite";
  v7 = &v4;
  result = RtlpQueryRegistryValues(2, (int)L"ProductOptions", (int)v5, 0, v3, 1);
  if ( (int)result >= 0 )
    *a1 = v4;
  return result;
}
