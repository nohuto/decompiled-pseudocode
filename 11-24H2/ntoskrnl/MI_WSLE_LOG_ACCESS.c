/*
 * XREFs of MI_WSLE_LOG_ACCESS @ 0x1402590F0
 * Callers:
 *     MiTrimPteWorker @ 0x140212FB0 (MiTrimPteWorker.c)
 *     MiTrimPte @ 0x1402130B0 (MiTrimPte.c)
 *     NtUnlockVirtualMemory @ 0x140213FA0 (NtUnlockVirtualMemory.c)
 *     MiDeleteVa @ 0x14023D060 (MiDeleteVa.c)
 *     MiStealPage @ 0x140253D10 (MiStealPage.c)
 *     MmUnmapViewInSystemCache @ 0x1402572A0 (MmUnmapViewInSystemCache.c)
 *     MiCombineWithExisting @ 0x140294840 (MiCombineWithExisting.c)
 *     MiDecommitAddToList @ 0x1402985A0 (MiDecommitAddToList.c)
 *     MiTrimSharedPageFromViews @ 0x140362D10 (MiTrimSharedPageFromViews.c)
 *     MmProtectPool @ 0x14038233C (MmProtectPool.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1403DB1C8 (MiDeprioritizeVirtualAddresses.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPagePrivilege @ 0x140249B80 (MiGetPagePrivilege.c)
 *     MiLogPageAccess @ 0x140296B90 (MiLogPageAccess.c)
 *     MiGetVaAge @ 0x140296DE0 (MiGetVaAge.c)
 */

__int64 __fastcall MI_WSLE_LOG_ACCESS(__int64 a1, unsigned __int64 a2)
{
  int v4; // esi
  unsigned __int64 v5; // rbx
  __int64 result; // rax
  unsigned __int64 v7; // rdx
  int v8; // eax

  v4 = -1;
  v5 = (__int64)(a2 << 25) >> 16;
  if ( v5 >= 0xFFFFF68000000000uLL && v5 <= 0xFFFFF6FFFFFFFFFFuLL
    || (result = MiGetVaAge(0xFFFFF68000000000uLL, (__int64)(a2 << 25) >> 16),
        v4 = (unsigned __int8)result,
        (unsigned __int8)result != 7) )
  {
    result = MI_READ_PTE_LOCK_FREE(a2);
    v7 = result;
    if ( (result & 0x20) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
      {
        if ( !_bittest64(&MiFlags, 0x24u) )
          return MiLogPageAccess(a1, a2);
        v8 = (*(_DWORD *)(a1 + 184) >> 11) & 1;
      }
      else
      {
        v8 = *(_QWORD *)(a1 + 624) != 0LL;
      }
      if ( !v8 )
        return MiLogPageAccess(a1, a2);
      if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
      {
        result = MiGetPagePrivilege(48 * ((v7 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 2, 0LL);
        if ( (result & 0x41) == 0 )
          return MiLogPageAccess(a1, a2);
      }
      else
      {
        result = 0x7FFFFFFEFFFFLL;
        if ( v5 > 0x7FFFFFFEFFFFLL )
          return MiLogPageAccess(a1, a2);
      }
      if ( !v4 )
        return MiLogPageAccess(a1, a2);
    }
  }
  return result;
}
