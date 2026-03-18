/*
 * XREFs of CiSchedulerPoke @ 0x140003F10
 * Callers:
 *     CiSchedulerTerminate @ 0x14000DE54 (CiSchedulerTerminate.c)
 *     CiThreadCreate @ 0x14000ECB0 (CiThreadCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CiSchedulerPoke(unsigned int a1)
{
  __int64 result; // rax

  if ( !a1 )
    return KeAlertThread(CiSchedulerThread, 0LL);
  _m_prefetchw(&CiSchedulerWakeupReason);
  result = (unsigned int)_InterlockedOr(&CiSchedulerWakeupReason, a1);
  if ( (result & 0x8000) != 0 )
    return KeAlertThread(CiSchedulerThread, 0LL);
  return result;
}
