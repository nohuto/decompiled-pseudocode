/*
 * XREFs of CiSchedulerPoke @ 0x1C0003F10
 * Callers:
 *     CiSchedulerTerminate @ 0x1C000C8C8 (CiSchedulerTerminate.c)
 *     CiThreadCreate @ 0x1C000D720 (CiThreadCreate.c)
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
