/*
 * XREFs of ?GetClientSurfacePhysicalAddress@DXGSWAPCHAIN@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1401FE8E0
 * Callers:
 *     DxgkGetSwapChainSurfacePhysicalAddress @ 0x140201D00 (DxgkGetSwapChainSurfacePhysicalAddress.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140011820 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140022C10 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x140040C7C (-GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO.c)
 *     ?GetAllocationPhysicalAddress@DXGDEVICE@@QEAAJPEBVDXGADAPTERALLOCATION@@PEAT_LARGE_INTEGER@@@Z @ 0x1401BAC10 (-GetAllocationPhysicalAddress@DXGDEVICE@@QEAAJPEBVDXGADAPTERALLOCATION@@PEAT_LARGE_INTEGER@@@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x1402E52F0 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 *     ??1?$NT_OBJECT_REFERENCE@PEAUDXGSWAPCHAIN_CONTAINER@@@@QEAA@XZ @ 0x1403AC50C (--1-$NT_OBJECT_REFERENCE@PEAUDXGSWAPCHAIN_CONTAINER@@@@QEAA@XZ.c)
 */

__int64 __fastcall DXGSWAPCHAIN::GetClientSurfacePhysicalAddress(struct _KTHREAD **this, union _LARGE_INTEGER *a2)
{
  DXGDEVICE *v5; // rsi
  bool v6; // dl
  unsigned int v7; // r8d
  void *v8; // rdi
  NTSTATUS v9; // eax
  _QWORD *v10; // rbx
  __int64 v11; // rdx
  _QWORD *v12; // rax
  unsigned int AllocationPhysicalAddress; // ebx
  PVOID *Object; // [rsp+20h] [rbp-50h]
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v15; // [rsp+50h] [rbp-20h] BYREF
  _BYTE v16[24]; // [rsp+58h] [rbp-18h] BYREF
  PVOID v17; // [rsp+B0h] [rbp+40h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v18; // [rsp+C0h] [rbp+50h] BYREF
  PVOID v19; // [rsp+C8h] [rbp+58h] BYREF

  if ( this[3] != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4218;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_SwapChainLock.IsOwner()", 4218LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_DWORD *)this + 34) == -1 )
  {
    WdLogSingleEntry2(2LL, this[14], this);
    Object = (PVOID *)this[14];
    WdLogGlobalForLineNumber = 4225;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"GetSetMetadata caller (0x%I64x) does not own the swapchain 0x%I64x",
      (__int64)Object,
      (__int64)this,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v5 = this[13];
  if ( !v5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4231;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pDevice", 4231LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_QWORD *)v5 + 5) )
  {
    v7 = *((_DWORD *)this + 34);
    v15 = 0LL;
    v18 = 0LL;
    DXGSWAPCHAIN::GetClientSurfaceInfo(
      (DXGSWAPCHAIN *)this,
      (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)(this + 12),
      v7,
      &v15,
      &v18);
    v19 = 0LL;
    v8 = (void *)*((_QWORD *)v18 + 5);
    v9 = ObReferenceObjectByHandle(v8, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &v19, 0LL);
    v10 = v19;
    v17 = v19;
    if ( v9 >= 0 )
    {
      v11 = *((_QWORD *)v19 + 2);
      if ( v11 && *(_QWORD *)(v11 + 80) )
      {
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16, (struct _KTHREAD **)(v11 + 32), 0);
        DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v16);
        v12 = (_QWORD *)(v10[2] + 136LL);
        if ( (_QWORD *)*v12 != v12 )
        {
          AllocationPhysicalAddress = DXGDEVICE::GetAllocationPhysicalAddress(
                                        v5,
                                        (const struct DXGADAPTERALLOCATION *)(*v12 - 48LL),
                                        a2);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16);
          NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>(&v17);
          return AllocationPhysicalAddress;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 4278;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Shared resource does not have an allocation",
          4278LL,
          0LL,
          0LL,
          0LL,
          0LL);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16);
      }
      else
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 4266;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Could not get shared resource or render core",
          4266LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    else
    {
      WdLogSingleEntry1(3LL, v8);
      WdLogGlobalForLineNumber = 4257;
    }
    NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>(&v17);
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 4236;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Invalid process context", 4236LL, 0LL, 0LL, 0LL, 0LL);
    DXGSWAPCHAIN::MarkAbandoned((DXGSWAPCHAIN *)this, v6);
  }
  return 3221225473LL;
}
