/*
 * XREFs of MiGetUltraPage @ 0x14022CD10
 * Callers:
 *     MiCreateUltraThreadContext @ 0x14022CB40 (MiCreateUltraThreadContext.c)
 *     MiCreateUltraThreadContextHelper @ 0x140436B50 (MiCreateUltraThreadContextHelper.c)
 *     MiReplenishUltraPageTables @ 0x140436CB8 (MiReplenishUltraPageTables.c)
 * Callees:
 *     MiGetSlabPage @ 0x14022BC70 (MiGetSlabPage.c)
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 */

__int64 __fastcall MiGetUltraPage(__int64 a1, char a2)
{
  unsigned int v2; // r8d
  int v3; // edi
  int v4; // esi
  unsigned int v5; // ebx
  __int64 result; // rax
  __int64 SlabPage; // rdx
  unsigned int v8; // r9d

  v2 = *(_DWORD *)(a1 + 8);
  v3 = 0;
  v4 = a2 & 4;
  v5 = v2 & 0xFFF7FF00 | (unsigned __int8)(_InterlockedExchangeAdd(*(volatile signed __int32 **)a1, 1u)
                                         % (unsigned int)dword_140E2D980[HIWORD(v2) & 3]) | 0x40000;
  if ( (a2 & 8) != 0 )
  {
    v8 = 28;
    if ( (a2 & 4) == 0 )
      v8 = 12;
    SlabPage = MiGetSlabPage((__int64)&MiSystemPartition, 7, v5, v8, 0LL, 0);
    if ( SlabPage != -1 )
      goto LABEL_3;
  }
  LOBYTE(v3) = v4 != 0;
  result = MiGetPage(&MiSystemPartition, v5, (unsigned int)(v3 + 176));
  SlabPage = result;
  if ( result != -1 )
  {
LABEL_3:
    *(_QWORD *)(48 * SlabPage - 0x21FFFFFFFFF0LL) = CLFS_LSN_NULL_EXT;
    return SlabPage;
  }
  return result;
}
