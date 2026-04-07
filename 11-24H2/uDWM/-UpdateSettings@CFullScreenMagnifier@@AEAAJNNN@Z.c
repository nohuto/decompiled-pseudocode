/*
 * XREFs of ?UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z @ 0x18007AD78
 * Callers:
 *     ?Initialize@CFullScreenMagnifier@@AEAAJXZ @ 0x18007AD50 (-Initialize@CFullScreenMagnifier@@AEAAJXZ.c)
 *     ?OnSetDesktopMagnificationFactor@CFullScreenMagnifier@@QEAAJNHH@Z @ 0x180099B3C (-OnSetDesktopMagnificationFactor@CFullScreenMagnifier@@QEAAJNHH@Z.c)
 * Callees:
 *     ?SetScale@CVisual@@QEAAXMM@Z @ 0x1800216C8 (-SetScale@CVisual@@QEAAXMM@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180021728 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180027EF8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetSamplingMode@CVisual@@QEAAJW4Enum@CompositionResampleMode@@@Z @ 0x18007AECC (-SetSamplingMode@CVisual@@QEAAJW4Enum@CompositionResampleMode@@@Z.c)
 *     ?ClearInterpolationMode@CVisual@@QEAAXXZ @ 0x18007AF10 (-ClearInterpolationMode@CVisual@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFullScreenMagnifier::UpdateSettings(CFullScreenMagnifier *this, double a2, double a3, double a4)
{
  bool v5; // al
  struct tagPOINT *v6; // rcx
  float v7; // xmm2_4
  struct tagPOINT *v8; // rcx
  int v9; // eax
  unsigned int v10; // edi
  __int64 v12; // rcx
  int v13; // eax
  struct tagPOINT v14; // [rsp+40h] [rbp+8h] BYREF

  v5 = *((double *)this + 3) != a2;
  *((double *)this + 3) = a2;
  *((double *)this + 4) = a3;
  *((double *)this + 5) = a4;
  if ( a2 <= 1.01 )
  {
    CVisual::SetInterpolationMode(*((__int64 **)this + 2), 0);
    CVisual::ClearInterpolationMode(*((CVisual **)this + 2));
    v8 = (struct tagPOINT *)*((_QWORD *)this + 2);
    v14.x = 0;
    v14.y = 0;
    CVisual::SetOffset(v8, &v14);
    CVisual::SetScale(*((CVisual **)this + 2), 1.0, 1.0);
    CVisual::SetSamplingMode(*((_QWORD *)this + 2), 0LL);
  }
  else
  {
    if ( v5 )
    {
      v12 = *((_QWORD *)this + 2);
      if ( v12 )
      {
        v13 = CVisual::SetSamplingMode(v12, *((unsigned int *)this + 12));
        v10 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x9Fu, 0LL);
          return v10;
        }
      }
    }
    CVisual::SetInterpolationMode(*((__int64 **)this + 2), 1);
    v6 = (struct tagPOINT *)*((_QWORD *)this + 2);
    v14.x = (int)*((double *)this + 4);
    v14.y = (int)*((double *)this + 5);
    CVisual::SetOffset(v6, &v14);
    v7 = *((double *)this + 3);
    CVisual::SetScale(*((CVisual **)this + 2), v7, v7);
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 48LL))(*((_QWORD *)this + 2));
  v10 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0xD0u, 0LL);
  return v10;
}
