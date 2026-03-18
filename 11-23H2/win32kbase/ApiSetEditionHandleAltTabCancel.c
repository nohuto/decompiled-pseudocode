/*
 * XREFs of ApiSetEditionHandleAltTabCancel @ 0x1C02063EC
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C006B3FC (xxxUpdateGlobalsAndSendKeyEvent.c)
 * Callees:
 *     IsEditionHandleAltTabCancelSupported @ 0x1C00B6E00 (IsEditionHandleAltTabCancelSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionHandleAltTabCancel(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        int a6,
        int a7)
{
  unsigned int v11; // edi

  v11 = 0;
  if ( (int)IsEditionHandleAltTabCancelSupported() >= 0 && qword_1C0296788 )
    return (unsigned int)qword_1C0296788(a1, a2, a3, a4, a5, a6, a7);
  return v11;
}
