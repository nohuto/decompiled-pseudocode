/*
 * XREFs of ?RemoveResourceNotifier@?$CDeviceResourceT@V?$CMILCOMBaseT@VISwapChain@@VIDeviceResource@@VCMilObjectDeleter@@@@@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x180217020
 * Callers:
 *     ?ReleaseSwapChain@CRemoteAppRenderTarget@@IEAAXXZ @ 0x18028C21C (-ReleaseSwapChain@CRemoteAppRenderTarget@@IEAAXXZ.c)
 * Callees:
 *     __std_find_trivial_8 @ 0x18025BDA0 (__std_find_trivial_8.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

char *__fastcall CDeviceResourceT<CMILCOMBaseT<ISwapChain,IDeviceResource,CMilObjectDeleter>>::RemoveResourceNotifier(
        __int64 a1,
        __int64 a2)
{
  char *result; // rax
  char *v4; // r8

  result = (char *)_std_find_trivial_8(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32), a2);
  v4 = *(char **)(a1 + 32);
  if ( result != v4 )
  {
    result = (char *)memmove_0(result, result + 8, v4 - (result + 8));
    *(_QWORD *)(a1 + 32) -= 8LL;
  }
  return result;
}
