/*
 * XREFs of RtlWow64LogMessageInEventLogger @ 0x18015DC20
 * Callers:
 *     <none>
 * Callees:
 *     RtlLogMessageInEventLogger @ 0x18011C59C (RtlLogMessageInEventLogger.c)
 */

int __fastcall RtlWow64LogMessageInEventLogger(__int16 a1, __int64 a2, unsigned int a3)
{
  return RtlLogMessageInEventLogger(a1, a2, a3, (__int64)L"Wow64 Emulation Layer", 4u);
}
