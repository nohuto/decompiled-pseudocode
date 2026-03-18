/*
 * XREFs of ?Create@CPassthroughEffect@@SAJPEAPEAV1@@Z @ 0x180071614
 * Callers:
 *     ?BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ @ 0x180071448 (-BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ.c)
 * Callees:
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

__int64 __fastcall CPassthroughEffect::Create(struct CPassthroughEffect **a1)
{
  char *v2; // rax
  struct CPassthroughEffect *v3; // rbx
  unsigned int v4; // ebx

  v2 = (char *)MIDL_user_allocate(0x18uLL);
  v3 = (struct CPassthroughEffect *)v2;
  if ( v2 )
  {
    *((_DWORD *)v2 + 3) = 0;
    *((_DWORD *)v2 + 2) = 0;
    *(_QWORD *)v2 = &CPassthroughEffect::`vftable'{for `CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance,CMilObjectDeleter>'};
    *((_QWORD *)v2 + 2) = &CPassthroughEffect::`vftable'{for `Windows::UI::Composition::ICompiledEffect'};
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v2 + 8));
    *a1 = v3;
    return 0;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x10u, 0LL);
  }
  return v4;
}
