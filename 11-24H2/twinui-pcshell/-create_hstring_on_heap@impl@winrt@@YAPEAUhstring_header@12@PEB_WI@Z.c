/*
 * XREFs of ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEB_WI@Z @ 0x180203ADC
 * Callers:
 *     ??0hstring@winrt@@QEAA@PEB_WI@Z @ 0x180203AAC (--0hstring@winrt@@QEAA@PEB_WI@Z.c)
 * Callees:
 *     ?precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z @ 0x18005487C (-precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z.c)
 *     _invalid_parameter_noinfo @ 0x1802D24B6 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     memcpy_0 @ 0x1806CA2DC (memcpy_0.c)
 */

struct winrt::impl::hstring_header *__fastcall winrt::impl::create_hstring_on_heap(
        winrt::impl *this,
        const wchar_t *a2)
{
  __int64 v2; // rbx
  struct winrt::impl::shared_hstring_header *v5; // rax
  __int64 v6; // rdx
  struct winrt::impl::shared_hstring_header *v7; // rsi
  void *v8; // rcx
  size_t v9; // r8

  v2 = (unsigned int)a2;
  if ( !(_DWORD)a2 )
    return 0LL;
  v5 = winrt::impl::precreate_hstring_on_heap((winrt::impl *)(unsigned int)a2);
  v7 = v5;
  v8 = (char *)v5 + 28;
  v9 = 2 * v2;
  if ( 2 * v2 )
  {
    if ( v5 != (struct winrt::impl::shared_hstring_header *)-28LL )
    {
      if ( this )
      {
        memcpy_0(v8, this, v9);
        return v7;
      }
      memset_0(v8, 0, v9);
    }
    *(_DWORD *)_o__errno(v8, v6) = 22;
    invalid_parameter_noinfo();
  }
  return v7;
}
