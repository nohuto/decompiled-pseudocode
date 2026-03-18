/*
 * XREFs of ?PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAVBLTENTRY@@@Z @ 0x14030766C
 * Callers:
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x14030635C (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsNonSequential@DXGSWAPCHAIN@@QEBA_NXZ @ 0x140078EB8 (-IsNonSequential@DXGSWAPCHAIN@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x140307BCC (-SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z.c)
 *     ?CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z @ 0x14030881C (-CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z.c)
 *     ?GetSdrWhiteLevel@@YAJIPEAVADAPTER_DISPLAY@@AEAI@Z @ 0x140308B48 (-GetSdrWhiteLevel@@YAJIPEAVADAPTER_DISPLAY@@AEAI@Z.c)
 *     ?PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_D3DDDI_HDR_METADATA_TYPE@@@Z @ 0x140308DD0 (-PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_.c)
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
  int v26; // r9d
  int SetMetaDataInternal; // eax
  struct _D3DKMT_GETSETSWAPCHAINMETADATA v28; // [rsp+50h] [rbp-89h] BYREF
  _QWORD v29[12]; // [rsp+80h] [rbp-59h] BYREF

  v6 = (DXGSWAPCHAIN **)*((_QWORD *)this + 345);
  if ( v6 )
  {
    if ( DXGSWAPCHAIN::IsNonSequential(*v6) )
    {
      return 0LL;
    }
    else
    {
      v28.hNtSwapChain = 0LL;
      *(_QWORD *)&v28.DataCopied = 0LL;
      v12 = 0;
      v28.bGlobalMetaData = 0;
      v13 = 0;
      v14 = (*(_DWORD *)(v11 + 88) & 0x400000) == 0;
      v28.bProducer = 1;
      v28.bSetMetaData = 1;
      if ( !v14 )
      {
        v15 = *(unsigned int **)(v11 + 1440);
        if ( v15 )
        {
          v13 = v15[4];
          v12 = *v15;
          if ( v13 )
          {
            v28.pBuffer = (PVOID)*((_QWORD *)v15 + 3);
            v28.BufferSize = 24 * v13;
            SetMetaDataInternal = SwapChainGetSetMetaDataInternal(v10, &v28, 16 * v12 + 84, 0);
            if ( SetMetaDataInternal < 0 )
            {
              WdLogSingleEntry1(3LL, SetMetaDataInternal);
              WdLogGlobalForLineNumber = 1466;
            }
          }
          pPresentRegions = a3->pPresentRegions;
          DirtyRectCount = pPresentRegions->DirtyRectCount;
          if ( pPresentRegions->DirtyRectCount )
          {
            pDirtyRects = (RECT *)pPresentRegions->pDirtyRects;
            v28.BufferSize = 16 * DirtyRectCount;
            v19 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 345);
            v28.pBuffer = pDirtyRects;
            v20 = SwapChainGetSetMetaDataInternal(*v19, &v28, 0x54u, 0);
            if ( v20 < 0 )
            {
              WdLogSingleEntry1(3LL, v20);
              WdLogGlobalForLineNumber = 1481;
            }
          }
        }
      }
      memset(v29, 0, 0x54uLL);
      v29[3] = 0LL;
      LODWORD(v29[6]) = 0;
      HIDWORD(v29[1]) = a3->PresentCount;
      v29[2] = __PAIR64__(v13, v12);
      if ( !a2 )
        goto LABEL_15;
      v21 = *((_QWORD *)a2 + 2);
      if ( !v21 )
        goto LABEL_15;
      v22 = *(_QWORD *)(v21 + 1880);
      if ( !v22 )
        goto LABEL_15;
      v23 = PopulateHDRMetadataFromDisplay(
              a3->VidPnSourceId,
              *(struct ADAPTER_DISPLAY **)(v22 + 3120),
              (struct _D3DDDI_HDR_METADATA_HDR10 *)((char *)&v29[6] + 4),
              (enum _D3DDDI_HDR_METADATA_TYPE *)&v29[6]);
      if ( v23 < 0 )
      {
        WdLogSingleEntry1(3LL, v23);
        WdLogGlobalForLineNumber = 1510;
      }
      result = GetSdrWhiteLevel(
                 a3->VidPnSourceId,
                 *(struct ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 1880LL) + 3120LL),
                 (unsigned int *)&v29[10]);
      if ( (int)result >= 0 )
      {
LABEL_15:
        v25 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 345);
        v28.pBuffer = (char *)&v29[1] + 4;
        v28.BufferSize = 72;
        result = SwapChainGetSetMetaDataInternal(*v25, &v28, 0xCu, 0);
        if ( (int)result < 0 )
        {
          WdLogSingleEntry1(3LL, (int)result);
          result = 0LL;
          WdLogGlobalForLineNumber = 1528;
        }
        if ( *((_DWORD *)this + 706) )
          return BLTQUEUE::CompletePresentIndirectInternal(this, a6, 0LL, v26);
      }
    }
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1540;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Present to Indirect display does not have a shared swapchain to present to",
      1540LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225473LL;
  }
  return result;
}
