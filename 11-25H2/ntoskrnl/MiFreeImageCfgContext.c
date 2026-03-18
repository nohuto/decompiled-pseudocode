/*
 * XREFs of MiFreeImageCfgContext @ 0x1404916E0
 * Callers:
 *     MiParseImageLoadConfig @ 0x140942E10 (MiParseImageLoadConfig.c)
 *     MiCaptureImageCfgContext @ 0x1409435D8 (MiCaptureImageCfgContext.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeImageCfgContext(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
}
