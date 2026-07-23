/*
 * XREFs of ?StLazyWorkMgrResetIdle@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z @ 0x140230000
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14022F290 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x140405C68 (-StLazyWorkMgrRunExpiredWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 */

void __fastcall ST_STORE<SM_TRAITS>::StLazyWorkMgrResetIdle(unsigned __int64 *a1)
{
  __int64 v2; // r11
  unsigned __int64 v3; // rcx
  unsigned __int64 *v4; // r9
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rcx
  unsigned __int64 *v7; // rax
  unsigned __int64 i; // rsi
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx

  v2 = 0LL;
  v3 = a1[23];
  v4 = a1 + 21;
  a1[23] = 0LL;
  if ( a1[21] != -1LL )
  {
    v5 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
    if ( *v4 <= MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] )
    {
      ST_STORE<SM_TRAITS>::StLazyWorkMgrRunExpiredWork(a1, MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0]);
      return;
    }
    if ( v3 )
    {
      if ( !v5 )
        v5 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
      v6 = -1LL;
      v7 = a1;
      for ( i = -1LL; v7 < v4; v7 += 3 )
      {
        v9 = v7[1];
        v10 = v6;
        if ( v9 != -1LL )
        {
          v13 = v7[2];
          if ( v13 < v5 - a1[23] )
            v13 = v5 - a1[23];
          v6 = v13 + *v7;
          if ( v6 >= v10 )
            v6 = v10;
          if ( v9 < i )
            i = v7[1];
        }
      }
      v11 = v5;
      if ( v6 >= v5 )
        v11 = v6;
      v12 = v5;
      if ( i >= v5 )
        v12 = i;
      *v4 = v12;
      if ( v12 != -1LL )
      {
        v2 = v12 - v5;
        if ( v12 >= v11 )
          v2 = v11 - v5;
        a1[22] = v2;
        if ( v2 )
          goto LABEL_19;
        v2 = 1LL;
      }
      a1[22] = v2;
LABEL_19:
      *(_QWORD *)(*(a1 - 814) + 7448) = -v2;
    }
  }
}
