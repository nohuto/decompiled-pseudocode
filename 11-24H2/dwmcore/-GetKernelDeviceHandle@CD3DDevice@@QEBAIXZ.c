/*
 * XREFs of ?GetKernelDeviceHandle@CD3DDevice@@QEBAIXZ @ 0x1802C6B4C
 * Callers:
 *     ?CheckPresentCompleted@CPresentStats@CDummyRemotingSwapChain@@QEAA_NPEAVCD3DDevice@@I@Z @ 0x1802C6850 (-CheckPresentCompleted@CPresentStats@CDummyRemotingSwapChain@@QEAA_NPEAVCD3DDevice@@I@Z.c)
 *     ?GetPresentStatisticsDWM@CDummyRemotingSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x1802C6C90 (-GetPresentStatisticsDWM@CDummyRemotingSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::GetKernelDeviceHandle(CD3DDevice *this)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx
  unsigned int v4; // [rsp+40h] [rbp+8h] BYREF
  int v5; // [rsp+48h] [rbp+10h] BYREF

  v1 = *((_QWORD *)this + 67);
  v5 = 4;
  v2 = 0;
  v4 = 0;
  if ( (*(int (__fastcall **)(__int64, GUID *, int *, unsigned int *))(*(_QWORD *)v1 + 40LL))(
         v1,
         &`CD3DDevice::GetKernelDeviceHandle'::`2'::GUID_KMT_HANDLE,
         &v5,
         &v4) >= 0 )
    return v4;
  return v2;
}
