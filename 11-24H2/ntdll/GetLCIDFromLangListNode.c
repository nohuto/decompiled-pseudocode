/*
 * XREFs of GetLCIDFromLangListNode @ 0x1800345E0
 * Callers:
 *     RtlpQueryDefaultUILanguage @ 0x180035CC0 (RtlpQueryDefaultUILanguage.c)
 * Callees:
 *     RtlCultureNameToLCID @ 0x1800330E0 (RtlCultureNameToLCID.c)
 *     wcslen @ 0x1801277D0 (wcslen.c)
 */

__int64 __fastcall GetLCIDFromLangListNode(__int64 a1, unsigned __int16 *a2, _WORD *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // r8
  int v6; // ecx
  __int16 v7; // ax
  int v9; // ecx
  __int64 v10; // rcx
  __int64 v11; // r8
  const wchar_t *v12; // rcx
  size_t v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD v16[3]; // [rsp+20h] [rbp-18h] BYREF
  int v17; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  v17 = 0;
  if ( !a2 || !a3 )
    return 3221225485LL;
  v5 = g_RegInfo;
  *a3 = 0;
  if ( a1 )
    v5 = a1;
  v6 = *a2;
  if ( v6 == 2 )
  {
    v7 = *(_WORD *)(28LL * (__int16)a2[2] + *(_QWORD *)(*(_QWORD *)(v5 + 24) + 16LL) + 4);
    *a3 = v7;
    if ( v7 )
      return v3;
    v14 = 28LL * (__int16)a2[2];
    v15 = *(_QWORD *)(*(_QWORD *)(v5 + 24) + 16LL);
    if ( *(__int16 *)(v14 + v15 + 6) <= 0 )
      return (unsigned int)-1073741595;
    v10 = *(__int16 *)(v14 + v15 + 6);
LABEL_13:
    v11 = *(_QWORD *)(v5 + 32);
    v16[0] = 0LL;
    v12 = (const wchar_t *)(*(_QWORD *)(v11 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v11 + 16) + 2 * v10));
    v16[1] = v12;
    if ( v12 )
    {
      v13 = 2 * wcslen(v12);
      if ( v13 >= 0xFFFE )
        LOWORD(v13) = -4;
      LOWORD(v16[0]) = v13;
      WORD1(v16[0]) = v13 + 2;
    }
    if ( RtlCultureNameToLCID((unsigned __int16 *)v16, &v17) )
    {
      *a3 = v17;
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
