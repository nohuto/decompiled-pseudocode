/*
 * XREFs of EtwTraceFocusChange @ 0x1400F2890
 * Callers:
 *     ??1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ @ 0x1400473D0 (--1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ.c)
 * Callees:
 *     McTemplateK0dq_EtwWriteTransfer @ 0x1400E0740 (McTemplateK0dq_EtwWriteTransfer.c)
 */

char __fastcall EtwTraceFocusChange(__int64 a1, int a2)
{
  char result; // al
  __int64 v3; // [rsp+20h] [rbp-18h]

  if ( ((unsigned __int64)*(&WPP_MAIN_CB.Reserved + 1) & 0x8000000000002000uLL) != 0 )
  {
    result = byte_14029ADC8 - 1;
    if ( (unsigned __int8)(byte_14029ADC8 - 1) > 2u && (qword_14029ADB0 & 0x8000000000002000uLL) != 0 )
    {
      result = 0;
      if ( (qword_14029ADB8 & 0x8000000000002000uLL) == qword_14029ADB8 && (Microsoft_Windows_Win32kEnableBits & 2) != 0 )
      {
        LODWORD(v3) = a2;
        return McTemplateK0dq_EtwWriteTransfer(a1, &FocusEvent, 0x8000000000002000uLL, a1, v3);
      }
    }
  }
  return result;
}
