/*
 * XREFs of ??0CSectionBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@_N@Z @ 0x1801A6920
 * Callers:
 *     ??0CGDISectionBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@_N@Z @ 0x1801A6498 (--0CGDISectionBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUC.c)
 *     ?Create@CGDISectionBitmapRealization@@SAJPEAXAEBUD2D_SIZE_U@@IW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAEPEAPEAVIGDIBitmapRealization@@@Z @ 0x1801A670C (-Create@CGDISectionBitmapRealization@@SAJPEAXAEBUD2D_SIZE_U@@IW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@.c)
 * Callees:
 *     ??0CBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x1801A6AF8 (--0CBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_.c)
 */

CSectionBitmapRealization *__fastcall CSectionBitmapRealization::CSectionBitmapRealization(
        CSectionBitmapRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3,
        const struct CSM_SYSMEM_SECTION_INFO *a4,
        bool a5)
{
  __int64 v7; // xmm1_8
  CSectionBitmapRealization *result; // rax

  CBitmapRealization::CBitmapRealization(this, 0LL, 0LL, a2, a3, 0LL);
  *(_QWORD *)this = &CSectionBitmapRealization::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
  *((_QWORD *)this + 2) = &CGDISectionBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 10) = &CSectionBitmapRealization::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 11) = &CGDISectionBitmapRealization::`vftable'{for `IRemotableBitmapRealization'};
  *((_QWORD *)this + 41) = &CGDISectionBitmapRealization::`vftable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)this + 42) = &CGDISectionBitmapRealization::`vftable'{for `IPixelColor'};
  *((_QWORD *)this + 43) = 0LL;
  *((_OWORD *)this + 22) = *(_OWORD *)a4;
  v7 = *((_QWORD *)a4 + 2);
  *((_QWORD *)this + 47) = 0LL;
  *((_BYTE *)this + 384) = a5;
  result = this;
  *((_QWORD *)this + 46) = v7;
  return result;
}
