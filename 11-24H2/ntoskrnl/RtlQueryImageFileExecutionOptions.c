/*
 * XREFs of RtlQueryImageFileExecutionOptions @ 0x14077DA00
 * Callers:
 *     PsBootPhaseComplete @ 0x1407717B8 (PsBootPhaseComplete.c)
 * Callees:
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     RtlQueryImageFileKeyOption @ 0x140A22FB0 (RtlQueryImageFileKeyOption.c)
 *     RtlpOpenBaseImageFileOptionsKey @ 0x140A31DB4 (RtlpOpenBaseImageFileOptionsKey.c)
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
