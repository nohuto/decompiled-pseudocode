/*
 * XREFs of MiFreeImageLoadConfig @ 0x1408F7410
 * Callers:
 *     MiParseImageLoadConfig @ 0x1408F42B8 (MiParseImageLoadConfig.c)
 *     MiRelocateImage @ 0x1408F5784 (MiRelocateImage.c)
 *     MiFreeRelocations @ 0x1408F7358 (MiFreeRelocations.c)
 * Callees:
 *     SddlpFree @ 0x140863910 (SddlpFree.c)
 *     MiFreeRetpolineRelocationInformation @ 0x1408F7460 (MiFreeRetpolineRelocationInformation.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
