/*
 * XREFs of ?GetBackBuffer@CLegacyRemotingSwapChain@@UEBAPEAVIDeviceTarget@@XZ @ 0x1802D52A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct IDeviceTarget *__fastcall CLegacyRemotingSwapChain::GetBackBuffer(CLegacyRemotingSwapChain *this)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 144LL))(*((_QWORD *)this + 8));
  return (struct IDeviceTarget *)((v1 + 16) & -(__int64)(v1 != 0));
}
