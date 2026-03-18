/*
 * XREFs of ApiSetGetMiPInputTransform @ 0x1C0207C90
 * Callers:
 *     NtUserGetPointerInputTransform @ 0x1C0145370 (NtUserGetPointerInputTransform.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetGetMiPInputTransform(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( qword_1C0296970 && (int)qword_1C0296970() >= 0 && qword_1C0296978 )
    return (unsigned int)qword_1C0296978(a1, a2);
  return v2;
}
