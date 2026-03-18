/*
 * XREFs of ?Initialize@CD2DEffect@@IEAAJPEAUID2D1Effect@@@Z @ 0x1801EE114
 * Callers:
 *     ?Create@CD2DEffect@@SAJPEAVCD2DResourceManager@@PEAUID2D1Effect@@PEAPEAV1@@Z @ 0x1801EE044 (-Create@CD2DEffect@@SAJPEAVCD2DResourceManager@@PEAUID2D1Effect@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?ManageResource@CD2DResourceManager@@IEAAXPEAVCD2DResource@@@Z @ 0x18005B770 (-ManageResource@CD2DResourceManager@@IEAAXPEAVCD2DResource@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DEffect::Initialize(CD2DEffect *this, struct ID2D1Effect *a2)
{
  CD2DResourceManager *v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rdx

  *((_QWORD *)this + 9) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct ID2D1Effect *))(*(_QWORD *)a2 + 8LL))(a2);
  v3 = (CD2DResourceManager *)*((_QWORD *)this + 5);
  v4 = (_QWORD *)((char *)this + 56);
  v5 = *(_QWORD *)v3;
  if ( *(CD2DResourceManager **)(*(_QWORD *)v3 + 8LL) != v3 )
    __fastfail(3u);
  *v4 = v5;
  *((_QWORD *)this + 8) = v3;
  *(_QWORD *)(v5 + 8) = v4;
  *(_QWORD *)v3 = v4;
  CD2DResourceManager::ManageResource(v3, this);
  return 0LL;
}
