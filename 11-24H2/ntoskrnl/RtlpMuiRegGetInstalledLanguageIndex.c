/*
 * XREFs of RtlpMuiRegGetInstalledLanguageIndex @ 0x14082CB9C
 * Callers:
 *     RtlpMuiRegValidateConfigNode @ 0x1406A3538 (RtlpMuiRegValidateConfigNode.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x14082BF64 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x14082C3D8 (RtlpMuiRegConfigMatchesInstalled.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x14082CCEC (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlCultureNameToLCID @ 0x140A91BE0 (RtlCultureNameToLCID.c)
 */

__int64 __fastcall RtlpMuiRegGetInstalledLanguageIndex(__int64 a1, int a2, __int16 a3, _WORD *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r10
  __int64 v8; // r9
  __int64 v9; // r8
  int i; // ecx
  _WORD *v11; // rdx
  __int64 v12; // r8
  const WCHAR *v13; // rdx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  DWORD Lcid; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v5 = a3;
  Lcid = 0;
  DestinationString = 0LL;
  if ( !a1 )
    return (unsigned int)-1073741811;
  v8 = *(_QWORD *)(a1 + 24);
  v9 = 1LL;
  if ( a2 == 3 )
  {
    for ( i = 0; i < *(unsigned __int16 *)(v8 + 6); ++i )
    {
      v11 = (_WORD *)(*(_QWORD *)(v8 + 16) + 28LL * i);
      if ( (*v11 & 0x1020) == 0x20 && v11[3] == (_WORD)v5 && a4 )
      {
        *a4 = i;
        return v4;
      }
    }
    v12 = *(_QWORD *)(a1 + 32);
    if ( v12 )
    {
      if ( (v5 & 0x8000u) == 0LL && (unsigned int)v5 < *(unsigned __int16 *)(v12 + 6) )
      {
        v13 = (const WCHAR *)(*(_QWORD *)(v12 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v12 + 16) + 2 * v5));
        if ( v13 )
        {
          RtlInitUnicodeString(&DestinationString, v13);
          if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
          {
            LOWORD(v5) = Lcid;
            LOBYTE(v9) = 0;
            return (unsigned int)RtlpMuiRegGetInstalledLanguageIndexByLangId(a1, (unsigned __int16)v5, v9, a4);
          }
        }
      }
    }
    return (unsigned int)-1073741772;
  }
  if ( a2 == 1 )
    return (unsigned int)RtlpMuiRegGetInstalledLanguageIndexByLangId(a1, (unsigned __int16)v5, v9, a4);
  if ( a2 != 2 )
    return (unsigned int)-1073741772;
  if ( (__int16)v5 <= 0 || (int)v5 >= *(unsigned __int16 *)(v8 + 6) )
    return (unsigned int)-1073741811;
  if ( a4 )
    *a4 = v5;
  return v4;
}
