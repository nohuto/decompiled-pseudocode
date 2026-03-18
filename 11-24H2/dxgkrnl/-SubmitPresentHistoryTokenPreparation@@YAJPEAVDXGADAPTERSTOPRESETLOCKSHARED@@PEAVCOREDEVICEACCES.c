/*
 * XREFs of ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x140301AA8
 * Callers:
 *     DxgkPresent @ 0x1402EAC90 (DxgkPresent.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1402ED810 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     DxgkPresentRedirected @ 0x140300910 (DxgkPresentRedirected.c)
 *     DxgkSubmitPresentToHwQueue @ 0x14041D400 (DxgkSubmitPresentToHwQueue.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14000E300 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14000EEA0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140011820 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?DxgkQuerySwapChainBindingStatus@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x14001BB5C (-DxgkQuerySwapChainBindingStatus@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14002BEF0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002DD50 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x14002FE40 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034334 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?VmBusSendSetRedirectedFlipFenceValue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_DXGSHAREDSYNCOBJECT@@_K@Z @ 0x140185A24 (-VmBusSendSetRedirectedFlipFenceValue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_DXGS.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1TOKEN_BINDING_GUARD@@QEAA@XZ @ 0x1403008B8 (--1TOKEN_BINDING_GUARD@@QEAA@XZ.c)
 *     ?GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUSHLOCK@@H@Z @ 0x140331FB0 (-GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUS.c)
 *     ??0TOKEN_BINDING_GUARD@@QEAA@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@@Z @ 0x140367864 (--0TOKEN_BINDING_GUARD@@QEAA@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 */

