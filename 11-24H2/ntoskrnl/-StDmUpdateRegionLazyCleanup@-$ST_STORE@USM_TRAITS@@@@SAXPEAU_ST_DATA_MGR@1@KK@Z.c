/*
 * XREFs of ?StDmUpdateRegionLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z @ 0x1404ACE98
 * Callers:
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1402F613C (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x1402F7140 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x14048FB20 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StDmLazyWorkItemQueue@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1402F7A24 (-StDmLazyWorkItemQueue@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 */

char __fastcall ST_STORE<SM_TRAITS>::StDmUpdateRegionLazyCleanup(__int64 a1, unsigned int a2, int a3)
{
  char v3; // r11
  unsigned __int64 v5; // r9
  const signed __int64 *v6; // rdx
  int v7; // eax
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r9
  unsigned int v11; // ecx
  volatile signed __int32 *v12; // r8
  int v13; // r11d
  unsigned __int64 v14; // rax

  v3 = a2;
  v5 = a2;
  v6 = *(const signed __int64 **)(a1 + 848);
  if ( a3 )
  {
    LOBYTE(v7) = _bittest64(v6, v5);
    if ( (_BYTE)v7 )
    {
      v9 = v5 >> 5;
      v10 = v5 & 0x1F;
      LOBYTE(v11) = 1;
      v12 = (volatile signed __int32 *)v6 + v9;
      if ( v10 + 1 > 0x20 )
      {
        v13 = v3 & 0x1F;
        if ( !v13 )
          goto LABEL_9;
        _InterlockedAnd(v12++, ~(((1 << (32 - v13)) - 1) << v10));
        v11 = 1 - (32 - v13);
        if ( v11 >= 0x20 )
        {
          v14 = (unsigned __int64)v11 >> 5;
          do
          {
            *v12 = 0;
            v11 -= 32;
            ++v12;
            --v14;
          }
          while ( v14 );
        }
        if ( v11 )
LABEL_9:
          _InterlockedAnd(v12, -1 << v11);
      }
      else
      {
        _InterlockedAnd(v12, ~(1 << v10));
      }
      LOBYTE(v7) = ST_STORE<SM_TRAITS>::StDmLazyWorkItemQueue(a1, a1 + 864);
    }
  }
  else
  {
    v8 = v5 >> 3;
    v7 = *((char *)v6 + v8) | (1 << (v3 & 7));
    *((_BYTE *)v6 + v8) = v7;
  }
  return v7;
}
