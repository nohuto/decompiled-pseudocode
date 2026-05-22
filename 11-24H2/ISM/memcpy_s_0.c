/*
 * XREFs of memcpy_s_0 @ 0x18005F6F0
 * Callers:
 *     ?OnDeviceRemoval@KeyboardProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x18002D600 (-OnDeviceRemoval@KeyboardProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x18009D442 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     memcpy_0 @ 0x1801CF19C (memcpy_0.c)
 */

errno_t __cdecl memcpy_s_0(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  errno_t *v7; // rax
  errno_t v8; // ebx

  if ( !SourceSize )
    return 0;
  if ( !Destination )
    goto LABEL_5;
  if ( !Source || DestinationSize < SourceSize )
  {
    memset_0(Destination, 0, DestinationSize);
    if ( Source )
    {
      if ( DestinationSize >= SourceSize )
        return 22;
      v7 = (errno_t *)_o__errno();
      v8 = 34;
LABEL_6:
      *v7 = v8;
      invalid_parameter_noinfo();
      return v8;
    }
LABEL_5:
    v7 = (errno_t *)_o__errno();
    v8 = 22;
    goto LABEL_6;
  }
  memcpy_0(Destination, Source, SourceSize);
  return 0;
}
