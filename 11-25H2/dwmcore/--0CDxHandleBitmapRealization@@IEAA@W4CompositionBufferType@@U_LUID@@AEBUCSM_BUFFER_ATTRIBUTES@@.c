/*
 * XREFs of ??0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_N4PEAVCDecodeBitmap@@@Z @ 0x180102B18
 * Callers:
 *     ?Create@CDxHandleBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x1801022EC (-Create@CDxHandleBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTE.c)
 *     ??0CGDIBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x180102870 (--0CGDIBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z.c)
 *     ??0CDxHandleAdvancedDirectFlipBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x1802E0B44 (--0CDxHandleAdvancedDirectFlipBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_B.c)
 *     ??0CDxHandleStereoBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x1802E1AFC (--0CDxHandleStereoBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIB.c)
 * Callees:
 *     ??0ISwapChainRealization@@QEAA@XZ @ 0x180102C1C (--0ISwapChainRealization@@QEAA@XZ.c)
 *     ??0CBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x180102C34 (--0CBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::CDxHandleBitmapRealization(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        char a7)
{
  _QWORD *v9; // rcx
  __int64 v10; // rax

  CBitmapRealization::CBitmapRealization(a1, a2);
  ISwapChainRealization::ISwapChainRealization((ISwapChainRealization *)(a1 + 328));
  *(_QWORD *)(a1 + 352) = 0LL;
  *(_QWORD *)(a1 + 360) = 0LL;
  *(_QWORD *)(a1 + 368) = 0LL;
  *(_QWORD *)a1 = &CDxHandleBitmapRealization::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
  *(_QWORD *)(a1 + 16) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)(a1 + 80) = &CDxHandleBitmapRealization::`vftable'{for `IBitmapRealization's `CBitmapRealization'};
  *(_QWORD *)(a1 + 88) = &CGDISectionBitmapRealization::`vftable'{for `IRemotableBitmapRealization'};
  *v9 = &CGDIBitmapRealization::`vftable'{for `IDeviceResource'};
  *(_QWORD *)(a1 + 336) = &CDxHandleBitmapRealization::`vftable'{for `IBitmapRealization's `ISwapChainRealization'};
  *(_QWORD *)(a1 + 344) = &CDxHandleStereoBitmapRealization::`vftable'{for `IOverlayPlaneResource'};
  *(_QWORD *)(a1 + 376) = 0LL;
  *(_QWORD *)(a1 + 384) = 0LL;
  *(_BYTE *)(a1 + 392) = a7;
  *(_BYTE *)(a1 + 393) = a6;
  *(_WORD *)(a1 + 394) = 256;
  *(_BYTE *)(a1 + 396) = 1;
  v10 = *(_QWORD *)(a4 + 8);
  if ( (*(_BYTE *)(a4 + 136) & 1) == 0 || !v10 )
    LODWORD(v10) = -1;
  *(_DWORD *)(a1 + 296) = v10;
  return a1;
}
