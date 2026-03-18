/*
 * XREFs of MiUpdateCacheAttributeListsForPage @ 0x140416EAC
 * Callers:
 *     MiInitializeMdlOneNodeBatchPages @ 0x1404168F8 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiFindLargePageMemory @ 0x140A8E124 (MiFindLargePageMemory.c)
 * Callees:
 *     MiPageAttributeBatchChangeNeeded @ 0x1402247A0 (MiPageAttributeBatchChangeNeeded.c)
 *     MiMakeLinkedListPte @ 0x1403B7F30 (MiMakeLinkedListPte.c)
 *     MiPfnBestZeroAttribute @ 0x1403F8C70 (MiPfnBestZeroAttribute.c)
 */

__int64 __fastcall MiUpdateCacheAttributeListsForPage(__int64 *a1, __int64 a2, int a3, char a4)
{
  int v5; // r14d
  unsigned __int64 v8; // rbp
  __int64 result; // rax
  int v10; // eax
  __int64 v11; // rdx

  v5 = a4 & 1;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4);
  if ( a3 == 3 && (a4 & 1) != 0 )
  {
    v10 = MiPageAttributeBatchChangeNeeded(a2, 1);
    result = MiMakeLinkedListPte(*(__int64 *)((char *)a1 + (-(__int64)(v10 != 0) & 0xFFFFFFFFFFFFFFF8uLL) + 24));
    *(_QWORD *)(a2 + 16) = result;
    *(__int64 *)((char *)a1 + v11 + 24) = v8;
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
