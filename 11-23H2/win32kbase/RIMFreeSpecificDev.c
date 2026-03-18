/*
 * XREFs of RIMFreeSpecificDev @ 0x1C00C8F08
 * Callers:
 *     RIMUnregisterForInput @ 0x1C0071570 (RIMUnregisterForInput.c)
 *     RIMRemoveDevOfInputType @ 0x1C00B93BC (RIMRemoveDevOfInputType.c)
 *     RIMFreeDev @ 0x1C0170F30 (RIMFreeDev.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C0178FA8 (RIMIDERemoveInjectionDevice.c)
 * Callees:
 *     rimDoRimDevChange @ 0x1C0003BFC (rimDoRimDevChange.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C00462E4 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     rimQueueRimDevChangeAsyncWorkItem @ 0x1C0076D60 (rimQueueRimDevChangeAsyncWorkItem.c)
 *     rimFreeSpecificDevFinal @ 0x1C00C350C (rimFreeSpecificDevFinal.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall RIMFreeSpecificDev(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( !*(_QWORD *)(a2 + 336) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 838LL);
  if ( a1 != *(_QWORD *)(a2 + 336) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 839LL);
  if ( !*(_QWORD *)(a1 + 832) || *(_DWORD *)(a1 + 1056) || (*(_DWORD *)(a2 + 184) & 0x2000) == 0 )
  {
    if ( !IS_USERCRIT_OWNED_AT_ALL(a1, a2, a3, a4) )
    {
      rimQueueRimDevChangeAsyncWorkItem((_QWORD *)a1, a2, 4);
      return;
    }
    rimDoRimDevChange(a1, a2, 4u);
  }
  rimFreeSpecificDevFinal((__int64 *)a1, a2, a3, a4);
}
