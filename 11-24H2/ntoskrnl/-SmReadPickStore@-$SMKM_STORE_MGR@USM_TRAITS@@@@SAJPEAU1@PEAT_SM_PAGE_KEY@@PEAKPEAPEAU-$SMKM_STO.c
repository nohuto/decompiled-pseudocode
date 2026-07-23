/*
 * XREFs of ?SmReadPickStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU?$SMKM_STORE@USM_TRAITS@@@@2@Z @ 0x1402F6680
 * Callers:
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1402F63B8 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 * Callees:
 *     SmKmStoreReferenceEx @ 0x1402F5F30 (SmKmStoreReferenceEx.c)
 *     ?SmFeCheckPresent@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x1402F6760 (-SmFeCheckPresent@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 *     ?StLockReleaseShared@@YAXPEAUVLOCK@@K@Z @ 0x1402F6C50 (-StLockReleaseShared@@YAXPEAUVLOCK@@K@Z.c)
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x1402F9208 (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmReadPickStore(__int64 a1, __int64 a2, int *a3, __int64 *a4, _DWORD *a5)
{
  int v5; // ebp
  struct VLOCK *v6; // r14
  unsigned int v8; // edi
  unsigned int v12; // edx
  unsigned int v13; // ebx
  __int64 v14; // rax
  _DWORD *v15; // rcx
  int v17; // [rsp+50h] [rbp+8h] BYREF
  int v18; // [rsp+60h] [rbp+18h] BYREF

  v5 = *a3;
  v6 = (struct VLOCK *)(a1 + 440);
  v17 = *a3;
  v8 = 0;
  v18 = 0;
  StLockAcquireShared((struct VLOCK *)(a1 + 440));
  v13 = SMKM_STORE_MGR<SM_TRAITS>::SmFeCheckPresent(a1, a2, &v17, &v18);
  if ( v13 != 1024 )
  {
    if ( v17 == v5 || (*(_DWORD *)(a1 + 2000) & 8) != 0 )
      v5 = v17;
    else
      v13 = 1024;
  }
  StLockReleaseShared(v6, v12);
  if ( v13 == 1024 )
    return (unsigned int)-1073741275;
  ++*(_DWORD *)(a1 + 2036);
  v14 = SmKmStoreReferenceEx(a1, v13);
  if ( !v14 )
  {
    return (unsigned int)-1073741275;
  }
  else
  {
    v15 = a5;
    *a5 = 0;
    if ( v18 )
      *v15 = 1;
    *a3 = v5;
    *a4 = v14;
  }
  return v8;
}
