/*
 * XREFs of HvlHalStartVirtualProcessor @ 0x1405873D0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpStartVirtualProcessor @ 0x14058579C (HvlpStartVirtualProcessor.c)
 *     VslStartSecureProcessor @ 0x1407103F8 (VslStartSecureProcessor.c)
 */

__int64 __fastcall HvlHalStartVirtualProcessor(int a1, _OWORD *a2)
{
  if ( VslVsmEnabled )
    return VslStartSecureProcessor();
  else
    return HvlpStartVirtualProcessor(a1, a2);
}
