/*
 * XREFs of LdrpCreateLangFallbackList @ 0x1800A9080
 * Callers:
 *     RtlGetSystemPreferredUILanguages @ 0x180089230 (RtlGetSystemPreferredUILanguages.c)
 *     LdrpMergeLangFallbackLists @ 0x18008D050 (LdrpMergeLangFallbackLists.c)
 *     RtlpFilterandReplaceConsoleLanguages @ 0x1800A84AC (RtlpFilterandReplaceConsoleLanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x1800A8A50 (RtlGetUserPreferredUILanguages.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 */

__int64 __fastcall LdrpCreateLangFallbackList(_QWORD *a1, __int64 a2, int a3, char a4)
{
  __int64 v7; // rax
  __int16 v8; // si
  unsigned __int64 v9; // rax
  __int64 result; // rax
  unsigned int v11; // edi
  _DWORD *Heap; // rax
  _DWORD *v13; // rdx

  if ( !a2 || !a1 )
    return 3221225485LL;
  v7 = 4LL;
  if ( a3 >= 1 )
    v7 = (unsigned int)a3;
  v8 = v7;
  v9 = 6 * v7;
  if ( v9 <= 0xFFFFFFFF
    && (v11 = v9 + 64, (unsigned int)v9 < 0xFFFFFFC0)
    && (Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v11), (v13 = Heap) != 0LL) )
  {
    *Heap = v11;
    result = 0LL;
    *((_WORD *)v13 + 3) = v8;
    *((_WORD *)v13 + 2) = 0;
    v13[10] = 0;
    *((_BYTE *)v13 + 8) = a4;
    *((_QWORD *)v13 + 3) = v13 + 16;
    *((_QWORD *)v13 + 2) = a2;
    *a1 = v13;
  }
  else
  {
    *a1 = 0LL;
    return 3221225495LL;
  }
  return result;
}
