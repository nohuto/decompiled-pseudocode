/*
 * XREFs of MiRelinkStandbyPage @ 0x14021A0E8
 * Callers:
 *     MmSetPfnListInfo @ 0x140221CC4 (MmSetPfnListInfo.c)
 *     MiUpdatePfnForPrefetchByPte @ 0x140231A30 (MiUpdatePfnForPrefetchByPte.c)
 *     MiResolveTransitionFault @ 0x140233060 (MiResolveTransitionFault.c)
 *     MiUpdatePfnPriority @ 0x140389C80 (MiUpdatePfnPriority.c)
 *     MiEmptyDecayClusterTimers @ 0x1403B3A50 (MiEmptyDecayClusterTimers.c)
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x14021A1F0 (MiUnlinkPageFromListEx.c)
 *     MiInsertPageInList @ 0x14021AFB0 (MiInsertPageInList.c)
 *     MiRestoreTransitionPte @ 0x14024EBD8 (MiRestoreTransitionPte.c)
 *     MiClearPfnReuseFields @ 0x1402C4CC0 (MiClearPfnReuseFields.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 */

__int64 __fastcall MiRelinkStandbyPage(ULONG_PTR a1, int a2)
{
  int v5; // [rsp+30h] [rbp+8h]
  int v6; // [rsp+30h] [rbp+8h]
  int v7; // [rsp+30h] [rbp+8h]

  if ( (unsigned __int16)*(_DWORD *)(a1 + 32) )
  {
    if ( a2 != 0xFFFFFF )
    {
      v6 = *(_DWORD *)(a1 + 32);
      HIBYTE(v6) ^= (HIBYTE(v6) ^ a2) & 7;
      *(_DWORD *)(a1 + 32) = v6;
    }
    return 1LL;
  }
  if ( (MiUnlinkPageFromListEx(a1) & 3) == 0 )
  {
    if ( a2 != 0xFFFFFF )
    {
      v5 = *(_DWORD *)(a1 + 32);
      HIBYTE(v5) ^= (HIBYTE(v5) ^ a2) & 7;
      *(_DWORD *)(a1 + 32) = v5;
    }
    MiInsertPageInList(a1, 4LL);
    return 1LL;
  }
  MiRestoreTransitionPte(a1);
  MiClearPfnReuseFields(a1);
  v7 = *(_DWORD *)(a1 + 32);
  BYTE2(v7) = BYTE2(v7) & 0xF8 | 5;
  *(_DWORD *)(a1 + 32) = v7;
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4));
  return 0LL;
}
