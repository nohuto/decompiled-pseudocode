/*
 * XREFs of memcpy_s_2 @ 0x180148F88
 * Callers:
 *     ?concat_hstring@impl@winrt@@YA?AUhstring@2@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x180148ED4 (-concat_hstring@impl@winrt@@YA-AUhstring@2@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x1802D24B6 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     memcpy_0 @ 0x1806CA2DC (memcpy_0.c)
 */

errno_t __cdecl memcpy_s_2(
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
  {
LABEL_3:
    v7 = (errno_t *)_o__errno(Destination, DestinationSize);
    v8 = 22;
LABEL_4:
    *v7 = v8;
    invalid_parameter_noinfo();
    return v8;
  }
  if ( Source && DestinationSize >= SourceSize )
  {
    memcpy_0(Destination, Source, SourceSize);
    return 0;
  }
  memset_0(Destination, 0, DestinationSize);
  if ( !Source )
    goto LABEL_3;
  if ( DestinationSize < SourceSize )
  {
    v7 = (errno_t *)_o__errno(Destination, DestinationSize);
    v8 = 34;
    goto LABEL_4;
  }
  return 22;
}
