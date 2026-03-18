/*
 * XREFs of DirectComposition::Memory::AllocateAndClear_1 @ 0x1400CF0C8
 * Callers:
 *     ?GetSyncData@CSynchronizationManager@DirectComposition@@IEAAPEAVCSyncData@2@_KPEAVCBatch@2@@Z @ 0x140073C28 (-GetSyncData@CSynchronizationManager@DirectComposition@@IEAAPEAVCSyncData@2@_KPEAVCBatch@2@@Z.c)
 *     ?Initialize@CSynchronizationManager@DirectComposition@@IEAAJXZ @ 0x1400CEF88 (-Initialize@CSynchronizationManager@DirectComposition@@IEAAJXZ.c)
 *     ?OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ @ 0x1400CF04C (-OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 */

__int64 __fastcall DirectComposition::Memory::AllocateAndClear_1(unsigned __int64 a1)
{
  return Win32AllocPoolZInitImpl(256LL, a1, 0x65734344u);
}
