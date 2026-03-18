/*
 * XREFs of ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x18018A134
 * Callers:
 *     ?Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x180101F3C (-Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCS.c)
 *     ?Create@CDxHandleBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x1801022EC (-Create@CDxHandleBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTE.c)
 *     ?Create@CGDIBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVIGDIBitmapRealization@@@Z @ 0x18010272C (-Create@CGDIBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVIGDIBitmapRealization@@@Z.c)
 *     ?Create@CDxHandleStereoBitmapRealization@@SAHW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVISwapChainRealization@@@Z @ 0x1802E1D54 (-Create@CDxHandleStereoBitmapRealization@@SAHW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATT.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsOverlayRequired@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x18018A0F0 (-IsOverlayRequired@CDxHandleBitmapRealization@@UEBA_NXZ.c)
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x18018B180 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::Initialize(CDxHandleBitmapRealization *this)
{
  __int64 (*v2)(void); // rax
  int v3; // eax
  unsigned int v4; // edi
  char (__fastcall *v5)(CDxHandleBitmapRealization *); // rax
  CDxHandleBitmapRealization *v6; // rcx
  char IsOverlayRequired; // al
  int v8; // eax

  v2 = *(__int64 (**)(void))(*(_QWORD *)this + 72LL);
  if ( (char *)v2 == (char *)CDxHandleBitmapRealization::EnsureD2DBitmap )
    v3 = CDxHandleBitmapRealization::EnsureD2DBitmap(this);
  else
    v3 = v2();
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180338908, 2u, v3, 0x3Eu, 0LL);
  }
  else
  {
    v5 = *(char (__fastcall **)(CDxHandleBitmapRealization *))(*((_QWORD *)this + 41) + 152LL);
    v6 = (CDxHandleBitmapRealization *)((char *)this + 328);
    if ( v5 == CDxHandleBitmapRealization::IsOverlayRequired )
      IsOverlayRequired = CDxHandleBitmapRealization::IsOverlayRequired(v6);
    else
      IsOverlayRequired = v5(v6);
    if ( IsOverlayRequired
      || (v8 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 41) + 120LL))((char *)this + 328),
          CDeviceManager::s_bXbox)
      || v8 == 1 )
    {
      *((_BYTE *)this + 396) = 0;
    }
  }
  return v4;
}
