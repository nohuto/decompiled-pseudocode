/*
 * XREFs of ?message_from_hresult@impl@winrt@@YA?AUhstring@2@Uhresult@2@@Z @ 0x18009DF84
 * Callers:
 *     ?message@hresult_error@winrt@@QEBA?AUhstring@2@XZ @ 0x18009DE70 (-message@hresult_error@winrt@@QEBA-AUhstring@2@XZ.c)
 *     ??0error_info_fallback@impl@winrt@@QEAA@HPEAX@Z @ 0x1800D64B8 (--0error_info_fallback@impl@winrt@@QEAA@HPEAX@Z.c)
 * Callees:
 *     FormatMessageW_0 @ 0x18005D682 (FormatMessageW_0.c)
 *     ?close@?$handle_type@Uheap_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18009DD40 (-close@-$handle_type@Uheap_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?trim_hresult_message@impl@winrt@@YA?AUhstring@2@QEBGI@Z @ 0x18009E0EC (-trim_hresult_message@impl@winrt@@YA-AUhstring@2@QEBGI@Z.c)
 */

__int64 __fastcall winrt::impl::message_from_hresult(__int64 a1, DWORD a2)
{
  DWORD v4; // eax
  void *Buffer; // [rsp+50h] [rbp+8h] BYREF

  Buffer = 0LL;
  winrt::handle_type<winrt::impl::heap_traits>::close(&Buffer);
  v4 = FormatMessageW_0(0x1300u, 0LL, a2, 0x400u, (LPWSTR)&Buffer, 0, 0LL);
  winrt::impl::trim_hresult_message(a1, Buffer, v4);
  winrt::handle_type<winrt::impl::heap_traits>::close(&Buffer);
  return a1;
}
