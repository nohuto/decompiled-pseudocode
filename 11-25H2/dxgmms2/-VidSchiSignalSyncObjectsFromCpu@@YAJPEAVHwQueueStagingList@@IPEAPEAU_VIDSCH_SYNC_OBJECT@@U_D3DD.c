/*
 * XREFs of ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x14001A3B0
 * Callers:
 *     VidSchiProcessPeriodicNotificationCookie @ 0x1400031E4 (VidSchiProcessPeriodicNotificationCookie.c)
 *     VidSchiCompleteFlipEntry @ 0x14000A1C0 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiSignalRuntimeFenceForCompletedFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@W4_VIDSCH_FLIP_STATUS@@PEAVHwQueueStagingList@@@Z @ 0x14000BADC (-VidSchiSignalRuntimeFenceForCompletedFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_E.c)
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x14000BF58 (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VI.c)
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II_N3@Z @ 0x140012ACC (-VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSC.c)
 *     ?SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x140019D10 (-SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QU.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x14002B6D0 (VidSchSignalSyncObjectsFromCpu.c)
 *     ?VidMmReferenceDisplayingAllocation@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_DISPLAYING_ALLOCATION@@_K2@Z @ 0x14003B134 (-VidMmReferenceDisplayingAllocation@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_DISPLAYING_ALLOCATIO.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x140019940 (VidSchiUnwaitMonitoredFences.c)
 *     McTemplateK0qPR0PR0XR0TR0_EtwWriteTransfer @ 0x14001A2F8 (McTemplateK0qPR0PR0XR0TR0_EtwWriteTransfer.c)
 *     ??1TraceDxgkSignalSynchronizationObjectArrays@@QEAA@XZ @ 0x14001C6B8 (--1TraceDxgkSignalSynchronizationObjectArrays@@QEAA@XZ.c)
 *     VidSchiPropagateCrossAdapterSignal @ 0x14003DA1C (VidSchiPropagateCrossAdapterSignal.c)
 *     VidSchiUnwaitNativeFenceWaiters @ 0x1400476A8 (VidSchiUnwaitNativeFenceWaiters.c)
 *     VidSchiUpdateNativeFenceCurrentValue @ 0x1400478D4 (VidSchiUpdateNativeFenceCurrentValue.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     memset @ 0x140056780 (memset.c)
 */

__int64 __fastcall VidSchiSignalSyncObjectsFromCpu(
        struct HwQueueStagingList *a1,
        unsigned int a2,
        struct _VIDSCH_SYNC_OBJECT **a3,
        struct _D3DDDICB_SIGNALFLAGS a4,
        char *a5,
        struct VIDSCH_HW_QUEUE **a6)
{
  struct VIDSCH_HW_QUEUE **v6; // r12
  unsigned __int64 v8; // rdi
  HwQueueStagingList *v9; // r14
  int v10; // ebx
  __int64 v11; // rsi
  char v12; // r9
  signed __int64 v13; // r12
  char *v14; // rsi
  __int64 v15; // rdx
  unsigned int *v16; // rax
  __int64 v17; // r8
  __int64 v18; // r14
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 *v22; // rax
  __int64 v23; // rcx
  _BYTE *Pool2; // rax
  __int64 v25; // rdx
  struct _VIDSCH_SYNC_OBJECT *v26; // rcx
  _BYTE *v27; // rax
  _BYTE *v28; // rcx
  _DWORD *v30; // r8
  __int64 v31; // r9
  struct _VIDSCH_SYNC_OBJECT **v32; // r8
  unsigned __int64 v33; // r10
  signed __int64 v34; // rdx
  __int64 v35; // rcx
  char v36; // cl
  const unsigned __int64 *v37; // r14
  unsigned __int64 v38; // rdx
  char v39; // r8
  int v40; // eax
  unsigned __int64 v41; // rcx
  void (*v42)(_QWORD, __int64, __int64, const wchar_t *, ...); // rax
  __int64 v43; // rdx
  unsigned __int64 v44; // r9
  __int64 v45; // r8
  struct _VIDSCH_SYNC_OBJECT *v46; // rax
  unsigned __int64 v47; // r8
  unsigned __int64 v48; // rbx
  __int64 v49; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v50; // [rsp+20h] [rbp-E0h]
  char v51; // [rsp+50h] [rbp-B0h]
  int v52; // [rsp+54h] [rbp-ACh] BYREF
  unsigned __int64 v53; // [rsp+58h] [rbp-A8h]
  struct HwQueueStagingList *v54; // [rsp+60h] [rbp-A0h]
  __int64 v55; // [rsp+68h] [rbp-98h]
  unsigned __int64 v56; // [rsp+70h] [rbp-90h]
  struct VIDSCH_HW_QUEUE **v57; // [rsp+78h] [rbp-88h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-80h] BYREF
  _BYTE *v59; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v60[16]; // [rsp+A8h] [rbp-58h] BYREF
  int v61; // [rsp+B8h] [rbp-48h]
  _BYTE *v62; // [rsp+C0h] [rbp-40h]
  _BYTE *v63; // [rsp+C8h] [rbp-38h]
  _BYTE v64[8]; // [rsp+D0h] [rbp-30h] BYREF
  int v65; // [rsp+D8h] [rbp-28h]
  _BYTE *v66; // [rsp+E0h] [rbp-20h]
  _BYTE *v67; // [rsp+E8h] [rbp-18h]
  _BYTE v68[16]; // [rsp+F0h] [rbp-10h] BYREF
  int v69; // [rsp+100h] [rbp+0h]
  _BYTE *v70; // [rsp+108h] [rbp+8h]

