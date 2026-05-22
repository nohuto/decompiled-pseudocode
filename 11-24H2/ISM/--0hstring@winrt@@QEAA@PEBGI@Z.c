/*
 * XREFs of ??0hstring@winrt@@QEAA@PEBGI@Z @ 0x1800A72CC
 * Callers:
 *     ?trim_hresult_message@impl@winrt@@YA?AUhstring@2@QEBGI@Z @ 0x1800A8340 (-trim_hresult_message@impl@winrt@@YA-AUhstring@2@QEBGI@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x18009D442 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     ?precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z @ 0x1800A7E50 (-precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z.c)
 *     memcpy_0 @ 0x1801CF19C (memcpy_0.c)
 */

winrt::hstring *__fastcall winrt::hstring::hstring(winrt::hstring *this, const unsigned __int16 *a2, unsigned int a3)
{
  struct winrt::impl::shared_hstring_header *v3; // rbx
  struct winrt::impl::shared_hstring_header *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r9
  struct winrt::impl::shared_hstring_header *v10; // r14
  void *v11; // rcx
  size_t v12; // r8
  winrt::hstring *result; // rax

  v3 = 0LL;
  if ( a3 )
  {
    v7 = winrt::impl::precreate_hstring_on_heap((winrt::impl *)a3, (unsigned int)a2);
    v10 = v7;
    v11 = (char *)v7 + 28;
    v12 = 2LL * a3;
    if ( v12 )
    {
      if ( v7 != (struct winrt::impl::shared_hstring_header *)-28LL )
      {
        if ( a2 )
        {
          memcpy_0(v11, a2, v12);
          goto LABEL_8;
        }
        memset_0(v11, 0, v12);
      }
      *(_DWORD *)_o__errno(v11, v8, v12, v9) = 22;
      invalid_parameter_noinfo();
    }
LABEL_8:
    v3 = v10;
  }
  result = this;
  *(_QWORD *)this = v3;
  return result;
}
