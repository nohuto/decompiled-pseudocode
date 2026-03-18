/*
 * XREFs of NtUserCloseDesktop @ 0x1C00BF630
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserCloseDesktop(__int64 a1)
{
  int v1; // ebx

  v1 = 0;
  if ( qword_1C02952A0 && (int)qword_1C02952A0() >= 0 && qword_1C02952A8 )
    return (int)qword_1C02952A8(a1);
  return v1;
}
