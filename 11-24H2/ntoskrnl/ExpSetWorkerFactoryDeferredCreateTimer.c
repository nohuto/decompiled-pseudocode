/*
 * XREFs of ExpSetWorkerFactoryDeferredCreateTimer @ 0x140A4B26C
 * Callers:
 *     ExpWorkerFactoryCheckCreate @ 0x1403AD7A0 (ExpWorkerFactoryCheckCreate.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x1402BE6B0 (KeSetCoalescableTimer.c)
 */

void __fastcall ExpSetWorkerFactoryDeferredCreateTimer(signed __int32 a1)
{
  LARGE_INTEGER v1; // rdx
  ULONG v2; // r9d
  signed __int32 i; // r8d
  signed __int32 v4; // eax

  switch ( a1 )
  {
    case 1:
      v1.QuadPart = ExpWorkerFactoryDeferredLongTimeout;
      v2 = 500;
      break;
    case 2:
      v1.QuadPart = ExpWorkerFactoryDeferredMediumTimeout;
      v2 = 120;
      break;
    case 3:
      v1 = ExpWorkerFactoryDeferredShortTimeout;
      v2 = 30;
      break;
    default:
      v1.QuadPart = 0LL;
      v2 = 0;
      break;
  }
  _m_prefetchw(&ExpWorkerFactoryThreadCreationState);
  for ( i = ExpWorkerFactoryThreadCreationState; a1 > i; i = v4 )
  {
    v4 = _InterlockedCompareExchange(&ExpWorkerFactoryThreadCreationState, a1, i);
    if ( i == v4 )
    {
      KeSetCoalescableTimer(&ExpWorkerFactoryThreadCreationTimer, v1, 0, v2, 0LL);
      return;
    }
  }
}
