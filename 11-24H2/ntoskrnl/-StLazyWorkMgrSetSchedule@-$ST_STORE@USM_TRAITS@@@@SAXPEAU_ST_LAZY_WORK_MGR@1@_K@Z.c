/*
 * XREFs of ?StLazyWorkMgrSetSchedule@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x140405D70
 * Callers:
 *     ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x140405C68 (-StLazyWorkMgrRunExpiredWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StLazyWorkMgrSetSchedule(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 *v4; // r9
  unsigned __int64 v5; // rcx
  unsigned __int64 *v6; // rax
  unsigned __int64 i; // rdi
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 result; // rax
  unsigned __int64 v15; // rdx

  v2 = a2;
  if ( !a2 )
    v2 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  v4 = a1 + 21;
  v5 = -1LL;
  v6 = a1;
  for ( i = -1LL; v6 < v4; v6 += 3 )
  {
    v8 = v6[1];
    v9 = v5;
    if ( v8 != -1LL )
    {
      v15 = v6[2];
      if ( v15 < v2 - a1[23] )
        v15 = v2 - a1[23];
      v5 = v15 + *v6;
      if ( v5 >= v9 )
        v5 = v9;
      if ( v8 < i )
        i = v6[1];
    }
  }
  v10 = v2;
  v11 = v2;
  if ( v5 >= v2 )
    v10 = v5;
  if ( i >= v2 )
    v11 = i;
  *v4 = v11;
  if ( v11 == -1LL )
  {
    v13 = 0LL;
    goto LABEL_15;
  }
  v12 = v11;
  v13 = v11 - v2;
  if ( v12 >= v10 )
    v13 = v10 - v2;
  a1[22] = v13;
  if ( !v13 )
  {
    v13 = 1LL;
LABEL_15:
    a1[22] = v13;
  }
  result = *(a1 - 814);
  *(_QWORD *)(result + 7448) = -v13;
  return result;
}
