/*
 * XREFs of ??0CDxHandleYUVBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x1801A7100
 * Callers:
 *     ?Create@CDxHandleYUVBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x1801A6F44 (-Create@CDxHandleYUVBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIB.c)
 *     ?CreateSubResource@CDxHandleYUVBitmapRealization@@SAJPEAVIYUVSwapChainRealization@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x180225D60 (-CreateSubResource@CDxHandleYUVBitmapRealization@@SAJPEAVIYUVSwapChainRealization@@U_LUID@@AEBUC.c)
 * Callees:
 *     ??0CBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x1801A6AF8 (--0CBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_.c)
 *     ??0IYUVSwapChainRealization@@QEAA@XZ @ 0x1801A7678 (--0IYUVSwapChainRealization@@QEAA@XZ.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::CDxHandleYUVBitmapRealization(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD *v8; // rcx
  __int64 v9; // rax

  CBitmapRealization::CBitmapRealization(a1, a2, a3, (_OWORD *)a4, a5, a6);
  IYUVSwapChainRealization::IYUVSwapChainRealization((IYUVSwapChainRealization *)(a1 + 328));
  *(_QWORD *)(a1 + 352) = 0LL;
  *(_QWORD *)(a1 + 360) = 0LL;
  *(_QWORD *)(a1 + 368) = 0LL;
  *(_QWORD *)a1 = &CDxHandleYUVBitmapRealization::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
  *(_QWORD *)(a1 + 16) = &CDxHandleYUVBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)(a1 + 80) = &CDxHandleYUVBitmapRealization::`vftable'{for `IBitmapRealization's `CBitmapRealization'};
  *(_QWORD *)(a1 + 88) = &CGDISectionBitmapRealization::`vftable'{for `IRemotableBitmapRealization'};
  *v8 = &CDxHandleYUVBitmapRealization::`vftable'{for `IDeviceResource'};
  *(_QWORD *)(a1 + 336) = &CDxHandleYUVBitmapRealization::`vftable'{for `IBitmapRealization's `IYUVSwapChainRealization'};
  *(_QWORD *)(a1 + 344) = &CDxHandleYUVBitmapRealization::`vftable'{for `IOverlayPlaneResource'};
  *(_QWORD *)(a1 + 376) = 0LL;
  *(_QWORD *)(a1 + 384) = 0LL;
  *(_WORD *)(a1 + 392) = 256;
  v9 = *(_QWORD *)(a4 + 8);
  if ( (*(_BYTE *)(a4 + 136) & 1) == 0 || !v9 )
    LODWORD(v9) = -1;
  *(_DWORD *)(a1 + 296) = v9;
  return a1;
}
