/*
 * XREFs of HvpViewMapAdjustFlag @ 0x14096CF44
 * Callers:
 *     HvMarkHiveWithNoSectionExtend @ 0x1406F9E10 (HvMarkHiveWithNoSectionExtend.c)
 *     HvUnlockHiveFilePages @ 0x140A8AF60 (HvUnlockHiveFilePages.c)
 * Callees:
 *     HvpViewMapFindViewForFileOffset @ 0x140968764 (HvpViewMapFindViewForFileOffset.c)
 *     HvpViewMapMakeViewRangeUnCOWByPolicy @ 0x14096CD48 (HvpViewMapMakeViewRangeUnCOWByPolicy.c)
 */

__int64 __fastcall HvpViewMapAdjustFlag(ULONG_PTR a1, int a2, char a3)
{
  char v4; // si
  __int64 i; // rax
  _QWORD *ViewForFileOffset; // rbx
  int v8; // eax

  v4 = a2;
  if ( (a2 & 0xFFFFFFF5) != 0 || (a2 & 0xA) == 0xA )
    goto LABEL_14;
  if ( (a2 & 2) != 0 )
  {
    if ( a3 || (a2 & *(_DWORD *)(a1 + 32)) == 0 )
      goto LABEL_14;
    for ( i = 4096LL; i < *(_QWORD *)(a1 + 8); i = ViewForFileOffset[6] )
    {
      ViewForFileOffset = (_QWORD *)HvpViewMapFindViewForFileOffset(a1, i);
      HvpViewMapMakeViewRangeUnCOWByPolicy(a1, ViewForFileOffset, ViewForFileOffset[5], ViewForFileOffset[6]);
    }
    *(_DWORD *)(a1 + 32) &= ~2u;
  }
  if ( (v4 & 8) != 0 )
  {
    if ( a3 )
    {
      v8 = *(_DWORD *)(a1 + 32);
      if ( (v8 & 8) == 0 )
      {
        *(_DWORD *)(a1 + 32) = v8 | 8;
        return 0LL;
      }
    }
LABEL_14:
    __fastfail(5u);
  }
  return 0LL;
}
