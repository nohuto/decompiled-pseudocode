/*
 * XREFs of ??0CDDisplaySwapChain@@IEAA@AEAV?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@AEAUDDisplayTaskPoolResources@@AEAUDDisplayTargetResources@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@AEBVRefreshRateInfo@@IUD2D_SIZE_U@@@Z @ 0x1802C117C
 * Callers:
 *     ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x1802C27F4 (-CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBVRenderTargetInfo@@I.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@AEAAPEAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@QEAPEAV234@AEBQEAV234@@Z @ 0x1800DEA80 (--$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@-$vector@PEAVBamoPrincipalI.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1801585E8 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??0CScribbleSwapChain@@IEAA@PEAVCD3DDevice@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@AEBVRefreshRateInfo@@IIU_LUID@@W4Enum@FrontBufferRender@@@Z @ 0x18024AC10 (--0CScribbleSwapChain@@IEAA@PEAVCD3DDevice@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@AEBVRefre.c)
 *     ??0?$unordered_map@IVCDDisplayFlipAwayFence@@U?$hash@I@std@@U?$equal_to@I@3@V?$allocator@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@@3@@std@@QEAA@XZ @ 0x1802C1108 (--0-$unordered_map@IVCDDisplayFlipAwayFence@@U-$hash@I@std@@U-$equal_to@I@3@V-$allocator@U-$pair.c)
 *     ??0DDisplayTargetResources@@QEAA@$$QEAU0@@Z @ 0x1802C13EC (--0DDisplayTargetResources@@QEAA@$$QEAU0@@Z.c)
 */

__int64 __fastcall CDDisplaySwapChain::CDDisplaySwapChain(
        __int64 a1,
        struct CD3DDevice **a2,
        __int64 *a3,
        __int64 a4,
        const struct PixelFormatInfo *a5,
        const struct RenderTargetInfo *a6,
        struct RefreshRateInfo *a7,
        int a8,
        __int64 a9)
{
  SIZE_T size_of; // rax
  _QWORD *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // eax
  __int64 result; // rax

  CScribbleSwapChain::CScribbleSwapChain(
    a1,
    *a2,
    a5,
    a6,
    a7,
    *(_DWORD *)(a4 + 88),
    *(_DWORD *)(a4 + 92),
    *(struct _LUID *)a6,
    -1);
  *(_QWORD *)a1 = &CDDisplaySwapChain::`vftable'{for `COverlaySwapChain'};
  *(_QWORD *)(a1 + 24) = &CDDisplaySwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)(a1 + 32) = &CDDisplaySwapChain::`vftable'{for `IPixelFormat'};
  *(_QWORD *)(a1 + 256) = &CDDisplaySwapChain::`vftable'{for `IScribbleSwapChain'};
  *(_QWORD *)(a1 + 280) = &CDDisplaySwapChain::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)(a1 + 288) = &CDDisplaySwapChain::`vftable'{for `IDDisplayEventListener'};
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_QWORD *)(a1 + 312) = 0LL;
  *(_QWORD *)(a1 + 320) = 0LL;
  *(_QWORD *)(a1 + 328) = 0LL;
  size_of = std::_Get_size_of_n<24>(1uLL);
  v13 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v13 = v13;
  v13[1] = v13;
  *(_QWORD *)(a1 + 320) = v13;
  v14 = *a3;
  *a3 = 0LL;
  *(_QWORD *)(a1 + 336) = v14;
  v15 = a3[1];
  a3[1] = 0LL;
  *(_QWORD *)(a1 + 344) = v15;
  *(_QWORD *)(a1 + 352) = a3[2];
  a3[2] = 0LL;
  v16 = a3[3];
  a3[3] = 0LL;
  *(_QWORD *)(a1 + 360) = v16;
  DDisplayTargetResources::DDisplayTargetResources(a1 + 368, a4);
  v17 = a8;
  *(_QWORD *)(a1 + 464) = 0LL;
  *(_QWORD *)(a1 + 472) = 0LL;
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_QWORD *)(a1 + 496) = 0LL;
  *(_QWORD *)(a1 + 504) = 0LL;
  *(_DWORD *)(a1 + 512) = v17;
  *(_QWORD *)(a1 + 516) = a9;
  *(_DWORD *)(a1 + 524) = 0;
  *(_QWORD *)(a1 + 528) = 0LL;
  *(_QWORD *)(a1 + 536) = 0LL;
  *(_QWORD *)(a1 + 544) = 0LL;
  *(_QWORD *)(a1 + 552) = 0LL;
  *(_DWORD *)(a1 + 560) = 0;
  *(_QWORD *)(a1 + 568) = 0LL;
  *(_QWORD *)(a1 + 576) = 0LL;
  *(_QWORD *)(a1 + 584) = 0LL;
  *(_QWORD *)(a1 + 592) = 0LL;
  std::unordered_map<unsigned int,CDDisplayFlipAwayFence>::unordered_map<unsigned int,CDDisplayFlipAwayFence>(a1 + 600);
  *(_WORD *)(a1 + 664) = 1;
  *(_BYTE *)(a1 + 666) = 0;
  a6 = (const struct RenderTargetInfo *)(a1 + 288);
  if ( qword_1803FABA0 == qword_1803FABA8 )
  {
    std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
      (const void **)&qword_1803FAB98,
      (_BYTE *)qword_1803FABA0,
      &a6);
  }
  else
  {
    *(_QWORD *)qword_1803FABA0 = a1 + 288;
    qword_1803FABA0 += 8LL;
  }
  result = a1;
  *(_DWORD *)(a1 + 88) = 2;
  return result;
}
