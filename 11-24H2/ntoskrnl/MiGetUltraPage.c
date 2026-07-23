/*
 * XREFs of MiGetUltraPage @ 0x14033BE50
 * Callers:
 *     MiCreateUltraThreadContext @ 0x14033BC80 (MiCreateUltraThreadContext.c)
 *     MiCreateUltraThreadContextHelper @ 0x140412880 (MiCreateUltraThreadContextHelper.c)
 *     MiReplenishUltraPageTables @ 0x1404129EC (MiReplenishUltraPageTables.c)
 * Callees:
 *     MiGetSlabPage @ 0x14021CE24 (MiGetSlabPage.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 */

__int64 __fastcall MiGetUltraPage(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r8d
  __int64 v3; // r9
  int v4; // edi
  int v5; // esi
  unsigned int v6; // ebx
  __int64 result; // rax
  __int64 SlabPage; // rdx
  unsigned int v9; // r9d

  v2 = *(_DWORD *)(a1 + 8);
  v3 = a2;
  v4 = 0;
  v5 = a2 & 4;
  v6 = v2 & 0xFFF7FF00 | (unsigned __int8)(_InterlockedExchangeAdd(*(volatile signed __int32 **)a1, 1u)
                                         % (unsigned int)dword_140E2DD00[HIWORD(v2) & 3]) | 0x40000;
  if ( (a2 & 8) != 0 )
  {
    v9 = 28;
    if ( (a2 & 4) == 0 )
      v9 = 12;
    SlabPage = MiGetSlabPage((__int64)&MiSystemPartition, 7, v6, v9, 0LL, 0);
    if ( SlabPage != -1 )
      goto LABEL_3;
  }
  LOBYTE(v4) = v5 != 0;
  result = MiGetPage(&MiSystemPartition, v6, (unsigned int)(v4 + 176), v3);
  SlabPage = result;
  if ( result != -1 )
  {
LABEL_3:
    *(_QWORD *)(48 * SlabPage - 0x21FFFFFFFFF0LL) = CLFS_LSN_NULL_EXT;
    return SlabPage;
  }
  return result;
}
