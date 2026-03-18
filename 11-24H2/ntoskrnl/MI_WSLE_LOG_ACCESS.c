/*
 * XREFs of MI_WSLE_LOG_ACCESS @ 0x1402EFF38
 * Callers:
 *     MiStealPage @ 0x1402263B0 (MiStealPage.c)
 *     NtUnlockVirtualMemory @ 0x1402333D0 (NtUnlockVirtualMemory.c)
 *     MiTrimPteWorker @ 0x140242AA4 (MiTrimPteWorker.c)
 *     MiTrimPte @ 0x140242BA0 (MiTrimPte.c)
 *     MiDecommitAddToList @ 0x1402889A0 (MiDecommitAddToList.c)
 *     MiTrimSharedPageFromViews @ 0x1402BB5D0 (MiTrimSharedPageFromViews.c)
 *     MiDeleteVa @ 0x1402DB780 (MiDeleteVa.c)
 *     MmUnmapViewInSystemCache @ 0x1402F1760 (MmUnmapViewInSystemCache.c)
 *     MiCombineWithExisting @ 0x1402F92E0 (MiCombineWithExisting.c)
 *     MmProtectPool @ 0x1403889FC (MmProtectPool.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1403FD5B4 (MiDeprioritizeVirtualAddresses.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPagePrivilege @ 0x14021CE30 (MiGetPagePrivilege.c)
 *     MiLogPageAccess @ 0x140286F90 (MiLogPageAccess.c)
 *     MiGetVaAge @ 0x1402871E0 (MiGetVaAge.c)
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
