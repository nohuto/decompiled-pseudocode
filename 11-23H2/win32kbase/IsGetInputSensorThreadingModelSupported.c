/*
 * XREFs of IsGetInputSensorThreadingModelSupported @ 0x1C00C1130
 * Callers:
 *     InputInitialize @ 0x1C00814D4 (InputInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetInputSensorThreadingModelSupported()
{
  if ( qword_1C02965C0 )
    return qword_1C02965C0();
  else
    return 3221225659LL;
}
