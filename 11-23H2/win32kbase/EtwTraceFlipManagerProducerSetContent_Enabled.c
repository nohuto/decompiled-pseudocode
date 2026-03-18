/*
 * XREFs of EtwTraceFlipManagerProducerSetContent_Enabled @ 0x1C013A7A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 EtwTraceFlipManagerProducerSetContent_Enabled()
{
  unsigned int v0; // edx

  if ( ((unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension & 0x8000000000001000uLL) == 0 )
    return 0;
  v0 = 1;
  if ( (unsigned __int8)(byte_1C0283068 - 1) <= 2u
    || (qword_1C0283050 & 0x8000000000001000uLL) == 0
    || (qword_1C0283058 & 0x8000000000001000uLL) != qword_1C0283058 )
  {
    return 0;
  }
  return v0;
}
