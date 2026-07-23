/*
 * XREFs of IoNotifyDump @ 0x14058EC80
 * Callers:
 *     IoShutdownSystem @ 0x140B5579C (IoShutdownSystem.c)
 *     PopRestoreHiberContext @ 0x140B683FC (PopRestoreHiberContext.c)
 *     PopSaveHiberContext @ 0x140B70CF0 (PopSaveHiberContext.c)
 * Callees:
 *     IoNotifyDumpEx @ 0x14058EC98 (IoNotifyDumpEx.c)
 */

__int64 __fastcall IoNotifyDump(__int64 a1, __int64 a2)
{
  return IoNotifyDumpEx(a1, a2, 0LL);
}
