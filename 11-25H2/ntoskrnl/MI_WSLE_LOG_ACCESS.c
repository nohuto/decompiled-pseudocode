/*
 * XREFs of MI_WSLE_LOG_ACCESS @ 0x140389E74
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x14023D300 (MmUnmapViewInSystemCache.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1402A2C38 (MiDeprioritizeVirtualAddresses.c)
 *     MiDeleteVa @ 0x1402B1A90 (MiDeleteVa.c)
 *     MiStealPage @ 0x1402C80F0 (MiStealPage.c)
 *     MiTrimSharedPageFromViews @ 0x140321850 (MiTrimSharedPageFromViews.c)
 *     MiDecommitAddToList @ 0x140382190 (MiDecommitAddToList.c)
 *     NtUnlockVirtualMemory @ 0x1403875B0 (NtUnlockVirtualMemory.c)
 *     MiTrimPteWorker @ 0x140387E98 (MiTrimPteWorker.c)
 *     MiTrimPte @ 0x140387FA0 (MiTrimPte.c)
 *     MiCombineWithExisting @ 0x14038A898 (MiCombineWithExisting.c)
 *     MmProtectPool @ 0x14039FEDC (MmProtectPool.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x140230BA0 (MiGetPagePrivilege.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLogPageAccess @ 0x1403806A0 (MiLogPageAccess.c)
 *     MiGetVaAge @ 0x140381820 (MiGetVaAge.c)
 */

char __fastcall MI_WSLE_LOG_ACCESS(__int64 a1, unsigned __int64 a2)
{
  int v4; // esi
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  int v8; // eax

  v4 = -1;
  v5 = (__int64)(a2 << 25) >> 16;
  if ( v5 >= 0xFFFFF68000000000uLL && v5 <= 0xFFFFF6FFFFFFFFFFuLL
    || (LOBYTE(v6) = MiGetVaAge(0xFFFFF68000000000uLL, (__int64)(a2 << 25) >> 16),
        v4 = (unsigned __int8)v6,
        (unsigned __int8)v6 != 7) )
  {
    v6 = MI_READ_PTE_LOCK_FREE(a2);
    v7 = v6;
    if ( (v6 & 0x20) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
      {
        if ( !_bittest64(&MiFlags, 0x24u) )
          goto LABEL_7;
        v8 = (*(_DWORD *)(a1 + 184) >> 11) & 1;
      }
      else
      {
        v8 = *(_QWORD *)(a1 + 624) != 0LL;
      }
      if ( v8 )
      {
        if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
        {
          LOBYTE(v6) = MiGetPagePrivilege(48 * ((v7 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 2, 0LL);
          if ( (v6 & 0x41) == 0 )
            goto LABEL_7;
        }
        else
        {
          LOBYTE(v6) = -1;
          if ( v5 > 0x7FFFFFFEFFFFLL )
            goto LABEL_7;
        }
        if ( v4 )
          return v6;
      }
LABEL_7:
      LOBYTE(v6) = MiLogPageAccess(a1, a2);
    }
  }
  return v6;
}
