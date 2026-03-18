/*
 * XREFs of ??0CDxHandleStereoBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x1802D885C
 * Callers:
 *     ?Create@CDxHandleStereoBitmapRealization@@SAHW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVISwapChainRealization@@@Z @ 0x1802D8AB4 (-Create@CDxHandleStereoBitmapRealization@@SAHW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATT.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ??0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_N4PEAVCDecodeBitmap@@@Z @ 0x1801A69DC (--0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     ?AdjustStereoEntityCount@CComposition@@QEAAX_N@Z @ 0x18025A940 (-AdjustStereoEntityCount@CComposition@@QEAAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall CDxHandleStereoBitmapRealization::CDxHandleStereoBitmapRealization(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _QWORD *v6; // rax
  CComposition *v7; // rcx
  _QWORD *v8; // rbx
  __int64 v9; // rsi

  CDxHandleBitmapRealization::CDxHandleBitmapRealization((__int64)a1, a2, a3, a4, a5, 1, 1, 0LL);
  *a1 = &CDxHandleStereoBitmapRealization::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
  a1[2] = &CDxHandleStereoBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  a1[10] = &CDxHandleStereoBitmapRealization::`vftable'{for `IBitmapRealization's `CBitmapRealization'};
  a1[11] = &CGDISectionBitmapRealization::`vftable'{for `IRemotableBitmapRealization'};
  a1[41] = &CDxHandleStereoBitmapRealization::`vftable'{for `IDeviceResource'};
  a1[42] = &CDxHandleStereoBitmapRealization::`vftable'{for `IBitmapRealization's `ISwapChainRealization'};
  a1[43] = &CDxHandleStereoBitmapRealization::`vftable'{for `IOverlayPlaneResource'};
  a1[50] = 0LL;
  a1[51] = 0LL;
  v6 = operator new(0x50uLL);
  v8 = v6;
  if ( v6 )
  {
    memset_0(v6, 0, 0x50uLL);
    *v8 = &CD2DBitmapCache::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
    v8[2] = &CGDISectionBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
    v8[7] = 0LL;
    v8[8] = 0LL;
    *((_BYTE *)v8 + 72) = 0;
  }
  else
  {
    v8 = 0LL;
  }
  v9 = a1[51];
  a1[51] = v8;
  if ( v8 )
    (*(void (__fastcall **)(_QWORD *))(*v8 + 8LL))(v8);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  CComposition::AdjustStereoEntityCount(v7, 1);
  return a1;
}
