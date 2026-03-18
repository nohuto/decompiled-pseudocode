/*
 * XREFs of Feature_Servicing_PnpBootWaitForAsyncBusRelations__private_IsEnabledDeviceUsageNoInline @ 0x1404F41A8
 * Callers:
 *     IopInvalidateBusRelationsWorker @ 0x1404BF9E0 (IopInvalidateBusRelationsWorker.c)
 *     PnpWaitForDevicesToStart @ 0x140C11644 (PnpWaitForDevicesToStart.c)
 *     IoInvalidateInit @ 0x140C1188C (IoInvalidateInit.c)
 * Callees:
 *     Feature_Servicing_PnpBootWaitForAsyncBusRelations__private_IsEnabledFallback @ 0x1404F41E0 (Feature_Servicing_PnpBootWaitForAsyncBusRelations__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_PnpBootWaitForAsyncBusRelations__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_PnpBootWaitForAsyncBusRelations__private_featureState & 0x10) != 0 )
    return Feature_Servicing_PnpBootWaitForAsyncBusRelations__private_featureState & 1;
  else
    return Feature_Servicing_PnpBootWaitForAsyncBusRelations__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_PnpBootWaitForAsyncBusRelations__private_featureState,
             3LL);
}
