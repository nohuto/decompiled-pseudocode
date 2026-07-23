/*
 * XREFs of HvlHalStartVirtualProcessor @ 0x140584750
 * Callers:
 *     <none>
 * Callees:
 *     HvlpStartVirtualProcessor @ 0x140582B1C (HvlpStartVirtualProcessor.c)
 *     VslStartSecureProcessor @ 0x14070DF88 (VslStartSecureProcessor.c)
 */

__int64 __fastcall HvlHalStartVirtualProcessor(int a1, _OWORD *a2)
{
  if ( VslVsmEnabled )
    return VslStartSecureProcessor();
  else
    return HvlpStartVirtualProcessor(a1, a2);
}
