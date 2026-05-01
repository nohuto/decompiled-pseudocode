/*
 * XREFs of ?HandleCrashRecovery@CImmersiveApp@@UEAAXXZ @ 0x1803032B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CImmersiveApp::HandleCrashRecovery(CImmersiveApp *this, __int64 a2)
{
  unsigned __int64 i; // rdi
  __int64 v4; // rcx

  for ( i = 0LL; i < *((_QWORD *)this + 43); ++i )
  {
    LOBYTE(a2) = i == 0;
    v4 = *(_QWORD *)(*((_QWORD *)this + 42) + 8 * i);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 176LL))(v4, a2);
  }
  CImmersiveApp::CloakType::RecoverFromPresentationLayer(
    (CImmersiveApp *)((char *)this + 504),
    *((struct IApplicationPresentationLayer **)this + 40));
}
