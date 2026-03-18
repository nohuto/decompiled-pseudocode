/*
 * XREFs of ?NotifyInvalid@?$CDeviceResourceT@V?$CMILCOMBaseT@VISwapChain@@VIDeviceResource@@VCMilObjectDeleter@@@@@@QEAAXXZ @ 0x1802D0F20
 * Callers:
 *     ?NotifyInvalidResource@CCompSwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802D0FA0 (-NotifyInvalidResource@CCompSwapChain@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CDDASwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802D18E0 (-NotifyInvalidResource@CDDASwapChain@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDeviceResourceT<CMILCOMBaseT<ISwapChain,IDeviceResource,CMilObjectDeleter>>::NotifyInvalid(
        _QWORD *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  void (__fastcall ***v4)(_QWORD, __int64); // rcx

  v2 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 32LL))(a1);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
  v3 = (__int64)(a1[4] - a1[3]) >> 3;
  while ( (_DWORD)v3 )
  {
    LODWORD(v3) = v3 - 1;
    v4 = *(void (__fastcall ****)(_QWORD, __int64))(a1[3] + 8LL * (unsigned int)v3);
    (**v4)(v4, v2);
  }
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1);
}
