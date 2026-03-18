/*
 * XREFs of EtwTraceFlipManagerProducerSetContent_Enabled @ 0x14012B720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 EtwTraceFlipManagerProducerSetContent_Enabled()
{
  unsigned int v0; // edx

  if ( ((unsigned __int64)*(&WPP_MAIN_CB.Reserved + 1) & 0x8000000000001000uLL) == 0 )
    return 0;
  v0 = 1;
  if ( (unsigned __int8)(byte_14029ADC8 - 1) <= 2u
    || (qword_14029ADB0 & 0x8000000000001000uLL) == 0
    || (qword_14029ADB8 & 0x8000000000001000uLL) != qword_14029ADB8 )
  {
    return 0;
  }
  return v0;
}
