/*
 * XREFs of ?trim_hresult_message@impl@winrt@@YA?AUhstring@2@QEBGI@Z @ 0x1800A8340
 * Callers:
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z @ 0x1800A6F9C (--0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@im.c)
 *     ?message@hresult_error@winrt@@QEBA?AUhstring@2@XZ @ 0x1800DF3B8 (-message@hresult_error@winrt@@QEBA-AUhstring@2@XZ.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@PEBGI@Z @ 0x1800A72CC (--0hstring@winrt@@QEAA@PEBGI@Z.c)
 */

winrt::hstring *__fastcall winrt::impl::trim_hresult_message(
        winrt::hstring *a1,
        const unsigned __int16 *a2,
        unsigned int a3)
{
  unsigned int v3; // ebx
  const unsigned __int16 *i; // rdi

  v3 = a3;
  for ( i = &a2[a3 - 1]; v3; --v3 )
  {
    if ( !(unsigned int)_o_iswspace(*i) )
      break;
    --i;
  }
  winrt::hstring::hstring(a1, a2, v3);
  return a1;
}
