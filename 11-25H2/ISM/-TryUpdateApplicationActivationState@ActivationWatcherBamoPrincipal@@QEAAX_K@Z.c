/*
 * XREFs of ?TryUpdateApplicationActivationState@ActivationWatcherBamoPrincipal@@QEAAX_K@Z @ 0x180022C8C
 * Callers:
 *     ?RegisterActivationController@ForegroundManager@@QEAAXPEAVActivationControllerBamoProxy@@@Z @ 0x18006D780 (-RegisterActivationController@ForegroundManager@@QEAAXPEAVActivationControllerBamoProxy@@@Z.c)
 * Callees:
 *     ?find_and_return_if@ActivationWatcherBamoPrincipal@@AEAA?AV?$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$function@$$A6A_NPEAVActivatableEntityBamoPrincipal@@@Z@std@@@Z @ 0x180022D5C (-find_and_return_if@ActivationWatcherBamoPrincipal@@AEAA-AV-$com_ptr_t@VActivatableEntityBamoPri.c)
 *     ?TryUpdateActivationControllerProxy@ActivationWatcherBamoPrincipal@@AEAAX_K_N@Z @ 0x18002369C (-TryUpdateActivationControllerProxy@ActivationWatcherBamoPrincipal@@AEAAX_K_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall ActivationWatcherBamoPrincipal::TryUpdateApplicationActivationState(
        ActivationWatcherBamoPrincipal *this,
        unsigned __int64 a2)
{
  __int64 v3; // rcx
  void (__fastcall ***v4)(_QWORD); // rax
  ActivationWatcherBamoPrincipal *v5; // rcx
  _QWORD *v6; // rbx
  __int64 v7; // rax
  _QWORD v8[8]; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v9; // [rsp+78h] [rbp+18h] BYREF
  __int64 v10; // [rsp+80h] [rbp+20h] BYREF
  void (__fastcall ***v11)(_QWORD); // [rsp+88h] [rbp+28h]

  v9 = a2;
  v8[0] = off_1801D4D18;
  v8[1] = &v9;
  v8[7] = v8;
  ActivationWatcherBamoPrincipal::find_and_return_if(this, &v10, v8);
  v3 = v10;
  if ( v10 )
  {
    v4 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 48LL))((char *)this + 8);
    v6 = v4;
    v11 = v4;
    if ( v4 )
      (**v4)(v4);
    if ( v6 )
      v7 = v6[11];
    else
      v7 = 0LL;
    ActivationWatcherBamoPrincipal::TryUpdateActivationControllerProxy(v5, v9, v7 == v9);
    if ( v6 )
      (*(void (__fastcall **)(_QWORD *))(*v6 + 8LL))(v6);
    v3 = v10;
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
}
