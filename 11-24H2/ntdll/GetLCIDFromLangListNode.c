/*
 * XREFs of GetLCIDFromLangListNode @ 0x180014860
 * Callers:
 *     RtlpQueryDefaultUILanguage @ 0x180015F40 (RtlpQueryDefaultUILanguage.c)
 * Callees:
 *     RtlCultureNameToLCID @ 0x1800141A0 (RtlCultureNameToLCID.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 */

__int64 __fastcall GetLCIDFromLangListNode(_QWORD *a1, unsigned __int16 *a2, _WORD *a3)
{
  unsigned int v3; // ebx
  _QWORD *v5; // r8
  int v6; // ecx
  __int16 v7; // ax
  int v9; // ecx
  __int64 v10; // rcx
  __int64 v11; // r8
  wchar_t *v12; // rcx
  size_t v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  _UNICODE_STRING String; // [rsp+20h] [rbp-18h] BYREF
  DWORD Lcid; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  Lcid = 0;
  if ( !a2 || !a3 )
    return 3221225485LL;
  v5 = g_RegInfo;
  *a3 = 0;
  if ( a1 )
    v5 = a1;
  v6 = *a2;
  if ( v6 == 2 )
  {
    v7 = *(_WORD *)(28LL * (__int16)a2[2] + *(_QWORD *)(v5[3] + 16LL) + 4);
    *a3 = v7;
    if ( v7 )
      return v3;
    v14 = 28LL * (__int16)a2[2];
    v15 = *(_QWORD *)(v5[3] + 16LL);
    if ( *(__int16 *)(v14 + v15 + 6) <= 0 )
      return (unsigned int)-1073741595;
    v10 = *(__int16 *)(v14 + v15 + 6);
LABEL_13:
    v11 = v5[4];
    *(_QWORD *)&String.Length = 0LL;
    v12 = (wchar_t *)(*(_QWORD *)(v11 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v11 + 16) + 2 * v10));
    String.Buffer = v12;
    if ( v12 )
    {
      v13 = 2 * wcslen(v12);
      if ( v13 >= 0xFFFE )
        LOWORD(v13) = -4;
      String.Length = v13;
      String.MaximumLength = v13 + 2;
    }
    if ( RtlCultureNameToLCID(&String, &Lcid) )
    {
      *a3 = Lcid;
      return 0LL;
    }
    return (unsigned int)-1073741595;
  }
  v9 = v6 - 1;
  if ( v9 )
  {
    if ( v9 != 2 )
      return (unsigned int)-1073741595;
    v10 = (__int16)a2[2];
    goto LABEL_13;
  }
  *a3 = a2[2];
  return 0LL;
}
