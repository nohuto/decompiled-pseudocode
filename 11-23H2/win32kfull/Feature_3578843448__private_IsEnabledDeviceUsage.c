/*
 * XREFs of Feature_3578843448__private_IsEnabledDeviceUsage @ 0x1C0138AA8
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C01236C0 (xxxEndDeferWindowPosEx.c)
 *     ?xxxUpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x1C021F488 (-xxxUpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 * Callees:
 *     Feature_3578843448__private_IsEnabledFallback @ 0x1C0138AE0 (Feature_3578843448__private_IsEnabledFallback.c)
 */

__int64 Feature_3578843448__private_IsEnabledDeviceUsage()
{
  if ( (Feature_3578843448__private_featureState & 0x10) != 0 )
    return Feature_3578843448__private_featureState & 1;
  else
    return Feature_3578843448__private_IsEnabledFallback((unsigned int)Feature_3578843448__private_featureState, 3LL);
}
