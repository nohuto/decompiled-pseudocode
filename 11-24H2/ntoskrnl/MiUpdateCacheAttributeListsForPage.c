/*
 * XREFs of MiUpdateCacheAttributeListsForPage @ 0x1403F8E00
 * Callers:
 *     MiInitializeMdlOneNodeBatchPages @ 0x140393A14 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiFindLargePageMemory @ 0x140A8F22C (MiFindLargePageMemory.c)
 * Callees:
 *     MiPageAttributeBatchChangeNeeded @ 0x140393500 (MiPageAttributeBatchChangeNeeded.c)
 *     MiMakeLinkedListPte @ 0x1403F8EF0 (MiMakeLinkedListPte.c)
 *     MiPfnBestZeroAttribute @ 0x1403F90A0 (MiPfnBestZeroAttribute.c)
 */

__int64 __fastcall MiUpdateCacheAttributeListsForPage(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned int a3,
        char a4)
{
  int v5; // r14d
  unsigned __int64 v8; // rbp
  __int64 result; // rax
  int v10; // eax
  __int64 v11; // rdx

  v5 = a4 & 1;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4);
  if ( a3 == 3 && (a4 & 1) != 0 )
  {
    v10 = MiPageAttributeBatchChangeNeeded(a2, 1u);
    result = MiMakeLinkedListPte(*(unsigned __int64 *)((char *)a1 + (-(__int64)(v10 != 0) & 0xFFFFFFFFFFFFFFF8uLL) + 24));
    *(_QWORD *)(a2 + 16) = result;
    *(unsigned __int64 *)((char *)a1 + v11 + 24) = v8;
  }
  else
  {
    result = MiPageAttributeBatchChangeNeeded(a2, a3);
    if ( (_DWORD)result )
    {
      if ( v5 )
      {
        if ( (unsigned int)MiPfnBestZeroAttribute(a2, a3) != a3 )
          ++a1;
      }
      result = MiMakeLinkedListPte(*a1);
      *(_QWORD *)(a2 + 16) = result;
      *a1 = v8;
    }
  }
  return result;
}
