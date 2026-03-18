/*
 * XREFs of ?GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z @ 0x140307D3C
 * Callers:
 *     ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x140307BCC (-SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pqddpqqqqqq_EtwWriteTransfer @ 0x1400546D8 (McTemplateK0pqddpqqqqqq_EtwWriteTransfer.c)
 *     McTemplateK0pqddpqqqqq_EtwWriteTransfer @ 0x140054954 (McTemplateK0pqddpqqqqq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@D@Z @ 0x140308180 (-SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADA.c)
 *     ?GetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@IPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@DPEAI@Z @ 0x1403085F8 (-GetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@IPEAXAEAUSWAPCHAIN_METADATA_ET.c)
 */

__int64 __fastcall DXGSWAPCHAIN::GetSetMetaData(
        DXGSWAPCHAIN *this,
        struct _D3DKMT_GETSETSWAPCHAINMETADATA *a2,
        unsigned int a3,
        void *a4,
        char a5)
{
  __int64 v5; // r13
  BOOL bGlobalMetaData; // eax
  BOOL bProducer; // ecx
  __int64 *v11; // rsi
  char *v12; // r15
  char *v13; // r14
  __int64 v14; // r14
  __int64 v15; // r8
  BOOL *p_bSetMetaData; // rsi
  struct AUTOEXPANDALLOCATION *v17; // rdx
  int MetaDataInternal; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  UINT BufferSize; // r8d
  DXGSWAPCHAIN *v23; // rcx
  unsigned int v24; // edi
  size_t Size; // [rsp+20h] [rbp-81h]
  size_t Sizea; // [rsp+20h] [rbp-81h]
  void *v28; // [rsp+28h] [rbp-79h]
  struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *v29; // [rsp+30h] [rbp-71h]
  __int64 v30; // [rsp+40h] [rbp-61h]
  int v31; // [rsp+70h] [rbp-31h] BYREF
  BOOL v32; // [rsp+78h] [rbp-29h] BYREF
  BOOL v33; // [rsp+7Ch] [rbp-25h]
  __int128 v34; // [rsp+80h] [rbp-21h]
  __int128 v35; // [rsp+90h] [rbp-11h]

  v5 = a3;
  if ( *((struct _KTHREAD **)this + 3) != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3545;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_SwapChainLock.IsOwner()", 3545LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a2->pBuffer )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3550;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pGetSetMetaData->pBuffer == nullptr",
      3550LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (_DWORD)v5 && !a2->bSetMetaData )
  {
    WdLogSingleEntry1(2LL, v5);
    WdLogGlobalForLineNumber = 3555;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Getting meta data with non-zero offset (0x%I64x) is not supported",
      v5,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  bGlobalMetaData = a2->bGlobalMetaData;
  bProducer = a2->bProducer;
  v32 = bProducer;
  v33 = bGlobalMetaData;
  v34 = 0LL;
  v35 = 0LL;
  if ( bGlobalMetaData )
  {
    BufferSize = a2->BufferSize;
    p_bSetMetaData = &a2->bSetMetaData;
    v17 = (DXGSWAPCHAIN *)((char *)this + 80);
    v23 = this;
    if ( a2->bSetMetaData )
    {
      LODWORD(Size) = a2->BufferSize;
      v31 = 1;
      MetaDataInternal = DXGSWAPCHAIN::SetMetaDataInternal(
                           this,
                           v17,
                           &v31,
                           v5,
                           Size,
                           a4,
                           (struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *)&v32,
                           a5);
      goto LABEL_18;
    }
    goto LABEL_17;
  }
  if ( bProducer )
  {
    v11 = (__int64 *)((char *)this + 160);
    v12 = (char *)this + 172;
    v13 = (char *)this + 184;
  }
  else
  {
    v11 = (__int64 *)((char *)this + 112);
    v12 = (char *)this + 124;
    v13 = (char *)this + 136;
  }
  v14 = *(unsigned int *)v13;
  if ( (_DWORD)v14 == -1 )
  {
    WdLogSingleEntry2(2LL, *v11, this);
    WdLogGlobalForLineNumber = 3584;
    goto LABEL_32;
  }
  if ( (unsigned int)v14 >= *((_DWORD *)this + 14) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 460;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"SurfaceIdx < m_SurfaceTableSize", 460LL, 0LL, 0LL, 0LL, 0LL);
  }
  v15 = *((_QWORD *)this + 8) + 160 * v14;
  if ( *(_DWORD *)v15 != 1 || *(_DWORD *)(v15 + 4) != *(_DWORD *)v12 )
  {
    WdLogSingleEntry2(2LL, *v11, this);
    WdLogGlobalForLineNumber = 3596;
LABEL_32:
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"GetSetMetadata caller (0x%I64x) does not own the swapchain 0x%I64x",
      *v11,
      (__int64)this,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  p_bSetMetaData = &a2->bSetMetaData;
  v17 = *(struct AUTOEXPANDALLOCATION **)(v15 + 16);
  if ( !a2->bSetMetaData )
  {
    BufferSize = a2->BufferSize;
    v23 = this;
LABEL_17:
    MetaDataInternal = DXGSWAPCHAIN::GetMetaDataInternal(
                         v23,
                         v17,
                         BufferSize,
                         a4,
                         (struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *)&v32,
                         a5,
                         &a2->DataCopied);
    goto LABEL_18;
  }
  LODWORD(Size) = a2->BufferSize;
  MetaDataInternal = DXGSWAPCHAIN::SetMetaDataInternal(
                       this,
                       v17,
                       (int *)(v15 + 24),
                       v5,
                       Size,
                       a4,
                       (struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *)&v32,
                       a5);
LABEL_18:
  v24 = MetaDataInternal;
  if ( *p_bSetMetaData )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000000LL) != 0 )
    {
      LODWORD(v30) = DWORD2(v34);
      LODWORD(v29) = v33;
      LODWORD(v28) = v32;
      LODWORD(Sizea) = MetaDataInternal;
      McTemplateK0pqddpqqqqqq_EtwWriteTransfer(
        v20,
        v19,
        v21,
        this,
        Sizea,
        v28,
        v29,
        (_QWORD)v34,
        v30,
        HIDWORD(v34),
        (_DWORD)v35,
        DWORD1(v35),
        DWORD2(v35),
        HIDWORD(v35));
    }
  }
  else if ( a4 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000000LL) != 0 )
    {
      LODWORD(v30) = HIDWORD(v34);
      LODWORD(v29) = v33;
      LODWORD(v28) = v32;
      LODWORD(Sizea) = MetaDataInternal;
      McTemplateK0pqddpqqqqq_EtwWriteTransfer(
        v20,
        v19,
        v21,
        this,
        Sizea,
        v28,
        v29,
        (_QWORD)v34,
        v30,
        (_DWORD)v35,
        DWORD1(v35),
        DWORD2(v35),
        HIDWORD(v35));
    }
  }
  return v24;
}
