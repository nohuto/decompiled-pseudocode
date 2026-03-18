/*
 * XREFs of ?DestroySurfaceDeviceResources@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1401F7BD8
 * Callers:
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVDXGDEVICE@@HPEAXPEAI@Z @ 0x1401F71E0 (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVDXGDEVICE@@HPEAXPEAI@Z.c)
 *     ?DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1401F816C (-DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 *     ?RemoveSurface@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_REMOVESURFACEFROMSWAPCHAIN@@@Z @ 0x1401F9F7C (-RemoveSurface@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_REMOVESURFACEFROMSWAPCHAIN@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140031508 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x140034A5C (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x140034ED4 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall DXGSWAPCHAIN::DestroySurfaceDeviceResources(__int64 a1, int a2, __int64 a3)
{
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v7; // rbx
  unsigned int v8; // ebp
  volatile signed __int32 *v9; // rdi
  unsigned int v10; // eax
  __int64 v11; // r8
  int v12; // ecx
  __int64 v13; // rbp
  unsigned int v14; // ebp
  unsigned int v15; // eax
  __int64 v16; // rbx
  int v17; // ecx
  struct DXGDEVICE *v18; // rbx
  __int64 v19; // r9
  DXGDEVICESYNCOBJECT *v20; // rcx
  _BYTE v21[16]; // [rsp+50h] [rbp-F8h] BYREF
  _BYTE v22[160]; // [rsp+60h] [rbp-E8h] BYREF

  if ( !*(_DWORD *)(a3 + 28) )
    return;
  Current = DXGPROCESS::GetCurrent();
  v7 = Current;
  if ( !Current )
    return;
  v8 = *(_DWORD *)(a3 + 28);
  v9 = (volatile signed __int32 *)((char *)Current + 248);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
  v10 = (v8 >> 6) & 0xFFFFFF;
  if ( v10 >= *((_DWORD *)v7 + 74) )
    goto LABEL_9;
  v11 = *((_QWORD *)v7 + 35);
  if ( ((v8 >> 25) & 0x60) != (*(_BYTE *)(v11 + 16LL * v10 + 8) & 0x60) )
    goto LABEL_9;
  if ( (*(_DWORD *)(v11 + 16LL * v10 + 8) & 0x2000) != 0 )
    goto LABEL_9;
  v12 = *(_DWORD *)(v11 + 16LL * v10 + 8) & 0x1F;
  if ( !v12 )
    goto LABEL_9;
  if ( v12 != 11 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_9:
    v13 = 0LL;
    goto LABEL_10;
  }
  v13 = *(_QWORD *)(v11 + 16LL * v10);
LABEL_10:
  _InterlockedDecrement(v9 + 4);
  ExReleasePushLockSharedEx(v9, 0LL);
  KeLeaveCriticalRegion();
  if ( !v13 )
    return;
  v14 = *(_DWORD *)((-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFD0uLL) + a1 + 144);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)v9);
  v15 = (v14 >> 6) & 0xFFFFFF;
  if ( v15 < *((_DWORD *)v7 + 74) )
  {
    v16 = *((_QWORD *)v7 + 35);
    if ( ((v14 >> 25) & 0x60) == (*(_BYTE *)(v16 + 16LL * v15 + 8) & 0x60)
      && (*(_DWORD *)(v16 + 16LL * v15 + 8) & 0x2000) == 0 )
    {
      v17 = *(_DWORD *)(v16 + 16LL * v15 + 8) & 0x1F;
      if ( v17 )
      {
        if ( v17 == 3 )
        {
          v18 = *(struct DXGDEVICE **)(v16 + 16LL * v15);
          goto LABEL_18;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  v18 = 0LL;
LABEL_18:
  _InterlockedDecrement(v9 + 4);
  ExReleasePushLockSharedEx(v9, 0LL);
  KeLeaveCriticalRegion();
  if ( !v18 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2064;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pDevice", 2064LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v21, v18);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v22, (__int64)v18, 2, v19, 0);
  COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v22, 0LL);
  v20 = *(DXGDEVICESYNCOBJECT **)(a3 + 32);
  if ( v20 )
    DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v20);
  *(_QWORD *)(a3 + 32) = 0LL;
  *(_DWORD *)(a3 + 28) = 0;
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v22);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v21);
}
