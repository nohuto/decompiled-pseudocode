/*
 * XREFs of ?Initialize@CD2DResource@@MEAAJXZ @ 0x18005B730
 * Callers:
 *     <none>
 * Callees:
 *     ?ManageResource@CD2DResourceManager@@IEAAXPEAVCD2DResource@@@Z @ 0x18005B770 (-ManageResource@CD2DResourceManager@@IEAAXPEAVCD2DResource@@@Z.c)
 */

__int64 __fastcall CD2DResource::Initialize(CD2DResource *this)
{
  CD2DResourceManager *v2; // rcx
  __int64 v3; // r8
  _QWORD *v4; // rax

  v2 = (CD2DResourceManager *)*((_QWORD *)this + 5);
  v3 = *(_QWORD *)v2;
  v4 = (_QWORD *)((char *)this + 56);
  if ( *(CD2DResourceManager **)(*(_QWORD *)v2 + 8LL) != v2 )
    __fastfail(3u);
  *v4 = v3;
  *((_QWORD *)this + 8) = v2;
  *(_QWORD *)(v3 + 8) = v4;
  *(_QWORD *)v2 = v4;
  CD2DResourceManager::ManageResource(v2, this);
  return 0LL;
}
