/*
 * XREFs of MiRelinkStandbyPage @ 0x14022C848
 * Callers:
 *     MiUpdatePfnForPrefetchByPte @ 0x140215E80 (MiUpdatePfnForPrefetchByPte.c)
 *     MiResolveTransitionFault @ 0x14021A2F0 (MiResolveTransitionFault.c)
 *     MiEmptyDecayClusterTimers @ 0x1402D4090 (MiEmptyDecayClusterTimers.c)
 *     MmSetPfnListInfo @ 0x140308064 (MmSetPfnListInfo.c)
 *     MiUpdatePfnPriority @ 0x1403FE790 (MiUpdatePfnPriority.c)
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x140211CD0 (MiUnlinkPageFromListEx.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140222210 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x14022CB10 (MiInsertPageInList.c)
 *     MiRestoreTransitionPte @ 0x140271094 (MiRestoreTransitionPte.c)
 *     MiClearPfnReuseFields @ 0x1403A1D30 (MiClearPfnReuseFields.c)
 */

__int64 __fastcall MiRelinkStandbyPage(ULONG_PTR BugCheckParameter2, int a2)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // [rsp+30h] [rbp+8h]
  int v9; // [rsp+30h] [rbp+8h]
  int v10; // [rsp+30h] [rbp+8h]

  if ( (unsigned __int16)*(_DWORD *)(BugCheckParameter2 + 32) )
  {
    if ( a2 != 0xFFFFFF )
    {
      v9 = *(_DWORD *)(BugCheckParameter2 + 32);
      HIBYTE(v9) ^= (HIBYTE(v9) ^ a2) & 7;
      *(_DWORD *)(BugCheckParameter2 + 32) = v9;
    }
    return 1LL;
  }
  if ( (MiUnlinkPageFromListEx(BugCheckParameter2, 4) & 3) == 0 )
  {
    if ( a2 != 0xFFFFFF )
    {
      v8 = *(_DWORD *)(BugCheckParameter2 + 32);
      HIBYTE(v8) ^= (HIBYTE(v8) ^ a2) & 7;
      *(_DWORD *)(BugCheckParameter2 + 32) = v8;
    }
    MiInsertPageInList(BugCheckParameter2);
    return 1LL;
  }
  MiRestoreTransitionPte(BugCheckParameter2);
  MiClearPfnReuseFields(BugCheckParameter2, v5, v6, v7);
  v10 = *(_DWORD *)(BugCheckParameter2 + 32);
  BYTE2(v10) = BYTE2(v10) & 0xF8 | 5;
  *(_DWORD *)(BugCheckParameter2 + 32) = v10;
  *(_QWORD *)(BugCheckParameter2 + 24) |= 0x4000000000000000uLL;
  MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4), 2LL);
  return 0LL;
}
