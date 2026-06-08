/*
 * XREFs of IssueVerw @ 0x14000D6D0
 * Callers:
 *     C1Idle @ 0x140003A50 (C1Idle.c)
 *     MWaitIdle @ 0x140004180 (MWaitIdle.c)
 *     C2Idle @ 0x1400053C0 (C2Idle.c)
 *     C3Idle @ 0x140005490 (C3Idle.c)
 *     IoHaltC1Idle @ 0x1400056C0 (IoHaltC1Idle.c)
 * Callees:
 *     <none>
 */

void __fastcall IssueVerw(__int16 a1)
{
  __int16 v1; // [rsp+8h] [rbp+8h]

  v1 = a1;
  __asm { verw    [rsp+arg_0] }
}
