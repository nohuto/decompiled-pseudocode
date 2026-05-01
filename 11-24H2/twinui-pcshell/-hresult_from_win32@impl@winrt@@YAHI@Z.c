/*
 * XREFs of ?hresult_from_win32@impl@winrt@@YAHI@Z @ 0x1802DF884
 * Callers:
 *     ?throw_last_error@winrt@@YAXAEBUslim_source_location@impl@1@@Z @ 0x1802DFC4C (-throw_last_error@winrt@@YAXAEBUslim_source_location@impl@1@@Z.c)
 *     ??$check_win32@K@winrt@@YAXKAEBUslim_source_location@impl@0@@Z @ 0x180361AC4 (--$check_win32@K@winrt@@YAXKAEBUslim_source_location@impl@0@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::hresult_from_win32(winrt::impl *this)
{
  if ( (int)this > 0 )
    LODWORD(this) = (unsigned __int16)this | 0x80070000;
  return (unsigned int)this;
}
