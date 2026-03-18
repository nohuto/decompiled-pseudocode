/*
 * XREFs of PpmHeteroReevaluateMultiCoreFeatures @ 0x1404D5F94
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140A2A138 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     <none>
 */

__int64 PpmHeteroReevaluateMultiCoreFeatures()
{
  int v0; // eax
  __int64 result; // rax

  v0 = PpmHeteroMultiCoreClassesRegValue;
  if ( PpmHeteroMultiCoreClassesRegValue == -1 )
    v0 = 1;
  PpmHeteroMultiCoreClassesEnabled = v0;
  result = (unsigned int)PpmHeteroMultiClassParkingRegValue;
  if ( PpmHeteroMultiClassParkingRegValue == -1 )
    result = 1LL;
  PpmHeteroMultiClassParkingEnabled = result;
  return result;
}
