/*
 * XREFs of ?VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEXT_DATA@@PEAVDXGCONTEXT@@@Z @ 0x140021FC4
 * Callers:
 *     VidSchCreateSystemDevices @ 0x1400D380C (VidSchCreateSystemDevices.c)
 *     VidSchCreateHwContext @ 0x140103EC0 (VidSchCreateHwContext.c)
 * Callees:
 *     ?DxgkrnlContextHandleCompareFunction@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x14000D928 (-DxgkrnlContextHandleCompareFunction@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?KmdContextHandleCompareFunction@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x14000D944 (-KmdContextHandleCompareFunction@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     VidSchTerminateHwContext @ 0x140021B40 (VidSchTerminateHwContext.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140023720 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VidSchiIncrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1400237B4 (-VidSchiIncrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@@Z.c)
 *     McTemplateK0pqqqqqqqqppp_EtwWriteTransfer @ 0x1400427FC (McTemplateK0pqqqqqqqqppp_EtwWriteTransfer.c)
 *     ?DdiCreateContext@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATECONTEXT@@@Z @ 0x14004B368 (-DdiCreateContext@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATECONTEXT@@@Z.c)
 *     McTemplateK0pppp_EtwWriteTransfer @ 0x140050B64 (McTemplateK0pppp_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     memset @ 0x140056340 (memset.c)
 *     VidSchiUpdateDdiHwContextPriority @ 0x140101C64 (VidSchiUpdateDdiHwContextPriority.c)
 */

