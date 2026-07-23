/*
 * XREFs of CmpUnlockTwoKcbs @ 0x1409EA714
 * Callers:
 *     CmSaveMergedKeys @ 0x1407CE550 (CmSaveMergedKeys.c)
 *     CmQueryMultipleValueKey @ 0x140870B80 (CmQueryMultipleValueKey.c)
 *     CmQueryKey @ 0x14087BBC0 (CmQueryKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x1408BD110 (NtNotifyChangeMultipleKeys.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140A5F148 (CmEnumerateValueKeyFromMergedView.c)
 * Callees:
 *     CmpUnlockKcb @ 0x140BBB2C0 (CmpUnlockKcb.c)
 */

void __fastcall CmpUnlockTwoKcbs(ULONG_PTR a1, ULONG_PTR a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r8d
  ULONG_PTR v4; // rbx
  __int16 v5; // r8
  __int16 v6; // ax

  if ( a1 )
  {
    if ( a2 && a1 != a2 )
    {
      v2 = (*(_DWORD *)(a1 + 8) >> 21) & 0x3FF;
      v3 = (*(_DWORD *)(a2 + 8) >> 21) & 0x3FF;
      if ( v2 <= v3
        && (v2 < v3
         || ((v5 = *(_WORD *)(a1 + 186), (v5 & 4) == 0) || (*(_DWORD *)(a2 + 184) & 0x20000) == 0)
         && ((v5 & 2) != 0 && (*(_DWORD *)(a2 + 184) & 0x40000) != 0
          || (v6 = *(_WORD *)(a1 + 66), v6 <= *(__int16 *)(a2 + 66)) && (v6 < *(__int16 *)(a2 + 66) || a1 <= a2))) )
      {
        v4 = a1;
        a1 = a2;
      }
      else
      {
        v4 = a2;
      }
      CmpUnlockKcb(a1);
      a1 = v4;
    }
  }
  else
  {
    if ( !a2 )
      return;
    a1 = a2;
  }
  CmpUnlockKcb(a1);
}
