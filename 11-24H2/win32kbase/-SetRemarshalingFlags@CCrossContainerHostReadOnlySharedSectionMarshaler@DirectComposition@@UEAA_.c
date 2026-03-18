/*
 * XREFs of ?SetRemarshalingFlags@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@UEAA_NXZ @ 0x1402324A0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsReadyForMarshaling@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@AEAAJPEA_N@Z @ 0x14023235C (-IsReadyForMarshaling@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@AEAAJ.c)
 */

char __fastcall DirectComposition::CCrossContainerHostReadOnlySharedSectionMarshaler::SetRemarshalingFlags(
        DirectComposition::CCrossContainerHostReadOnlySharedSectionMarshaler *this)
{
  char v1; // bl
  __int64 v2; // rcx
  bool v4; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v4 = 0;
  DirectComposition::CCrossContainerHostReadOnlySharedSectionMarshaler::IsReadyForMarshaling(this, &v4);
  if ( v4 || *(_QWORD *)(v2 + 56) )
    return 1;
  return v1;
}