struct VIDSCH_HW_CONTEXT *__fastcall VidSchiCreateHwContextInternal(
        struct _VIDSCH_DEVICE *a1,
        struct _VIDSCH_CONTEXT_DATA *a2,
        struct DXGCONTEXT *a3)
{
  __int64 v3; // r15
  __int64 Pool2; // rax
  char v8; // di
  __int64 v9; // rbx
  __int128 v10; // xmm0
  __int64 *v11; // rcx
  __int128 v12; // xmm1
  __int64 v13; // rax
  __int64 v14; // r13
  struct DXGPROCESS *Current; // rax
  _QWORD *v16; // rdx
  _QWORD *v17; // rax
  struct _VIDSCH_DEVICE **v19; // rdx
  struct _VIDSCH_DEVICE *v20; // rax
  __int64 v21; // rax
  struct _RTL_BALANCED_NODE *v22; // r15
  struct _RTL_BALANCED_NODE *v23; // rsi
  __int64 v24; // r8
  struct _RTL_BALANCED_NODE *v25; // rax
  __int64 v26; // r8
  void *v27; // r15
  struct _RTL_BALANCED_NODE *v28; // rsi
  struct _RTL_BALANCED_NODE *v29; // rax
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // rdx
  unsigned int v33; // r9d
  __int64 v34; // rax
  bool v35; // cf
  __int64 v36; // rax
  __int64 v37; // rax
  ADAPTER_RENDER *v38; // rcx
  void *v39; // rdx
  int v40; // edx
  int v41; // r8d
  bool v42; // zf
  __int64 v43; // rcx
  __int64 v44; // r11
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-59h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+98h] [rbp-41h]
  _DXGKARG_CREATECONTEXT v47; // [rsp+A0h] [rbp-39h] BYREF

  v3 = *((_QWORD *)a1 + 4);
  Pool2 = ExAllocatePool2(64LL, 424LL, 1667328342LL);
  v8 = 0;
  v9 = Pool2;
  if ( !Pool2 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2703;
    return 0LL;
  }
  v10 = *(_OWORD *)a2;
  v11 = *(__int64 **)(v3 + 688);
  v12 = *((_OWORD *)a2 + 1);
  *(_DWORD *)Pool2 = 1667328342;
  *(_OWORD *)(Pool2 + 56) = v10;
  *(_QWORD *)(Pool2 + 24) = a3;
  *(_OWORD *)(Pool2 + 72) = v12;
  *(_QWORD *)(Pool2 + 8) = a1;
  v13 = *((unsigned int *)a2 + 1);
  if ( (unsigned int)v13 < *(_DWORD *)(v3 + 760) )
    v11 += v13;
  v14 = *v11;
  *(_QWORD *)(v9 + 16) = *v11;
  Current = DXGPROCESS::GetCurrent();
  *(_QWORD *)(v9 + 320) = 0LL;
  *(_BYTE *)(v9 + 141) = BYTE1(*((_DWORD *)Current + 102)) & 1;
  *(_OWORD *)(v9 + 344) = 0LL;
  *(_OWORD *)(v9 + 360) = 0LL;
  *(_OWORD *)(v9 + 376) = 0LL;
  *(_QWORD *)(v9 + 392) = 0LL;
  KeInitializeEvent((PRKEVENT)(v9 + 344), SynchronizationEvent, 0);
  *(_QWORD *)(v9 + 408) = v9 + 400;
  *(_QWORD *)(v9 + 400) = v9 + 400;
  *(_QWORD *)(v9 + 296) = v9 + 288;
  *(_QWORD *)(v9 + 288) = v9 + 288;
  VidSchiIncrementHwContextReference((struct VIDSCH_HW_CONTEXT *)v9);
  SpinLock = (PKSPIN_LOCK)(v3 + 1984);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 1984), &LockHandle);
  v16 = *(_QWORD **)(v14 + 1720);
  v17 = (_QWORD *)(v9 + 272);
  if ( *v16 != v14 + 1712
    || (*v17 = v14 + 1712,
        *(_QWORD *)(v9 + 280) = v16,
        *v16 = v17,
        *(_QWORD *)(v14 + 1720) = v17,
        v19 = (struct _VIDSCH_DEVICE **)*((_QWORD *)a1 + 12),
        v20 = (struct _VIDSCH_DEVICE *)(v9 + 256),
        *v19 != (struct _VIDSCH_DEVICE *)((char *)a1 + 88)) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v20 = (char *)a1 + 88;
  *(_QWORD *)(v9 + 264) = v19;
  *v19 = v20;
  *((_QWORD *)a1 + 12) = v20;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( a3 )
  {
    *(_QWORD *)(v9 + 48) = *((_QWORD *)a3 + 23);
    v21 = *((_QWORD *)a3 + 59);
    *(_QWORD *)(v9 + 32) = v21;
    *(_QWORD *)(v21 + 8) = v9;
    goto LABEL_13;
  }
  v30 = ExAllocatePool2(64LL, 16LL, 1265072196LL);
  *(_QWORD *)(v9 + 32) = v30;
  if ( !v30 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2781;
LABEL_28:
    VidSchTerminateHwContext((PVOID)v9);
    return 0LL;
  }
  *(_BYTE *)(v9 + 142) = 1;
  *(_QWORD *)(v30 + 8) = v9;
  memset(&v47, 0, sizeof(v47));
  v31 = *(_QWORD *)(v9 + 16);
  v32 = *(_QWORD *)(v3 + 688);
  v33 = *(_DWORD *)(v3 + 760);
  v47.hContext = *(HANDLE *)(v9 + 32);
  v34 = *(unsigned __int16 *)(v31 + 4);
  v35 = (unsigned int)v34 < v33;
  v36 = v32 + 8 * v34;
  if ( !v35 )
    v36 = v32;
  v47.NodeOrdinal = *(unsigned __int16 *)(*(_QWORD *)v36 + 8LL);
  v37 = *(unsigned __int16 *)(v31 + 4);
  if ( (unsigned int)v37 < v33 )
    v32 += 8 * v37;
  v38 = *(ADAPTER_RENDER **)(v3 + 8);
  v47.EngineAffinity = 1 << *(_BYTE *)(*(_QWORD *)v32 + 6LL);
  v39 = (void *)*((_QWORD *)a1 + 2);
  v47.Flags.Value = (v47.Flags.Value & 0xFFFFFFF6 | ((*(_DWORD *)a2 & 4 | ((*(_DWORD *)a2 & 0x200 | 0x400u) >> 4)) >> 2)) ^ ((*(_BYTE *)&v47.Flags.0 & 0xF6 | ((*(_DWORD *)a2 & 4 | ((*(_DWORD *)a2 & 0x200 | 0x400u) >> 4)) >> 2)) ^ (unsigned __int8)(4 * *(_BYTE *)(344LL * *(unsigned __int16 *)(v14 + 6) + *(_QWORD *)(*((_QWORD *)v38 + 2) + 2992LL) + 48))) & 4;
  if ( (int)ADAPTER_RENDER::DdiCreateContext(v38, v39, &v47) < 0 )
    goto LABEL_28;
  v42 = bTracingEnabled == 0;
  LODWORD(v43) = v47.hContext;
  *(_QWORD *)(v9 + 48) = v47.hContext;
  if ( v42 )
    goto LABEL_39;
  v44 = *((_QWORD *)a1 + 1);
  if ( !v44 )
    LODWORD(v44) = (_DWORD)a1;
  if ( (byte_140081241 & 8) != 0 )
  {
    McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
      v47.ContextInfo.AllocationListSize,
      (unsigned int)&EventCreateContext,
      v47.ContextInfo.DmaBufferPrivateDataSize,
      v44,
      v47.NodeOrdinal,
      v47.EngineAffinity,
      v47.ContextInfo.DmaBufferSize,
      v47.ContextInfo.DmaBufferSegmentSet,
      v47.ContextInfo.DmaBufferPrivateDataSize,
      v47.ContextInfo.AllocationListSize,
      v47.ContextInfo.PatchLocationListSize,
      (2 * ((*(_DWORD *)(*(_QWORD *)(v9 + 8) + 48LL) & 0x10) != 0)) | 1,
      v9);
    v43 = *(_QWORD *)(v9 + 48);
LABEL_39:
    if ( (byte_140081241 & 8) != 0 )
      McTemplateK0pppp_EtwWriteTransfer(v43, v40, v41, v9, v9, v43, *(_QWORD *)(v9 + 32));
  }
