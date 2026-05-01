/*
 * XREFs of _lambda_b77313e954014d84b78f3886c1783ac6_::__lambda_b77313e954014d84b78f3886c1783ac6_ @ 0x1802859F8
 * Callers:
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x18010D260 (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6___::_CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6___ @ 0x180285A34 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6___--_CTask.c)
 * Callees:
 *     ??1Launch@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x18010D49C (--1Launch@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_b77313e954014d84b78f3886c1783ac6_::__lambda_b77313e954014d84b78f3886c1783ac6_(__int64 a1)
{
  SingleViewExperienceTelemetry::Launch::~Launch((SingleViewExperienceTelemetry::Launch *)(a1 + 32));
  WindowsDeleteString(*(HSTRING *)(a1 + 16));
  *(_QWORD *)(a1 + 16) = 0LL;
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)a1);
}
