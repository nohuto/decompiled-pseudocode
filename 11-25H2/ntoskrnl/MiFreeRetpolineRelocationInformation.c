/*
 * XREFs of MiFreeRetpolineRelocationInformation @ 0x140942994
 * Callers:
 *     MiFreeImageLoadConfig @ 0x140942944 (MiFreeImageLoadConfig.c)
 *     MiCreateRetpolineRelocationInformation @ 0x140A5A728 (MiCreateRetpolineRelocationInformation.c)
 *     MiUnloadSystemImage @ 0x140A862D4 (MiUnloadSystemImage.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeRetpolineRelocationInformation(_QWORD *P)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)P[2];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v3 = (void *)P[7];
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  ExFreePoolWithTag(P, 0);
}