LABEL_13:
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
  v22 = *(struct _RTL_BALANCED_NODE **)(v9 + 32);
  v23 = *(struct _RTL_BALANCED_NODE **)(v14 + 1752);
  LOBYTE(v24) = 0;
  if ( !v23 )
    goto LABEL_20;
  while ( (int)DxgkrnlContextHandleCompareFunction(v22, v23) < 0 )
  {
    v25 = v23->Children[0];
    if ( !v23->Children[0] )
    {
      LOBYTE(v24) = 0;
      goto LABEL_20;
    }
LABEL_16:
    v23 = v25;
  }
  v25 = v23->Children[1];
  if ( v25 )
    goto LABEL_16;
  LOBYTE(v24) = 1;
LABEL_20:
  RtlAvlInsertNodeEx(v14 + 1752, v23, v24, v9 + 152);
  v27 = *(void **)(v9 + 48);
  v28 = *(struct _RTL_BALANCED_NODE **)(v14 + 1760);
  if ( v28 )
  {
    while ( 1 )
    {
      if ( (int)KmdContextHandleCompareFunction(v27, v28) < 0 )
      {
        v29 = v28->Children[0];
        if ( !v28->Children[0] )
          break;
      }
      else
      {
        v29 = v28->Children[1];
        if ( !v29 )
        {
          v8 = 1;
          break;
        }
      }
      v28 = v29;
    }
  }
  LOBYTE(v26) = v8;
  RtlAvlInsertNodeEx(v14 + 1760, v28, v26, v9 + 176);
  *(_BYTE *)(v9 + 143) = 1;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  VidSchiUpdateDdiHwContextPriority(v9);
  return (struct VIDSCH_HW_CONTEXT *)v9;
}
