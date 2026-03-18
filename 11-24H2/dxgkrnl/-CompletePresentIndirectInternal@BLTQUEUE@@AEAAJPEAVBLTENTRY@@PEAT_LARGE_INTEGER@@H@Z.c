/*
 * XREFs of ?CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z @ 0x14005DD8C
 * Callers:
 *     ?PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAVBLTENTRY@@@Z @ 0x1402E3F08 (-PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT.c)
 *     ?IndirectBlt@BLTENTRY@@QEAAJXZ @ 0x1403A3170 (-IndirectBlt@BLTENTRY@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140011820 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140022C10 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?ReleaseShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1400271D0 (-ReleaseShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOSPINLOCK@@QEAAXXZ @ 0x140033AB4 (-Acquire@DXGAUTOSPINLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOSPINLOCK@@QEAA@XZ @ 0x1400354BC (--1DXGAUTOSPINLOCK@@QEAA@XZ.c)
 *     ?QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x14004A04C (-QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
 *     Feature_DodVsyncEnsureLocked__private_IsEnabledDeviceUsageNoInline @ 0x140094360 (Feature_DodVsyncEnsureLocked__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline @ 0x140094408 (Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0xqdiiiiid_EtwWriteTransfer @ 0x140094850 (McTemplateK0xqdiiiiid_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x1402E441C (-SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z.c)
 *     ?SwapChainIsNonSequential@@YA_NPEAVDXGSWAPCHAIN@@@Z @ 0x1403C90B4 (-SwapChainIsNonSequential@@YA_NPEAVDXGSWAPCHAIN@@@Z.c)
 */

__int64 __fastcall BLTQUEUE::CompletePresentIndirectInternal(
        BLTQUEUE *this,
        struct BLTENTRY *a2,
        union _LARGE_INTEGER *a3)
{
  struct DXGSWAPCHAIN **v3; // rax
  __int64 v7; // rsi
  struct DXGSWAPCHAIN *v8; // rbx
  int SetMetaDataInternal; // eax
  int v10; // esi
  int v11; // r8d
  __int64 v12; // rbx
  __int64 QuadPart; // rax
  char v14; // r9
  int v15; // edx
  struct DXGSWAPCHAIN **v16; // rcx
  struct DXGSWAPCHAIN *v17; // rcx
  int v18; // eax
  struct DXGPROCESS *Current; // rax
  int v20; // eax
  __int64 v22; // [rsp+60h] [rbp-A0h] BYREF
  _D3DKMT_GETSETSWAPCHAINMETADATA v23; // [rsp+68h] [rbp-98h] BYREF
  struct _D3DKMT_GETSETSWAPCHAINMETADATA v24; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v25[24]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v26[8]; // [rsp+D0h] [rbp-30h] BYREF
  char *v27; // [rsp+D8h] [rbp-28h]
  char v28; // [rsp+F8h] [rbp-8h]
  _DWORD v29[24]; // [rsp+100h] [rbp+0h] BYREF

  v3 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 354);
  LODWORD(v7) = 0;
  if ( !v3 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1729;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Present to Indirect display does not have a shared swapchain to present to",
      1729LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v7) = -1073741823;
    return (unsigned int)v7;
  }
  v8 = *v3;
  if ( !SwapChainIsNonSequential(*v3) )
  {
    memset(v29, 0, 0x54uLL);
    v23.hNtSwapChain = 0LL;
    v23.pBuffer = v29;
    *(_QWORD *)&v23.DataCopied = 0LL;
    *(_QWORD *)&v23.bProducer = 1LL;
    v23.bSetMetaData = 0;
    v23.BufferSize = 84;
    SetMetaDataInternal = SwapChainGetSetMetaDataInternal(v8, &v23, 0, 0);
    v10 = 0;
    if ( SetMetaDataInternal != -2147483643 )
      v10 = SetMetaDataInternal;
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v25, (struct _KTHREAD **)this + 53, 0);
    DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v25);
    v28 = 0;
    v27 = (char *)this + 456;
    if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline()
      && (unsigned int)Feature_DodVsyncEnsureLocked__private_IsEnabledDeviceUsageNoInline() )
    {
      DXGAUTOSPINLOCK::Acquire((DXGAUTOSPINLOCK *)v26);
    }
    v11 = v29[2];
    LODWORD(v12) = 0;
    if ( v10 >= 0 && (v29[0] & 2) != 0 )
    {
      QuadPart = *((_QWORD *)this + 59);
      if ( v29[2] > QuadPart )
      {
        v14 = 0;
        v12 = *((_QWORD *)this + 62) * (v29[2] - QuadPart) + *((_QWORD *)this + 60);
        LOBYTE(QuadPart) = *((_BYTE *)this + 496) * (LOBYTE(v29[2]) - QuadPart) + *((_BYTE *)this + 480);
        v22 = v12;
LABEL_17:
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          v15 = 0;
          if ( v10 >= 0 )
            v15 = v11;
          McTemplateK0xqdiiiiid_EtwWriteTransfer(
            v12 - *((_QWORD *)a2 + 67),
            v15,
            v11,
            *((_QWORD *)this + 31),
            *((_DWORD *)this + 65),
            v29[3],
            QuadPart,
            v12,
            *((_QWORD *)a2 + 67),
            v12 - *((_QWORD *)a2 + 67),
            v14,
            v15);
        }
        DXGAUTOSPINLOCK::~DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v26);
        DXGAUTOPUSHLOCK::ReleaseShared((DXGAUTOPUSHLOCK *)v25);
        *((_DWORD *)a2 + 17) = v29[2];
        v16 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 354);
        v24.hNtSwapChain = 0LL;
        *(_QWORD *)&v24.bProducer = 1LL;
        *(_QWORD *)&v24.DataCopied = 0LL;
        v17 = *v16;
        v24.bSetMetaData = 1;
        v24.pBuffer = &v22;
        v24.BufferSize = 8;
        v18 = SwapChainGetSetMetaDataInternal(v17, &v24, 0x18u, 0);
        if ( v18 < 0 )
        {
          WdLogSingleEntry1(3LL, v18);
          WdLogGlobalForLineNumber = 1691;
        }
        ObfReferenceObject(*((PVOID *)this + 354));
        Current = DXGPROCESS::GetCurrent();
        v20 = DXGWORKQUEUE::QueueWork(
                (PLIST_ENTRY)(*((_QWORD *)Current + 8) + 104LL),
                lambda_a9c2d8d02e28a29447bf7ae552bf37d4_::_lambda_invoker_cdecl_,
                *((void **)this + 354));
        v7 = v20;
        if ( v20 < 0 )
        {
          WdLogSingleEntry1(2LL, v20);
          WdLogGlobalForLineNumber = 1724;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Indirect display present failed to queue the buffer release: 0x%I64x",
            v7,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v25);
        return (unsigned int)v7;
      }
      v12 = *((_QWORD *)this + 60) + *((_QWORD *)this + 62) * (v29[2] - QuadPart);
    }
    if ( a3 )
    {
      QuadPart = a3->QuadPart;
      v14 = 1;
    }
    else
    {
      QuadPart = KeQueryPerformanceCounter(0LL).QuadPart;
      v11 = v29[2];
      v14 = 2;
    }
    v22 = QuadPart;
    goto LABEL_17;
  }
  return (unsigned int)v7;
}
