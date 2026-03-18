/*
 * XREFs of ?PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAVBLTENTRY@@@Z @ 0x1402E3F08
 * Callers:
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403A7094 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z @ 0x14005DD8C (-CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z.c)
 *     ?IsNonSequential@DXGSWAPCHAIN@@QEBA_NXZ @ 0x1400793EC (-IsNonSequential@DXGSWAPCHAIN@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_D3DDDI_HDR_METADATA_TYPE@@@Z @ 0x1402E3B40 (-PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_.c)
 *     ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x1402E441C (-SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z.c)
 *     ?GetSdrWhiteLevel@@YAJIPEAVADAPTER_DISPLAY@@AEAI@Z @ 0x1402E506C (-GetSdrWhiteLevel@@YAJIPEAVADAPTER_DISPLAY@@AEAI@Z.c)
 */

__int64 __fastcall BLTQUEUE::PreparePresentIndirect(
        BLTQUEUE *this,
        struct DXGCONTEXT *a2,
        const struct _D3DKMT_PRESENT *a3,
        const struct _DXGKARG_PRESENT *a4,
        struct COREDEVICEACCESS *a5,
        struct BLTENTRY *a6)
{
  DXGSWAPCHAIN **v6; // rax
  struct DXGSWAPCHAIN *v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // r14d
  unsigned int v13; // esi
  bool v14; // zf
  unsigned int *v15; // rax
  D3DKMT_PRESENT_RGNS *pPresentRegions; // rax
  UINT DirtyRectCount; // ecx
  RECT *pDirtyRects; // rax
  struct DXGSWAPCHAIN **v19; // rcx
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rdx
  int v23; // eax
  __int64 result; // rax
  struct DXGSWAPCHAIN **v25; // rcx
  int SetMetaDataInternal; // eax
  struct _D3DKMT_GETSETSWAPCHAINMETADATA v27; // [rsp+50h] [rbp-89h] BYREF
  _QWORD v28[12]; // [rsp+80h] [rbp-59h] BYREF

  v6 = (DXGSWAPCHAIN **)*((_QWORD *)this + 354);
  if ( v6 )
  {
    if ( DXGSWAPCHAIN::IsNonSequential(*v6) )
    {
      return 0LL;
    }
    else
    {
      v27.hNtSwapChain = 0LL;
      *(_QWORD *)&v27.DataCopied = 0LL;
      v12 = 0;
      v27.bGlobalMetaData = 0;
      v13 = 0;
      v14 = (*(_DWORD *)(v11 + 88) & 0x400000) == 0;
      v27.bProducer = 1;
      v27.bSetMetaData = 1;
      if ( !v14 )
      {
        v15 = *(unsigned int **)(v11 + 1440);
        if ( v15 )
        {
          v13 = v15[4];
          v12 = *v15;
          if ( v13 )
          {
            v27.pBuffer = (PVOID)*((_QWORD *)v15 + 3);
            v27.BufferSize = 24 * v13;
            SetMetaDataInternal = SwapChainGetSetMetaDataInternal(v10, &v27, 16 * v12 + 84, 0);
            if ( SetMetaDataInternal < 0 )
            {
              WdLogSingleEntry1(3LL, SetMetaDataInternal);
              WdLogGlobalForLineNumber = 1495;
            }
          }
          pPresentRegions = a3->pPresentRegions;
          DirtyRectCount = pPresentRegions->DirtyRectCount;
          if ( pPresentRegions->DirtyRectCount )
          {
            pDirtyRects = (RECT *)pPresentRegions->pDirtyRects;
            v27.BufferSize = 16 * DirtyRectCount;
            v19 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 354);
            v27.pBuffer = pDirtyRects;
            v20 = SwapChainGetSetMetaDataInternal(*v19, &v27, 0x54u, 0);
            if ( v20 < 0 )
            {
              WdLogSingleEntry1(3LL, v20);
              WdLogGlobalForLineNumber = 1510;
            }
          }
        }
      }
      memset(v28, 0, 0x54uLL);
      v28[3] = 0LL;
      LODWORD(v28[6]) = 0;
      HIDWORD(v28[1]) = a3->PresentCount;
      v28[2] = __PAIR64__(v13, v12);
      if ( !a2 )
        goto LABEL_15;
      v21 = *((_QWORD *)a2 + 2);
      if ( !v21 )
        goto LABEL_15;
      v22 = *(_QWORD *)(v21 + 1896);
      if ( !v22 )
        goto LABEL_15;
      v23 = PopulateHDRMetadataFromDisplay(
              a3->VidPnSourceId,
              *(struct ADAPTER_DISPLAY **)(v22 + 3120),
              (struct _D3DDDI_HDR_METADATA_HDR10 *)((char *)&v28[6] + 4),
              (enum _D3DDDI_HDR_METADATA_TYPE *)&v28[6]);
      if ( v23 < 0 )
      {
        WdLogSingleEntry1(3LL, v23);
        WdLogGlobalForLineNumber = 1539;
      }
      result = GetSdrWhiteLevel(
                 a3->VidPnSourceId,
                 *(struct ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 1896LL) + 3120LL),
                 (unsigned int *)&v28[10]);
      if ( (int)result >= 0 )
      {
LABEL_15:
        v25 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 354);
        v27.pBuffer = (char *)&v28[1] + 4;
        v27.BufferSize = 72;
        result = SwapChainGetSetMetaDataInternal(*v25, &v27, 0xCu, 0);
        if ( (int)result < 0 )
        {
          WdLogSingleEntry1(3LL, (int)result);
          result = 0LL;
          WdLogGlobalForLineNumber = 1557;
        }
        if ( *((_DWORD *)this + 724) )
          return BLTQUEUE::CompletePresentIndirectInternal(this, a6, 0LL);
      }
    }
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1569;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Present to Indirect display does not have a shared swapchain to present to",
      1569LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225473LL;
  }
  return result;
}
