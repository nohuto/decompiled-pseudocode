/*
 * XREFs of ?PublishServices@immersive_shell_component@winrt@@EEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1801A52E0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr@UIMultitaskingViewVisibilityNotification@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800CFA10 (--4-$com_ptr@UIMultitaskingViewVisibilityNotification@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ??R_lambda_bf0c31f178687dd5d0af47a31b5c5700_@@QEBA@XZ @ 0x1801A5588 (--R_lambda_bf0c31f178687dd5d0af47a31b5c5700_@@QEBA@XZ.c)
 *     ??$as@UIServiceProvider@@Uimmersive_shell_component@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIServiceProvider@@@1@PEAUimmersive_shell_component@1@@Z @ 0x1801A5610 (--$as@UIServiceProvider@@Uimmersive_shell_component@winrt@@$0A@@impl@winrt@@YA-AU-$com_ptr@UISer.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029730C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Destroy_range@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@YAXPEAUservice_description@immersive_shell_component@winrt@@QEAU123@AEAV?$allocator@Uservice_description@immersive_shell_component@winrt@@@0@@Z @ 0x1802C71D0 (--$_Destroy_range@V-$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall winrt::immersive_shell_component::PublishServices(
        RTL_SRWLOCK *this,
        struct IServiceProvider *a2,
        struct IProfferService *a3)
{
  RTL_SRWLOCK *v5; // rbx
  RTL_SRWLOCK *v6; // rdi
  const char *v7; // r9
  RTL_SRWLOCK *v8; // r8
  void *v9; // rcx
  void *v10; // rdx
  void *v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // r14
  __int64 v14; // rbx
  __int64 v15; // rdi
  void (__fastcall ***v16)(_QWORD, __int64 *, RTL_SRWLOCK **); // rcx
  int v17; // eax
  const char *v18; // r9
  __int64 result; // rax
  int v20; // [rsp+20h] [rbp-68h]
  __int64 v21; // [rsp+30h] [rbp-58h] BYREF
  __int128 v22; // [rsp+38h] [rbp-50h] BYREF
  PVOID Ptr; // [rsp+48h] [rbp-40h]
  _QWORD v24[2]; // [rsp+50h] [rbp-38h] BYREF
  char v25; // [rsp+60h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  RTL_SRWLOCK *v27; // [rsp+90h] [rbp+8h] BYREF
  __int64 v28; // [rsp+A8h] [rbp+20h] BYREF

  v5 = this - 2;
  try
  {
    (*((void (**)(void))this[-2].Ptr + 9))();
    v27 = 0LL;
    v6 = 0LL;
    if ( v5 )
    {
      v27 = v5;
      (*((void (__fastcall **)(RTL_SRWLOCK *))v5->Ptr + 1))(v5);
      v6 = v5;
    }
    winrt::impl::as<IServiceProvider,winrt::immersive_shell_component,0>(&v21, v6);
    if ( v6 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v27);
    v22 = 0LL;
    Ptr = 0LL;
    AcquireSRWLockExclusive(this + 8);
    v8 = this + 4;
    if ( &v22 != (__int128 *)&this[4] )
    {
      v9 = (void *)v22;
      *(RTL_SRWLOCK *)&v22 = (RTL_SRWLOCK)v8->Ptr;
      v8->Ptr = v9;
      v10 = (void *)*((_QWORD *)&v22 + 1);
      *((RTL_SRWLOCK *)&v22 + 1) = this[5];
      this[5].Ptr = v10;
      v11 = Ptr;
      Ptr = this[6].Ptr;
      this[6].Ptr = v11;
    }
    if ( this != (RTL_SRWLOCK *)-64LL )
      ReleaseSRWLockExclusive(this + 8);
    v24[0] = v5;
    v24[1] = &v22;
    v25 = 1;
    v13 = *((_QWORD *)&v22 + 1);
    v12 = v22;
    v14 = v21;
    while ( v12 != v13 )
    {
      v15 = v14;
      v28 = v14;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      v16 = *(void (__fastcall ****)(_QWORD, __int64 *, RTL_SRWLOCK **))(v12 + 16);
      if ( v16 )
      {
        v27 = 0LL;
        (**v16)(v16, &winrt::impl::guid_v<IServiceProvider>, &v27);
        if ( v27 )
        {
          winrt::com_ptr<IMultitaskingViewVisibilityNotification>::operator=(&v28, (__int64 *)&v27);
          v15 = v28;
          if ( v27 )
            winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v27);
        }
      }
      if ( !v15 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x146,
          (unsigned int)"shellcommon\\internal\\shell\\inc\\winrt/immersive_shell_component.h",
          v7);
      v17 = ((__int64 (__fastcall *)(struct IProfferService *, __int64, __int64, __int64))a3->lpVtbl->ProfferService)(
              a3,
              v12,
              v15,
              v12 + 24);
      if ( v17 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x148,
          (int)"shellcommon\\internal\\shell\\inc\\winrt/immersive_shell_component.h",
          (const char *)(unsigned int)v17,
          v20);
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v28);
      v12 += 32LL;
    }
    v25 = 0;
    _lambda_bf0c31f178687dd5d0af47a31b5c5700_::operator()(v24);
    if ( (_QWORD)v22 )
    {
      std::_Destroy_range<std::allocator<winrt::immersive_shell_component::service_description>>(
        v22,
        *((_QWORD *)&v22 + 1));
      std::_Deallocate<16,0>(
        (void *)v22,
        (const struct std::nothrow_t *)(((unsigned __int64)Ptr - v22) & 0xFFFFFFFFFFFFFFE0uLL));
      v22 = 0LL;
      Ptr = 0LL;
    }
    if ( v14 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v21);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v27) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x14D,
                     (unsigned int)"shellcommon\\internal\\shell\\inc\\winrt/immersive_shell_component.h",
                     v18);
    return (unsigned int)v27;
  }
  return result;
}
