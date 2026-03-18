/*
 * XREFs of ?DxgkpAcquireTestLockForStopReset@@YAXXZ @ 0x1401FC19C
 * Callers:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1401930D4 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x140193B2C (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     <none>
 */

void DxgkpAcquireTestLockForStopReset(void)
{
  unsigned int i; // ebx
  union _LARGE_INTEGER Interval; // [rsp+40h] [rbp+8h] BYREF

  for ( i = 0; i < 0xA; ++i )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(&qword_14015D690, 0LL) )
      return;
    Interval.QuadPart = -10000000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  WdLogSingleEntry5(0LL, 275LL, 48LL, qword_14015D698, 0LL, 0LL);
  WdLogGlobalForLineNumber = 199;
}
