/*
 * XREFs of ?DismissSynchronouslyWithoutTransition@XamlLauncher@@UEAAJXZ @ 0x18045DCC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall XamlLauncher::DismissSynchronouslyWithoutTransition(XamlLauncher *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 44);
  if ( !v2 )
    return 2147943568LL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 104LL))(v2) )
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 44) + 72LL))(*((_QWORD *)this + 44), 7LL);
  return 0LL;
}
