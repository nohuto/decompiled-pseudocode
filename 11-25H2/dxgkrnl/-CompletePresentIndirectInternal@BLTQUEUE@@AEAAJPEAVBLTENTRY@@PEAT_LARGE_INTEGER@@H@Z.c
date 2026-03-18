/*
 * XREFs of ?CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z @ 0x14030881C
 * Callers:
 *     ?IndirectBlt@BLTENTRY@@QEAAJXZ @ 0x140305744 (-IndirectBlt@BLTENTRY@@QEAAJXZ.c)
 *     ?PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAVBLTENTRY@@@Z @ 0x14030766C (-PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140013BA0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140014A20 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140026A30 (-ReleaseShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x14004A8C8 (-QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
 *     ?IsNonSequential@DXGSWAPCHAIN@@QEBA_NXZ @ 0x140078EB8 (-IsNonSequential@DXGSWAPCHAIN@@QEBA_NXZ.c)
 *     McTemplateK0xqdiiiiid_EtwWriteTransfer @ 0x1400923A0 (McTemplateK0xqdiiiiid_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     _lambda_98bcd3493729aa3b805c0fba161d90cc_::operator_void_(__cdecl_)(void__) @ 0x14027A04C (_lambda_98bcd3493729aa3b805c0fba161d90cc_--operator_void_(__cdecl_)(void__).c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x140307BCC (-SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z.c)
 */

__int64 __fastcall BLTQUEUE::CompletePresentIndirectInternal(
        BLTQUEUE *this,
        struct BLTENTRY *a2,
        union _LARGE_INTEGER *a3)
{
  DXGSWAPCHAIN **v3; // rax
  __int64 v7; // rsi
  struct DXGSWAPCHAIN *v8; // rbx
  int SetMetaDataInternal; // eax
  int v10; // esi
  __int64 v11; // r8
  LONGLONG v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r9
  LONGLONG QuadPart; // rax
  __int64 v16; // rdx
  struct DXGSWAPCHAIN **v17; // rcx
  struct DXGSWAPCHAIN *v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  void (*v21)(void *); // rax
  PLIST_ENTRY v22; // rcx
  void *v23; // r8
  __int64 v24; // r9
  int v25; // eax
  LONGLONG v27; // [rsp+60h] [rbp-A0h] BYREF
  struct _D3DKMT_GETSETSWAPCHAINMETADATA v28; // [rsp+68h] [rbp-98h] BYREF
  struct _D3DKMT_GETSETSWAPCHAINMETADATA v29; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v30[24]; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD v31[24]; // [rsp+D0h] [rbp-30h] BYREF

  v3 = (DXGSWAPCHAIN **)*((_QWORD *)this + 345);
  LODWORD(v7) = 0;
  if ( !v3 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1687;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Present to Indirect display does not have a shared swapchain to present to",
      1687LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v7) = -1073741823;
    return (unsigned int)v7;
  }
  v8 = *v3;
  if ( !DXGSWAPCHAIN::IsNonSequential(*v3) )
  {
    memset(v31, 0, 0x54uLL);
    v28.hNtSwapChain = 0LL;
    v28.pBuffer = v31;
    *(_QWORD *)&v28.DataCopied = 0LL;
    *(_QWORD *)&v28.bProducer = 1LL;
    v28.bSetMetaData = 0;
    v28.BufferSize = 84;
    SetMetaDataInternal = SwapChainGetSetMetaDataInternal(v8, &v28, 0, 0);
    v10 = 0;
    if ( SetMetaDataInternal != -2147483643 )
      v10 = SetMetaDataInternal;
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v30, (struct _KTHREAD **)this + 53, 0);
    DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v30);
    v11 = v31[2];
    v12 = 0LL;
    if ( v10 >= 0 && (v31[0] & 2) != 0 )
    {
      v13 = *((_QWORD *)this + 59);
      if ( v31[2] > v13 )
      {
        v14 = 0LL;
        v12 = *((_QWORD *)this + 62) * (v31[2] - v13) + *((_QWORD *)this + 60);
        QuadPart = v12;
        v27 = v12;
LABEL_14:
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          v16 = 0LL;
          if ( v10 >= 0 )
            v16 = (unsigned int)v11;
          McTemplateK0xqdiiiiid_EtwWriteTransfer(
            v12 - *((_QWORD *)a2 + 67),
            v16,
            v11,
            *((_QWORD *)this + 31),
            *((_DWORD *)this + 65),
            v31[3],
            QuadPart,
            v12,
            *((_QWORD *)a2 + 67),
            v12 - *((_QWORD *)a2 + 67),
            v14,
            v16,
            v27);
        }
        DXGAUTOPUSHLOCK::ReleaseShared((DXGAUTOPUSHLOCK *)v30);
        *((_DWORD *)a2 + 17) = v31[2];
        v17 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 345);
        v29.hNtSwapChain = 0LL;
        *(_QWORD *)&v29.bProducer = 1LL;
        *(_QWORD *)&v29.DataCopied = 0LL;
        v18 = *v17;
        v29.bSetMetaData = 1;
        v29.pBuffer = &v27;
        v29.BufferSize = 8;
        v19 = SwapChainGetSetMetaDataInternal(v18, &v29, 0x18u, 0);
        if ( v19 < 0 )
        {
          WdLogSingleEntry1(3LL, v19);
          WdLogGlobalForLineNumber = 1649;
        }
        ObfReferenceObject(*((PVOID *)this + 345));
        DXGPROCESS::GetCurrent(v20);
        v21 = (void (*)(void *))lambda_98bcd3493729aa3b805c0fba161d90cc_::operator_void____cdecl___void___();
        v25 = DXGWORKQUEUE::QueueWork(v22, v21, v23, v24);
        v7 = v25;
        if ( v25 < 0 )
        {
          WdLogSingleEntry1(2LL, v25);
          WdLogGlobalForLineNumber = 1682;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Indirect display present failed to queue the buffer release: 0x%I64x",
            v7,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v30);
        return (unsigned int)v7;
      }
      v12 = *((_QWORD *)this + 60) + *((_QWORD *)this + 62) * (v31[2] - v13);
    }
    if ( a3 )
    {
      QuadPart = a3->QuadPart;
      v14 = 1LL;
    }
    else
    {
      QuadPart = KeQueryPerformanceCounter(0LL).QuadPart;
      v11 = v31[2];
      v14 = 2LL;
    }
    v27 = QuadPart;
    goto LABEL_14;
  }
  return (unsigned int)v7;
}
