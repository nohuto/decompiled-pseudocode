/*
 * XREFs of ?Update@CTransformGroupProxy@@QEAAJPEAPEAVCBaseTransformProxy@@I@Z @ 0x180099440
 * Callers:
 *     ?EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ @ 0x1800484B0 (-EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTransformGroupProxy::Update(
        CTransformGroupProxy *this,
        struct CBaseTransformProxy **a2,
        unsigned int a3)
{
  __int64 *v5; // rdx
  __int64 v6; // r10
  __int64 v7; // rax
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  int v9; // [rsp+38h] [rbp-20h]

  v8 = 0LL;
  v9 = 0;
  if ( a3 > 3 )
    return 2147942487LL;
  if ( a3 )
  {
    v5 = &v8;
    v6 = a3;
    do
    {
      v7 = (__int64)*a2++;
      *(_DWORD *)v5 = *(_DWORD *)(*(_QWORD *)(v7 + 16) + 24LL);
      v5 = (__int64 *)((char *)v5 + 4);
      --v6;
    }
    while ( v6 );
  }
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL)
                                                                      + 592LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           &v8,
           a3);
}
