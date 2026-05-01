/*
 * XREFs of CempLockInitialize @ 0x180004440
 * Callers:
 *     HamConnectForStateChangeNotifications @ 0x180002E60 (HamConnectForStateChangeNotifications.c)
 *     ??0ModernResourceManagerProxy@@QEAA@XZ @ 0x1800041DC (--0ModernResourceManagerProxy@@QEAA@XZ.c)
 *     HamConnectForServicing @ 0x180004240 (HamConnectForServicing.c)
 *     HamConnectForExtendedExecution @ 0x180004330 (HamConnectForExtendedExecution.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CempLockInitialize(__int64 a1)
{
  __int64 result; // rax

  *(_OWORD *)a1 = 0LL;
  result = RtlInitializeSRWLock();
  *(_DWORD *)(a1 + 8) = 0;
  return result;
}
