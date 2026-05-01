/*
 * XREFs of ?AnimateAddedElement@VirtualDesktopAddAnimationCoordinator@@MEAAXAEBUComponentInfo@ItemAnimationCoordinatorBase@@@Z @ 0x1804E2AB0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall VirtualDesktopAddAnimationCoordinator::AnimateAddedElement(
        VirtualDesktopAddAnimationCoordinator *this,
        const struct ItemAnimationCoordinatorBase::ComponentInfo *a2)
{
  int v2; // r8d
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r8
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF

  v2 = *((_DWORD *)this + 62);
  v5 = *((_QWORD *)a2 + 1);
  v6 = HIDWORD(*((_QWORD *)a2 + 3));
  v8 = *((_OWORD *)a2 + 1);
  HIDWORD(v8) = v2 + v6;
  DWORD1(v8) += v2;
  (*(void (__fastcall **)(__int64, __int128 *, _QWORD, _QWORD))(*(_QWORD *)v5 + 512LL))(v5, &v8, 0LL, 0LL);
  v7 = 24LL;
  if ( !*((_QWORD *)this + 12) )
    v7 = 26LL;
  (*(void (__fastcall **)(_QWORD, char *, __int64, _QWORD))(**((_QWORD **)a2 + 1) + 512LL))(
    *((_QWORD *)a2 + 1),
    (char *)a2 + 16,
    v7,
    0LL);
}
