/*
 * XREFs of ?CreateConstantKeyframeValue@KeyframeValue@@SAXPEBVCExpressionValue@@PEAPEAV1@@Z @ 0x18005D4EC
 * Callers:
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEBUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x1802A7E14 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEBUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 * Callees:
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x180035860 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D680 (-InternalRelease@-$ComPtr@VCLinkedShader@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

void __fastcall KeyframeValue::CreateConstantKeyframeValue(
        const struct CExpressionValue *a1,
        struct KeyframeValue **a2)
{
  HANDLE ProcessHeap; // rax
  LPVOID v5; // rax
  _DWORD *v6; // rbx
  int v7; // eax
  int v8; // [rsp+20h] [rbp-8h]
  void *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 8u, 0x68uLL);
  v6 = v5;
  if ( !v5 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  *((_DWORD *)v5 + 2) = 0;
  *(_QWORD *)v5 = &KeyframeValue::`vftable';
  if ( _InterlockedAdd((volatile signed __int32 *)v5 + 2, 1u) <= 0 )
    wil::details::in1diag3::Log_Hr(
      (wil::details::in1diag3 *)retaddr,
      (void *)0x18,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v8);
  v6[5] = 1;
  CExpressionValue::CopyFrom((CExpressionValue *)(v6 + 6), a1);
  v7 = v6[24];
  v10 = 0LL;
  v6[4] = v7;
  *a2 = (struct KeyframeValue *)v6;
  Microsoft::WRL::ComPtr<CLinkedShader>::InternalRelease(&v10);
}
