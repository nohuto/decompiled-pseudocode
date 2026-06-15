/*
 * XREFs of ??0CStreamClassPolicyGains@@QEAA@XZ @ 0x18003E630
 * Callers:
 *     ??$make_unique@VCStreamClassPolicyGains@@$$V$0A@@std@@YA?AV?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@0@XZ @ 0x18003E5C8 (--$make_unique@VCStreamClassPolicyGains@@$$V$0A@@std@@YA-AV-$unique_ptr@VCStreamClassPolicyGains.c)
 *     ??0CStreamClassPolicyGainsWrapper@@QEAA@XZ @ 0x18003F984 (--0CStreamClassPolicyGainsWrapper@@QEAA@XZ.c)
 * Callees:
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180020630 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=2
CStreamClassPolicyGains *__fastcall CStreamClassPolicyGains::CStreamClassPolicyGains(CStreamClassPolicyGains *this)
{
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this, 0, 0);
  `eh vector constructor iterator'(
    (char *)this + 40,
    8LL,
    24LL,
    (void (__fastcall *)(char *))wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>);
  `eh vector constructor iterator'(
    (char *)this + 232,
    8LL,
    24LL,
    (void (__fastcall *)(char *))wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>);
  return this;
}
