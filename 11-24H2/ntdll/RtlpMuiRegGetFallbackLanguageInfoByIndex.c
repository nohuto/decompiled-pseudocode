/*
 * XREFs of RtlpMuiRegGetFallbackLanguageInfoByIndex @ 0x1801478AC
 * Callers:
 *     RtlpMuiRegGetFallbackLanguagesAsMultiSZ @ 0x1800CB4CC (RtlpMuiRegGetFallbackLanguagesAsMultiSZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpMuiRegGetFallbackLanguageInfoByIndex(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        __int64 a4,
        unsigned __int16 *a5,
        __int64 a6)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  __int128 v9; // xmm0
  __int64 v10; // xmm1_8
  __int128 v12; // [rsp+0h] [rbp-28h]

  if ( !a1 || !a2 || !a6 || !a5 || a3 > 3u )
    return 3221225485LL;
  switch ( (*(unsigned __int16 *)(a2 + 8) >> (2 * a3)) & 3 )
  {
    case 0:
      return 3221225473LL;
    case 1:
      v12 = 0LL;
      WORD3(v12) = -1;
      WORD2(v12) = *(_WORD *)(a2 + 2LL * (__int16)a3 + 12);
      goto LABEL_11;
    case 2:
      _mm_lfence();
      v6 = *(__int16 *)(a2 + 2LL * (__int16)a3 + 12);
      if ( (v6 & 0x8000u) == 0LL )
      {
        v7 = *(_QWORD *)(a1 + 24);
        if ( (int)v6 < *(unsigned __int16 *)(v7 + 6) )
        {
          v8 = *(_QWORD *)(v7 + 16);
          *a5 = v6;
          v9 = *(_OWORD *)(28 * v6 + v8);
          v10 = *(_QWORD *)(28 * v6 + v8 + 16);
          LODWORD(v8) = *(_DWORD *)(28 * v6 + v8 + 24);
          *(_OWORD *)a6 = v9;
          *(_QWORD *)(a6 + 16) = v10;
          *(_DWORD *)(a6 + 24) = v8;
          return 0LL;
        }
      }
      break;
    case 3:
      v12 = 0LL;
      WORD3(v12) = *(_WORD *)(a2 + 2LL * (__int16)a3 + 12);
LABEL_11:
      *(_OWORD *)a6 = v12;
      *a5 = a3;
      *(_QWORD *)(a6 + 16) = 0LL;
      *(_DWORD *)(a6 + 24) = 0;
      return 0LL;
  }
  return 3221225701LL;
}
