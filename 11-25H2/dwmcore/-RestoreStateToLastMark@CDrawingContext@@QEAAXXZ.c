/*
 * XREFs of ?RestoreStateToLastMark@CDrawingContext@@QEAAXXZ @ 0x1801EA5CC
 * Callers:
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_F@@AEBU4@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180118F44 (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_.c)
 *     gsl::final_action__lambda_0a12ce3aab97bc899ecedabbabafaf28___::_final_action__lambda_0a12ce3aab97bc899ecedabbabafaf28___ @ 0x1801EA5AC (gsl--final_action__lambda_0a12ce3aab97bc899ecedabbabafaf28___--_final_action__lambda_0a12ce3aab9.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x1800E81B0 (-Pop@CDrawingContext@@UEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDrawingContext::RestoreStateToLastMark(CDrawingContext *this)
{
  int v2; // edx
  unsigned int v3; // r9d
  __int64 (*v4)(void); // rax
  int v5; // eax

  while ( 1 )
  {
    v2 = *((_DWORD *)this + 68);
    v3 = v2 - 1;
    if ( !v2 )
      break;
    if ( *(_DWORD *)(*((_QWORD *)this + 33) + 16LL * v3) == 12 )
    {
      *((_DWORD *)this + 68) = v3;
      return;
    }
    v4 = *(__int64 (**)(void))(*((_QWORD *)this + 2) + 96LL);
    if ( (char *)v4 == (char *)CDrawingContext::Pop )
      v5 = CDrawingContext::Pop((CDrawingContext *)((char *)this + 16));
    else
      v5 = v4();
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x107Bu, 0LL);
  }
}
