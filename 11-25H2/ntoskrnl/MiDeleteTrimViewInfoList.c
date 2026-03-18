/*
 * XREFs of MiDeleteTrimViewInfoList @ 0x140A49668
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x140321850 (MiTrimSharedPageFromViews.c)
 *     MiLocateSharedPageViews @ 0x14066D834 (MiLocateSharedPageViews.c)
 *     MmQueryBadAddresses @ 0x1409D19C8 (MmQueryBadAddresses.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402BC860 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteTrimViewInfoList(_QWORD *P)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rdi
  void *v3; // rcx

  if ( P )
  {
    v1 = P;
    do
    {
      v2 = v1;
      v1 = (_QWORD *)*v1;
      v3 = (void *)v2[1];
      if ( v3 )
        ObDereferenceObjectDeferDeleteWithTag(v3, 0x77566D4Du);
      ExFreePoolWithTag(v2, 0);
    }
    while ( v1 );
  }
}
