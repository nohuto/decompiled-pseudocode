/*
 * XREFs of Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline @ 0x1401C4964
 * Callers:
 *     ?GrepSecureVirtualMemory@@YAPEAXPEAX_KI@Z @ 0x1400875A0 (-GrepSecureVirtualMemory@@YAPEAXPEAX_KI@Z.c)
 *     ?HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z @ 0x1401755F8 (-HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z.c)
 *     GdiProcessCallout @ 0x140179DD0 (GdiProcessCallout.c)
 *     ?HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z @ 0x1401C4D30 (-HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z.c)
 * Callees:
 *     Feature_Servicing_GdiMsrc99105__private_IsEnabledFallback @ 0x1401C499C (Feature_Servicing_GdiMsrc99105__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_GdiMsrc99105__private_featureState & 0x10) != 0 )
    return Feature_Servicing_GdiMsrc99105__private_featureState & 1;
  else
    return Feature_Servicing_GdiMsrc99105__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_GdiMsrc99105__private_featureState,
             3LL);
}
