/*
 * XREFs of ?Invoke@CPinnedList@@UEAAJPEAUIShellItemArray@@PEAUIBindCtx@@@Z @ 0x180692240
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?_TogglePinned@CPinnedList@@IEAAJW4PINNEDLISTMODIFYCALLER@@@Z @ 0x180698788 (-_TogglePinned@CPinnedList@@IEAAJW4PINNEDLISTMODIFYCALLER@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPinnedList::Invoke(CPinnedList *this, struct IShellItemArray *a2, struct IBindCtx *a3)
{
  char *v3; // rdi
  int v6; // ebx
  __int64 v7; // rax
  int v9; // [rsp+30h] [rbp-28h] BYREF

  v3 = (char *)this - 40;
  v6 = 0;
  if ( (*(unsigned int (__fastcall **)(char *, _QWORD, struct IBindCtx *))(*((_QWORD *)this - 5) + 200LL))(
         (char *)this - 40,
         0LL,
         a3) )
  {
    v7 = *(_QWORD *)this;
    v9 = 0;
    v6 = (*(__int64 (__fastcall **)(CPinnedList *, struct IShellItemArray *, __int64, int *))(v7 + 56))(
           this,
           a2,
           1LL,
           &v9);
    if ( v6 >= 0 )
      return (unsigned int)CPinnedList::_TogglePinned(v3, 10LL);
  }
  return (unsigned int)v6;
}