__int64 __fastcall SubmitPresentHistoryTokenPreparation(
        struct DXGADAPTERSTOPRESETLOCKSHARED *this,
        struct COREDEVICEACCESS *a2,
        struct DXGADAPTER *a3,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a4,
        __int64 Handle,
        bool a6)
{
  struct _KTHREAD **v6; // rbx
  struct _LUID v11; // rbx
  NTSTATUS v12; // eax
  PVOID v13; // r14
  __int64 v14; // rdi
  int SwapChainBindingStatus; // eax
  int v16; // ebx
  const char *v17; // rdx
  int v18; // eax
  __int64 v19; // rcx
  const char *v20; // rdx
  struct DXGPROCESS *Current; // r14
  struct DXGGLOBAL *Global; // rax
  void *v23; // rcx
  struct _DXGSHAREDSYNCOBJECT *v24; // rbx
  UINT64 FenceValue; // rax
  PVOID Object; // [rsp+58h] [rbp-39h] BYREF
  PVOID v28; // [rsp+60h] [rbp-31h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+68h] [rbp-29h] BYREF
  _BYTE v30[16]; // [rsp+70h] [rbp-21h] BYREF
  _BYTE v31[8]; // [rsp+80h] [rbp-11h] BYREF
  struct _KTHREAD **v32; // [rsp+88h] [rbp-9h]
  int v33; // [rsp+90h] [rbp-1h]
  _DWORD v34[8]; // [rsp+98h] [rbp+7h] BYREF
  BOOL v35; // [rsp+F8h] [rbp+67h]

  v6 = (struct _KTHREAD **)*((_QWORD *)a3 + 391);
  v33 = 0;
  v32 = v6 + 122;
  if ( v6 != (struct _KTHREAD **)-976LL && v6[123] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1512;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1512LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v31);
  v35 = ADAPTER_RENDER::GetPresentHistoryTokenQueue((ADAPTER_RENDER *)v6, (struct DXGAUTOPUSHLOCK *)v31, 0) != 0LL;
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v31);
  v11 = *(struct _LUID *)((char *)a3 + 412);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(this);
  COREDEVICEACCESS::Release(a2);
  if ( !Handle )
    goto LABEL_12;
  Object = 0LL;
  v12 = ObReferenceObjectByHandle((HANDLE)Handle, 2u, (POBJECT_TYPE)ExSemaphoreObjectType, 1, &Object, 0LL);
  v13 = Object;
  LODWORD(v14) = v12;
  if ( v12 >= 0 )
  {
    if ( a6 )
    {
      Handle = 0LL;
      if ( KeWaitForSingleObject(Object, Executive, 0, 1u, (PLARGE_INTEGER)&Handle) == 258 )
      {
        ObfDereferenceObject(v13);
        LODWORD(v14) = -1071775486;
        goto LABEL_17;
      }
    }
    else
    {
      Handle = -20000000LL;
      KeWaitForSingleObject(Object, Executive, 0, 1u, (PLARGE_INTEGER)&Handle);
    }
    ObfDereferenceObject(v13);
LABEL_12:
    SwapChainBindingStatus = DxgkQuerySwapChainBindingStatus(v35, v11, a4);
    v16 = SwapChainBindingStatus;
    if ( SwapChainBindingStatus < 0 )
    {
      if ( SwapChainBindingStatus != -1071775733 && SwapChainBindingStatus != -1071775730 )
      {
        WdLogSingleEntry1(4LL, SwapChainBindingStatus);
        WdLogGlobalForLineNumber = 862;
      }
      LODWORD(v14) = v16;
      goto LABEL_17;
    }
    TOKEN_BINDING_GUARD::TOKEN_BINDING_GUARD((TOKEN_BINDING_GUARD *)v34, a4, this, a2);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(this);
    v18 = COREDEVICEACCESS::AcquireShared(a2, 0LL);
    v14 = v18;
    if ( v18 < 0 )
    {
      WdLogSingleEntry1(2LL, v18);
      WdLogGlobalForLineNumber = 878;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to acquire shared code device acess, returning 0x%I64x",
        v14,
        0LL,
        0LL,
        0LL,
        0LL);
      COREDEVICEACCESS::AcquireSharedUncheck(a2, v20);
LABEL_32:
      TOKEN_BINDING_GUARD::~TOKEN_BINDING_GUARD((TOKEN_BINDING_GUARD *)v34);
      return (unsigned int)v14;
    }
    if ( a4->Model == D3DKMT_PM_REDIRECTED_FLIP && *((_QWORD *)&a4->Token.SurfaceComplete + 16) )
    {
      Current = DXGPROCESS::GetCurrent(v19);
      HandleInformation = 0LL;
      Global = DXGGLOBAL::GetGlobal();
      DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v30, Global, 0);
      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v30);
      v23 = (void *)*((_QWORD *)&a4->Token.SurfaceComplete + 16);
      v28 = 0LL;
      LODWORD(v14) = ObReferenceObjectByHandle(v23, 0x20000u, g_pDxgkSharedSyncObjectType, 1, &v28, &HandleInformation);
      if ( (int)v14 < 0 )
      {
        WdLogSingleEntry1(3LL, *((_QWORD *)&a4->Token.SurfaceComplete + 16));
        WdLogGlobalForLineNumber = 930;
      }
      else
      {
        v24 = (struct _DXGSHAREDSYNCOBJECT *)v28;
        FenceValue = *(_QWORD *)(*(_QWORD *)v28 + 120LL);
        if ( FenceValue <= a4->Token.Flip.FenceValue )
          FenceValue = a4->Token.Flip.FenceValue;
        *(_QWORD *)(*(_QWORD *)v28 + 120LL) = FenceValue;
        *((_QWORD *)&a4->Token.SurfaceComplete + 16) = 0LL;
        if ( *((_BYTE *)a3 + 209) )
        {
          LODWORD(v14) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetRedirectedFlipFenceValue(
                           (struct DXGADAPTER *)((char *)a3 + 4664),
                           Current,
                           v24,
                           a4->Token.Flip.FenceValue);
          if ( (int)v14 < 0 )
          {
            ObfDereferenceObject(v24);
            DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v30);
            goto LABEL_32;
          }
        }
        ObfDereferenceObject(v24);
      }
      DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v30);
    }
    v34[0] = v14;
    goto LABEL_32;
  }
  WdLogSingleEntry1(4LL, v12);
  WdLogGlobalForLineNumber = 817;
LABEL_17:
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire(this);
  COREDEVICEACCESS::AcquireSharedUncheck(a2, v17);
  return (unsigned int)v14;
}
