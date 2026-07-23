/*
 * XREFs of RtlpHpVaMgrFree @ 0x140459AA8
 * Callers:
 *     RtlpHpVaMgrCtxFree @ 0x14045930C (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrAlloc @ 0x1404596F4 (RtlpHpVaMgrAlloc.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1403651C0 (RtlRbInsertNodeEx.c)
 *     RtlpHpVaMgrRangeCoalesce @ 0x140459B48 (RtlpHpVaMgrRangeCoalesce.c)
 */

__int64 __fastcall RtlpHpVaMgrFree(__int64 a1)
{
  __int64 v2; // r9
  unsigned __int16 v3; // r11
  __int64 v5; // rdx
  BOOLEAN v6; // r8
  __int64 v7; // rax

  v2 = RtlpHpVaMgrRangeCoalesce();
  v3 = *(_WORD *)(v2 + 24);
  if ( v3 != *(_WORD *)(a1 + 40) )
  {
    v5 = *(_QWORD *)(a1 + 8);
    if ( (*(_BYTE *)(a1 + 16) & 1) != 0 && v5 )
      v5 ^= a1 + 8;
    v6 = 0;
    if ( v5 )
    {
      while ( 1 )
      {
        if ( v3 < *(_WORD *)(v5 + 24) )
        {
          v7 = *(_QWORD *)v5;
          if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
          {
            if ( !v7 )
              break;
            v7 ^= v5;
          }
          if ( !v7 )
            break;
        }
        else
        {
          v7 = *(_QWORD *)(v5 + 8);
          if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
          {
            if ( !v7 )
              goto LABEL_8;
            v7 ^= v5;
          }
          if ( !v7 )
          {
LABEL_8:
            v6 = 1;
            break;
          }
        }
        v5 = v7;
      }
    }
    RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 8), (PRTL_BALANCED_NODE)v5, v6, (PRTL_BALANCED_NODE)v2);
    return 0LL;
  }
  return v2;
}
