/*
 * XREFs of MiRelinkStandbyPage @ 0x140300158
 * Callers:
 *     MiResolveTransitionFault @ 0x140247040 (MiResolveTransitionFault.c)
 *     MmSetPfnListInfo @ 0x140311F44 (MmSetPfnListInfo.c)
 *     MiUpdatePfnForPrefetchByPte @ 0x140334220 (MiUpdatePfnForPrefetchByPte.c)
 *     MiEmptyDecayClusterTimers @ 0x140355310 (MiEmptyDecayClusterTimers.c)
 *     MiUpdatePfnPriority @ 0x1403DCE10 (MiUpdatePfnPriority.c)
 * Callees:
 *     MiClearPfnReuseFields @ 0x140218960 (MiClearPfnReuseFields.c)
 *     MiRestoreTransitionPte @ 0x140226624 (MiRestoreTransitionPte.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 *     MiUnlinkPageFromListEx @ 0x14033B030 (MiUnlinkPageFromListEx.c)
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
  MiRestoreTransitionPte(a1, 0);
  MiClearPfnReuseFields(a1);
  v7 = *(_DWORD *)(a1 + 32);
  BYTE2(v7) = BYTE2(v7) & 0xF8 | 5;
  *(_DWORD *)(a1 + 32) = v7;
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4), 2LL);
  return 0LL;
}
