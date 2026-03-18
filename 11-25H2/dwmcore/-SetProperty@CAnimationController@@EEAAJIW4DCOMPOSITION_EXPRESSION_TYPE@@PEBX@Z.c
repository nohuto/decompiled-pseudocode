/*
 * XREFs of ?SetProperty@CAnimationController@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800AF170
 * Callers:
 *     <none>
 * Callees:
 *     ?OnProgressChanged@CAnimationController@@QEAAXXZ @ 0x1800AF200 (-OnProgressChanged@CAnimationController@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetPlaybackRate@?$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@@QEAAJM@Z @ 0x180112D34 (-SetPlaybackRate@-$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResourc.c)
 */

__int64 __fastcall CAnimationController::SetProperty(__int64 a1, int a2, int a3, float *a4)
{
  int v4; // edx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 != 18 )
    return 2147942487LL;
  v4 = a2 - 2;
  if ( !v4 )
  {
    *(_BYTE *)(a1 + 120) |= 4u;
    if ( *a4 != *(float *)(a1 + 80) )
    {
      *(float *)(a1 + 80) = fminf(1.0, fmaxf(*a4, 0.0));
      CAnimationController::OnProgressChanged((CAnimationController *)a1);
    }
    return 0LL;
  }
  if ( v4 != 1 )
    return 2147942487LL;
  *(_BYTE *)(a1 + 120) |= 8u;
  v6 = CAnimationControllerGeneratedT<CAnimationController,CPropertyChangeResource>::SetPlaybackRate();
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x49,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\animationcontroller.cpp",
    (const char *)(unsigned int)v6,
    v8);
  return v7;
}
