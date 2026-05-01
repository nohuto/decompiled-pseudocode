/*
 * XREFs of ??0InMemoryRandomAccessStream@Streams@Storage@Windows@winrt@@QEAA@XZ @ 0x180649654
 * Callers:
 *     Util::TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1 @ 0x180651870 (Util--TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??$ActivateInstance@UInMemoryRandomAccessStream@Streams@Storage@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUInMemoryRandomAccessStream@Streams@Storage@23@XZ @ 0x1806444A4 (--$ActivateInstance@UInMemoryRandomAccessStream@Streams@Storage@Windows@winrt@@@IActivationFacto.c)
 *     ??$call@P6A?AUInMemoryRandomAccessStream@Streams@Storage@Windows@winrt@@AEBUIActivationFactory@Foundation@45@@Z@?$factory_cache_entry@UInMemoryRandomAccessStream@Streams@Storage@Windows@winrt@@UIActivationFactory@Foundation@45@@impl@winrt@@QEAA?A_P$$QEAP6A?AUInMemoryRandomAccessStream@Streams@Storage@Windows@2@AEBUIActivationFactory@Foundation@62@@Z@Z @ 0x180645D24 (--$call@P6A-AUInMemoryRandomAccessStream@Streams@Storage@Windows@winrt@@AEBUIActivationFactory@F.c)
 */

struct IUnknown *__fastcall winrt::Windows::Storage::Streams::InMemoryRandomAccessStream::InMemoryRandomAccessStream(
        struct IUnknown *this)
{
  const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *v3)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64); // [rsp+38h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_1808CA108);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::Streams::InMemoryRandomAccessStream,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Storage::Streams::InMemoryRandomAccessStream>(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::Streams::InMemoryRandomAccessStream,winrt::Windows::Foundation::IActivationFactory>,
      this);
    _InterlockedDecrement64(&qword_1808CA108);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808CA108);
    v3 = _lambda_d61d75b5375ce0dcf7e34c13bc78e81d_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::Storage::Streams::InMemoryRandomAccessStream,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Windows::Storage::Streams::InMemoryRandomAccessStream (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      this,
      (__int64)this,
      (void (__fastcall **)(__int64, __int64 *))&v3);
  }
  return this;
}
