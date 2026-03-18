/*
 * XREFs of MiFreeImageRetpolineContext @ 0x1408F4A28
 * Callers:
 *     MiCaptureBootDriverRetpolineInfo @ 0x1407F06EC (MiCaptureBootDriverRetpolineInfo.c)
 *     MiCaptureRetpolineRelocationTables @ 0x1408F3470 (MiCaptureRetpolineRelocationTables.c)
 *     MiParseImageLoadConfig @ 0x1408F42B8 (MiParseImageLoadConfig.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeImageRetpolineContext(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (void *)a1[1];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    a1[1] = 0LL;
  }
  v3 = (void *)a1[2];
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    a1[2] = 0LL;
  }
  v4 = (void *)a1[3];
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    a1[3] = 0LL;
  }
}
