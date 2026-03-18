/*
 * XREFs of ConPrompt @ 0x14006DB08
 * Callers:
 *     Debugger @ 0x14006E888 (Debugger.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

ULONG __fastcall ConPrompt(__int64 a1, CHAR *a2)
{
  if ( (gDebugger & 0xFFFDFFFF) != 0 && KeGetCurrentIrql() < 2u )
  {
    _InterlockedOr(&gDebugger, 0x20000u);
    DbgSetDebugFilterState(0x19u, 0xFFFFFFFF, 1u);
  }
  if ( qword_140089128 )
    return ((__int64 (__fastcall *)(const CHAR *, CHAR *, __int64, __int64))qword_140089128)(
             "\nAMLI(? for help)-> ",
             a2,
             256LL,
             qword_140089130);
  else
    return DbgPrompt("\nAMLI(? for help)-> ", a2, 0x100u);
}
