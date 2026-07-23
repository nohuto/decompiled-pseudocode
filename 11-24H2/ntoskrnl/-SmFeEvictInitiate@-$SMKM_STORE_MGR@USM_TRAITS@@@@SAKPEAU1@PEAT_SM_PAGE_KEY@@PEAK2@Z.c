/*
 * XREFs of ?SmFeEvictInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x1402E9110
 * Callers:
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x1402E8F50 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ?StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z @ 0x1402E93D0 (-StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z.c)
 *     ?SmFeEvictUpdatePass@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@@Z @ 0x1402E9430 (-SmFeEvictUpdatePass@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2PEAUSEARCH_R.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     SmArrayGrow @ 0x14037A5B0 (SmArrayGrow.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictInitiate(__int64 a1, unsigned int *a2, int a3, int a4)
{
  volatile signed __int64 *v8; // rsi
  __int64 v9; // rdx
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // r11
  __int64 v14; // r10
  unsigned int v15; // edx
  __int64 v16; // rax
  unsigned int updated; // ebx
  struct _KTHREAD *CurrentThread; // rax
  bool v19; // zf
  _QWORD v21[3]; // [rsp+30h] [rbp-108h] BYREF
  int v22; // [rsp+48h] [rbp-F0h]
  unsigned int v23; // [rsp+4Ch] [rbp-ECh] BYREF
  __int64 v24; // [rsp+50h] [rbp-E8h]
  _BYTE v25[136]; // [rsp+58h] [rbp-E0h] BYREF

  memset_0(v25, 0, 0x80uLL);
  v23 = 8;
  v21[1] = 0LL;
  v8 = (volatile signed __int64 *)(a1 + 440);
  v21[0] = v25;
  v21[2] = 0LL;
  v24 = 0LL;
  v22 = 0;
  StLockAcquireExclusive((struct VLOCK *)(a1 + 440));
  v10 = *a2;
  v11 = *(_QWORD *)(a1 + 448);
  v22 = 0;
  if ( !v11
    || (v12 = *(unsigned __int8 *)(v11 + 2), v23 >= (unsigned int)v12)
    || (unsigned int)SmArrayGrow(v12, v9, &v23, v21) )
  {
    v13 = (_QWORD *)v21[0];
    v14 = *(_QWORD *)(a1 + 448);
    if ( v14 )
    {
      while ( 1 )
      {
        v15 = -1;
        v16 = (unsigned __int16)*(_DWORD *)v14;
        if ( HIBYTE(*(_DWORD *)v14) )
          break;
        if ( (unsigned __int16)*(_DWORD *)v14 )
        {
          do
          {
            if ( *(_DWORD *)(v14 + 16LL * (((unsigned int)v16 + v15) >> 1) + 16) > v10 )
              LODWORD(v16) = ((unsigned int)v16 + v15) >> 1;
            else
              v15 = ((unsigned int)v16 + v15) >> 1;
          }
          while ( v15 + 1 != (_DWORD)v16 );
        }
        *v13 = v14;
        v13[1] = v14 + 16 * ((unsigned int)v16 + 1LL);
        v13 += 2;
        if ( (_DWORD)v16 )
          v14 = *(_QWORD *)(v14 + 16LL * (unsigned int)(v16 - 1) + 24);
        else
          v14 = *(_QWORD *)(v14 + 8);
      }
      if ( (unsigned __int16)*(_DWORD *)v14 )
      {
        do
        {
          if ( *(_DWORD *)(v14 + 8LL * (((unsigned int)v16 + v15) >> 1) + 16) < v10 )
            v15 = ((unsigned int)v16 + v15) >> 1;
          else
            v16 = ((unsigned int)v16 + v15) >> 1;
        }
        while ( v15 + 1 != (_DWORD)v16 );
      }
      *v13 = v14;
      v13[1] = v14 + 8 * (v16 + 2);
      v22 = (((__int64)v13 - v21[0]) >> 4) + 1;
    }
  }
  updated = SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictUpdatePass(a1, (_DWORD)a2, a3, a4, (__int64)v21);
  if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v8);
  KeAbPostRelease((ULONG_PTR)v8);
  CurrentThread = KeGetCurrentThread();
  v19 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v19 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return updated;
}
