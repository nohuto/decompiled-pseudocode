/*
 * XREFs of ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N1@Z @ 0x1401F6988
 * Callers:
 *     DxgkAddSurfaceToSwapChain @ 0x1401FA810 (DxgkAddSurfaceToSwapChain.c)
 *     DxgkCreateSwapChain @ 0x1401FAC90 (DxgkCreateSwapChain.c)
 *     DxgkGetSwapChainSurfacePhysicalAddress @ 0x1401FB5F0 (DxgkGetSwapChainSurfacePhysicalAddress.c)
 *     DxgkRemoveSurfaceFromSwapChain @ 0x1401FB7F0 (DxgkRemoveSurfaceFromSwapChain.c)
 *     DxgkUnOrderedPresentSwapChain @ 0x1401FBB10 (DxgkUnOrderedPresentSwapChain.c)
 *     ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDHH@Z @ 0x14038CA6C (-SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDHH@Z.c)
 *     DxgkAcquireSwapChain @ 0x1404261C0 (DxgkAcquireSwapChain.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400199A0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x14001C1A0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??4COREACCESS@@QEAAAEAV0@$$QEAV0@@Z @ 0x14001C4D8 (--4COREACCESS@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14001D9E0 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x14001E450 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14001F190 (-Release@COREACCESS@@QEAAXXZ.c)
 *     Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline @ 0x140078ECC (Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x140290400 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1402BA024 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ @ 0x14038CBE0 (-Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSWAPCHAINLOCKWITHDEVICE::Acquire(
        DXGSWAPCHAINLOCKWITHDEVICE *this,
        struct DXGDEVICE **a2,
        char a3,
        char a4)
{
  __int64 v8; // rbx
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  HANDLE CurrentProcessId; // rax
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v14; // r14
  int v15; // ebp
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r15
  unsigned int v19; // eax
  __int64 v20; // r8
  int v21; // edx
  __int64 v22; // rbx
  signed __int64 v23; // rax
  signed __int64 v24; // rtt
  struct _KEVENT *v25; // r14
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // r8
  COREACCESS *v30; // rax
  unsigned __int64 v31; // rdx
  __int64 v32; // rdx
  _BYTE v34[64]; // [rsp+60h] [rbp-88h] BYREF

  DXGAUTOMUTEX::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 24));
  v8 = *((_QWORD *)this + 1);
  *((_BYTE *)this + 40) = 1;
  if ( *(_DWORD *)(v8 + 48) )
  {
    WdLogSingleEntry1(3LL, v8);
    result = 3221225558LL;
    WdLogGlobalForLineNumber = 4301;
    return result;
  }
  if ( *(_BYTE *)this == 1 )
  {
    v10 = *((_BYTE *)this + 16) != 0 ? 0x30 : 0;
    v11 = *(_QWORD *)(v10 + v8 + 112);
    if ( PsGetCurrentProcess(v10) != v11 )
    {
      CurrentProcessId = PsGetCurrentProcessId();
      WdLogSingleEntry2(3LL, *((_QWORD *)this + 1), CurrentProcessId);
      result = 3221225506LL;
      WdLogGlobalForLineNumber = 4310;
      return result;
    }
  }
  Current = DXGPROCESS::GetCurrent();
  v14 = Current;
  if ( a2 )
  {
    *a2 = 0LL;
    v15 = 0;
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
    v16 = *((_QWORD *)this + 1);
    v17 = *((_BYTE *)this + 16) != 0 ? 0x30 : 0;
    v18 = *(unsigned int *)(v17 + v16 + 96);
    v19 = (*(_DWORD *)(v17 + v16 + 96) >> 6) & 0xFFFFFF;
    if ( v19 < *((_DWORD *)v14 + 74) )
    {
      v20 = *((_QWORD *)v14 + 35);
      if ( (((unsigned int)v18 >> 25) & 0x60) == (*(_BYTE *)(v20 + 16LL * v19 + 8) & 0x60)
        && (*(_DWORD *)(v20 + 16LL * v19 + 8) & 0x2000) == 0 )
      {
        v21 = *(_DWORD *)(v20 + 16LL * v19 + 8) & 0x1F;
        if ( v21 )
        {
          if ( v21 != 3 )
          {
            WdLogSingleEntry0(2LL);
            v22 = 0LL;
            WdLogGlobalForLineNumber = 318;
            DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_18:
            WdLogSingleEntry2(3LL, v18, v14);
            WdLogGlobalForLineNumber = 4350;
            v15 = -1073741811;
LABEL_19:
            _InterlockedDecrement((volatile signed __int32 *)v14 + 66);
            ExReleasePushLockSharedEx((char *)v14 + 248, 0LL);
            KeLeaveCriticalRegion();
            if ( !v22 || !a3 )
            {
LABEL_41:
              if ( v15 >= 0 )
              {
                v32 = *((_QWORD *)this + 1);
                if ( !*(_DWORD *)(v32 + 48) )
                {
                  *(_QWORD *)((*((_BYTE *)this + 16) != 0 ? 0x30 : 0) + v32 + 104) = v22;
                  *a2 = (struct DXGDEVICE *)v22;
                  return (unsigned int)v15;
                }
                WdLogSingleEntry1(3LL, v32);
                WdLogGlobalForLineNumber = 4407;
                v15 = -1073741738;
              }
              DXGSWAPCHAINLOCKWITHDEVICE::Release(this);
              return (unsigned int)v15;
            }
            DXGAUTOMUTEX::Release((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 24));
            v25 = *(struct _KEVENT **)(v22 + 16);
            if ( !KeReadStateEvent(v25 + 4) )
              KeWaitForSingleObject(&v25[4], Executive, 0, 0, 0LL);
            if ( (unsigned int)Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline() && a4 )
            {
              KeEnterCriticalRegion();
              if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v22 + 136), 0) )
              {
                DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v22 + 16) + 16LL));
                if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                  McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventBlockThread, v27, 40);
                ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v22 + 136), 1u);
LABEL_36:
                DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v22 + 16) + 16LL));
              }
            }
            else
            {
              KeEnterCriticalRegion();
              if ( !ExAcquireResourceSharedLite(*(PERESOURCE *)(v22 + 136), 0) )
              {
                DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v22 + 16) + 16LL));
                if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                  McTemplateK0q_EtwWriteTransfer(v28, (__int64)&EventBlockThread, v29, 40);
                ExAcquireResourceSharedLite(*(PERESOURCE *)(v22 + 136), 1u);
                goto LABEL_36;
              }
            }
            *((_BYTE *)this + 41) = 1;
            v30 = COREACCESS::COREACCESS((COREACCESS *)v34, *(struct DXGADAPTER *const *)(*(_QWORD *)(v22 + 16) + 16LL));
            COREACCESS::operator=((__int64)this + 56, (__int64)v30);
            COREACCESS::~COREACCESS((COREACCESS *)v34, v31);
            COREACCESS::AcquireShared((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 56), 0LL);
            if ( *(_DWORD *)(v22 + 608) == 1 )
            {
              *((_BYTE *)this + 43) = 1;
            }
            else
            {
              COREACCESS::Release((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 56));
              v15 = -1073741130;
              WdLogSingleEntry2(3LL, v22, -1073741130LL);
              WdLogGlobalForLineNumber = 4391;
            }
            DXGAUTOMUTEX::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 24));
            goto LABEL_41;
          }
          v22 = *(_QWORD *)(v20 + 16LL * v19);
          if ( !v22 )
            goto LABEL_18;
          _m_prefetchw((const void *)(v22 + 64));
          v23 = *(_QWORD *)(v22 + 64);
          while ( v23 )
          {
            v24 = v23;
            v23 = _InterlockedCompareExchange64((volatile signed __int64 *)(v22 + 64), v23 + 1, v23);
            if ( v24 == v23 )
            {
              *((_BYTE *)this + 42) = 1;
              *((_QWORD *)this + 6) = v22;
              goto LABEL_19;
            }
          }
        }
      }
    }
    v22 = 0LL;
    goto LABEL_18;
  }
  return 0LL;
}
