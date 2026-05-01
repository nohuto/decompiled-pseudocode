/*
 * XREFs of winrt::Windows::Foundation::EventHandler_winrt::Windows::Internal::Shell::RemoteSystemDisplayInfoChangedEventArgs_::EventHandler_winrt::Windows::Internal::Shell::RemoteSystemDisplayInfoChangedEventArgs___lambda_d2929146ab183b5cd17811f33a4bdab8___ @ 0x180655CB4
 * Callers:
 *     ??0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV?$shared_ptr@UProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@AEBV?$shared_ptr@UConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@7@@Z @ 0x1802AC14C (--0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV-$shared_ptr.c)
 * Callees:
 *     _lambda_00799cc444f9312ab8cc556666836ecb_::__lambda_00799cc444f9312ab8cc556666836ecb_ @ 0x1800D3330 (_lambda_00799cc444f9312ab8cc556666836ecb_--__lambda_00799cc444f9312ab8cc556666836ecb_.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::EventHandler_winrt::Windows::Internal::Shell::RemoteSystemDisplayInfoChangedEventArgs_::EventHandler_winrt::Windows::Internal::Shell::RemoteSystemDisplayInfoChangedEventArgs___lambda_d2929146ab183b5cd17811f33a4bdab8___(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rdx
  _DWORD *v6; // [rsp+30h] [rbp+8h]

  v6 = operator new(0x18uLL);
  v6[2] = 1;
  v4 = *a2;
  *a2 = 0LL;
  *((_QWORD *)v6 + 2) = v4;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v6 = off_18075AC60;
  *a1 = v6;
  lambda_00799cc444f9312ab8cc556666836ecb_::__lambda_00799cc444f9312ab8cc556666836ecb_(a2);
  return a1;
}
