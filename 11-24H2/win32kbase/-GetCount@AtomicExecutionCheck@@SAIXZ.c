/*
 * XREFs of ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x140092CF0
 * Callers:
 *     ?OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ @ 0x1400642B0 (-OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x140092B70 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x1400F50DC (-NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 *     LeaveCrit @ 0x140162A80 (LeaveCrit.c)
 *     ?HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z @ 0x14016A8FC (-HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     ??0CWinEventNoopDeferral@@QEAA@XZ @ 0x1401A2A8C (--0CWinEventNoopDeferral@@QEAA@XZ.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x1401A2438 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall AtomicExecutionCheck::GetCount(__int64 a1)
{
  __int64 result; // rax

  result = W32GetCurrentThreadNonPaged(a1);
  if ( result )
    return *(unsigned int *)(result + 28);
  return result;
}
