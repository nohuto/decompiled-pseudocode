/*
 * XREFs of ?DxgkpAcquireTestLockForStopReset@@YAXXZ @ 0x1402028AC
 * Callers:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x140195458 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x140195E9C (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     <none>
 */

void DxgkpAcquireTestLockForStopReset(void)
{
  unsigned int i; // ebx
  union _LARGE_INTEGER Interval; // [rsp+40h] [rbp+8h] BYREF

  for ( i = 0; i < 0xA; ++i )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(&qword_1401606B0, 0LL) )
      return;
    Interval.QuadPart = -10000000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  WdLogSingleEntry5(0LL, 275LL, 48LL, qword_1401606B8, 0LL, 0LL);
  WdLogGlobalForLineNumber = 199;
}
