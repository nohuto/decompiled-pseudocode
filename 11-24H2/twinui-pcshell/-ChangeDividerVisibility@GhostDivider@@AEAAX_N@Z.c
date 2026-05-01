/*
 * XREFs of ?ChangeDividerVisibility@GhostDivider@@AEAAX_N@Z @ 0x1801EAB38
 * Callers:
 *     ?Solidify@GhostDivider@@UEAAXXZ @ 0x1801EAB10 (-Solidify@GhostDivider@@UEAAXXZ.c)
 *     ?Destroy@GhostDivider@@UEAAXXZ @ 0x18053D490 (-Destroy@GhostDivider@@UEAAXXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18004D04C (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GhostDivider::ChangeDividerVisibility(GhostDivider *this, unsigned __int8 a2)
{
  int v4; // edi
  __int64 v5; // rsi
  int v6; // esi
  int pvAttribute; // [rsp+48h] [rbp+10h] BYREF

  v4 = a2 ^ 1;
  if ( !a2 )
  {
    v5 = *((_QWORD *)this + 8);
    *((_QWORD *)this + 8) = this;
    if ( this )
      (*(void (__fastcall **)(GhostDivider *))(*(_QWORD *)this + 8LL))(this);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = DwmpBeginTransitionRequest((unsigned int)(v4 + 4));
  if ( v6 >= 0 )
    v6 = DwmpTransitionWindow(*((_QWORD *)this + 3), (v4 + 25) | 0x440000u);
  pvAttribute = v4;
  DwmSetWindowAttribute(*((HWND *)this + 3), 0xDu, &pvAttribute, 4u);
  if ( v6 < 0 )
  {
    if ( !a2 )
    {
      DestroyWindow(*((HWND *)this + 3));
      if ( *((_QWORD *)this + 8) )
        wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 8);
    }
  }
  else
  {
    DwmpEndTransitionRequest((unsigned int)(v4 + 4));
  }
}
