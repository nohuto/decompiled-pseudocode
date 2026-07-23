/*
 * XREFs of ExDeleteTimer @ 0x1403AE2F0
 * Callers:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x140824CE4 (CancelTimerCallbacksAndDeleteTimer.c)
 *     WdtpCancelTimer @ 0x1409ED9F0 (WdtpCancelTimer.c)
 *     EtwpFreeLoggerContext @ 0x140A48E90 (EtwpFreeLoggerContext.c)
 *     HalpUnregisterPmuNotification @ 0x140AADA0C (HalpUnregisterPmuNotification.c)
 * Callees:
 *     KeDisableTimer2 @ 0x1403AED68 (KeDisableTimer2.c)
 *     ExpCheckForFreedEnhancedTimer @ 0x1403AF158 (ExpCheckForFreedEnhancedTimer.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall ExDeleteTimer(ULONG_PTR a1, char a2, char a3, unsigned int *a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF

  ExpCheckForFreedEnhancedTimer(a1);
  if ( a4 )
  {
    if ( *a4 )
      KeBugCheckEx(0xC7u, 9uLL, 1uLL, *a4, 0LL);
    *(_QWORD *)(a1 + 136) = KiWaitNever ^ __ROR8__(
                                            a1 ^ _byteswap_uint64(KiWaitAlways ^ *((_QWORD *)a4 + 1)),
                                            KiWaitNever);
    v8 = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(KiWaitAlways ^ *((_QWORD *)a4 + 2)), KiWaitNever);
    *(_QWORD *)(a1 + 144) = v8;
  }
  v11[1] = a1;
  v11[0] = ExpFinalizeTimerDeletion;
  LOBYTE(v9) = a3;
  LOBYTE(v8) = a2;
  return KeDisableTimer2(a1, v8, v9, v11);
}
