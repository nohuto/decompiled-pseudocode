/*
 * XREFs of RtlCheckPortableOperatingSystem @ 0x1404962B0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     RtlQueryRegistryValuesEx @ 0x1409CC2F0 (RtlQueryRegistryValuesEx.c)
 *     RtlCheckRegistryKey @ 0x1409CC310 (RtlCheckRegistryKey.c)
 */

__int64 __fastcall RtlCheckPortableOperatingSystem(bool *a1)
{
  unsigned int v1; // ebx
  int RegistryValues; // eax
  _BYTE v5[8]; // [rsp+30h] [rbp-78h] BYREF
  int v6; // [rsp+38h] [rbp-70h]
  const WCHAR *v7; // [rsp+40h] [rbp-68h]
  int *v8; // [rsp+48h] [rbp-60h]
  int v9; // [rsp+50h] [rbp-58h]
  int v10; // [rsp+B8h] [rbp+10h] BYREF

  v1 = 0;
  v10 = 0;
  if ( RtlCheckRegistryKey(2u, (PWSTR)L"MiniNT") >= 0 )
    goto LABEL_2;
  memset_0(v5, 0, 0x70uLL);
  v7 = L"PortableOperatingSystem";
  v6 = 292;
  v8 = &v10;
  v9 = 0x4000000;
  RegistryValues = RtlQueryRegistryValuesEx(2LL, 0LL, v5, 0LL, 0LL);
  v1 = RegistryValues;
  if ( RegistryValues == -1073741772 )
    return (unsigned int)-1073741275;
  if ( RegistryValues >= 0 )
LABEL_2:
    *a1 = v10 != 0;
  return v1;
}
