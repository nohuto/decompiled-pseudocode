/*
 * XREFs of EtwTraceFocusChange @ 0x1C00B48A0
 * Callers:
 *     ??1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ @ 0x1C0066298 (--1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ.c)
 * Callees:
 *     McTemplateK0dq_EtwWriteTransfer @ 0x1C00DF7A4 (McTemplateK0dq_EtwWriteTransfer.c)
 */

char __fastcall EtwTraceFocusChange(__int64 a1, int a2)
{
  char result; // al

  if ( ((unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension & 0x8000000000002000uLL) != 0 )
  {
    result = byte_1C0283068 - 1;
    if ( (unsigned __int8)(byte_1C0283068 - 1) > 2u && (qword_1C0283050 & 0x8000000000002000uLL) != 0 )
    {
      result = 0;
      if ( (qword_1C0283058 & 0x8000000000002000uLL) == qword_1C0283058 && (Microsoft_Windows_Win32kEnableBits & 2) != 0 )
        return McTemplateK0dq_EtwWriteTransfer(a1, &FocusEvent, 0x8000000000002000uLL, (unsigned int)a1, a2);
    }
  }
  return result;
}
