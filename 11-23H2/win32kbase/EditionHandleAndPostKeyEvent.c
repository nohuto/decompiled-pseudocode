/*
 * XREFs of EditionHandleAndPostKeyEvent @ 0x1C00AFA14
 * Callers:
 *     ApiSetEditionHandleAndPostKeyEvent @ 0x1C020647C (ApiSetEditionHandleAndPostKeyEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EditionHandleAndPostKeyEvent(unsigned int a1)
{
  if ( qword_1C0296778 )
    return ((__int64 (__fastcall *)(_QWORD))qword_1C0296778)(a1);
  else
    return 0LL;
}
