/*
 * XREFs of CmpLockTwoKcbsShared @ 0x1409E8950
 * Callers:
 *     CmSaveMergedKeys @ 0x1407CE550 (CmSaveMergedKeys.c)
 *     CmQueryMultipleValueKey @ 0x140870B80 (CmQueryMultipleValueKey.c)
 *     CmQueryKey @ 0x14087BBC0 (CmQueryKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x1408BD110 (NtNotifyChangeMultipleKeys.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140A5F148 (CmEnumerateValueKeyFromMergedView.c)
 * Callees:
 *     CmpLockKcbShared @ 0x140BBBA1C (CmpLockKcbShared.c)
 */

void __fastcall CmpLockTwoKcbsShared(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned int v3; // eax
  unsigned int v4; // ecx
  unsigned int v5; // eax
  unsigned __int64 v6; // rcx
  __int16 v7; // cx
  __int16 v8; // ax

  v2 = a1;
  if ( a1 )
  {
    if ( a2 )
    {
      if ( a1 != a2 )
      {
        v3 = *(_DWORD *)(a1 + 8);
        v4 = (*(_DWORD *)(a2 + 8) >> 21) & 0x3FF;
        v5 = (v3 >> 21) & 0x3FF;
        if ( v5 <= v4
          && (v5 < v4
           || ((v7 = *(_WORD *)(v2 + 186), (v7 & 4) == 0) || (*(_DWORD *)(a2 + 184) & 0x20000) == 0)
           && ((v7 & 2) != 0 && (*(_DWORD *)(a2 + 184) & 0x40000) != 0
            || (v8 = *(_WORD *)(v2 + 66), v8 <= *(__int16 *)(a2 + 66)) && (v8 < *(__int16 *)(a2 + 66) || v2 <= a2))) )
        {
          v6 = v2;
          v2 = a2;
        }
        else
        {
          v6 = a2;
        }
        CmpLockKcbShared(v6);
      }
      a1 = v2;
    }
  }
  else
  {
    if ( !a2 )
      return;
    a1 = a2;
  }
  CmpLockKcbShared(a1);
}
