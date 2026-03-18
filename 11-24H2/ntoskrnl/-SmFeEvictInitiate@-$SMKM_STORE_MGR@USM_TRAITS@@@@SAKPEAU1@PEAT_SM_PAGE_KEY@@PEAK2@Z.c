/*
 * XREFs of ?SmFeEvictInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x14037C090
 * Callers:
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x14037BED0 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ?StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z @ 0x14037C350 (-StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z.c)
 *     ?SmFeEvictUpdatePass@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@@Z @ 0x14037C3B0 (-SmFeEvictUpdatePass@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2PEAUSEARCH_R.c)
 *     SmArrayGrow @ 0x140380C70 (SmArrayGrow.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct _KTHREAD *CurrentThread; // rax
  bool v21; // zf
  _QWORD v23[3]; // [rsp+30h] [rbp-108h] BYREF
  int v24; // [rsp+48h] [rbp-F0h]
  unsigned int v25; // [rsp+4Ch] [rbp-ECh] BYREF
  __int64 v26; // [rsp+50h] [rbp-E8h]
  _BYTE v27[136]; // [rsp+58h] [rbp-E0h] BYREF

  memset_0(v27, 0, 0x80uLL);
  v25 = 8;
  v23[1] = 0LL;
  v8 = (volatile signed __int64 *)(a1 + 440);
  v23[0] = v27;
  v23[2] = 0LL;
  v26 = 0LL;
  v24 = 0;
  StLockAcquireExclusive((struct VLOCK *)(a1 + 440));
  v10 = *a2;
  v11 = *(_QWORD *)(a1 + 448);
  v24 = 0;
  if ( !v11
    || (v12 = *(unsigned __int8 *)(v11 + 2), v25 >= (unsigned int)v12)
    || (unsigned int)SmArrayGrow(v12, v9, &v25, v23) )
  {
    v13 = (_QWORD *)v23[0];
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
      v24 = (((__int64)v13 - v23[0]) >> 4) + 1;
    }
  }
  updated = SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictUpdatePass(a1, (_DWORD)a2, a3, a4, (__int64)v23);
  if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v8);
  KeAbPostRelease((ULONG_PTR)v8);
  CurrentThread = KeGetCurrentThread();
  v21 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v21 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v19, v18);
  return updated;
}
