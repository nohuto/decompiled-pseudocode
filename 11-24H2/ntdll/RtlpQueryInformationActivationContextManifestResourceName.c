/*
 * XREFs of RtlpQueryInformationActivationContextManifestResourceName @ 0x180111BD0
 * Callers:
 *     RtlQueryInformationActivationContext @ 0x1800475D0 (RtlQueryInformationActivationContext.c)
 * Callees:
 *     RtlpLocateActivationContextSection @ 0x180074330 (RtlpLocateActivationContextSection.c)
 *     RtlpCrackActivationContextStringSectionHeader @ 0x180103B94 (RtlpCrackActivationContextStringSectionHeader.c)
 */

__int64 __fastcall RtlpQueryInformationActivationContextManifestResourceName(
        _DWORD *a1,
        _DWORD *a2,
        unsigned __int64 a3,
        _QWORD *a4)
{
  int v6; // ecx
  int v7; // eax
  __int64 v8; // r8
  int v10; // [rsp+20h] [rbp-58h]
  __int64 v11; // [rsp+28h] [rbp-50h]
  __int64 v12; // [rsp+30h] [rbp-48h]
  __int64 v13; // [rsp+38h] [rbp-40h]
  __int64 v14; // [rsp+40h] [rbp-38h]
  _QWORD v15[3]; // [rsp+60h] [rbp-18h] BYREF
  unsigned int v16; // [rsp+88h] [rbp+10h] BYREF
  int *v17; // [rsp+98h] [rbp+20h] BYREF

  v17 = 0LL;
  v16 = 0;
  v15[0] = 0LL;
  if ( a4 )
    *a4 = 4LL;
  if ( a3 < 4 )
    return (unsigned int)-1073741789;
  if ( !a1 || (v7 = RtlpLocateActivationContextSection(a1, 0LL, 1u, &v17, &v16), v6 = v7, v7 == -1072365567) )
  {
    *a2 = 0;
    if ( a4 )
      *a4 = 4LL;
    return 0;
  }
  if ( v7 >> 31 != -1 )
  {
    v6 = RtlpCrackActivationContextStringSectionHeader(v17, v16, v8, 0LL, v10, v11, v12, v13, v14, 0LL, v15);
    if ( v6 >= 0 )
    {
      *a2 = *(_DWORD *)(v15[0] + 52LL);
      return 0;
    }
  }
  return (unsigned int)v6;
}
