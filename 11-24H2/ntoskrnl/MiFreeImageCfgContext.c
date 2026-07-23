/*
 * XREFs of MiFreeImageCfgContext @ 0x14048B394
 * Callers:
 *     MiParseImageLoadConfig @ 0x14093D160 (MiParseImageLoadConfig.c)
 *     MiCaptureImageCfgContext @ 0x14093D928 (MiCaptureImageCfgContext.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
