/*
 * XREFs of RtlQueryImageFileExecutionOptions @ 0x14076E710
 * Callers:
 *     PsBootPhaseComplete @ 0x140761DF8 (PsBootPhaseComplete.c)
 * Callees:
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     RtlQueryImageFileKeyOption @ 0x1409C0C60 (RtlQueryImageFileKeyOption.c)
 *     RtlpOpenBaseImageFileOptionsKey @ 0x140A2B554 (RtlpOpenBaseImageFileOptionsKey.c)
 */

__int64 RtlQueryImageFileExecutionOptions()
{
  int ImageFileKeyOption; // ebx
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF

  Handle = 0LL;
  ImageFileKeyOption = RtlpOpenBaseImageFileOptionsKey(&Handle);
  if ( ImageFileKeyOption >= 0 )
  {
    ImageFileKeyOption = RtlQueryImageFileKeyOption(Handle, 4, 0LL);
    if ( RtlpDisableIFEOCaching )
      ZwClose(Handle);
  }
  return (unsigned int)ImageFileKeyOption;
}
