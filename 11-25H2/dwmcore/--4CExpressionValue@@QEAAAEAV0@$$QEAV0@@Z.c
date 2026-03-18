/*
 * XREFs of ??4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z @ 0x1802A2C34
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180035880 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800387D0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x18003CBE0 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSI.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18015F7F0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ?Multiply@CExpressionValueStack@@QEAAJXZ @ 0x1801BAF70 (-Multiply@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Scale@CExpressionValueStack@@QEAAJXZ @ 0x1801BB7B8 (-Scale@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Matrix3x2FromTranslation@CExpressionValueStack@@QEAAJI@Z @ 0x1801DC3D0 (-Matrix3x2FromTranslation@CExpressionValueStack@@QEAAJI@Z.c)
 *     ?Divide@CExpressionValueStack@@QEAAJXZ @ 0x1801DC5C0 (-Divide@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Subtract@CExpressionValueStack@@QEAAJXZ @ 0x1801E0070 (-Subtract@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Negate@CExpressionValueStack@@QEAAJXZ @ 0x1801E1A1C (-Negate@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Add@CExpressionValueStack@@QEAAJXZ @ 0x1801E1D80 (-Add@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Matrix4x4@CExpressionValueStack@@QEAAJXZ @ 0x1801E270C (-Matrix4x4@CExpressionValueStack@@QEAAJXZ.c)
 *     ?LessThan@CExpressionValueStack@@QEAAJXZ @ 0x1801E6838 (-LessThan@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Matrix4x4FromTranslation@CExpressionValueStack@@QEAAJI@Z @ 0x1801EA6C4 (-Matrix4x4FromTranslation@CExpressionValueStack@@QEAAJI@Z.c)
 *     ?GreaterThan@CExpressionValueStack@@QEAAJXZ @ 0x1801EB228 (-GreaterThan@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Vector3@CExpressionValueStack@@QEAAJXZ @ 0x1801EC7B0 (-Vector3@CExpressionValueStack@@QEAAJXZ.c)
 *     ?ColorRgb@CExpressionValueStack@@QEAAJXZ @ 0x1801F7120 (-ColorRgb@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Round@CExpressionValueStack@@QEAAJXZ @ 0x1801F86D8 (-Round@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Transform@CExpressionValueStack@@QEAAJXZ @ 0x1801F9E48 (-Transform@CExpressionValueStack@@QEAAJXZ.c)
 *     ?And@CExpressionValueStack@@QEAAJXZ @ 0x1801FCC94 (-And@CExpressionValueStack@@QEAAJXZ.c)
 *     ?GreaterThanEquals@CExpressionValueStack@@QEAAJXZ @ 0x1801FCF68 (-GreaterThanEquals@CExpressionValueStack@@QEAAJXZ.c)
 *     ?LessThanEquals@CExpressionValueStack@@QEAAJXZ @ 0x1801FD620 (-LessThanEquals@CExpressionValueStack@@QEAAJXZ.c)
 *     ?ExpressionValueFromInternalValue@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValue@@@Z @ 0x180216360 (-ExpressionValueFromInternalValue@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValue@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D310 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
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
