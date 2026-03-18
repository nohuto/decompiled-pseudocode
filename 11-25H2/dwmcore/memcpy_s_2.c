/*
 * XREFs of memcpy_s_2 @ 0x180266A34
 * Callers:
 *     ?IncludeLastBatchMemoryInDump@CComposition@@SAXXZ @ 0x180257368 (-IncludeLastBatchMemoryInDump@CComposition@@SAXXZ.c)
 * Callees:
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 */

errno_t __cdecl memcpy_s_2(
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
    goto LABEL_4;
  if ( CComposition::s_pLastCommandBuffer_ForFailfast && DestinationSize >= SourceSize )
  {
    memcpy_0(Destination, CComposition::s_pLastCommandBuffer_ForFailfast, SourceSize);
    return 0;
  }
  memset_0(Destination, 0, DestinationSize);
  if ( !CComposition::s_pLastCommandBuffer_ForFailfast )
  {
LABEL_4:
    v7 = _errno();
    v8 = 22;
LABEL_5:
    *v7 = v8;
    _invalid_parameter_noinfo();
    return v8;
  }
  if ( DestinationSize < SourceSize )
  {
    v7 = _errno();
    v8 = 34;
    goto LABEL_5;
  }
  return 22;
}