  v6 = a6;
  v8 = a2;
  v9 = a1;
  v54 = a1;
  v57 = a6;
  v10 = *(_BYTE *)&a4.0 & 4;
  if ( (*(_BYTE *)&a4.0 & 4) == 0 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( (unsigned int)v11 >= (unsigned int)v8 )
        {
          v9 = v54;
          goto LABEL_5;
        }
        v25 = 8 * v11;
        v26 = a3[v11];
        if ( !*((_BYTE *)v26 + 29) && (*((_DWORD *)v26 + 13) & 0x7FFFFFFF) != 0x10 )
          break;
LABEL_32:
        v11 = (unsigned int)(v11 + 1);
      }
      v37 = (const unsigned __int64 *)&a5[v25];
      v38 = *(_QWORD *)&a5[v25];
      v39 = *((_BYTE *)v26 + 30);
      if ( *((_BYTE *)v26 + 28) )
      {
        v41 = *(_QWORD *)(*((_QWORD *)v26 + 38) + 40LL);
      }
      else
      {
        v40 = *((_DWORD *)v26 + 12);
        if ( v40 == 2 )
        {
          v41 = *((_QWORD *)v26 + 9);
        }
        else if ( v40 == 6 )
        {
          v41 = *((_QWORD *)v26 + 21);
        }
        else
        {
          v41 = *((_QWORD *)v26 + 12);
        }
      }
      if ( !v39 )
      {
        if ( (int)v41 - (int)v38 > 0 )
        {
          WdLogSingleEntry2(3LL, (unsigned int)v38, (unsigned int)v41);
          WdLogGlobalForLineNumber = 6001;
          goto LABEL_82;
        }
        if ( (_DWORD)v41 == (_DWORD)v38 )
        {
          WdLogSingleEntry1(3LL, (unsigned int)v38);
          WdLogGlobalForLineNumber = 6010;
        }
        goto LABEL_32;
      }
      if ( v38 < v41 )
      {
        WdLogSingleEntry2(3LL, v38, v41);
        WdLogGlobalForLineNumber = 5982;
LABEL_82:
        WdLogSingleEntry2(1LL, *v37, -1073741811LL);
        v50 = *v37;
        v42 = (void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[88];
        WdLogGlobalForLineNumber = 11552;
        v42(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Invalid monitored fence value 0x%I64x, returning 0x%I64x",
          v50,
          -1073741811LL,
          0LL,
          0LL,
          0LL);
        return 3221225485LL;
      }
      if ( v38 != v41 )
        goto LABEL_32;
      WdLogSingleEntry1(3LL, v38);
      v11 = (unsigned int)(v11 + 1);
      WdLogGlobalForLineNumber = 5991;
    }
  }
