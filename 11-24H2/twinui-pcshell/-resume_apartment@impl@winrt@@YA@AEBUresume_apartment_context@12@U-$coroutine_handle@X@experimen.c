/*
 * XREFs of ?resume_apartment@impl@winrt@@YA@AEBUresume_apartment_context@12@U?$coroutine_handle@X@experimental@std@@PEAH@Z @ 0x18023C8B0
 * Callers:
 *     ?Complete@?$disconnect_aware_handler@$00U?$await_adapter@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@@impl@winrt@@AEAAXXZ @ 0x18032E440 (-Complete@-$disconnect_aware_handler@$00U-$await_adapter@U-$IAsyncOperation@UTileCollection@Star.c)
 *     ?await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180360338 (-await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU-$coroutine_handle@X@experimental@std@@@Z.c)
 *     ?Complete@?$disconnect_aware_handler@$00U?$await_adapter@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@@impl@winrt@@AEAAXXZ @ 0x1805E4FAC (-Complete@-$disconnect_aware_handler@$00U-$await_adapter@U-$IAsyncOperation@U-$IReference@_N@Fou.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??$try_capture@UIContextCallback@impl@winrt@@A6AHAEBUguid@3@PEAPEAX@_E@winrt@@YA?AU?$com_ptr@UIContextCallback@impl@winrt@@@0@A6AHAEBUguid@0@PEAPEAX@_E@Z @ 0x1801B4930 (--$try_capture@UIContextCallback@impl@winrt@@A6AHAEBUguid@3@PEAPEAX@_E@winrt@@YA-AU-$com_ptr@UIC.c)
 *     ?get_apartment_type@impl@winrt@@YA?AU?$pair@HH@std@@XZ @ 0x1801C5AF0 (-get_apartment_type@impl@winrt@@YA-AU-$pair@HH@std@@XZ.c)
 *     ?submit_threadpool_callback@impl@winrt@@YA@P6AXPEAX0@Z0@Z @ 0x18023B880 (-submit_threadpool_callback@impl@winrt@@YA@P6AXPEAX0@Z0@Z.c)
 *     ?resume_apartment_on_threadpool@impl@winrt@@YAXAEBU?$com_ptr@UIContextCallback@impl@winrt@@@2@U?$coroutine_handle@X@experimental@std@@PEAH@Z @ 0x1802B7E2C (-resume_apartment_on_threadpool@impl@winrt@@YAXAEBU-$com_ptr@UIContextCallback@impl@winrt@@@2@U-.c)
 *     ?resume_apartment_sync@impl@winrt@@YA_NAEBU?$com_ptr@UIContextCallback@impl@winrt@@@2@U?$coroutine_handle@X@experimental@std@@PEAH@Z @ 0x1803380C4 (-resume_apartment_sync@impl@winrt@@YA_NAEBU-$com_ptr@UIContextCallback@impl@winrt@@@2@U-$corouti.c)
 */

char __fastcall winrt::impl::resume_apartment(__int64 a1, void (*a2)(void *, void *), void *a3)
{
  char v5; // cl
  _QWORD *v7; // rax
  char v8; // si
  bool v10; // zf
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  LODWORD(v11) = 0;
  if ( !*(_QWORD *)a1
    || (v7 = ___try_capture_UIContextCallback_impl_winrt__A6AHAEBUguid_3_PEAPEAX__E_winrt__YA_AU__com_ptr_UIContextCallback_impl_winrt___0_A6AHAEBUguid_0_PEAPEAX__E_Z(&v11),
        v5 = 1,
        *(_QWORD *)a1 == *v7) )
  {
    v8 = 1;
    if ( (v5 & 1) == 0 )
      return 0;
  }
  else
  {
    v8 = 0;
  }
  if ( v11 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v11);
  if ( v8 )
    return 0;
  if ( *(_DWORD *)(a1 + 8) == 1 )
  {
    winrt::impl::submit_threadpool_callback((winrt::impl *)winrt::impl::resume_background_callback, a2, a3);
    return 1;
  }
  winrt::impl::get_apartment_type(&v11);
  if ( !(_DWORD)v11
    || ((_DWORD)v11 == 2 ? (v10 = ((HIDWORD(v11) - 3) & 0xFFFFFFFD) == 0) : (v10 = (_DWORD)v11 == 3), v10) )
  {
    winrt::impl::resume_apartment_on_threadpool(a1, a2, a3);
    return 1;
  }
  return winrt::impl::resume_apartment_sync(a1, a2, a3);
}
