/*
 * XREFs of _lambda_b8642ff14e560df3dcd31f4e91e1514d_::operator() @ 0x1800E0F64
 * Callers:
 *     ?QuerySizeConstraintsFromApp@CWin32ApplicationView@@UEAAJXZ @ 0x1800DFEC0 (-QuerySizeConstraintsFromApp@CWin32ApplicationView@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_b8642ff14e560df3dcd31f4e91e1514d_::operator()(__int64 **a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 *v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a2 + 48);
  v4 = *(_QWORD *)(v3 + 760);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 8LL))(*(_QWORD *)(v3 + 760));
  v5 = *a1;
  v8 = 0LL;
  v7 = *v5;
  *v5 = v4;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v7);
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v8);
}
