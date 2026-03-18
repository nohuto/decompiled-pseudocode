/*
 * XREFs of ApiSetEditionAllocAndLinkThreadPointerData @ 0x1C0205B04
 * Callers:
 *     ?AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H@Z @ 0x1C01B9D70 (-AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionAllocAndLinkThreadPointerData(__int64 a1)
{
  __int64 v1; // rbx

  v1 = 0LL;
  if ( qword_1C0296A10 && (int)qword_1C0296A10() >= 0 && qword_1C0296A18 )
    return qword_1C0296A18(a1);
  return v1;
}