LABEL_5:
  v12 = 1;
  v51 = 1;
  if ( !(_DWORD)v8 )
    goto LABEL_26;
  v53 = v8;
  v13 = (char *)a3 - a5;
  v14 = a5;
  do
  {
    v15 = *(_QWORD *)&v14[v13];
    if ( !*(_BYTE *)(v15 + 29) )
    {
      v16 = *(unsigned int **)(v15 + 72);
      if ( *(_DWORD *)(v15 + 48) == 6 )
      {
        v17 = *(_QWORD *)v16;
      }
      else if ( *(_BYTE *)(v15 + 30) )
      {
        v17 = *(_QWORD *)v16;
      }
      else
      {
        v17 = *v16;
      }
      WdLogSingleEntry3(4LL, *(_QWORD *)&v14[v13], v17, *(_QWORD *)v14);
      v18 = *(_QWORD *)&v14[v13];
      WdLogGlobalForLineNumber = 11590;
      if ( *(_DWORD *)(v18 + 48) == 6 )
      {
        v12 = v51;
        *(_QWORD *)(v18 + 168) = *(_QWORD *)v14;
        goto LABEL_17;
      }
      v12 = 0;
      v51 = 0;
      if ( *(_BYTE *)(v18 + 28) )
      {
        v56 = *(_QWORD *)v14;
        v55 = *(_QWORD *)(v18 + 304);
        memset(&LockHandle, 0, sizeof(LockHandle));
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v55 + 8), &LockHandle);
        v47 = *(_QWORD *)(v55 + 40);
        if ( v47 >= v56 )
        {
          WdLogSingleEntry3(3LL, *(_QWORD *)(v18 + 16), v47, v56);
          WdLogGlobalForLineNumber = 6174;
        }
        else
        {
          *(_QWORD *)(v55 + 40) = v56;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v12 = 0;
        goto LABEL_17;
      }
      if ( !*(_BYTE *)(v18 + 31) || v10 )
      {
        v19 = *(_QWORD *)v14;
      }
      else
      {
        v19 = *(_QWORD *)v14;
        if ( *(_QWORD *)(v18 + 96) >= *(_QWORD *)v14 )
        {
LABEL_17:
          v20 = *(_QWORD *)&v14[v13];
          v21 = *(_QWORD *)v14;
          if ( *(_DWORD *)(v20 + 48) == 6 )
          {
            if ( v10 || v21 > **(_QWORD **)(v20 + 72) )
            {
              if ( g_NativeFenceDebugTest )
              {
                **(_QWORD **)(v20 + 72) = v21;
              }
              else
              {
                v52 = 0;
                VidSchiUpdateNativeFenceCurrentValue(*(_QWORD *)(v20 + 8), *(_QWORD *)(v20 + 160), v21, &v52);
                v12 = v51;
              }
            }
          }
          else if ( *(_BYTE *)(v20 + 30) )
          {
            v22 = *(unsigned __int64 **)(v20 + 72);
            if ( v10 || v21 > *v22 )
              *v22 = v21;
          }
          else
          {
            v30 = *(_DWORD **)(v20 + 72);
            if ( v10 || *v30 - (int)v21 < 0 )
              *v30 = v21;
          }
          v23 = *(_QWORD *)&v14[v13];
          if ( *(_BYTE *)(v23 + 28) )
          {
            VidSchiPropagateCrossAdapterSignal(*(_QWORD *)(v23 + 8), *(_QWORD *)&v14[v13]);
            v12 = v51;
          }
          goto LABEL_24;
        }
      }
      *(_QWORD *)(v18 + 96) = v19;
      goto LABEL_17;
    }
    v36 = 0;
    if ( *(_DWORD *)(v15 + 48) == 6 )
      v36 = v12;
    v12 = v36;
    v51 = v36;
LABEL_24:
    v14 += 8;
    --v53;
  }
  while ( v53 );
  v9 = v54;
  v6 = v57;
