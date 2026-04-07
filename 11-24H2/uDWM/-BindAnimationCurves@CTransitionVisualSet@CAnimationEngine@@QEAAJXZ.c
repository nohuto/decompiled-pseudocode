/*
 * XREFs of ?BindAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ @ 0x18006E568
 * Callers:
 *     ?StartAnimations@CAnimationEngine@@AEAAJXZ @ 0x18006E0E4 (-StartAnimations@CAnimationEngine@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAnimationEngine::CTransitionVisualSet::BindAnimationCurves(
        CAnimationEngine::CTransitionVisualSet *this)
{
  unsigned int v1; // edi
  __int64 i; // rbx
  _QWORD *v4; // rdx
  __int64 v5; // r14
  int v6; // eax

  v1 = 0;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 5); i = (unsigned int)(i + 1) )
  {
    v4 = *(_QWORD **)(*((_QWORD *)this + 5) + 8 * i);
    v5 = *v4;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 208LL))(*v4) )
    {
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 224LL))(v5);
      v1 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x6D8u, 0LL);
        return v1;
      }
    }
  }
  return v1;
}
