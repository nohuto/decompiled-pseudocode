/*
 * XREFs of ?VidMmProcessAsyncOperation@@YAXPEAX@Z @ 0x1400FC880
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x14000D490 (McTemplateK0p_EtwWriteTransfer.c)
 *     ??3@YAXPEAX@Z @ 0x14001D2D0 (--3@YAXPEAX@Z.c)
 *     ?HasOutstandingPresentReferences@VIDMM_GLOBAL_ALLOC_NONPAGED@@QEBA_NXZ @ 0x140034050 (-HasOutstandingPresentReferences@VIDMM_GLOBAL_ALLOC_NONPAGED@@QEBA_NXZ.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x14003D274 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?VidMmUnmapView@@YAXPEAU_EPROCESS@@PEAX@Z @ 0x1400CC6A8 (-VidMmUnmapView@@YAXPEAU_EPROCESS@@PEAX@Z.c)
 *     ?VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@PEAVDXGPUSHLOCKBASE@@@Z @ 0x140100500 (-VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@PEAVDXGPUSHLOCKBASE@@@Z.c)
 *     ?WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@I@Z @ 0x1401040E4 (-WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@I@Z.c)
 */

void __fastcall VidMmProcessAsyncOperation(void *a1, __int64 a2, unsigned int a3)
{
  int v4; // ecx
  int v5; // ecx
  struct _KEVENT *v6; // r15
  __int64 v7; // r14
  struct DXGPUSHLOCKBASE *v8; // rbp
  VIDMM_GLOBAL_ALLOC_NONPAGED *HasOutstandingPresentReferences; // rcx
  int v10; // eax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  union _LARGE_INTEGER Interval; // [rsp+60h] [rbp+8h] BYREF
  struct VIDMM_ALLOC *v16; // [rsp+68h] [rbp+10h] BYREF

  v4 = *((_DWORD *)a1 + 8) - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        v6 = (struct _KEVENT *)*((_QWORD *)a1 + 5);
        v7 = *(_QWORD *)(*((_QWORD *)a1 + 6) + 24LL);
        v16 = (struct VIDMM_ALLOC *)v7;
        v8 = (struct DXGPUSHLOCKBASE *)(**(_QWORD **)v7 + 216LL);
        if ( **(_QWORD **)v7 != -216LL )
        {
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v8, 0LL);
        }
        while ( 1 )
        {
          HasOutstandingPresentReferences = *(VIDMM_GLOBAL_ALLOC_NONPAGED **)(v7 + 96);
          if ( *(int *)(v7 + 104) <= 0 )
            HasOutstandingPresentReferences = (VIDMM_GLOBAL_ALLOC_NONPAGED *)VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(HasOutstandingPresentReferences);
          else
            LOBYTE(HasOutstandingPresentReferences) = 1;
          if ( !(_BYTE)HasOutstandingPresentReferences )
            break;
          if ( *(_DWORD *)(*(_QWORD *)(v7 + 96) + 16LL) > 1u )
            break;
          v10 = VIDMM_GLOBAL::WaitOnAllocationPresentQueue(
                  HasOutstandingPresentReferences,
                  (struct VIDMM_MULTI_ALLOC *)v7,
                  a3);
          if ( v10 >= 0 )
            break;
          WdLogSingleEntry1(3LL, v10);
          WdLogGlobalForLineNumber = 982;
          Interval.QuadPart = -150LL;
          KeDelayExecutionThread(0, 0, &Interval);
        }
        VidMmCompleteAsyncUnpin((struct VIDMM_GLOBAL *)v6, &v16, v8);
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(&v6[1852], 0LL);
        v6[1852].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)KeGetCurrentThread();
        if ( v6[1854].Header.LockNV-- == 1 )
          KeSetEvent(v6 + 1853, 0, 0);
        v6[1852].Header.WaitListHead.Flink = 0LL;
        ExReleasePushLockExclusiveEx(&v6[1852], 0LL);
        KeLeaveCriticalRegion();
        DxgkUnreferenceDxgResource(*(struct DXGRESOURCE **)(*((_QWORD *)a1 + 6) + 40LL));
        DxgkUnreferenceDxgAllocation(*((struct DXGALLOCATION **)a1 + 6));
      }
    }
    else
    {
      VidMmUnmapView(*((struct _EPROCESS **)a1 + 5), *((void **)a1 + 7));
      v12 = *((_QWORD *)a1 + 8);
      if ( v12 )
        _InterlockedDecrement((volatile signed __int32 *)(v12 + 428));
      ObfDereferenceObject(*((PVOID *)a1 + 6));
      if ( (byte_140081241 & 1) != 0 )
        McTemplateK0ppp_EtwWriteTransfer(
          v13,
          &EndVidMmUnmapViewAsync,
          v14,
          *((_QWORD *)a1 + 5),
          *((_QWORD *)a1 + 6),
          *((_QWORD *)a1 + 7));
    }
  }
  else
  {
    ObfDereferenceObject(*((PVOID *)a1 + 5));
    if ( (byte_140081241 & 1) != 0 )
      McTemplateK0p_EtwWriteTransfer();
  }
  operator delete(a1);
  _InterlockedDecrement(&g_VidMmAsyncOpPendingCount);
}
