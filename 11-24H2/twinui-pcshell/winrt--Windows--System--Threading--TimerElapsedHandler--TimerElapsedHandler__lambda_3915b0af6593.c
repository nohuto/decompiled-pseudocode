/*
 * XREFs of winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler__lambda_3915b0af65937f5328b5adc87798a766___ @ 0x1804F3A18
 * Callers:
 *     ?HandleViewFallback@GamingPosturePositioner@@AEAAX_N@Z @ 0x180500B10 (-HandleViewFallback@GamingPosturePositioner@@AEAAX_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler__lambda_3915b0af65937f5328b5adc87798a766___(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rdx
  _DWORD *v6; // [rsp+38h] [rbp+10h]

  v6 = operator new(0x28uLL);
  v6[2] = 1;
  v4 = *(_QWORD *)a2;
  *(_QWORD *)a2 = 0LL;
  *((_QWORD *)v6 + 2) = v4;
  *((_QWORD *)v6 + 3) = *(_QWORD *)(a2 + 8);
  *((_BYTE *)v6 + 32) = *(_BYTE *)(a2 + 16);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v6 = off_18074E120;
  *a1 = v6;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)a2);
  return a1;
}
