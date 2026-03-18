/*
 * XREFs of ApiSetPostPointerDeviceOutOfRangeMessage @ 0x1C0208064
 * Callers:
 *     RIMOnAsyncPnpWorkNotification @ 0x1C0179C30 (RIMOnAsyncPnpWorkNotification.c)
 *     RIMRemoveFromActiveDevices @ 0x1C018B484 (RIMRemoveFromActiveDevices.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     EtwTracePointerDeviceOutOfRangeMessageStart @ 0x1C013ADF0 (EtwTracePointerDeviceOutOfRangeMessageStart.c)
 *     EtwTracePointerDeviceOutOfRangeMessageStop @ 0x1C013AE20 (EtwTracePointerDeviceOutOfRangeMessageStop.c)
 */

void __fastcall ApiSetPostPointerDeviceOutOfRangeMessage(__int64 a1)
{
  __int64 v2; // rcx

  if ( *(_DWORD *)(a1 + 24) != 7 )
  {
    EtwTracePointerDeviceOutOfRangeMessageStart(a1);
    if ( qword_1C0296258 && (int)qword_1C0296258() >= 0 )
    {
      if ( qword_1C0296260 )
        qword_1C0296260(a1, 0LL, 0LL);
    }
    EtwTracePointerDeviceOutOfRangeMessageStop(v2);
  }
}
