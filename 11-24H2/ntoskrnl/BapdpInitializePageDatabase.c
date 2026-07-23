/*
 * XREFs of BapdpInitializePageDatabase @ 0x140650E14
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140BE052C (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
