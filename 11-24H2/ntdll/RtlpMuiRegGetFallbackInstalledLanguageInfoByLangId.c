/*
 * XREFs of RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId @ 0x180147790
 * Callers:
 *     RtlpSetPreferredUILanguages @ 0x18013E940 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        __int64 a4,
        _WORD *a5)
{
  __int16 v5; // r10
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int128 v11; // [rsp+0h] [rbp-28h]

  v5 = 0;
  v11 = 0LL;
  if ( !a1 || !a2 || !a4 )
    return 3221225485LL;
  while ( v5 < 4 )
  {
    v7 = (*(unsigned __int16 *)(a2 + 8) >> (2 * v5)) & 3;
    if ( v7 )
    {
      if ( v7 == 2 )
      {
        v8 = 28LL * *(__int16 *)(a2 + 2LL * v5 + 12);
        v9 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
        if ( *(_WORD *)(v8 + v9 + 4) == a3 )
        {
          *(_OWORD *)a4 = *(_OWORD *)(v8 + v9);
          *(_QWORD *)(a4 + 16) = *(_QWORD *)(v8 + v9 + 16);
          *(_DWORD *)(a4 + 24) = *(_DWORD *)(v8 + v9 + 24);
          *a5 = *(_WORD *)(a2 + 2LL * v5 + 12);
          return 0LL;
        }
      }
      else if ( v7 == 1 && *(__int16 *)(a2 + 2LL * v5 + 12) == a3 )
      {
        LOWORD(v11) = 1;
        WORD2(v11) = a3;
        *a5 = -1;
        *(_OWORD *)a4 = v11;
        *(_QWORD *)(a4 + 16) = 0LL;
        *(_DWORD *)(a4 + 24) = 0;
        return 0LL;
      }
    }
    ++v5;
  }
  return 3221225524LL;
}
