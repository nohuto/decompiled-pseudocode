/*
 * XREFs of ?SwitchToLocalVirtualDesktopInLocalSession@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEBA?AU?$com_ptr@UIVirtualDesktop@@@6@XZ @ 0x18066F030
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@UITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x1802CA838 (-InternalAddRef@-$ComPtr@UITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Micr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::SwitchToLocalVirtualDesktopInLocalSession(
        __int64 a1,
        __int64 *a2)
{
  int v4; // eax
  __int64 v5; // rax
  __int64 *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, _QWORD, GUID *, __int64 *); // rsi
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  int v15; // [rsp+20h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v17; // [rsp+60h] [rbp+20h] BYREF
  __int64 *v18; // [rsp+70h] [rbp+30h] BYREF
  __int64 v19; // [rsp+78h] [rbp+38h] BYREF

  v18 = 0LL;
  v4 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 152))(
         *(_QWORD *)(a1 + 152),
         &GUID_53f5ca0b_158f_4124_900c_057158060b27,
         (__int64 *)&v18);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x274,
      (int)"pcshell\\twinui\\cloudpc\\lib\\switchconnectionhandler.cpp",
      (const char *)(unsigned int)v4,
      v15);
  v17 = 0LL;
  v5 = *v18;
  v17 = 0LL;
  if ( (*(int (__fastcall **)(__int64 *, __int64 *))(v5 + 184))(v18, &v17) < 0 )
  {
    v19 = 0LL;
    v6 = *(__int64 **)(a1 + 152);
    v7 = *v6;
    v19 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v7 + 56))(v6, &v19);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x27B,
        (int)"pcshell\\twinui\\cloudpc\\lib\\switchconnectionhandler.cpp",
        (const char *)(unsigned int)v8,
        v15);
    v9 = v19;
    v10 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v19 + 32LL);
    v11 = v17;
    v17 = 0LL;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    v12 = v10(v9, 0LL, &GUID_3f07f4be_b107_441a_af0f_39d82529072c, &v17);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x27E,
        (int)"pcshell\\twinui\\cloudpc\\lib\\switchconnectionhandler.cpp",
        (const char *)(unsigned int)v12,
        v15);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v19);
  }
  v13 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(*v18 + 168))(v18, v17, 2LL);
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x281,
      (int)"pcshell\\twinui\\cloudpc\\lib\\switchconnectionhandler.cpp",
      (const char *)(unsigned int)v13,
      v15);
  *a2 = 0LL;
  if ( v17 )
  {
    *a2 = v17;
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter>::InternalAddRef(a2);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v17);
  if ( v18 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v18);
  return a2;
}
