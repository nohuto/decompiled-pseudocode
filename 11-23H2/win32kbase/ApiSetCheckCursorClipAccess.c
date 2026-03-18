/*
 * XREFs of ApiSetCheckCursorClipAccess @ 0x1C005E358
 * Callers:
 *     NtUserLockCursor @ 0x1C005E230 (NtUserLockCursor.c)
 *     NtUserClipCursor @ 0x1C01431D0 (NtUserClipCursor.c)
 *     NtUserGetClipCursor @ 0x1C01444D0 (NtUserGetClipCursor.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetCheckCursorClipAccess(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( qword_1C0296D88 && (int)qword_1C0296D88() >= 0 && qword_1C0296D90 )
    return (unsigned int)qword_1C0296D90(a1, a2);
  return v2;
}
