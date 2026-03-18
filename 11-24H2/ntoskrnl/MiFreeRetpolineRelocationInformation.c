/*
 * XREFs of MiFreeRetpolineRelocationInformation @ 0x1408F7460
 * Callers:
 *     MiCreateRetpolineRelocationInformation @ 0x1408F3248 (MiCreateRetpolineRelocationInformation.c)
 *     MiFreeImageLoadConfig @ 0x1408F7410 (MiFreeImageLoadConfig.c)
 *     MiUnloadSystemImage @ 0x140A8AD84 (MiUnloadSystemImage.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
