/*
 * XREFs of ApiSetEditionAreAllAccessGranted @ 0x1C00AFD10
 * Callers:
 *     NtUserGetDoubleClickTime @ 0x1C00AFC30 (NtUserGetDoubleClickTime.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionAreAllAccessGranted(unsigned int a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( qword_1C0296E88 && (int)qword_1C0296E88() >= 0 && qword_1C0296E90 )
    return (unsigned int)qword_1C0296E90(a1, 2LL);
  return v1;
}
