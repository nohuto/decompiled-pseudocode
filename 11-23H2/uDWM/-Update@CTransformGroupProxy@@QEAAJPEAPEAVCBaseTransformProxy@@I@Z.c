/*
 * XREFs of ?Update@CTransformGroupProxy@@QEAAJPEAPEAVCBaseTransformProxy@@I@Z @ 0x1800E9958
 * Callers:
 *     ?EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ @ 0x1800A65E0 (-EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
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
                                                                      + 880LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           &v8,
           a3);
}
