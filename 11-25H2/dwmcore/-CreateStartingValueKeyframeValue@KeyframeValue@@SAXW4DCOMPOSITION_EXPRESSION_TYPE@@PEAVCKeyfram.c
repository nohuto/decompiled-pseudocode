/*
 * XREFs of ?CreateStartingValueKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAnimation@@PEAPEAV1@@Z @ 0x1801EF484
 * Callers:
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEBUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x1802A7E14 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEBUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D680 (-InternalRelease@-$ComPtr@VCLinkedShader@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??2KeyframeValue@@SAPEAX_K@Z @ 0x1801EF508 (--2KeyframeValue@@SAPEAX_K@Z.c)
 */

__int64 __fastcall KeyframeValue::CreateStartingValueKeyframeValue(unsigned __int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // ebp
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  volatile signed __int32 *v9; // [rsp+38h] [rbp+10h] BYREF

  v5 = a1;
  v6 = KeyframeValue::operator new(a1);
  v7 = v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 2) = 0;
    *v6 = &KeyframeValue::`vftable';
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v6 + 1));
  }
  else
  {
    v7 = 0LL;
  }
  v9 = 0LL;
  *((_DWORD *)v7 + 5) = 3;
  v7[3] = a2;
  *((_DWORD *)v7 + 4) = v5;
  *a3 = v7;
  return Microsoft::WRL::ComPtr<CLinkedShader>::InternalRelease(&v9);
}
