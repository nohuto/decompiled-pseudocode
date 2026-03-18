/*
 * XREFs of VidSchCreateHwQueue @ 0x140031B80
 * Callers:
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x140104104 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 * Callees:
 *     VidSchTerminateHwQueue @ 0x14002AE50 (VidSchTerminateHwQueue.c)
 *     ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140031F70 (-VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiInterlockedInsertTailList @ 0x140032D40 (VidSchiInterlockedInsertTailList.c)
 *     ?VidSchiIncrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@@Z @ 0x140032E64 (-VidSchiIncrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@@Z.c)
 *     VidSchiCreateNativeFenceLog @ 0x140032FB8 (VidSchiCreateNativeFenceLog.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x14003F30C (McTemplateK0ppp_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VidSchCreateHwQueue(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // r15
  int NativeFenceLog; // edi
  __int64 Pool2; // rax
  __int64 v10; // rbx
  _BYTE *v11; // rsi
  bool v12; // al
  int v13; // ecx
  bool v14; // al
  __int64 v15; // rcx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  _QWORD *v21; // rdx
  _QWORD *v22; // rax
  __int64 result; // rax
  int v24; // r8d
  unsigned int v25; // r15d
  int i; // r14d
  __int64 v27; // rax
  struct _VIDSCH_QUEUE_PACKET *v28; // rsi
  __int64 v29; // rcx
  __int64 v30; // r9
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  __int64 v35; // [rsp+48h] [rbp-38h] BYREF
  int v36; // [rsp+50h] [rbp-30h]
  int v37; // [rsp+54h] [rbp-2Ch]
  __int64 v38; // [rsp+58h] [rbp-28h]
  __int128 v39; // [rsp+60h] [rbp-20h]
  __int64 v40; // [rsp+70h] [rbp-10h]
  __int64 v41; // [rsp+C8h] [rbp+48h]

  v4 = *(_QWORD *)(a2 + 8);
  NativeFenceLog = 0;
  v41 = *(_QWORD *)(v4 + 32);
  Pool2 = ExAllocatePool2(64LL, 328LL, 1684105558LL);
  v10 = Pool2;
  if ( !Pool2 )
  {
    WdLogSingleEntry0(3LL);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 2321;
    return result;
  }
  *(_DWORD *)Pool2 = 1684105558;
  *(_QWORD *)(Pool2 + 48) = a1;
  v11 = (_BYTE *)(a3 + 4);
  *(_QWORD *)(Pool2 + 40) = a2;
  *(_QWORD *)(Pool2 + 128) = KeGetCurrentThread();
  v12 = (*(_DWORD *)(a2 + 56) & 0x20) != 0 || (*(_BYTE *)(v4 + 48) & 4) != 0 || (*v11 & 1) != 0;
  v13 = *(_DWORD *)v11;
  *(_BYTE *)(v10 + 144) = v12;
  v14 = (v13 & 8) != 0;
  *(_BYTE *)(v10 + 272) = (v13 & 0x10) != 0;
  v15 = *(_QWORD *)(a2 + 24);
  *(_BYTE *)(v10 + 145) = v14;
  if ( v15 )
  {
    v16 = *(_DWORD *)(v15 + 144) - 12;
    if ( !v16
      || (v17 = v16 - 1) == 0
      || (v18 = v17 - 1) == 0
      || (v19 = v18 - 2) == 0
      || (v20 = v19 - 1) == 0
      || v20 == 4 )
    {
      *(_BYTE *)(v10 + 146) = 1;
      v11 = (_BYTE *)(a3 + 4);
    }
  }
  *(_QWORD *)(v10 + 168) = v10 + 160;
  *(_QWORD *)(v10 + 160) = v10 + 160;
  *(_QWORD *)(v10 + 208) = v10 + 160;
  *(_QWORD *)(v10 + 224) = v10 + 216;
  *(_QWORD *)(v10 + 216) = v10 + 216;
  *(_QWORD *)(v10 + 248) = v10 + 240;
  *(_QWORD *)(v10 + 240) = v10 + 240;
  if ( !_InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 120), 1u) )
    VidSchiIncrementHwContextReference(*(struct VIDSCH_HW_CONTEXT **)(v10 + 40));
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v41 + 1984), &LockHandle);
  v21 = *(_QWORD **)(a2 + 296);
  v22 = (_QWORD *)(v10 + 8);
  if ( *v21 != a2 + 288 )
    __fastfail(3u);
  *v22 = a2 + 288;
  *(_QWORD *)(v10 + 16) = v21;
  *v21 = v22;
  *(_QWORD *)(a2 + 296) = v22;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( a1 )
  {
    *(_QWORD *)(v10 + 112) = *(_QWORD *)(a1 + 32);
  }
  else if ( (*(_DWORD *)(a2 + 56) & 1) != 0 )
  {
    v31 = *(_DWORD *)v11;
    v32 = *(_QWORD *)(v41 + 8);
    v33 = *(_QWORD *)(a2 + 48);
    v35 = 0LL;
    v36 = v31;
    v38 = *(_QWORD *)(a3 + 16);
    v37 = *(_DWORD *)(a3 + 8);
    v40 = *(_QWORD *)(a3 + 40);
    v39 = 0LL;
    NativeFenceLog = ((__int64 (__fastcall *)(__int64, __int64, __int64 *))DxgCoreInterface[22])(v32, v33, &v35);
    if ( NativeFenceLog < 0 )
      goto LABEL_18;
    *(_QWORD *)(v10 + 112) = v35;
  }
  else
  {
    *(_QWORD *)(v10 + 112) = 0LL;
  }
  if ( !*(_BYTE *)(v10 + 272) && g_NativeFenceDebugTest != 1
    || (NativeFenceLog = VidSchiCreateNativeFenceLog(v10), NativeFenceLog >= 0) )
  {
    v25 = *(_DWORD *)(v41 + 152) * ((*(_DWORD *)(v41 + 76) << 6) + ((8 * *(_DWORD *)(v41 + 76) + 231) & 0xFFFFFFF8))
        + 8 * (*(_DWORD *)(v41 + 76) + 171);
    if ( v25 <= 0x640 )
      v25 = 1600;
    for ( i = 0; i < 5; ++i )
    {
      v27 = ExAllocatePool2(64LL, v25, 895576406LL);
      v28 = (struct _VIDSCH_QUEUE_PACKET *)v27;
      if ( !v27 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 2492;
        NativeFenceLog = -1073741801;
        goto LABEL_18;
      }
      VidSchiInterlockedInsertTailList(v41 + 1992, v10 + 240, v27 + 8, v10 + 256);
      VidSchiFreeQueuePacket((struct VIDSCH_HW_QUEUE *)v10, v28);
    }
    if ( !a1 && bTracingEnabled )
    {
      v29 = *(_QWORD *)(v10 + 40);
      v30 = *(_QWORD *)(v29 + 24);
      if ( !v30 || (*(_DWORD *)(v29 + 56) & 0x40) != 0 )
        v30 = *(_QWORD *)(v10 + 40);
      if ( (byte_140081241 & 8) != 0 )
        McTemplateK0ppp_EtwWriteTransfer(v29, (unsigned int)&EventCreateHwQueue, v24, v30, 0, v10);
    }
    *a4 = v10;
    return (unsigned int)NativeFenceLog;
  }
LABEL_18:
  VidSchTerminateHwQueue((struct VIDSCH_HW_QUEUE *)v10);
  *a4 = 0LL;
  return (unsigned int)NativeFenceLog;
}
