/*
 * XREFs of StorDeleteOutstandingRequestBitmap @ 0x1401274F4
 * Callers:
 *     NvmeControllerAdminQueuesFreeResources @ 0x1400EA548 (NvmeControllerAdminQueuesFreeResources.c)
 *     NvmeControllerIoQueuesFreeResources @ 0x1400F1320 (NvmeControllerIoQueuesFreeResources.c)
 * Callees:
 *     <none>
 */

void __fastcall StorDeleteOutstandingRequestBitmap(__int64 a1)
{
  void *v2; // rcx

  if ( a1 )
  {
    v2 = *(void **)(a1 + 80);
    if ( v2 )
    {
      ExFreePoolWithTag(v2, 0x52426152u);
      *(_QWORD *)(a1 + 80) = 0LL;
    }
  }
}
