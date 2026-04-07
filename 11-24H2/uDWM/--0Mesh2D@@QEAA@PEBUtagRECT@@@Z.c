/*
 * XREFs of ??0Mesh2D@@QEAA@PEBUtagRECT@@@Z @ 0x18001174C
 * Callers:
 *     ?UpdateInstructions@CTetherVisual@@IEAAJXZ @ 0x1800D9C18 (-UpdateInstructions@CTetherVisual@@IEAAJXZ.c)
 * Callees:
 *     ?Reset@Mesh2D@@QEAAXXZ @ 0x180011798 (-Reset@Mesh2D@@QEAAXXZ.c)
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180026FB0 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 */

// Hidden C++ exception states: #wind=3
Mesh2D *__fastcall Mesh2D::Mesh2D(Mesh2D *this, const struct tagRECT *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx

  DynArrayImpl<0>::DynArrayImpl<0>(this, 0LL, 0LL);
  DynArrayImpl<0>::DynArrayImpl<0>(v3 + 32, v4, v5);
  DynArrayImpl<0>::DynArrayImpl<0>((char *)this + 64, v6, v7);
  *((_QWORD *)this + 13) &= v8;
  Mesh2D::Reset(this);
  return this;
}
