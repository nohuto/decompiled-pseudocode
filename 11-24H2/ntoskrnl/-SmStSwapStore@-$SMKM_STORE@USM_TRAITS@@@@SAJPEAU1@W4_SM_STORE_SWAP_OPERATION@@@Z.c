/*
 * XREFs of ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x14048B408
 * Callers:
 *     ?SmSwapStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x14048B374 (-SmSwapStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_.c)
 * Callees:
 *     KeStackAttachProcess @ 0x1402473F0 (KeStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x14037FE90 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStOutSwapPrepareStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x14048B4AC (-SmStOutSwapPrepareStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStInSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x14048B568 (-SmStInSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStSwapStore(__int64 a1, int a2)
{
  struct _KPROCESS *v4; // rcx
  unsigned int v5; // eax
  unsigned int v6; // ebx
  int v8; // ebx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  v4 = *(struct _KPROCESS **)(a1 + 7432);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(v4, &ApcState);
  if ( a2 )
  {
    v8 = a2 - 1;
    if ( v8 )
    {
      if ( v8 != 1 )
      {
        v6 = -1073741811;
        goto LABEL_4;
      }
      v5 = SMKM_STORE<SM_TRAITS>::SmStInSwapStore(a1);
    }
    else
    {
      v5 = SMKM_STORE<SM_TRAITS>::SmStOutSwapStore(a1);
    }
  }
  else
  {
    v5 = SMKM_STORE<SM_TRAITS>::SmStOutSwapPrepareStore(a1);
  }
  v6 = v5;
LABEL_4:
  KiUnstackDetachProcess((__int64)&ApcState, 0);
  return v6;
}
