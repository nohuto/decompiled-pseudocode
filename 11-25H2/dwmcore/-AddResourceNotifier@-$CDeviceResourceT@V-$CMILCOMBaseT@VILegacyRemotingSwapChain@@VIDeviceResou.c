/*
 * XREFs of ?AddResourceNotifier@?$CDeviceResourceT@V?$CMILCOMBaseT@VILegacyRemotingSwapChain@@VIDeviceResource@@VCMilObjectDeleter@@@@@@UEAAXPEAVIDeviceResourceNotify@@@Z @ 0x18021C0F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_one_at_back@AEBQEAVIDeviceResourceNotify@@@?$vector@PEAVIDeviceResourceNotify@@V?$allocator@PEAVIDeviceResourceNotify@@@std@@@std@@AEAAAEAPEAVIDeviceResourceNotify@@AEBQEAV2@@Z @ 0x18006D62C (--$_Emplace_one_at_back@AEBQEAVIDeviceResourceNotify@@@-$vector@PEAVIDeviceResourceNotify@@V-$al.c)
 */

char *__fastcall CDeviceResourceT<CMILCOMBaseT<ILegacyRemotingSwapChain,IDeviceResource,CMilObjectDeleter>>::AddResourceNotifier(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  return std::vector<IDeviceResourceNotify *>::_Emplace_one_at_back<IDeviceResourceNotify * const &>(
           (char **)(a1 + 24),
           &v3);
}
