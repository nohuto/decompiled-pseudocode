/*
 * XREFs of ?SmProcessAddCompletion@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@KPEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x1402E7368
 * Callers:
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14022FD60 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 * Callees:
 *     ?SmProcessIoCompletion@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKJK@Z @ 0x1402E8AC0 (-SmProcessIoCompletion@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKJK@Z.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmProcessAddCompletion(int a1, __int64 a2, int a3, _DWORD *a4, int a5)
{
  int v6; // r8d
  __int64 result; // rax
  __int64 v10; // r10
  int v11; // ebx
  unsigned int v12; // [rsp+50h] [rbp+18h] BYREF

  v6 = a5;
  result = *(unsigned int *)(a2 + 24);
  v10 = *(_QWORD *)(a2 + 32);
  v11 = (*(_DWORD *)(a2 + 8) >> 3) & 0x7FFFFFF;
  v12 = *(_DWORD *)(a2 + 24);
  *(_DWORD *)v10 = a5;
  if ( v6 >= 0 && (*a4 & 0x100) != 0 )
    *(_QWORD *)(v10 + 8) |= 1uLL;
  if ( v11 )
  {
    SMKM_STORE_MGR<SM_TRAITS>::SmProcessIoCompletion(a1, (unsigned int)&v12, v11, (_DWORD)a4, v6, 1);
    result = v12;
    v6 = -1073741823;
  }
  if ( v11 != a3 && (*(_DWORD *)(a2 + 12) & 0x40) == 0 )
  {
    v12 = v11 + result;
    return SMKM_STORE_MGR<SM_TRAITS>::SmProcessIoCompletion(a1, (unsigned int)&v12, a3 - v11, (_DWORD)a4, v6, 1);
  }
  return result;
}
