/*
 * XREFs of ?CreateExpressionKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAnimation@@IPEAPEAV1@@Z @ 0x18018056C
 * Callers:
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEBUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x18029E040 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEBUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@IEAAKXZ @ 0x18017F020 (-InternalRelease@-$ComPtr@VCLinkedShader@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2KeyframeValue@@SAPEAX_K@Z @ 0x18017FBF8 (--2KeyframeValue@@SAPEAX_K@Z.c)
 */

__int64 __fastcall KeyframeValue::CreateExpressionKeyframeValue(int a1, __int64 a2, int a3, _QWORD *a4)
{
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  volatile signed __int32 *v11; // [rsp+48h] [rbp+10h] BYREF

  v8 = KeyframeValue::operator new();
  v9 = v8;
  if ( v8 )
  {
    *((_DWORD *)v8 + 2) = 0;
    *v8 = &KeyframeValue::`vftable';
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v8 + 1));
  }
  else
  {
    v9 = 0LL;
  }
  v11 = 0LL;
  *((_DWORD *)v9 + 5) = 2;
  v9[3] = a2;
  *((_DWORD *)v9 + 8) = a3;
  *((_DWORD *)v9 + 4) = a1;
  *a4 = v9;
  return Microsoft::WRL::ComPtr<CLinkedShader>::InternalRelease(&v11);
}
