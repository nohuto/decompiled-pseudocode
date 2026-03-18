/*
 * XREFs of HUBMISC_LogDescriptorValidationWarningForHub @ 0x140030EC0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0ppqq_EtwWriteTransfer @ 0x14001CCA0 (McTemplateK0ppqq_EtwWriteTransfer.c)
 */

char __fastcall HUBMISC_LogDescriptorValidationWarningForHub(__int64 a1)
{
  char result; // al

  if ( a1 )
  {
    result = BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink);
    if ( SBYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
      return McTemplateK0ppqq_EtwWriteTransfer(a1, &USBHUB3_ETW_EVENT_DESCRIPTOR_VALIDATION_WARNING, 0LL);
  }
  return result;
}
