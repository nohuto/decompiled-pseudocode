/*
 * XREFs of BapdpInitializePageDatabase @ 0x1406526C0
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140BDE52C (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void BapdpInitializePageDatabase()
{
  if ( BapdpBootLoaderMetadata && (unsigned int)BapdpBootLoaderMetadataSize > 4 )
  {
    if ( (int)KsrInitPageDatabase((char *)BapdpBootLoaderMetadata + 4) >= 0 )
      ExSoftRebootFlags |= 4u;
    ExFreePoolWithTag(BapdpBootLoaderMetadata, 0);
    BapdpBootLoaderMetadata = 0LL;
    BapdpBootLoaderMetadataSize = 0;
  }
}
