/*
 * XREFs of ?Create@CDxHandleStereoBitmapRealization@@SAHW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVISwapChainRealization@@@Z @ 0x1802E1D54
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x180101BC0 (-CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@A.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x18018A134 (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     ??1?$com_ptr_t@VCDxHandleStereoBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18020D674 (--1-$com_ptr_t@VCDxHandleStereoBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0CDxHandleStereoBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x1802E1AFC (--0CDxHandleStereoBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIB.c)
 */

__int64 __fastcall CDxHandleStereoBitmapRealization::Create(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5)
{
  _QWORD *v9; // rax
  __int64 v10; // rdi
  _QWORD *v11; // rax
  CDxHandleBitmapRealization *v12; // rbx
  int v13; // eax
  unsigned int v14; // esi
  CGlobalDrawingContext *v16; // [rsp+30h] [rbp-18h] BYREF

  v9 = operator new(0x1A0uLL);
  v10 = 0LL;
  if ( v9 )
  {
    v11 = CDxHandleStereoBitmapRealization::CDxHandleStereoBitmapRealization(v9, a1, a2, a3, a4);
    v16 = (CGlobalDrawingContext *)v11;
    v12 = (CDxHandleBitmapRealization *)v11;
    if ( v11 )
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v11 + 1));
  }
  else
  {
    v12 = 0LL;
    v16 = 0LL;
  }
  v13 = CDxHandleBitmapRealization::Initialize(v12);
  v14 = v13;
  if ( v13 >= 0 )
  {
    v16 = 0LL;
    v10 = ((unsigned __int64)v12 + 328) & -(__int64)(v12 != 0LL);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x1Au, 0LL);
    if ( v12 )
      *((_QWORD *)v12 + 32) = 0LL;
  }
  *a5 = v10;
  wil::com_ptr_t<CDxHandleStereoBitmapRealization,wil::err_returncode_policy>::~com_ptr_t<CDxHandleStereoBitmapRealization,wil::err_returncode_policy>(&v16);
  return v14;
}
