/*
 * XREFs of EtwTraceSleepInputIdle @ 0x1C00A7C20
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C00DF816 (McTemplateK0p_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceSleepInputIdle(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0p_EtwWriteTransfer(a1, &SleepInputIdleEvent, a1, a2);
  return result;
}
