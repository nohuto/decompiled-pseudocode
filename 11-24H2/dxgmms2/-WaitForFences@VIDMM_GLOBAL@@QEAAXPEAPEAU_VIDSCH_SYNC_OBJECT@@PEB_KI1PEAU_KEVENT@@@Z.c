/*
 * XREFs of ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z @ 0x1400B4060
 * Callers:
 *     ?WaitForFence@VIDMM_GLOBAL@@QEAAXPEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x140038E5C (-WaitForFence@VIDMM_GLOBAL@@QEAAXPEAU_VIDSCH_SYNC_OBJECT@@_K@Z.c)
 *     VidMmWaitForFences @ 0x140043570 (VidMmWaitForFences.c)
 *     ?WaitForPagingOperationFences@VIDMM_GLOBAL@@QEAAXIPEB_KIPEAU_KEVENT@@@Z @ 0x140096C78 (-WaitForPagingOperationFences@VIDMM_GLOBAL@@QEAAXIPEB_KIPEAU_KEVENT@@@Z.c)
 *     ?MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z @ 0x1400B2F80 (-MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400B3810 (-EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400B3D10 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400B3F08 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z @ 0x1400B3FB0 (-xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEBU_DXGK_ADL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1400BA8FC (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_PAGING_QUE.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1400DB060 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1400DBD28 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALL.c)
 *     ?CommitAllocationList@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_ALLOC@@_KPEA_K@Z @ 0x1400EC038 (-CommitAllocationList@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_ALLOC@@_KPEA_K@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     VidSchSubmitWaitFromCpu @ 0x14000DF30 (VidSchSubmitWaitFromCpu.c)
 *     VidSchIsMonitoredFenceSignaled @ 0x140035150 (VidSchIsMonitoredFenceSignaled.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     memset @ 0x140056340 (memset.c)
 */

void __fastcall VIDMM_GLOBAL::WaitForFences(
        VIDMM_GLOBAL *this,
        struct _VIDSCH_SYNC_OBJECT **a2,
        const unsigned __int64 *a3,
        unsigned int a4,
        const unsigned __int64 *a5,
        struct _KEVENT *a6)
{
  char *v6; // rsi
  VIDMM_GLOBAL *v7; // rax
  unsigned __int64 v8; // r12
  __int64 v9; // rdi
  const unsigned __int64 *v10; // r14
  struct _VIDSCH_SYNC_OBJECT **v11; // r13
  unsigned int i; // ebx
  PVOID v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rsi
  PRKEVENT v17; // rcx
  int v18; // eax
  char v19; // bl
  unsigned __int64 v20; // r14
  char *v21; // r10
  const unsigned __int64 *v22; // rdx
  signed __int64 v23; // r9
  signed __int64 v24; // r11
  unsigned __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // [rsp+28h] [rbp-D8h]
  __int64 v31; // [rsp+30h] [rbp-D0h]
  __int64 v32; // [rsp+38h] [rbp-C8h]
  char v33; // [rsp+50h] [rbp-B0h]
  PRKEVENT Event; // [rsp+58h] [rbp-A8h] BYREF
  PVOID P; // [rsp+60h] [rbp-A0h]
  _BYTE v36[16]; // [rsp+68h] [rbp-98h] BYREF
  int v37; // [rsp+78h] [rbp-88h]
  VIDMM_GLOBAL *v38; // [rsp+80h] [rbp-80h]
  const unsigned __int64 *v39; // [rsp+88h] [rbp-78h]
  const unsigned __int64 *v40; // [rsp+90h] [rbp-70h]
  struct _VIDSCH_SYNC_OBJECT **v41; // [rsp+98h] [rbp-68h]
  union _LARGE_INTEGER Interval; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v43[4]; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v44; // [rsp+C8h] [rbp-38h]
  PVOID Pool2; // [rsp+D8h] [rbp-28h]
  _BYTE v46[16]; // [rsp+E0h] [rbp-20h] BYREF
  int v47; // [rsp+F0h] [rbp-10h]

  v6 = 0LL;
  Event = 0LL;
  v7 = this;
  v8 = a4;
  LODWORD(v9) = a4;
  v40 = a3;
  v10 = a3;
  v41 = a2;
  v11 = a2;
  v38 = this;
  v39 = a3;
  v33 = 1;
  while ( 1 )
  {
    Pool2 = 0LL;
    v47 = 0;
    P = 0LL;
    v37 = 0;
    if ( !a5 || *((_BYTE *)v7 + 4568) )
      break;
    if ( (unsigned int)v8 > 2 )
    {
      v20 = v8;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v8 < 8 )
        goto LABEL_50;
      Pool2 = (PVOID)ExAllocatePool2(64LL, 8 * v8, 945908054LL);
    }
    else
    {
      Pool2 = v46;
      if ( (_DWORD)v8 )
        memset(v46, 0, 8 * v8);
    }
    v47 = v8;
    v6 = (char *)Pool2;
    v20 = v8;
    if ( (unsigned int)v8 > 2 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v8 < 8 )
      {
LABEL_50:
        v21 = 0LL;
        goto LABEL_38;
      }
      P = (PVOID)ExAllocatePool2(64LL, 8 * v8, 945908054LL);
    }
    else
    {
      P = v36;
      if ( (_DWORD)v8 )
        memset(v36, 0, 8 * v8);
    }
    v21 = (char *)P;
    v37 = v8;
