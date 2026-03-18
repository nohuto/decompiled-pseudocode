/*
 * XREFs of ?OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHHH@Z @ 0x1402002AC
 * Callers:
 *     DxgkCreateSwapChain @ 0x140201340 (DxgkCreateSwapChain.c)
 *     DxgkOpenSwapChain @ 0x1403DDD30 (DxgkOpenSwapChain.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline @ 0x140079400 (Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1401FE870 (-DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGSWAPCHAIN::OpenSwapchainLocal(
        DXGSWAPCHAIN *this,
        int a2,
        struct DXGDEVICE *a3,
        __int64 a4,
        int a5,
        int a6,
        int a7)
{
  unsigned int v7; // r12d
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  char *v16; // rdi
  bool v17; // zf
  const wchar_t *v19; // r9
  __int64 v20; // rax
  NTSTATUS v21; // eax
  struct _KEVENT *v22; // rcx
  __int64 CurrentProcess; // rax
  __int64 v24; // rcx
  PVOID Object; // [rsp+50h] [rbp-48h] BYREF
  _BYTE v26[24]; // [rsp+58h] [rbp-40h] BYREF

  v7 = 0;
  if ( DXGPROCESS::GetCurrent() )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v26, this, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
    if ( *((_DWORD *)this + 12) )
    {
      WdLogSingleEntry1(3LL, this);
      WdLogGlobalForLineNumber = 2231;
      v15 = -1073741738;
LABEL_12:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v26);
      return v15;
    }
    v16 = (char *)this + (a6 != 0 ? 144LL : 96LL);
    if ( *((_QWORD *)v16 + 2) )
    {
      WdLogSingleEntry2(3LL, this, a6);
      WdLogGlobalForLineNumber = 2239;
      v15 = -1073740008;
      goto LABEL_12;
    }
    *((_QWORD *)v16 + 2) = PsGetCurrentProcess(v14);
    *(_DWORD *)v16 = a2;
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL) + 412LL) != *(_QWORD *)((char *)this + 204) )
    {
      WdLogSingleEntry1(2LL, this);
      WdLogGlobalForLineNumber = 2255;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"SwapChain (0x%I64x) - Attempt to open with a device that is not from the swap-chain's adapter.",
        (__int64)this,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v26);
      return 3221225485LL;
    }
    *((_DWORD *)v16 + 6) = a5;
    if ( (unsigned int)Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline() )
    {
      v17 = a7 == 0;
      if ( a7 )
      {
        if ( !*((_DWORD *)this + 59) )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 2266;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"User mode fences are not supported in this version of the swapchain",
            2266LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v15 = -1073741811;
          goto LABEL_12;
        }
        v17 = a7 == 0;
      }
      v16[44] = !v17;
    }
    if ( a4 )
    {
      if ( *((_DWORD *)v16 + 6) )
      {
        WdLogSingleEntry0(2LL);
        a4 = 2278LL;
        v19 = L"We not code currently to set event once busy surface is not busy";
        WdLogGlobalForLineNumber = 2278;
        v7 = -1073741822;
        v20 = 0LL;
      }
      else
      {
        Object = 0LL;
        v21 = ObReferenceObjectByHandle((HANDLE)a4, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
        v22 = (struct _KEVENT *)Object;
        v7 = v21;
        *((_QWORD *)v16 + 4) = Object;
        if ( v21 >= 0 )
        {
          if ( !a6 )
            KeSetEvent(v22, 2, 0);
          goto LABEL_23;
        }
        CurrentProcess = PsGetCurrentProcess(v22);
        WdLogSingleEntry2(2LL, a4, CurrentProcess);
        WdLogGlobalForLineNumber = 2293;
        v20 = PsGetCurrentProcess(v24);
        v19 = L"Failed to open CPU signal event 0x%I64x process 0x%I64x";
      }
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v19, a4, v20, 0LL, 0LL, 0LL);
      DXGSWAPCHAIN::DestroySwapchainLocalClient(this, (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v16);
    }
LABEL_23:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v26);
    return v7;
  }
  v13 = PsGetCurrentProcess(v12);
  WdLogSingleEntry1(3LL, v13);
  WdLogGlobalForLineNumber = 2220;
  return 3221225485LL;
}
