/*
 * XREFs of MiFreeImageLoadConfig @ 0x140942944
 * Callers:
 *     MiRelocateImage @ 0x140941BE8 (MiRelocateImage.c)
 *     MiFreeRelocations @ 0x14094288C (MiFreeRelocations.c)
 *     MiParseImageLoadConfig @ 0x140942E10 (MiParseImageLoadConfig.c)
 * Callees:
 *     SddlpFree @ 0x140907834 (SddlpFree.c)
 *     MiFreeRetpolineRelocationInformation @ 0x140942994 (MiFreeRetpolineRelocationInformation.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeImageLoadConfig(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (void *)a1[1];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x4C617652u);
    a1[1] = 0LL;
  }
  v3 = (void *)a1[2];
  if ( v3 )
  {
    MiFreeRetpolineRelocationInformation(v3);
    a1[2] = 0LL;
  }
  v4 = (void *)a1[3];
  if ( v4 )
    SddlpFree(v4);
}