LABEL_26:
  if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
  {
    v59 = 0LL;
    v61 = 0;
    v63 = 0LL;
    v65 = 0;
    v67 = 0LL;
    v69 = 0;
    if ( (unsigned int)v8 <= 2 )
    {
      Pool2 = v60;
      v59 = v60;
      if ( (_DWORD)v8 )
      {
        memset(v60, 0, 8 * v8);
        Pool2 = v59;
      }
LABEL_35:
      v61 = v8;
      v62 = Pool2;
      if ( (unsigned int)v8 > 2 )
        goto LABEL_59;
      v27 = v64;
      v63 = v64;
      if ( (_DWORD)v8 )
      {
        memset(v64, 0, 4 * v8);
        v27 = v63;
      }
    }
    else
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v8 >= 8 )
      {
        Pool2 = (_BYTE *)ExAllocatePool2(64LL, 8 * v8, 945908054LL);
        v59 = Pool2;
        goto LABEL_35;
      }
      v62 = 0LL;
LABEL_59:
      if ( 0xFFFFFFFFFFFFFFFFuLL / v8 < 4 )
      {
        v66 = 0LL;
        v28 = 0LL;
        goto LABEL_42;
      }
      v27 = (_BYTE *)ExAllocatePool2(64LL, 4 * v8, 945908054LL);
      v63 = v27;
    }
    v65 = v8;
    v66 = v27;
    if ( (unsigned int)v8 > 2 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v8 < 8 )
      {
        v28 = 0LL;
        goto LABEL_42;
      }
      v28 = (_BYTE *)ExAllocatePool2(64LL, 8 * v8, 945908054LL);
      v67 = v28;
    }
    else
    {
      v28 = v68;
      v67 = v68;
      if ( (_DWORD)v8 )
      {
        memset(v68, 0, 8 * v8);
        v28 = v67;
      }
    }
    v69 = v8;
LABEL_42:
    v70 = v28;
    if ( v66 && v62 && v28 && (_DWORD)v8 )
    {
      if ( a5 )
      {
        v31 = 0LL;
        v32 = a3;
        v33 = v8;
        do
        {
          v31 += 4LL;
          v34 = (char *)v32 - (char *)a3;
          *(_QWORD *)&v62[v34] = *((_QWORD *)*v32 + 2);
          *(_DWORD *)&v66[v31 - 4] = *((unsigned __int8 *)*v32 + 29);
          v35 = *(__int64 *)((char *)v32++ + a5 - (char *)a3);
          *(_QWORD *)&v70[v34] = v35;
          --v33;
        }
        while ( v33 );
      }
      else
      {
        v43 = 0LL;
        v44 = v8;
        v45 = 0LL;
        do
        {
          v46 = a3[v43++];
          v45 += 4LL;
          *(_QWORD *)&v62[v43 * 8 - 8] = *((_QWORD *)v46 + 2);
          *(_DWORD *)&v66[v45 - 4] = *((unsigned __int8 *)a3[v43 - 1] + 29);
          *(_QWORD *)&v70[v43 * 8 - 8] = 0LL;
          --v44;
        }
        while ( v44 );
      }
      v28 = v70;
    }
    if ( v62 && v66 && v28 && Microsoft_Windows_DxgKrnlEnableBits < 0 )
      McTemplateK0qPR0PR0XR0TR0_EtwWriteTransfer(
        (__int64)v28,
        &EventVidSchiSignalSynchronizationObjectFromCpu,
        (__int64)v66,
        v8,
        (__int64)a3,
        (__int64)v62,
        (__int64)v28,
        (__int64)v66);
    TraceDxgkSignalSynchronizationObjectArrays::~TraceDxgkSignalSynchronizationObjectArrays((TraceDxgkSignalSynchronizationObjectArrays *)&v59);
  }
  if ( v51 )
  {
    if ( (_DWORD)v8 )
    {
      v48 = v8;
      do
      {
        VidSchiUnwaitNativeFenceWaiters(v9, *a3++, 0LL, v6, v49);
        --v48;
      }
      while ( v48 );
    }
  }
  else
  {
    VidSchiUnwaitMonitoredFences(v9, *((_QWORD *)*a3 + 1));
  }
  return 0LL;
}
