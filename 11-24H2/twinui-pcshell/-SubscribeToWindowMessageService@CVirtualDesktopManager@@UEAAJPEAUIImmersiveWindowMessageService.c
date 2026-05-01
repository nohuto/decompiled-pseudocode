/*
 * XREFs of ?SubscribeToWindowMessageService@CVirtualDesktopManager@@UEAAJPEAUIImmersiveWindowMessageService@@@Z @ 0x180556EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVirtualDesktopManager::SubscribeToWindowMessageService(
        CVirtualDesktopManager *this,
        struct IImmersiveWindowMessageService *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(struct IImmersiveWindowMessageService *, __int64, unsigned __int64, char *))(*(_QWORD *)a2 + 24LL))(
         a2,
         26LL,
         ((unsigned __int64)this + 40) & -(__int64)(this != (CVirtualDesktopManager *)8),
         (char *)this + 192);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3D2,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
