/*
 * XREFs of ApiSetEditionPostUpdateKeyStateEvent @ 0x1C0089C28
 * Callers:
 *     PostUpdateKeyStateEvent @ 0x1C00897C0 (PostUpdateKeyStateEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionPostUpdateKeyStateEvent(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v5; // eax

  v2 = 0;
  if ( qword_1C02967A0 && (int)qword_1C02967A0() >= 0 )
  {
    if ( qword_1C02967A8 )
      v5 = qword_1C02967A8(a1, a2);
    else
      v5 = 0;
    LOBYTE(v2) = v5 != 0;
  }
  return v2;
}
