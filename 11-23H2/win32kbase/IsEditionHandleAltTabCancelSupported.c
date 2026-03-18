/*
 * XREFs of IsEditionHandleAltTabCancelSupported @ 0x1C00B6E00
 * Callers:
 *     ApiSetEditionClientCharToWchar @ 0x1C0205C08 (ApiSetEditionClientCharToWchar.c)
 *     ApiSetEditionHandleAltTabCancel @ 0x1C02063EC (ApiSetEditionHandleAltTabCancel.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 IsEditionHandleAltTabCancelSupported()
{
  if ( qword_1C0296780 )
    return qword_1C0296780();
  else
    return 3221225659LL;
}
