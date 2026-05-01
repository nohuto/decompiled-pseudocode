/*
 * XREFs of ??0?$produce@Uimmersive_shell_component@winrt@@UIInspectable@Foundation@Windows@2@@impl@winrt@@QEAA@XZ @ 0x18014A420
 * Callers:
 *     ??0?$producer@Uimmersive_shell_component@winrt@@UIInspectable@Foundation@Windows@2@X@impl@winrt@@QEAA@XZ @ 0x18014A408 (--0-$producer@Uimmersive_shell_component@winrt@@UIInspectable@Foundation@Windows@2@X@impl@winrt@.c)
 * Callees:
 *     ??0?$produce_base@Uimmersive_shell_component@winrt@@UIInspectable@Foundation@Windows@2@X@impl@winrt@@QEAA@XZ @ 0x1802CF740 (--0-$produce_base@Uimmersive_shell_component@winrt@@UIInspectable@Foundation@Windows@2@X@impl@wi.c)
 */

_QWORD *winrt::impl::produce<winrt::immersive_shell_component,winrt::Windows::Foundation::IInspectable>::produce<winrt::immersive_shell_component,winrt::Windows::Foundation::IInspectable>()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  winrt::impl::produce_base<winrt::immersive_shell_component,winrt::Windows::Foundation::IInspectable,void>::produce_base<winrt::immersive_shell_component,winrt::Windows::Foundation::IInspectable,void>();
  result = v0;
  *v0 = &winrt::impl::produce_base<winrt::immersive_shell_component,winrt::Windows::Foundation::IInspectable,void>::`vftable';
  return result;
}
