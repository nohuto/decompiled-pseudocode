/*
 * XREFs of ?InternalRelease@?$ComPtr@UISessionBrokerInstance@DispBrokerDesktop@@@WRL@Microsoft@@IEAAKXZ @ 0x18006FAA4
 * Callers:
 *     ?Initialize@CDisplayBroker@@QEAAJPEAUIDisplayManager@Core@Display@Devices@Windows@@@Z @ 0x18006F900 (-Initialize@CDisplayBroker@@QEAAJPEAUIDisplayManager@Core@Display@Devices@Windows@@@Z.c)
 *     ??1CDisplayBroker@@QEAA@XZ @ 0x18009B3B0 (--1CDisplayBroker@@QEAA@XZ.c)
 *     ?Shutdown@CDisplayBroker@@QEAAXXZ @ 0x1800BDCAC (-Shutdown@CDisplayBroker@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<DispBrokerDesktop::ISessionBrokerInstance>::InternalRelease(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
