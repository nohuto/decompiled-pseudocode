/*
 * XREFs of IoNotifyDump @ 0x140591C60
 * Callers:
 *     IoShutdownSystem @ 0x140B5374C (IoShutdownSystem.c)
 *     PopRestoreHiberContext @ 0x140B662BC (PopRestoreHiberContext.c)
 *     PopSaveHiberContext @ 0x140B6EC80 (PopSaveHiberContext.c)
 * Callees:
 *     IoNotifyDumpEx @ 0x140591C78 (IoNotifyDumpEx.c)
 */

__int64 __fastcall IoNotifyDump(__int64 a1, __int64 a2)
{
  return IoNotifyDumpEx(a1, a2, 0LL);
}
