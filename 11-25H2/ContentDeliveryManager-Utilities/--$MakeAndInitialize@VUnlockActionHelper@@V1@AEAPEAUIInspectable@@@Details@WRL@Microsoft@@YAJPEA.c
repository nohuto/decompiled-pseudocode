/*
 * XREFs of ??$MakeAndInitialize@VUnlockActionHelper@@V1@AEAPEAUIInspectable@@@Details@WRL@Microsoft@@YAJPEAPEAVUnlockActionHelper@@AEAPEAUIInspectable@@@Z @ 0x180047118
 * Callers:
 *     ?QueueActionAfterUnlock@ContentManagementService@ContentManagement@@UEAAJPEAUIInspectable@@@Z @ 0x180055AA0 (-QueueActionAfterUnlock@ContentManagementService@ContentManagement@@UEAAJPEAUIInspectable@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180022490 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180029FF0 (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A0D0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003A7C4 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPendingLaunch@Private@System@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18004A8D4 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPendingLaunch@Private@.c)
 *     ?InternalRelease@?$ComPtr@VUnlockActionHelper@@@WRL@Microsoft@@IEAAKXZ @ 0x1800530D4 (-InternalRelease@-$ComPtr@VUnlockActionHelper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<UnlockActionHelper,UnlockActionHelper,IInspectable * &>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  unsigned int v6; // edi
  int v7; // eax
  volatile int *v8; // rdx
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  _QWORD *v13; // [rsp+30h] [rbp+8h] BYREF
  void *v14; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  v14 = v4;
  if ( v4 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::System::Private::IPendingLaunch>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::System::Private::IPendingLaunch>(v4);
    *v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::System::Private::IPendingLaunch>::`vftable'{for `Windows::System::Private::IPendingLaunch'};
    v5[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::System::Private::IPendingLaunch>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v5 = &UnlockActionHelper::`vftable'{for `Windows::System::Private::IPendingLaunch'};
    v5[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::System::Private::IPendingLaunch>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
    v5[4] = 0LL;
    v5[5] = 0LL;
    v13 = v5;
    v14 = 0LL;
    v7 = (**(__int64 (__fastcall ***)(_QWORD, GUID *))*a2)(*a2, &GUID_d75b691e_6cd6_4ca0_9d8f_4728b0b7e6b6);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v9 = v5[3];
      while ( v9 >= 0 )
      {
        if ( (_DWORD)v9 != 0x7FFFFFFF )
        {
          v10 = v9;
          v9 = _InterlockedCompareExchange64(v5 + 3, v9 + 1, v9);
          if ( v10 != v9 )
            continue;
        }
        goto LABEL_13;
      }
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v9 + 16), v8);
LABEL_13:
      *a1 = v5;
      Microsoft::WRL::ComPtr<UnlockActionHelper>::InternalRelease(&v13);
      v6 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x25,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
        (const char *)(unsigned int)v7);
      Microsoft::WRL::ComPtr<UnlockActionHelper>::InternalRelease(&v13);
    }
  }
  else
  {
    v6 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v14);
  return v6;
}
