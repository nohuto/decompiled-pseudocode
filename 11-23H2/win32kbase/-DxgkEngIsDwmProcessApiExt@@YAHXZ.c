/*
 * XREFs of ?DxgkEngIsDwmProcessApiExt@@YAHXZ @ 0x1C00A7DB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 DxgkEngIsDwmProcessApiExt(void)
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( qword_1C02945B0 && (int)qword_1C02945B0() >= 0 && qword_1C02945B8 )
    return (unsigned int)qword_1C02945B8();
  return v0;
}
