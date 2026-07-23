/*
 * XREFs of MiFreeImageLoadConfig @ 0x14093B594
 * Callers:
 *     MiFreeRelocations @ 0x14093B4DC (MiFreeRelocations.c)
 *     MiParseImageLoadConfig @ 0x14093D160 (MiParseImageLoadConfig.c)
 *     MiRelocateImage @ 0x140AEA57C (MiRelocateImage.c)
 * Callees:
 *     SddlpFree @ 0x140867F20 (SddlpFree.c)
 *     MiFreeRetpolineRelocationInformation @ 0x14093B5E4 (MiFreeRetpolineRelocationInformation.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
