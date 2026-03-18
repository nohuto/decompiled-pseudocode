/*
 * XREFs of ?SmFeEvictInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x1403272A0
 * Callers:
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x1403270D4 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ?SmFeEvictUpdatePass@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@@Z @ 0x1403275A0 (-SmFeEvictUpdatePass@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2PEAUSEARCH_R.c)
 *     SmArrayGrow @ 0x1403980C8 (SmArrayGrow.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictInitiate(__int64 a1, unsigned int *a2, int a3, int a4)
{
  volatile signed __int64 *v8; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 *v12; // rbx
  unsigned int v13; // ebx
  __int64 v14; // rax
  int v15; // edi
  __int64 v16; // rcx
  char *v17; // r11
  __int64 v18; // r10
  unsigned int v19; // edx
  __int64 v20; // rax
  unsigned int updated; // ebx
  struct _KTHREAD *v22; // rax
  bool v23; // zf
  char *v25; // [rsp+30h] [rbp-108h] BYREF
  _QWORD v26[2]; // [rsp+38h] [rbp-100h] BYREF
  int v27; // [rsp+48h] [rbp-F0h]
  unsigned int v28; // [rsp+4Ch] [rbp-ECh] BYREF
  __int64 v29; // [rsp+50h] [rbp-E8h]
  _BYTE v30[136]; // [rsp+58h] [rbp-E0h] BYREF

  memset_0(v30, 0, 0x80uLL);
  v28 = 8;
  v26[0] = 0LL;
  v25 = v30;
  v8 = (volatile signed __int64 *)(a1 + 440);
  v26[1] = 0LL;
  v29 = 0LL;
  v27 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v10 = KeAbPreAcquire(a1 + 440, 0LL);
  v12 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 440), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 440), v10, a1 + 440);
  if ( v12 )
    *((_BYTE *)v12 + 10) = 1;
  v13 = *a2;
  if ( v27 == -1 )
  {
    v26[0] = 0LL;
    v17 = (char *)v26;
    v15 = 0;
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 448);
    v15 = 1;
    v27 = 0;
    if ( v14 )
    {
      v16 = *(unsigned __int8 *)(v14 + 2);
      if ( v28 < (unsigned int)v16 && !(unsigned int)SmArrayGrow(v16, v11, &v28, &v25) )
        goto LABEL_26;
    }
    v17 = v25;
  }
  v18 = *(_QWORD *)(a1 + 448);
  if ( v18 )
  {
    while ( 1 )
    {
      v19 = -1;
      v20 = (unsigned __int16)*(_DWORD *)v18;
      if ( HIBYTE(*(_DWORD *)v18) )
        break;
      if ( (unsigned __int16)*(_DWORD *)v18 )
      {
        do
        {
          if ( *(_DWORD *)(v18 + 16LL * (((unsigned int)v20 + v19) >> 1) + 16) > v13 )
            LODWORD(v20) = ((unsigned int)v20 + v19) >> 1;
          else
            v19 = ((unsigned int)v20 + v19) >> 1;
        }
        while ( v19 + 1 != (_DWORD)v20 );
      }
      if ( v15 )
      {
        *(_QWORD *)v17 = v18;
        *((_QWORD *)v17 + 1) = v18 + 16 * ((unsigned int)v20 + 1LL);
        v17 += 16;
      }
      if ( (_DWORD)v20 )
        v18 = *(_QWORD *)(16LL * (unsigned int)(v20 - 1) + v18 + 24);
      else
        v18 = *(_QWORD *)(v18 + 8);
    }
    if ( (unsigned __int16)*(_DWORD *)v18 )
    {
      do
      {
        if ( *(_DWORD *)(v18 + 8LL * (((unsigned int)v20 + v19) >> 1) + 16) < v13 )
          v19 = ((unsigned int)v20 + v19) >> 1;
        else
          v20 = ((unsigned int)v20 + v19) >> 1;
      }
      while ( v19 + 1 != (_DWORD)v20 );
    }
    *(_QWORD *)v17 = v18;
    *((_QWORD *)v17 + 1) = v18 + 8 * (v20 + 2);
    if ( v15 )
      v27 = ((v17 - v25) >> 4) + 1;
  }
  else if ( !v15 )
  {
    *(_QWORD *)v17 = 0LL;
    *((_QWORD *)v17 + 1) = 0LL;
  }
LABEL_26:
  updated = SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictUpdatePass(a1, (_DWORD)a2, a3, a4, (__int64)&v25);
  if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v8);
  KeAbPostRelease((ULONG_PTR)v8);
  v22 = KeGetCurrentThread();
  v23 = v22->SpecialApcDisable++ == -1;
  if ( v23 && ($727077A9B6E167EAE1398C74674DC5A5 *)v22->ApcState.ApcListHead[0].Flink != &v22->152 )
    KiCheckForKernelApcDelivery();
  return updated;
}
