/*
 * XREFs of ?VidMmProcessAsyncOperation@@YAXPEAX@Z @ 0x1400CDFC0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x1400188F8 (McTemplateK0p_EtwWriteTransfer.c)
 *     ??3@YAXPEAX@Z @ 0x140028730 (--3@YAXPEAX@Z.c)
 *     ?HasOutstandingPresentReferences@VIDMM_GLOBAL_ALLOC_NONPAGED@@QEBA_NXZ @ 0x140035700 (-HasOutstandingPresentReferences@VIDMM_GLOBAL_ALLOC_NONPAGED@@QEBA_NXZ.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x14003F30C (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?ReleaseInverseSemaphore@DXGINVERSESEMAPHORE@@QEAAXXZ @ 0x140040678 (-ReleaseInverseSemaphore@DXGINVERSESEMAPHORE@@QEAAXXZ.c)
 *     ?VidMmUnmapView@@YAXPEAU_EPROCESS@@PEAX@Z @ 0x1400CE1B0 (-VidMmUnmapView@@YAXPEAU_EPROCESS@@PEAX@Z.c)
 *     ?VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@PEAVDXGPUSHLOCKBASE@@@Z @ 0x1400CE1FC (-VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@PEAVDXGPUSHLOCKBASE@@@Z.c)
 *     ?WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@I@Z @ 0x1400CEA28 (-WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@I@Z.c)
 */

void __fastcall VidMmProcessAsyncOperation(void *a1, __int64 a2, unsigned int a3)
{
  int v4; // ecx
  int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  struct _KEVENT *v9; // r15
  __int64 v10; // r14
  struct DXGPUSHLOCKBASE *v11; // rbp
  VIDMM_GLOBAL_ALLOC_NONPAGED *HasOutstandingPresentReferences; // rcx
  int v13; // eax
  union _LARGE_INTEGER Interval; // [rsp+60h] [rbp+8h] BYREF
  struct VIDMM_ALLOC *v15; // [rsp+68h] [rbp+10h] BYREF

  v4 = *((_DWORD *)a1 + 8) - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        v9 = (struct _KEVENT *)*((_QWORD *)a1 + 5);
        v10 = *(_QWORD *)(*((_QWORD *)a1 + 6) + 24LL);
        v15 = (struct VIDMM_ALLOC *)v10;
        v11 = (struct DXGPUSHLOCKBASE *)(**(_QWORD **)v10 + 200LL);
        if ( **(_QWORD **)v10 != -200LL )
        {
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v11, 0LL);
        }
        while ( 1 )
        {
          HasOutstandingPresentReferences = *(VIDMM_GLOBAL_ALLOC_NONPAGED **)(v10 + 96);
          if ( *(int *)(v10 + 104) > 0 )
            LOBYTE(HasOutstandingPresentReferences) = 1;
          else
            HasOutstandingPresentReferences = (VIDMM_GLOBAL_ALLOC_NONPAGED *)VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(HasOutstandingPresentReferences);
          if ( !(_BYTE)HasOutstandingPresentReferences )
            break;
          if ( *(_DWORD *)(*(_QWORD *)(v10 + 96) + 16LL) > 1u )
            break;
          v13 = VIDMM_GLOBAL::WaitOnAllocationPresentQueue(
                  HasOutstandingPresentReferences,
                  (struct VIDMM_MULTI_ALLOC *)v10,
                  a3);
          if ( v13 >= 0 )
            break;
          WdLogSingleEntry1(3LL, v13);
          WdLogGlobalForLineNumber = 981;
          Interval.QuadPart = -150LL;
          KeDelayExecutionThread(0, 0, &Interval);
        }
        VidMmCompleteAsyncUnpin((struct VIDMM_GLOBAL *)v9, &v15, v11);
        DXGINVERSESEMAPHORE::ReleaseInverseSemaphore(v9 + 1852);
        DxgkUnreferenceDxgResource(*(struct DXGRESOURCE **)(*((_QWORD *)a1 + 6) + 40LL));
        DxgkUnreferenceDxgAllocation(*((struct DXGALLOCATION **)a1 + 6));
      }
    }
    else
    {
      VidMmUnmapView(*((struct _EPROCESS **)a1 + 5), *((void **)a1 + 7));
      v6 = *((_QWORD *)a1 + 8);
      if ( v6 )
        _InterlockedDecrement((volatile signed __int32 *)(v6 + 428));
      ObfDereferenceObject(*((PVOID *)a1 + 6));
      if ( (byte_140081241 & 1) != 0 )
        McTemplateK0ppp_EtwWriteTransfer(
          v7,
          &EndVidMmUnmapViewAsync,
          v8,
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
