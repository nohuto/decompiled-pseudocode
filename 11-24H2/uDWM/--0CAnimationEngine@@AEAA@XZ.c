/*
 * XREFs of ??0CAnimationEngine@@AEAA@XZ @ 0x1800841B0
 * Callers:
 *     ?CreateInstance@CAnimationEngine@@SAJPEAPEAV1@@Z @ 0x180084144 (-CreateInstance@CAnimationEngine@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180026FB0 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 */

CAnimationEngine *__fastcall CAnimationEngine::CAnimationEngine(CAnimationEngine *this)
{
  __int64 v1; // r9
  __int64 v2; // rdx
  int v3; // r8d
  __int64 v4; // r9
  CAnimationEngine *result; // rax
  __int64 v6; // r10

  *(_QWORD *)this = &CAnimationEngine::`vftable';
  *((_DWORD *)this + 8) = 0;
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)this + 40, 0LL, 0);
  DynArrayImpl<0>::DynArrayImpl<0>(v1 + 72, v2, v3);
  result = (CAnimationEngine *)v4;
  *(_QWORD *)(v4 + 104) = v6;
  *(_DWORD *)(v4 + 116) = 1;
  *(_BYTE *)(v4 + 120) = v6;
  return result;
}
