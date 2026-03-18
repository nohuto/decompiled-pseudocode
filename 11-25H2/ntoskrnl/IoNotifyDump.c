/*
 * XREFs of IoNotifyDump @ 0x14058E430
 * Callers:
 *     IoShutdownSystem @ 0x140B4374C (IoShutdownSystem.c)
 *     PopRestoreHiberContext @ 0x140B561BC (PopRestoreHiberContext.c)
 *     PopSaveHiberContext @ 0x140B5BF00 (PopSaveHiberContext.c)
 * Callees:
 *     IoNotifyDumpEx @ 0x14058E448 (IoNotifyDumpEx.c)
 */

__int64 __fastcall IoNotifyDump(__int64 a1, __int64 a2)
{
  return IoNotifyDumpEx(a1, a2, 0LL);
}
