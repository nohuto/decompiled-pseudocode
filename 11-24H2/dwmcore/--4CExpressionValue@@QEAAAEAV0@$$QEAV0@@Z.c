/*
 * XREFs of ??4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z @ 0x180298BB4
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18000F9B0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800129B0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?Multiply@CExpressionValueStack@@QEAAJXZ @ 0x1800EB510 (-Multiply@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Scale@CExpressionValueStack@@QEAAJXZ @ 0x1800EBD58 (-Scale@CExpressionValueStack@@QEAAJXZ.c)
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1801534F0 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSI.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18015B3A0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ?Matrix3x2FromTranslation@CExpressionValueStack@@QEAAJI@Z @ 0x1801CDF60 (-Matrix3x2FromTranslation@CExpressionValueStack@@QEAAJI@Z.c)
 *     ?Divide@CExpressionValueStack@@QEAAJXZ @ 0x1801CE150 (-Divide@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Subtract@CExpressionValueStack@@QEAAJXZ @ 0x1801D2190 (-Subtract@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Negate@CExpressionValueStack@@QEAAJXZ @ 0x1801D581C (-Negate@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Add@CExpressionValueStack@@QEAAJXZ @ 0x1801D5B80 (-Add@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Matrix4x4@CExpressionValueStack@@QEAAJXZ @ 0x1801D6A5C (-Matrix4x4@CExpressionValueStack@@QEAAJXZ.c)
 *     ?LessThan@CExpressionValueStack@@QEAAJXZ @ 0x1801DB580 (-LessThan@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Matrix4x4FromTranslation@CExpressionValueStack@@QEAAJI@Z @ 0x1801DFD78 (-Matrix4x4FromTranslation@CExpressionValueStack@@QEAAJI@Z.c)
 *     ?GreaterThan@CExpressionValueStack@@QEAAJXZ @ 0x1801E02E4 (-GreaterThan@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Vector3@CExpressionValueStack@@QEAAJXZ @ 0x1801E2BB8 (-Vector3@CExpressionValueStack@@QEAAJXZ.c)
 *     ?ColorRgb@CExpressionValueStack@@QEAAJXZ @ 0x1801E9E40 (-ColorRgb@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Round@CExpressionValueStack@@QEAAJXZ @ 0x1801EB0E8 (-Round@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Transform@CExpressionValueStack@@QEAAJXZ @ 0x1801ED3A8 (-Transform@CExpressionValueStack@@QEAAJXZ.c)
 *     ?And@CExpressionValueStack@@QEAAJXZ @ 0x1801F0180 (-And@CExpressionValueStack@@QEAAJXZ.c)
 *     ?GreaterThanEquals@CExpressionValueStack@@QEAAJXZ @ 0x1801F0458 (-GreaterThanEquals@CExpressionValueStack@@QEAAJXZ.c)
 *     ?LessThanEquals@CExpressionValueStack@@QEAAJXZ @ 0x1801F0990 (-LessThanEquals@CExpressionValueStack@@QEAAJXZ.c)
 *     ?ExpressionValueFromInternalValue@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValue@@@Z @ 0x18020A290 (-ExpressionValueFromInternalValue@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValue@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18017ECE0 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CExpressionValue::operator=(__int64 a1, __int64 a2)
{
  __int128 v4; // xmm1
  CPathData **v5; // rdx
  CPathData *v6; // rcx
  CPathData *v7; // rax
  CPathData *v8; // rax
  CPathData *v10[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  v4 = *(_OWORD *)(a2 + 48);
  v5 = (CPathData **)(a2 + 64);
  *(_OWORD *)(a1 + 48) = v4;
  v6 = 0LL;
  if ( v10 != v5 )
  {
    v7 = *v5;
    *v5 = 0LL;
    v6 = v7;
  }
  v8 = *(CPathData **)(a1 + 64);
  *(_QWORD *)(a1 + 64) = v6;
  v10[0] = v8;
  Microsoft::WRL::ComPtr<CPathData>::InternalRelease(v10);
  *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 72);
  return a1;
}
