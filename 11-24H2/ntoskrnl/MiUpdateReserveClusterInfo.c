/*
 * XREFs of MiUpdateReserveClusterInfo @ 0x14045147C
 * Callers:
 *     MiAdjustModifiedPageLoad @ 0x140353ADC (MiAdjustModifiedPageLoad.c)
 *     MiFinishPageFileExtension @ 0x1404C4B98 (MiFinishPageFileExtension.c)
 *     MiInsertPageFileInList @ 0x1407EF8C0 (MiInsertPageFileInList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUpdateReserveClusterInfo(__int64 a1, signed __int32 *a2, int a3)
{
  if ( a2 )
    return (unsigned int)_InterlockedCompareExchange(
                           (volatile signed __int32 *)(a1 + 920),
                           a3 ^ (a3 ^ *a2) & 0xFFFFFC00,
                           *a2);
  else
    return (unsigned int)_InterlockedExchange(
                           (volatile __int32 *)(a1 + 920),
                           (*(_DWORD *)(a1 + 920) & 0xFFFFFC00 | 0x200) + 1024);
}
