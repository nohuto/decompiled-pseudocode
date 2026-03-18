/*
 * XREFs of memcpy_s_0 @ 0x1801D4B90
 * Callers:
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801D4370 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 * Callees:
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 */

errno_t __cdecl memcpy_s_0(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  if ( !SourceSize )
    return 0;
  if ( !Destination )
    goto LABEL_7;
  if ( Source && SourceSize <= 0x28 )
  {
    memcpy_0(Destination, Source, SourceSize);
    return 0;
  }
  *(_OWORD *)Destination = 0LL;
  *((_OWORD *)Destination + 1) = 0LL;
  *((_QWORD *)Destination + 4) = 0LL;
  if ( !Source )
  {
LABEL_7:
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 22;
  }
  if ( SourceSize <= 0x28 )
    return 22;
  *_errno() = 34;
  _invalid_parameter_noinfo();
  return 34;
}
