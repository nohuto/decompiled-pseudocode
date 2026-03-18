/*
 * XREFs of RtlAddAuditAccessAce @ 0x14077FD80
 * Callers:
 *     SepInitProcessAuditSd @ 0x140607F04 (SepInitProcessAuditSd.c)
 *     ObInitSystem @ 0x140C612B4 (ObInitSystem.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x14091DA10 (RtlpAddKnownAce.c)
 */

__int64 __fastcall RtlAddAuditAccessAce(int a1, __int64 a2, int a3)
{
  return RtlpAddKnownAce(a1, 2, 192, a3, SeWorldSid, 2);
}
