/*
 * XREFs of ?StNpLeafDelete@?$ST_STORE@USM_TRAITS@@@@SAXPEAUNP_CTX@NP_CONTEXT@@_K@Z @ 0x14060C620
 * Callers:
 *     <none>
 * Callees:
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140385D30 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StNpLeafDelete(__int64 *a1, int a2, __int64 a3)
{
  __int64 v3; // rcx
  _DWORD *v4; // rcx
  _DWORD v6[4]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+30h] [rbp-18h]

  v3 = *a1;
  v6[1] = 0;
  v6[2] = a2 & 0xFFFFFFFC;
  v6[0] = 1;
  v4 = *(_DWORD **)(v3 + 128);
  v7 = 0LL;
  v6[3] = 1;
  return ST_STORE<SM_TRAITS>::StDmPageRemove(v4, (__int64)v6, a3);
}
