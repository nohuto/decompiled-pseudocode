/*
 * XREFs of _anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration::Unregister @ 0x180568320
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration::Unregister(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  *(_QWORD *)(a1 + 16) = 0LL;
  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 64LL))(v2, *(unsigned int *)(a1 + 24));
    result = Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(a1 + 32));
    *(_DWORD *)(a1 + 24) = 0;
  }
  return result;
}
