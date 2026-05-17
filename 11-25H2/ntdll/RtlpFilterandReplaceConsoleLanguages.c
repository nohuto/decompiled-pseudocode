/*
 * XREFs of RtlpFilterandReplaceConsoleLanguages @ 0x1800A84AC
 * Callers:
 *     LdrpMergeLangFallbackLists @ 0x18008D050 (LdrpMergeLangFallbackLists.c)
 * Callees:
 *     LdrpLangFallbackListAppendNode @ 0x18005A8F0 (LdrpLangFallbackListAppendNode.c)
 *     GetNameFromLangListNode @ 0x18008BF90 (GetNameFromLangListNode.c)
 *     RtlpMuiRegFreeLanguageList @ 0x18008D870 (RtlpMuiRegFreeLanguageList.c)
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x1800A86FC (RtlpConsoleFallbackNameFromLocaleName.c)
 *     LdrpCreateLangFallbackList @ 0x1800A9080 (LdrpCreateLangFallbackList.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpFilterandReplaceConsoleLanguages(__int64 a1, __int64 a2, __int64 a3, __int16 a4, __int64 *a5)
{
  unsigned int v7; // edi
  __int64 v9; // rdx
  int v10; // ebx
  __int64 v11; // r8
  __int64 v12; // r9
  int NameFromLangListNode; // eax
  wchar_t *String; // rbx
  int appended; // eax
  __int64 v16; // rdi
  unsigned int i; // r15d
  int v19; // [rsp+34h] [rbp-CCh] BYREF
  wchar_t *String2[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  int v22; // [rsp+50h] [rbp-B0h]
  int v23; // [rsp+54h] [rbp-ACh]
  __int64 v24; // [rsp+58h] [rbp-A8h]
  _BYTE v25[176]; // [rsp+60h] [rbp-A0h] BYREF

  v7 = 0;
  v21 = 0LL;
  memset_thunk_772440563353939046(v25, 0, 0xAAuLL);
  v23 = 0;
  LOWORD(v19) = 0;
  *(_OWORD *)String2 = 0LL;
  if ( !a1 || !a2 || !a5 || !*a5 )
    return 3221225485LL;
  v10 = LdrpCreateLangFallbackList(&v21, a2, 25LL, 0LL);
  if ( v10 < 0 )
  {
LABEL_17:
    v16 = v21;
  }
  else
  {
    v9 = 0LL;
    while ( v7 < *(unsigned __int16 *)(a1 + 4) )
    {
      LODWORD(String2[0]) = 11141120;
      String2[1] = (wchar_t *)v25;
      NameFromLangListNode = GetNameFromLangListNode(
                               a2,
                               (unsigned __int16 *)(*(_QWORD *)(a1 + 24) + 6LL * v7),
                               (UNICODE_STRING *)String2);
      v9 = 0LL;
      v10 = NameFromLangListNode;
      if ( NameFromLangListNode < 0 )
        goto LABEL_17;
      String = String2[1];
      v24 = 0LL;
      v22 = 0;
      RtlpConsoleFallbackNameFromLocaleName(String2[1], a2, a4);
      appended = LdrpLangFallbackListAppendNode(a5, a2, 0, (__int16 *)&v19, String);
      v9 = 0LL;
      v10 = appended;
      if ( appended < 0 )
        goto LABEL_17;
      ++v7;
    }
    v16 = v21;
    for ( i = 0; i < *(unsigned __int16 *)(v16 + 4); ++i )
    {
      LODWORD(String2[0]) = 11141120;
      String2[1] = (wchar_t *)v25;
      v10 = GetNameFromLangListNode(
              a2,
              (unsigned __int16 *)(*(_QWORD *)(v16 + 24) + 6LL * i),
              (UNICODE_STRING *)String2);
      if ( v10 < 0 )
        break;
      v10 = LdrpLangFallbackListAppendNode(a5, a2, 0, (__int16 *)&v19, String2[1]);
    }
  }
  if ( v16 )
    RtlpMuiRegFreeLanguageList(v16, v9, v11, v12);
  if ( v10 < 0 )
  {
    if ( *a5 )
      *(_WORD *)(*a5 + 4) = 0;
  }
  return (unsigned int)v10;
}
