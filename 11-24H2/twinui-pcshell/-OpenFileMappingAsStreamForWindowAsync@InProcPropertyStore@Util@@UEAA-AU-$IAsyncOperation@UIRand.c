/*
 * XREFs of ?OpenFileMappingAsStreamForWindowAsync@InProcPropertyStore@Util@@UEAA?AU?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@_KAEBUhstring@6@@Z @ 0x18064EDA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800549EC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?TryOpenFileMappingAsStreamForWindowAsync@Util@@YA?AU?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@_JUhstring@5@@Z @ 0x180651EBC (-TryOpenFileMappingAsStreamForWindowAsync@Util@@YA-AU-$IAsyncOperation@UIRandomAccessStream@Stre.c)
 */

__int64 __fastcall Util::InProcPropertyStore::OpenFileMappingAsStreamForWindowAsync(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const struct winrt::hstring *a4)
{
  winrt::hstring *v6; // rax
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v6 = winrt::hstring::hstring((winrt::hstring *)&v8, a4);
  Util::TryOpenFileMappingAsStreamForWindowAsync(a2, a3, v6);
  return a2;
}