LABEL_38:
    if ( v6 && v21 )
    {
      v9 = 0LL;
      if ( (_DWORD)v8 )
      {
        v22 = a5;
        v23 = (char *)v40 - (char *)a5;
        v24 = (char *)v41 - (char *)a5;
        do
        {
          v25 = *(const unsigned __int64 *)((char *)v22 + v23);
          if ( *v22 <= v25 || *v22 - v25 < 0x7FFFFFFF )
          {
            v27 = 8 * v9;
            v9 = (unsigned int)(v9 + 1);
            *(_QWORD *)&v6[v27] = v25;
            *(_QWORD *)&v21[v27] = *(const unsigned __int64 *)((char *)v22 + v24);
          }
          ++v22;
          --v20;
        }
        while ( v20 );
      }
      v10 = (const unsigned __int64 *)Pool2;
      v11 = (struct _VIDSCH_SYNC_OBJECT **)P;
      v39 = (const unsigned __int64 *)Pool2;
      break;
    }
    LODWORD(v16) = -1073741801;
    WdLogSingleEntry1(1LL, -1073741801LL);
    HIDWORD(v32) = 0;
    HIDWORD(v31) = 0;
    HIDWORD(v30) = 0;
    WdLogGlobalForLineNumber = 15853;
    DxgkLogInternalTriageEvent(v26, 0x40000LL);
    v10 = v39;
    v19 = v33;
LABEL_22:
    if ( Event )
    {
      ObfDereferenceObject(Event);
      Event = 0LL;
    }
    if ( (int)v16 >= 0 || !v19 )
    {
LABEL_25:
      if ( P != v36 && P )
        ExFreePoolWithTag(P, 0);
      v13 = Pool2;
      P = 0LL;
      v37 = 0;
      if ( Pool2 != v46 )
      {
LABEL_29:
        if ( v13 )
          ExFreePoolWithTag(v13, 0);
      }
      return;
    }
    Interval.QuadPart = 50000LL;
    KeDelayExecutionThread(0, 0, &Interval);
    if ( P != v36 && P )
      ExFreePoolWithTag(P, 0);
    v6 = 0LL;
    P = 0LL;
    v7 = v38;
    v37 = 0;
    if ( Pool2 != v46 && Pool2 )
    {
      ExFreePoolWithTag(Pool2, 0);
      v7 = v38;
    }
  }
  for ( i = 0; i < (unsigned int)v9; ++i )
  {
    v14 = (__int64)v11[i];
    if ( v14 && !VidSchIsMonitoredFenceSignaled(v14, v10[i]) )
    {
      if ( a6 )
      {
        v17 = a6;
        Event = a6;
      }
      else
      {
        LODWORD(v32) = 0;
        LODWORD(v31) = 0;
        LODWORD(v30) = 24;
        v43[0] = 48LL;
        v43[3] = 512LL;
        v43[1] = 0LL;
        v43[2] = 0LL;
        v44 = 0LL;
        v15 = ObCreateObject(0LL, ExEventObjectType, v43, 0LL, 0LL, v30, v31, v32, &Event);
        LODWORD(v16) = v15;
        if ( v15 < 0 )
        {
          WdLogSingleEntry1(1LL, v15);
          HIDWORD(v32) = 0;
          HIDWORD(v31) = 0;
          HIDWORD(v30) = 0;
          WdLogGlobalForLineNumber = 15939;
          DxgkLogInternalTriageEvent(v28, 0x40000LL);
          v19 = v33;
          goto LABEL_22;
        }
        KeInitializeEvent(Event, SynchronizationEvent, 0);
        v17 = Event;
      }
      ObfReferenceObject(v17);
      v18 = VidSchSubmitWaitFromCpu(
              v9,
              v11,
              v10,
              (__int64)Event,
              0,
              1,
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v38 + 2) + 744LL) + 312LL),
              0LL);
      v16 = v18;
      if ( v18 < 0 )
      {
        ObfDereferenceObject(Event);
        WdLogSingleEntry1(1LL, v16);
        HIDWORD(v32) = 0;
        HIDWORD(v31) = 0;
        HIDWORD(v30) = 0;
        WdLogGlobalForLineNumber = 15973;
        DxgkLogInternalTriageEvent(v29, 0x40000LL);
        v19 = v33;
      }
      else
      {
        v19 = 0;
        v33 = 0;
        if ( a6 )
          goto LABEL_25;
        LODWORD(v16) = KeWaitForSingleObject(Event, Executive, 0, 0, 0LL);
      }
      goto LABEL_22;
    }
  }
  if ( a6 )
    KeSetEvent(a6, 0, 0);
  if ( P != v36 && P )
    ExFreePoolWithTag(P, 0);
  v13 = Pool2;
  P = 0LL;
  v37 = 0;
  if ( Pool2 != v46 )
    goto LABEL_29;
}
