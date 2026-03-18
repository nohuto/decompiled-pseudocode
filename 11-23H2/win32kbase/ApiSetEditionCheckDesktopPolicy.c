/*
 * XREFs of ApiSetEditionCheckDesktopPolicy @ 0x1C0095784
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0094FF0 (xxxSystemParametersInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 ApiSetEditionCheckDesktopPolicy()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( qword_1C0296DC8 && (int)qword_1C0296DC8() >= 0 && qword_1C0296DD0 )
    return (unsigned int)qword_1C0296DD0(0LL, 14LL);
  return v0;
}
