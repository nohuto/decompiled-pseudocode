/*
 * XREFs of memmove_s @ 0x18020DBA0
 * Callers:
 *     ?memmove_s@Checked@ATL@@YAXPEAX_KPEBX1@Z @ 0x18020DB5C (-memmove_s@Checked@ATL@@YAXPEAX_KPEBX1@Z.c)
 * Callees:
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

errno_t __cdecl memmove_s(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  int *v4; // rax
  errno_t v5; // ebx

  if ( SourceSize )
  {
    if ( !Destination || !Source )
    {
      v4 = _errno();
      v5 = 22;
LABEL_5:
      *v4 = v5;
      _invalid_parameter_noinfo();
      return v5;
    }
    if ( DestinationSize < SourceSize )
    {
      v4 = _errno();
      v5 = 34;
      goto LABEL_5;
    }
    memmove_0(Destination, Source, SourceSize);
  }
  return 0;
}
