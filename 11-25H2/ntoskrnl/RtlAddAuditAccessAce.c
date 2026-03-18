/*
 * XREFs of RtlAddAuditAccessAce @ 0x140770B30
 * Callers:
 *     SepInitProcessAuditSd @ 0x1405FBBC4 (SepInitProcessAuditSd.c)
 *     ObInitSystem @ 0x140C4FF98 (ObInitSystem.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x14092B1E0 (RtlpAddKnownAce.c)
 */

__int64 __fastcall RtlAddAuditAccessAce(int a1, __int64 a2, int a3)
{
  return RtlpAddKnownAce(a1, 2, 192, a3, SeWorldSid, 2);
}
