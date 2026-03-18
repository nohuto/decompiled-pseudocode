/*
 * XREFs of ?VidMmFindAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1400ECC00
 * Callers:
 *     ?LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1400ECAA8 (-LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidMmFindAlignedRange(_BYTE *a1, struct _RTL_BALANCED_NODE *a2)
{
  ULONG_PTR ParentValue; // r8
  struct _RTL_BALANCED_NODE *v4; // rbx
  ULONG_PTR v5; // rdi
  struct _RTL_BALANCED_NODE *v6; // rcx
  char v7; // r10
  struct _RTL_BALANCED_NODE *v8; // r11
  bool v9; // zf
  struct _RTL_BALANCED_NODE *v10; // rcx
  struct _RTL_BALANCED_NODE *v12; // rcx

  ParentValue = a2[1].ParentValue;
  v4 = a2[1].Children[1];
  v5 = *(_QWORD *)a1;
  if ( ParentValue - (unsigned __int64)v4 >= *(_QWORD *)a1 )
  {
    if ( LODWORD(a2[1].Children[0]) == 1 )
    {
      v6 = (struct _RTL_BALANCED_NODE *)a2[2].ParentValue;
      v7 = 0;
      while ( !v7 )
      {
        v8 = v6[3].Children[0];
        if ( (BYTE4(v8[5].Right) & 1) == 0 )
        {
          v9 = a1[16] == 0;
          goto LABEL_7;
        }
        if ( v6 == a2[3].Children[0] )
        {
          v7 = 1;
        }
        else
        {
          v12 = v6[5].Children[0];
          if ( v12 == &v8[3] )
            v6 = 0LL;
          else
            v6 = v12 - 5;
        }
      }
    }
    else if ( (BYTE4(a2[3].Children[0][5].Right) & 1) == 0 )
    {
      v9 = a1[16] == 0;
LABEL_7:
      if ( !v9 )
        return 0xFFFFFFFFLL;
    }
    v10 = (struct _RTL_BALANCED_NODE *)(~(*((_QWORD *)a1 + 1) - 1LL) & ((unsigned __int64)v4 + *((_QWORD *)a1 + 1) - 1));
    if ( v10 >= v4 && (unsigned __int64)v10 < ParentValue && ParentValue - (unsigned __int64)v10 >= v5 )
    {
      a2[2].Children[0] = v10;
      return 0LL;
    }
  }
  return 0xFFFFFFFFLL;
}
