/*
 * XREFs of ?TryUpdateActivationControllerProxy@ActivationWatcherBamoPrincipal@@AEAAX_K_N@Z @ 0x180023C6C
 * Callers:
 *     ?TryUpdateApplicationActivationState@ActivationWatcherBamoPrincipal@@QEAAX_K@Z @ 0x18002325C (-TryUpdateApplicationActivationState@ActivationWatcherBamoPrincipal@@QEAAX_K@Z.c)
 *     ?HandleActivationChange@ActivationWatcherBamoPrincipal@@QEAAJAEBU_LUID@@0@Z @ 0x1800AF4C8 (-HandleActivationChange@ActivationWatcherBamoPrincipal@@QEAAJAEBU_LUID@@0@Z.c)
 * Callees:
 *     ?FromCookie@ActivationControllerBamoProxy@@SA?AV?$com_ptr_t@VBamoActivationControllerProxy@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x180023CE0 (-FromCookie@ActivationControllerBamoProxy@@SA-AV-$com_ptr_t@VBamoActivationControllerProxy@@Uerr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall ActivationWatcherBamoPrincipal::TryUpdateActivationControllerProxy(
        ActivationWatcherBamoPrincipal *this,
        __int64 a2,
        char a3)
{
  ActivationWatcherBamoPrincipal *v4; // rcx
  char v5; // al
  __int64 v6; // rdx
  ActivationWatcherBamoPrincipal *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = this;
  ActivationControllerBamoProxy::FromCookie(&v7);
  v4 = v7;
  if ( v7 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v7 + 1) + 24LL))((__int64)v7 + 8);
    v4 = v7;
    if ( v5 != a3 )
    {
      LOBYTE(v6) = a3;
      (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v7 + 1) + 32LL))((__int64)v7 + 8, v6);
      v4 = v7;
    }
  }
  if ( v4 )
    (*(void (__fastcall **)(ActivationWatcherBamoPrincipal *))(*(_QWORD *)v4 + 8LL))(v4);
}
