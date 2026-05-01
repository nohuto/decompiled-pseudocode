/*
 * XREFs of _lambda_32debc2fc80ca1e0059f85a00ba9919c_::__lambda_32debc2fc80ca1e0059f85a00ba9919c_ @ 0x1802F12E8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_32debc2fc80ca1e0059f85a00ba9919c___::_CTaskWrapper__lambda_32debc2fc80ca1e0059f85a00ba9919c___ @ 0x1802F1320 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_32debc2fc80ca1e0059f85a00ba9919c___--_CTask.c)
 *     ?_ScheduleDesktopVisibilityNotification@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N@Z @ 0x1802F1B60 (-_ScheduleDesktopVisibilityNotification@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_32debc2fc80ca1e0059f85a00ba9919c_::__lambda_32debc2fc80ca1e0059f85a00ba9919c_(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = a1[3];
  if ( v2 )
  {
    a1[3] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
}
