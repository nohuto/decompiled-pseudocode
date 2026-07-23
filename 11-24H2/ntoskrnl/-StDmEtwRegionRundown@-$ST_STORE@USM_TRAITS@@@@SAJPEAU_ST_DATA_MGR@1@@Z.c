/*
 * XREFs of ?StDmEtwRegionRundown@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140609CE4
 * Callers:
 *     ?StGetStats@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1404F66C8 (-StGetStats@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     SmEtwEnabled @ 0x140380D60 (SmEtwEnabled.c)
 *     SmEtwLogRegionOp @ 0x14060B93C (SmEtwLogRegionOp.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmEtwRegionRundown(__int64 a1)
{
  ULONGLONG *v2; // rax
  unsigned int v3; // ebx
  int v4; // ebp
  unsigned int v5; // edi
  __int64 v6; // rax
  char v7; // dl

  v2 = SmEtwEnabled(3);
  v3 = 0;
  v4 = (int)v2;
  if ( v2 )
  {
    v5 = 0;
    if ( *(_DWORD *)(a1 + 788) )
    {
      do
      {
        if ( (*(_WORD *)(*(_QWORD *)(a1 + 1416) + 2LL * v5) & 0x1FFF) != 0 )
        {
          v6 = *(_QWORD *)(a1 + 1432);
          if ( v6 )
            v7 = *(_BYTE *)(v6 + v5);
          else
            v7 = 0;
          SmEtwLogRegionOp(v4, 10, a1, v5, 0, *(_BYTE *)(*(_QWORD *)(a1 + 1416) + 2LL * v5), v7);
        }
        ++v5;
      }
      while ( v5 != *(_DWORD *)(a1 + 788) );
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v3;
}
