/*
 * XREFs of RtlpFilterandReplaceConsoleLanguages @ 0x1800D9B58
 * Callers:
 *     LdrpMergeLangFallbackLists @ 0x1800356C0 (LdrpMergeLangFallbackLists.c)
 * Callees:
 *     LdrpLangFallbackListAppendNode @ 0x180031E20 (LdrpLangFallbackListAppendNode.c)
 *     GetNameFromLangListNode @ 0x180033ED0 (GetNameFromLangListNode.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180035EE0 (RtlpMuiRegFreeLanguageList.c)
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x1800D9DA8 (RtlpConsoleFallbackNameFromLocaleName.c)
 *     LdrpCreateLangFallbackList @ 0x1800DA720 (LdrpCreateLangFallbackList.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpFilterandReplaceConsoleLanguages(__int64 a1, __int64 a2, __int64 a3, __int16 a4, __int64 *a5)
{
  unsigned int v7; // edi
  int NameFromLangListNode; // ebx
  wchar_t *String; // rbx
  unsigned __int64 v11; // rdi
  unsigned int i; // r15d
  int v14; // [rsp+34h] [rbp-CCh] BYREF
  wchar_t *String2[2]; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-B8h] BYREF
  int v17; // [rsp+50h] [rbp-B0h]
  int v18; // [rsp+54h] [rbp-ACh]
  __int64 v19; // [rsp+58h] [rbp-A8h]
  _BYTE v20[176]; // [rsp+60h] [rbp-A0h] BYREF

  v7 = 0;
  v16 = 0LL;
  memset_thunk_772440563353939046(v20, 0, 0xAAuLL);
  v18 = 0;
  LOWORD(v14) = 0;
  *(_OWORD *)String2 = 0LL;
  if ( !a1 || !a2 || !a5 || !*a5 )
    return 3221225485LL;
  NameFromLangListNode = LdrpCreateLangFallbackList(&v16, a2, 25LL, 0LL);
  if ( NameFromLangListNode < 0 )
  {
LABEL_16:
    v11 = v16;
  }
  else
  {
    while ( v7 < *(unsigned __int16 *)(a1 + 4) )
    {
      LODWORD(String2[0]) = 11141120;
      String2[1] = (wchar_t *)v20;
      NameFromLangListNode = GetNameFromLangListNode(
                               a2,
                               (unsigned __int16 *)(*(_QWORD *)(a1 + 24) + 6LL * v7),
                               (UNICODE_STRING *)String2);
      if ( NameFromLangListNode < 0 )
        goto LABEL_16;
      String = String2[1];
      v19 = 0LL;
      v17 = 0;
      RtlpConsoleFallbackNameFromLocaleName(String2[1], a2, a4);
      NameFromLangListNode = LdrpLangFallbackListAppendNode(a5, a2, 0, (__int16 *)&v14, String);
      if ( NameFromLangListNode < 0 )
        goto LABEL_16;
      ++v7;
    }
    v11 = v16;
    for ( i = 0; i < *(unsigned __int16 *)(v11 + 4); ++i )
    {
      LODWORD(String2[0]) = 11141120;
      String2[1] = (wchar_t *)v20;
      NameFromLangListNode = GetNameFromLangListNode(
                               a2,
                               (unsigned __int16 *)(*(_QWORD *)(v11 + 24) + 6LL * i),
                               (UNICODE_STRING *)String2);
      if ( NameFromLangListNode < 0 )
        break;
      NameFromLangListNode = LdrpLangFallbackListAppendNode(a5, a2, 0, (__int16 *)&v14, String2[1]);
    }
  }
  if ( v11 )
    RtlpMuiRegFreeLanguageList(v11);
  if ( NameFromLangListNode < 0 )
  {
    if ( *a5 )
      *(_WORD *)(*a5 + 4) = 0;
  }
  return (unsigned int)NameFromLangListNode;
}
