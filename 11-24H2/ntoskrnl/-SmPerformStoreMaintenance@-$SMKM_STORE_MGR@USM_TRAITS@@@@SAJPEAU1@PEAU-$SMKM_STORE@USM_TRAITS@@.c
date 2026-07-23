/*
 * XREFs of ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x1404863F8
 * Callers:
 *     ?SmSwapStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x140486148 (-SmSwapStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_.c)
 * Callees:
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x1402E21C4 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     SmKmStoreReference @ 0x1402F6020 (SmKmStoreReference.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmPerformStoreMaintenance(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 Pool2; // rax
  _DWORD *v7; // rdi
  int v8; // eax
  unsigned __int8 v9; // cl
  unsigned int v10; // edx
  __int64 v11; // rax
  unsigned int v12; // ebx
  _QWORD v14[2]; // [rsp+30h] [rbp-30h] BYREF
  __int16 Object; // [rsp+40h] [rbp-20h] BYREF
  char v16; // [rsp+42h] [rbp-1Eh]
  char v17; // [rsp+43h] [rbp-1Dh]
  int v18; // [rsp+44h] [rbp-1Ch]
  _QWORD v19[3]; // [rsp+48h] [rbp-18h] BYREF

  v17 = 0;
  Pool2 = ExAllocatePool2(0x40uLL, 0x28uLL, 0x64576D73u);
  v7 = (_DWORD *)Pool2;
  if ( Pool2 )
  {
    *(_OWORD *)Pool2 = 0LL;
    *(_OWORD *)(Pool2 + 16) = 0LL;
    *(_QWORD *)(Pool2 + 32) = 0LL;
    v8 = *(_DWORD *)(Pool2 + 8);
    v9 = v7[2];
    *v7 = 5;
    v7[2] = v8 ^ (a3 ^ v9) & 7;
    v10 = *(_DWORD *)(a2 + 6832);
    Object = 0;
    v18 = 0;
    v19[1] = v19;
    v19[0] = v19;
    v16 = 6;
    v11 = SmKmStoreReference(a1, v10);
    if ( v11 )
    {
      v14[1] = 0LL;
      v14[0] = &Object;
      *((_QWORD *)v7 + 4) = v14;
      SMKM_STORE<SM_TRAITS>::SmStWorkItemQueue(v11, (unsigned __int64)v7, 0);
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      v12 = v14[0];
      if ( SLODWORD(v14[0]) >= 0 )
        return 0;
    }
    else
    {
      v12 = -1073741811;
      ExFreePoolWithTag(v7, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v12;
}
