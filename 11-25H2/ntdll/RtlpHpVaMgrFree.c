/*
 * XREFs of RtlpHpVaMgrFree @ 0x1800BC4D0
 * Callers:
 *     RtlpHpVaMgrCtxFree @ 0x1800BBA80 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrAlloc @ 0x1800BC0F8 (RtlpHpVaMgrAlloc.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x180010AF0 (RtlRbInsertNodeEx.c)
 *     RtlpHpVaMgrRangeCoalesce @ 0x1800BC570 (RtlpHpVaMgrRangeCoalesce.c)
 */

__int64 __fastcall RtlpHpVaMgrFree(__int64 a1)
{
  __int64 v2; // r10
  unsigned __int16 v3; // r11
  _RTL_RB_TREE *v5; // rcx
  __int64 v6; // rdx
  BOOLEAN v7; // r8
  __int64 v8; // rax

  v2 = RtlpHpVaMgrRangeCoalesce();
  v3 = *(_WORD *)(v2 + 24);
  if ( v3 != *(_WORD *)(a1 + 40) )
  {
    v5 = (_RTL_RB_TREE *)(a1 + 8);
    v6 = *(_QWORD *)(a1 + 8);
    if ( (*(_BYTE *)(a1 + 16) & 1) != 0 && v6 )
      v6 ^= (unsigned __int64)v5;
    v7 = 0;
    if ( v6 )
    {
      while ( 1 )
      {
        if ( v3 < *(_WORD *)(v6 + 24) )
        {
          v8 = *(_QWORD *)v6;
          if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
          {
            if ( !v8 )
              break;
            v8 ^= v6;
          }
          if ( !v8 )
            break;
        }
        else
        {
          v8 = *(_QWORD *)(v6 + 8);
          if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
          {
            if ( !v8 )
            {
LABEL_8:
              v7 = 1;
              break;
            }
            v8 ^= v6;
          }
          if ( !v8 )
            goto LABEL_8;
        }
        v6 = v8;
      }
    }
    RtlRbInsertNodeEx(v5, (PRTL_BALANCED_NODE)v6, v7, (PRTL_BALANCED_NODE)v2);
    return 0LL;
  }
  return v2;
}
