/*
 * XREFs of ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1403A0638
 * Callers:
 *     ?DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z @ 0x1403A016C (-DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002B720 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ??_GDXGPAGINGQUEUE@@IEAAPEAXI@Z @ 0x1400349E4 (--_GDXGPAGINGQUEUE@@IEAAPEAXI@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z @ 0x140035C88 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1401821C4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z @ 0x140217E84 (-MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z.c)
 *     ?VmBusSendCreatePagingQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEBU_D3DKMT_CREATEPAGINGQUEUE@@PEAUDXGKVMB_COMMAND_CREATEPAGINGQUEUE_RETURN@@@Z @ 0x14022315C (-VmBusSendCreatePagingQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEBU_D3DKMT_CREATEPAGINGQUEUE@@PE.c)
 *     ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x140334BBC (-DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z @ 0x1403A0990 (-Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreatePagingQueue(
        DXGDEVICE *this,
        unsigned int a2,
        enum D3DDDI_PAGINGQUEUE_PRIORITY a3,
        struct DXGPAGINGQUEUE **a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  struct COREDEVICEACCESS *v12; // rdx
  __int64 v13; // rbp
  DXGPAGINGQUEUE *v14; // rax
  DXGPAGINGQUEUE **v15; // rcx
  __int64 v16; // rdx
  DXGPROCESS *v18; // rcx
  int v19; // ebx
  int HostProcess; // eax
  __int64 v21; // rdx
  int v22; // eax
  _D3DKMT_CREATEPAGINGQUEUE v23; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v24[2]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v25; // [rsp+80h] [rbp-48h]

  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8116;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsDeviceLockExclusiveOwner()", 8116LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*((ADAPTER_RENDER **)this + 2)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8117;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceSharedOwner()",
      8117LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8118;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"PagingQueue != NULL", 8118LL, 0LL, 0LL, 0LL, 0LL);
  }
  v11 = DXGQUOTAALLOCATOR<256,1265072196>::operator new(80LL, v8, v9, v10);
  if ( v11 )
  {
    *(_QWORD *)(v11 + 16) = this;
    *(_OWORD *)v11 = 0LL;
    *(_QWORD *)(v11 + 24) = 0LL;
    *(_QWORD *)(v11 + 32) = 0LL;
    *(_QWORD *)(v11 + 40) = 0LL;
    *(_DWORD *)(v11 + 48) = 0;
    *(_QWORD *)(v11 + 56) = 0LL;
    *(_QWORD *)(v11 + 64) = 1LL;
    *(_BYTE *)(v11 + 72) = 0;
    *a4 = (struct DXGPAGINGQUEUE *)v11;
    LODWORD(v13) = DXGPAGINGQUEUE::Initialize((DXGPAGINGQUEUE *)v11, a2, a3);
    if ( (int)v13 >= 0 )
    {
      v13 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      if ( !*(_BYTE *)(v13 + 209) )
      {
LABEL_11:
        v14 = *a4;
        v15 = (DXGPAGINGQUEUE **)((char *)this + 528);
        v16 = *((_QWORD *)this + 66);
        if ( *(DXGDEVICE **)(v16 + 8) != (DXGDEVICE *)((char *)this + 528) )
          __fastfail(3u);
        *(_QWORD *)v14 = v16;
        *((_QWORD *)v14 + 1) = v15;
        *(_QWORD *)(v16 + 8) = v14;
        *v15 = v14;
        _InterlockedIncrement64((volatile signed __int64 *)this + 8);
        return 0LL;
      }
      v18 = (DXGPROCESS *)*((_QWORD *)this + 5);
      *(_OWORD *)&v23.FenceValueCPUVirtualAddress = 0LL;
      v23.PhysicalAdapterIndex = a2;
      v19 = *((_DWORD *)this + 118);
      *(_OWORD *)&v23.hDevice = 0LL;
      v25 = 0LL;
      *(_OWORD *)v24 = 0LL;
      v23.Priority = a3;
      HostProcess = DXGPROCESS::GetHostProcess(v18);
      LODWORD(v13) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreatePagingQueue(
                       (DXG_GUEST_VIRTUALGPU_VMBUS *)(v13 + 4664),
                       HostProcess,
                       v19,
                       &v23,
                       (struct DXGKVMB_COMMAND_CREATEPAGINGQUEUE_RETURN *)v24);
      if ( (int)v13 >= 0 )
      {
        v21 = *((_QWORD *)*a4 + 5);
        *((_DWORD *)*a4 + 7) = v24[0];
        *(_DWORD *)(v21 + 44) = HIDWORD(v24[0]);
        v22 = MapGuestFenceCpuVaToHost(
                v24[1],
                (void **)(v21 + 56),
                (unsigned __int64 *)(v21 + 80),
                (unsigned int *)(v21 + 88));
        v13 = v22;
        if ( v22 >= 0 )
          goto LABEL_11;
        WdLogSingleEntry1(2LL, v22);
        WdLogGlobalForLineNumber = 8166;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"MapCpuVaForParavirtualization failed, returning 0x%I64x",
          v13,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
  }
  else
  {
    *a4 = 0LL;
    LODWORD(v13) = -1073741801;
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    WdLogGlobalForLineNumber = 8130;
  }
  if ( *a4 )
  {
    DXGPAGINGQUEUE::DestroyCoreState(*a4, v12);
    if ( *a4 )
      DXGPAGINGQUEUE::`scalar deleting destructor'(*a4);
    *a4 = 0LL;
  }
  return (unsigned int)v13;
}
