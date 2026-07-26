/*
 * XREFs of ?ndisPcwGetMiniportName@@YAPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401645E0
 * Callers:
 *     ndisNdkPcwEnumerateInstances @ 0x14006FD70 (ndisNdkPcwEnumerateInstances.c)
 *     ndisNdkPcwAddCounter @ 0x1400B96D0 (ndisNdkPcwAddCounter.c)
 *     ndisNdkPcwRemoveCounter @ 0x1401408E4 (ndisNdkPcwRemoveCounter.c)
 * Callees:
 *     <none>
 */

const struct _UNICODE_STRING *__fastcall ndisPcwGetMiniportName(struct _NDIS_MINIPORT_BLOCK *a1)
{
  const struct _UNICODE_STRING *result; // rax

  result = a1->pModifiedInstanceName;
  if ( !result )
    return a1->pAdapterInstanceName;
  return result;
}
