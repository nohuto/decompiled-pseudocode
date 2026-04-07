/*
 * XREFs of ?HasUsableBitmapResource@CTransitionVisualController@@QEAA_NPEAUHWND__@@PEAVCStoryboard@@@Z @ 0x180098164
 * Callers:
 *     ?_HasUsableBitmapResource@CStoryboard@@IEAA_NPEAUHWND__@@@Z @ 0x18009B1C8 (-_HasUsableBitmapResource@CStoryboard@@IEAA_NPEAUHWND__@@@Z.c)
 * Callees:
 *     ?_GetTransitionBitmapIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x1800981E0 (-_GetTransitionBitmapIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CTransitionVisualController::HasUsableBitmapResource(
        CTransitionVisualController *this,
        HWND a2,
        struct CStoryboard *a3)
{
  int TransitionBitmapIndex; // eax
  __int64 v5; // r11
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // r8

  TransitionBitmapIndex = CTransitionVisualController::_GetTransitionBitmapIndex(this, a2);
  v6 = 0LL;
  v7 = (unsigned int)TransitionBitmapIndex;
  if ( TransitionBitmapIndex >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    while ( (unsigned int)v6 < *(_DWORD *)(v8 + 4) )
    {
      if ( ((*(_DWORD *)(*((_QWORD *)this + 19) + 56 * v7 + 8) ^ *(_DWORD *)(*(_QWORD *)(v8 + 8) + 4 * v6)) & 0xFFF) == 0 )
        return 1;
      v6 = (unsigned int)(v6 + 1);
    }
  }
  return 0;
}
