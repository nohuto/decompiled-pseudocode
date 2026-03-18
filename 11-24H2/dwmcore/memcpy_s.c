/*
 * XREFs of memcpy_s @ 0x1801A337C
 * Callers:
 *     ?PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z @ 0x1801A2CAC (-PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z.c)
 * Callees:
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 */

errno_t __cdecl memcpy_s(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  int *v7; // rax
  errno_t v8; // ebx

  if ( !SourceSize )
    return 0;
  if ( !Destination )
    goto LABEL_10;
  if ( Source && DestinationSize >= SourceSize )
  {
    memcpy_0(Destination, Source, SourceSize);
    return 0;
  }
  memset_0(Destination, 0, DestinationSize);
  if ( !Source )
  {
LABEL_10:
    v7 = _errno();
    v8 = 22;
    goto LABEL_11;
  }
  if ( DestinationSize < SourceSize )
  {
    v7 = _errno();
    v8 = 34;
LABEL_11:
    *v7 = v8;
    _invalid_parameter_noinfo();
    return v8;
  }
  return 22;
}
