/*
 * XREFs of ??$make_unique_cotaskmem_nothrow@$$BY0A@UGMRelatedProcess@KnownGameList@@@wil@@YA?AV?$unique_ptr@$$BY0A@UGMRelatedProcess@KnownGameList@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@_K@Z @ 0x1802970D0
 * Callers:
 *     ?GetGameRelated@IsGameManager@@UEAAJKPEAKPEAPEAUGMRelatedProcess@KnownGameList@@@Z @ 0x1800A7830 (-GetGameRelated@IsGameManager@@UEAAJKPEAKPEAPEAUGMRelatedProcess@KnownGameList@@@Z.c)
 *     ?GetGameRelatedFromGcsData@AutoGameProfile@@YAJPEBGKPEAKPEAPEAUGMRelatedProcess@KnownGameList@@@Z @ 0x18067B2F8 (-GetGameRelatedFromGcsData@AutoGameProfile@@YAJPEBGKPEAKPEAPEAUGMRelatedProcess@KnownGameList@@@.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029730C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

char **__fastcall wil::make_unique_cotaskmem_nothrow<KnownGameList::GMRelatedProcess [0]>(
        char **a1,
        unsigned __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rdi
  char *v6; // rax
  char *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 > 0x421084210842108LL )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1588,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
      a4);
  v5 = 62 * a2;
  v6 = (char *)CoTaskMemAlloc(62 * a2);
  *a1 = v6;
  if ( v6 )
  {
    v7 = &v6[v5];
    while ( v6 != v7 )
    {
      *(_OWORD *)v6 = 0LL;
      *((_OWORD *)v6 + 1) = 0LL;
      *((_OWORD *)v6 + 2) = 0LL;
      *((_QWORD *)v6 + 6) = 0LL;
      *((_DWORD *)v6 + 14) = 0;
      *((_WORD *)v6 + 30) = 0;
      v6 += 62;
    }
  }
  return a1;
}
