/*
 * XREFs of ExDeleteTimer @ 0x14036F520
 * Callers:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x140814764 (CancelTimerCallbacksAndDeleteTimer.c)
 *     WdtpCancelTimer @ 0x14096E630 (WdtpCancelTimer.c)
 *     EtwpFreeLoggerContext @ 0x14098EB6C (EtwpFreeLoggerContext.c)
 *     HalpUnregisterPmuNotification @ 0x140AAD9FC (HalpUnregisterPmuNotification.c)
 * Callees:
 *     KeDisableTimer2 @ 0x14036F62C (KeDisableTimer2.c)
 *     ExpCheckForFreedEnhancedTimer @ 0x14036FA1C (ExpCheckForFreedEnhancedTimer.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
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
