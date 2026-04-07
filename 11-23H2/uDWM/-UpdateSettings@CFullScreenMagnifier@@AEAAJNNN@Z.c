/*
 * XREFs of ?UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z @ 0x18001DE20
 * Callers:
 *     ?Create@CFullScreenMagnifier@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x18002BED4 (-Create@CFullScreenMagnifier@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?OnSetDesktopMagnificationFactor@CFullScreenMagnifier@@QEAAJNHH@Z @ 0x1800C0254 (-OnSetDesktopMagnificationFactor@CFullScreenMagnifier@@QEAAJNHH@Z.c)
 * Callees:
 *     ?SetSamplingMode@CVisual@@QEAAJW4Enum@CompositionResampleMode@@@Z @ 0x18001DEE8 (-SetSamplingMode@CVisual@@QEAAJW4Enum@CompositionResampleMode@@@Z.c)
 *     ?ClearInterpolationMode@CVisual@@QEAAXXZ @ 0x18001DF38 (-ClearInterpolationMode@CVisual@@QEAAXXZ.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18001DF78 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetScale@CVisual@@QEAAXNN@Z @ 0x18001DFC4 (-SetScale@CVisual@@QEAAXNN@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180055EA8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CFullScreenMagnifier::UpdateSettings(CFullScreenMagnifier *this, double a2, double a3, double a4)
{
  bool v5; // al
  CVisual *v6; // rcx
  int v7; // eax
  unsigned int v8; // edi
  __int64 v10; // rcx
  int v11; // eax
  CVisual *v12; // rcx
  struct tagPOINT v13; // [rsp+40h] [rbp+8h] BYREF

  v5 = *((double *)this + 3) != a2;
  *((double *)this + 3) = a2;
  *((double *)this + 4) = a3;
  *((double *)this + 5) = a4;
  if ( a2 > 1.01 )
  {
    if ( v5 )
    {
      v10 = *((_QWORD *)this + 2);
      if ( v10 )
      {
        v11 = CVisual::SetSamplingMode(v10, *((unsigned int *)this + 12));
        v8 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xA0u, 0LL);
          return v8;
        }
      }
    }
    CVisual::SetInterpolationMode(*((_QWORD *)this + 2), 1LL);
    v12 = (CVisual *)*((_QWORD *)this + 2);
    v13.x = (int)*((double *)this + 4);
    v13.y = (int)*((double *)this + 5);
    CVisual::SetOffset(v12, &v13);
    CVisual::SetScale(*((CVisual **)this + 2), *((double *)this + 3), *((double *)this + 3));
  }
  else
  {
    CVisual::SetInterpolationMode(*((_QWORD *)this + 2), 0LL);
    CVisual::ClearInterpolationMode(*((CVisual **)this + 2));
    v6 = (CVisual *)*((_QWORD *)this + 2);
    v13.x = 0;
    v13.y = 0;
    CVisual::SetOffset(v6, &v13);
    CVisual::SetScale(*((CVisual **)this + 2), 1.0, 1.0);
    CVisual::SetSamplingMode(*((_QWORD *)this + 2), 0LL);
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 64LL))(*((_QWORD *)this + 2));
  v8 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xD1u, 0LL);
  return v8;
}
