/*
 * XREFs of ?EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z @ 0x18022B7D4
 * Callers:
 *     ?GetProperty@CNaturalAnimation@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18020A200 (-GetProperty@CNaturalAnimation@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?SetScalarProperty@CNaturalAnimation@@AEAAJIM@Z @ 0x180217908 (-SetScalarProperty@CNaturalAnimation@@AEAAJIM@Z.c)
 *     ?ProcessSetBounceParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NATURALANIMATION_SETBOUNCEPARAMETERS@@@Z @ 0x1802A0810 (-ProcessSetBounceParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NATURALANI.c)
 *     ?ProcessSetSpringParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NATURALANIMATION_SETSPRINGPARAMETERS@@@Z @ 0x1802A09F0 (-ProcessSetSpringParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NATURALANI.c)
 *     ?SetTimespanProperty@CNaturalAnimation@@AEAAJIAEBUTimeSpan@@@Z @ 0x1802A0D30 (-SetTimespanProperty@CNaturalAnimation@@AEAAJIAEBUTimeSpan@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1801EF690 (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ??$?4VCGravityBounceAccelerator@@@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@QEAAAEAV012@PEAVCGravityBounceAccelerator@@@Z @ 0x18024E73C (--$-4VCGravityBounceAccelerator@@@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@QEAAAEAV012@PEAVCGravi.c)
 *     ??0CGravityBounceAccelerator@@QEAA@MM@Z @ 0x18029FC3C (--0CGravityBounceAccelerator@@QEAA@MM@Z.c)
 *     ??0CSpringAccelerator@@QEAA@MM@Z @ 0x18029FCD8 (--0CSpringAccelerator@@QEAA@MM@Z.c)
 */

void __fastcall CNaturalAnimation::EnsureAccelerator(__int64 a1, int a2)
{
  __int64 v2; // rdi
  CSpringAccelerator *v3; // rbx
  int v5; // edx
  CSpringAccelerator *v6; // rax
  CGravityBounceAccelerator *v7; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a1 + 432;
  v3 = 0LL;
  if ( !*(_QWORD *)(a1 + 432) )
  {
    *(_DWORD *)(a1 + 440) = a2;
    v5 = a2 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
        ModuleFailFastForHRESULT(-2147024809, retaddr);
      v6 = (CSpringAccelerator *)operator new(0x28uLL);
      if ( v6 )
        v3 = CSpringAccelerator::CSpringAccelerator(v6, 20.0, 0.69999999);
      Microsoft::WRL::ComPtr<IAccelerator>::operator=<CGravityBounceAccelerator>(v2, v3);
    }
    else
    {
      v7 = (CGravityBounceAccelerator *)operator new(0x38uLL);
      if ( v7 )
        v3 = CGravityBounceAccelerator::CGravityBounceAccelerator(v7, 10.0, 0.5);
      Microsoft::WRL::ComPtr<IAccelerator>::operator=<CGravityBounceAccelerator>(v2, v3);
      *(_DWORD *)(*(_QWORD *)v2 + 48LL) = CBaseExpression::GetTracingCookie((CBaseExpression *)a1);
    }
  }
}
