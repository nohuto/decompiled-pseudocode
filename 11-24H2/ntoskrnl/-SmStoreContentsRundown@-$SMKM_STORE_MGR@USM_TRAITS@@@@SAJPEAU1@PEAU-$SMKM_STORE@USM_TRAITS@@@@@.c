/*
 * XREFs of ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x14060D08C
 * Callers:
 *     SmEtwEnableCallback @ 0x14079B9C0 (SmEtwEnableCallback.c)
 * Callees:
 *     SmKmStoreDereference @ 0x14022FA28 (SmKmStoreDereference.c)
 *     SmAllocEx @ 0x1402F5228 (SmAllocEx.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     ?SmStoreRequestEx@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x140491EE8 (-SmStoreRequestEx@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_SM.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmStoreContentsRundown(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rcx
  void *v6; // rsi
  int v7; // edi
  LARGE_INTEGER v9[2]; // [rsp+30h] [rbp-30h] BYREF
  _DWORD Object[2]; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v11[3]; // [rsp+48h] [rbp-18h] BYREF

  Object[1] = 0;
  v11[1] = v11;
  Object[0] = 393216;
  v11[0] = v11;
  *(_OWORD *)&v9[0].LowPart = 0LL;
  v4 = SmAllocEx(0x28uLL, 0x64576D73u, -1);
  v6 = (void *)v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    *(_OWORD *)(v4 + 16) = 0LL;
    *(_QWORD *)(v4 + 32) = 0LL;
    *(_DWORD *)(v4 + 8) = -1;
    *(_DWORD *)v4 = 3;
    v7 = SMKM_STORE_MGR<SM_TRAITS>::SmStoreRequestEx(v5, a2, v4, (__int64)Object, v9);
    if ( v7 >= 0 )
    {
      KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
      return v9[0].LowPart;
    }
    ExFreePoolWithTag(v6, 0);
  }
  else
  {
    v7 = -1073741670;
  }
  if ( a2 )
    SmKmStoreDereference(a1, *(_DWORD *)(a2 + 6832));
  return (unsigned int)v7;
}
