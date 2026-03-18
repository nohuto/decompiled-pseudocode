/*
 * XREFs of CDebugFrameCounter::RenderGlobalFrameCounter__lambda_586b8124a7a66c0b83ac918785996de3___ @ 0x1800C59E8
 * Callers:
 *     ?Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800C6C14 (-Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800A6F50 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x1802677DC (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@.c)
 *     ?GetCPUTimePerFrame@CDebugFrameCounter@@QEAAIXZ @ 0x1802699EC (-GetCPUTimePerFrame@CDebugFrameCounter@@QEAAIXZ.c)
 *     ?GetFrameRate@CDebugFrameCounter@@QEAAIXZ @ 0x180269A70 (-GetFrameRate@CDebugFrameCounter@@QEAAIXZ.c)
 *     McTemplateU0qx_EventWriteTransfer @ 0x180289DDC (McTemplateU0qx_EventWriteTransfer.c)
 *     _lambda_586b8124a7a66c0b83ac918785996de3_::operator() @ 0x18028A078 (_lambda_586b8124a7a66c0b83ac918785996de3_--operator().c)
 */

__int64 CDebugFrameCounter::RenderGlobalFrameCounter__lambda_586b8124a7a66c0b83ac918785996de3___(
        __int64 a1,
        int *a2,
        __int64 a3,
        ...)
{
  unsigned int v3; // edi
  char *v5; // rbx
  int v7; // eax
  float v8; // xmm7_4
  float v9; // xmm8_4
  float v10; // xmm6_4
  unsigned int FrameRate; // esi
  unsigned int CPUTimePerFrame; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  struct D2D_RECT_F v16; // [rsp+48h] [rbp-19h] BYREF
  float v17; // [rsp+58h] [rbp-9h] BYREF
  float v18; // [rsp+5Ch] [rbp-5h]
  float v19; // [rsp+60h] [rbp-1h]
  float v20; // [rsp+64h] [rbp+3h]
  va_list va; // [rsp+E0h] [rbp+7Fh] BYREF

  va_start(va, a3);
  v3 = 0;
  v5 = (char *)g_pComposition + 1008;
  if ( g_pComposition != (CGlobalComposition *)-1008LL && *((_BYTE *)g_pComposition + 1016) )
  {
    v7 = *a2;
    v17 = 0.0;
    v8 = 0.0;
    v18 = 0.0;
    v9 = (float)v7;
    v10 = (float)a2[1];
    v19 = (float)v7;
    v16 = 0LL;
    v20 = v10;
    FrameRate = CDebugFrameCounter::GetFrameRate((CGlobalComposition *)((char *)g_pComposition + 1008));
    CPUTimePerFrame = CDebugFrameCounter::GetCPUTimePerFrame((CDebugFrameCounter *)v5);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0qx_EventWriteTransfer(v14, v13, FrameRate, CPUTimePerFrame);
    if ( v5 != (char *)-4632LL )
    {
      v15 = CDisplayDebugFrameCounter::Display(
              (CDisplayDebugFrameCounter *)(v5 + 4632),
              FrameRate,
              a3 + 52,
              (__int64)&v17,
              (void *)(CCommonRegistryData::m_fDebugFrameCounterIsVertical != 0),
              (__int64)&v16);
      v3 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x96u, 0LL);
        return v3;
      }
      v10 = v20;
      v9 = v19;
      v8 = v18;
      if ( v17 > v16.left )
        v16.left = v17;
    }
    if ( v8 > v16.top )
      v16.top = v8;
    if ( v16.right > v9 )
      v16.right = v9;
    if ( v16.bottom > v10 )
      v16.bottom = v10;
    if ( IsEmpty(&v16) )
    {
      v16.bottom = 0.0;
      v16.right = 0.0;
      v16.top = 0.0;
      v16.left = 0.0;
    }
    if ( !IsEmpty(&v16) )
      lambda_586b8124a7a66c0b83ac918785996de3_::operator()(va, &v16);
  }
  return v3;
}
