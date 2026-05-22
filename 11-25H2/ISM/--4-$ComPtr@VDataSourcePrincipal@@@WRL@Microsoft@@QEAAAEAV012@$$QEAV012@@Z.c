/*
 * XREFs of ??4?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180144440
 * Callers:
 *     ?StartAnimation@GestureHandler@@QEAAXAEAV?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@_N@Z @ 0x180144BD8 (-StartAnimation@GestureHandler@@QEAAXAEAV-$unordered_set@IU-$hash@I@std@@U-$equal_to@I@2@V-$allo.c)
 *     ?StartAnimation@GestureHandler@@QEAAXI_N@Z @ 0x180144D54 (-StartAnimation@GestureHandler@@QEAAXI_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180058DC8 (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<DataSourcePrincipal>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0LL;
  if ( v7 != a2 )
  {
    v4 = *a2;
    *a2 = 0LL;
    v3 = v4;
  }
  v5 = *a1;
  *a1 = v3;
  v7[0] = v5;
  Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease(v7);
  return a1;
}
