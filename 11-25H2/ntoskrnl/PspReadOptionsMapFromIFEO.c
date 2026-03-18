/*
 * XREFs of PspReadOptionsMapFromIFEO @ 0x1409C0BC4
 * Callers:
 *     PspReadIFEOMitigationAuditOptions @ 0x1409C0AB8 (PspReadIFEOMitigationAuditOptions.c)
 *     PspReadIFEOMitigationOptions @ 0x1409C0B3C (PspReadIFEOMitigationOptions.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     RtlQueryImageFileKeyOption @ 0x1409C0C60 (RtlQueryImageFileKeyOption.c)
 */

__int64 __fastcall PspReadOptionsMapFromIFEO(__int64 a1, __int64 a2, __int64 a3)
{
  void *v4; // rcx
  int ImageFileKeyOption; // eax
  unsigned int v7; // ebx
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  LODWORD(v8) = 0;
  if ( !a1 )
    return 3221225485LL;
  v4 = *(void **)(a1 + 200);
  if ( !v4 )
    return 3221225485LL;
  ImageFileKeyOption = RtlQueryImageFileKeyOption(v4, 24, (__int64)&v8);
  v7 = ImageFileKeyOption;
  if ( ImageFileKeyOption == -2147483643 )
  {
    return (unsigned int)-1073741820;
  }
  else if ( ImageFileKeyOption >= 0 )
  {
    memset_0((void *)(a3 + (unsigned int)v8), 0, (unsigned int)(24 - v8));
  }
  return v7;
}
