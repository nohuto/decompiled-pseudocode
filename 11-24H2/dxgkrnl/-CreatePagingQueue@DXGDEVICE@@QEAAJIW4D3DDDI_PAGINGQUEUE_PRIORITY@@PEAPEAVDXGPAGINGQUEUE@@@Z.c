/*
 * XREFs of ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x140396C98
 * Callers:
 *     ?DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z @ 0x1403967CC (-DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002BEA0 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ??_GDXGPAGINGQUEUE@@IEAAPEAXI@Z @ 0x140034914 (--_GDXGPAGINGQUEUE@@IEAAPEAXI@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z @ 0x140035AC0 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018468C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z @ 0x14021E454 (-MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z.c)
 *     ?VmBusSendCreatePagingQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEBU_D3DKMT_CREATEPAGINGQUEUE@@PEAUDXGKVMB_COMMAND_CREATEPAGINGQUEUE_RETURN@@@Z @ 0x140229A48 (-VmBusSendCreatePagingQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEBU_D3DKMT_CREATEPAGINGQUEUE@@PE.c)
 *     ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1402CE154 (-DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z @ 0x140396FF0 (-Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreatePagingQueue(
        DXGDEVICE *this,
        unsigned int a2,
        enum D3DDDI_PAGINGQUEUE_PRIORITY a3,
        struct DXGPAGINGQUEUE **a4)
{
  __int64 v8; // rax
  struct COREDEVICEACCESS *v9; // rdx
  __int64 v10; // rbp
  DXGPAGINGQUEUE *v11; // rax
  DXGPAGINGQUEUE **v12; // rcx
  __int64 v13; // rdx
  DXGPROCESS *v15; // rcx
  int v16; // ebx
  int HostProcess; // eax
  __int64 v18; // rdx
  int v19; // eax
  _D3DKMT_CREATEPAGINGQUEUE v20; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v21[2]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v22; // [rsp+80h] [rbp-48h]

  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8355;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"IsDeviceLockExclusiveOwner()", 8355LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*((ADAPTER_RENDER **)this + 2)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8356;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceSharedOwner()",
      8356LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8357;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"PagingQueue != NULL", 8357LL, 0LL, 0LL, 0LL, 0LL);
  }
  v8 = DXGQUOTAALLOCATOR<256,1265072196>::operator new(80LL);
  if ( v8 )
  {
    *(_QWORD *)(v8 + 16) = this;
    *(_OWORD *)v8 = 0LL;
    *(_QWORD *)(v8 + 24) = 0LL;
    *(_QWORD *)(v8 + 32) = 0LL;
    *(_QWORD *)(v8 + 40) = 0LL;
    *(_DWORD *)(v8 + 48) = 0;
    *(_QWORD *)(v8 + 56) = 0LL;
    *(_QWORD *)(v8 + 64) = 1LL;
    *(_BYTE *)(v8 + 72) = 0;
    *a4 = (struct DXGPAGINGQUEUE *)v8;
    LODWORD(v10) = DXGPAGINGQUEUE::Initialize((DXGPAGINGQUEUE *)v8, a2, a3);
    if ( (int)v10 >= 0 )
    {
      v10 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      if ( !*(_BYTE *)(v10 + 209) )
      {
LABEL_11:
        v11 = *a4;
        v12 = (DXGPAGINGQUEUE **)((char *)this + 528);
        v13 = *((_QWORD *)this + 66);
        if ( *(DXGDEVICE **)(v13 + 8) != (DXGDEVICE *)((char *)this + 528) )
          __fastfail(3u);
        *(_QWORD *)v11 = v13;
        *((_QWORD *)v11 + 1) = v12;
        *(_QWORD *)(v13 + 8) = v11;
        *v12 = v11;
        _InterlockedIncrement64((volatile signed __int64 *)this + 8);
        return 0LL;
      }
      v15 = (DXGPROCESS *)*((_QWORD *)this + 5);
      *(_OWORD *)&v20.FenceValueCPUVirtualAddress = 0LL;
      v20.PhysicalAdapterIndex = a2;
      v16 = *((_DWORD *)this + 118);
      *(_OWORD *)&v20.hDevice = 0LL;
      v22 = 0LL;
      *(_OWORD *)v21 = 0LL;
      v20.Priority = a3;
      HostProcess = DXGPROCESS::GetHostProcess(v15);
      LODWORD(v10) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreatePagingQueue(
                       (DXG_GUEST_VIRTUALGPU_VMBUS *)(v10 + 4664),
                       HostProcess,
                       v16,
                       &v20,
                       (struct DXGKVMB_COMMAND_CREATEPAGINGQUEUE_RETURN *)v21);
      if ( (int)v10 >= 0 )
      {
        v18 = *((_QWORD *)*a4 + 5);
        *((_DWORD *)*a4 + 7) = v21[0];
        *(_DWORD *)(v18 + 44) = HIDWORD(v21[0]);
        v19 = MapGuestFenceCpuVaToHost(
                v21[1],
                (void **)(v18 + 56),
                (unsigned __int64 *)(v18 + 80),
                (unsigned int *)(v18 + 88));
        v10 = v19;
        if ( v19 >= 0 )
          goto LABEL_11;
        WdLogSingleEntry1(2LL, v19);
        WdLogGlobalForLineNumber = 8405;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"MapCpuVaForParavirtualization failed, returning 0x%I64x",
          v10,
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
    LODWORD(v10) = -1073741801;
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    WdLogGlobalForLineNumber = 8369;
  }
  if ( *a4 )
  {
    DXGPAGINGQUEUE::DestroyCoreState(*a4, v9);
    if ( *a4 )
      DXGPAGINGQUEUE::`scalar deleting destructor'(*a4);
    *a4 = 0LL;
  }
  return (unsigned int)v10;
}
