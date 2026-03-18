/*
 * XREFs of ??0CBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x180102C34
 * Callers:
 *     ??0CDxHandleYUVBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x18010059C (--0CDxHandleYUVBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTE.c)
 *     ??0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_N4PEAVCDecodeBitmap@@@Z @ 0x180102B18 (--0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@.c)
 *     ??0CSectionBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@_N@Z @ 0x1801033E8 (--0CSectionBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

__int64 __fastcall CBitmapRealization::CBitmapRealization(
        __int64 a1,
        int a2,
        __int64 a3,
        _OWORD *a4,
        __int64 a5,
        __int64 a6)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)a1 = &CBitmapRealization::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
  *(_QWORD *)(a1 + 16) = &CGDISectionBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)(a1 + 80) = &CBitmapRealization::`vftable'{for `IBitmapRealization'};
  *(_QWORD *)(a1 + 88) = &CGDISectionBitmapRealization::`vftable'{for `IRemotableBitmapRealization'};
  *(_BYTE *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 96) = a3;
  *(_OWORD *)(a1 + 104) = *a4;
  *(_OWORD *)(a1 + 120) = a4[1];
  *(_OWORD *)(a1 + 136) = a4[2];
  *(_OWORD *)(a1 + 152) = a4[3];
  *(_OWORD *)(a1 + 168) = a4[4];
  *(_OWORD *)(a1 + 184) = a4[5];
  *(_OWORD *)(a1 + 200) = a4[6];
  *(_OWORD *)(a1 + 216) = a4[7];
  *(_OWORD *)(a1 + 232) = a4[8];
  *(_OWORD *)(a1 + 248) = *(_OWORD *)a5;
  *(_OWORD *)(a1 + 264) = *(_OWORD *)(a5 + 16);
  *(_QWORD *)(a1 + 280) = *(_QWORD *)(a5 + 32);
  *(_QWORD *)(a1 + 288) = a6;
  if ( a6 )
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a6 + 8));
  *(_DWORD *)(a1 + 296) = -1;
  result = a1;
  *(_DWORD *)(a1 + 300) = a2;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_QWORD *)(a1 + 312) = 0LL;
  *(_BYTE *)(a1 + 320) = 0;
  return result;
}
