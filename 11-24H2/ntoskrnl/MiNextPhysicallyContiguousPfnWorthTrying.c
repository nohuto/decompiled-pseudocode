/*
 * XREFs of MiNextPhysicallyContiguousPfnWorthTrying @ 0x140693CAC
 * Callers:
 *     MiGetFastLargePages @ 0x14026499C (MiGetFastLargePages.c)
 * Callees:
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MiGetPfnPageSizeIndex @ 0x140310FA0 (MiGetPfnPageSizeIndex.c)
 */

_BOOL8 __fastcall MiNextPhysicallyContiguousPfnWorthTrying(__int64 a1, unsigned int a2, int a3, ULONG_PTR a4)
{
  __int64 v6; // rbp
  __int64 v8; // rsi
  int v10; // [rsp+20h] [rbp-18h]

  v6 = a2;
  if ( (MiFlags & 0x20000000) != 0
    && a4 <= qword_140E2DD20
    && ((*(_QWORD *)(48 * a4 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0
    && (v8 = 48 * a4 - 0x220000000000LL, (unsigned int)MiGetPfnPageSizeIndex(v8) == a2)
    && (unsigned __int64)MiPageSizes[v6] <= *(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 72)
    && (v10 = *(_DWORD *)(v8 + 32), (BYTE2(v10) & 7u) <= 1)
    && (unsigned int)MiPageToNode(a4) == *(_DWORD *)(a1 + 32)
    && *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL)) == *(_QWORD *)(a1 + 8) )
  {
    return BYTE2(v10) >> 6 == a3;
  }
  else
  {
    return 0LL;
  }
}
