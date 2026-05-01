/*
 * XREFs of ??$MakeAndInitialize@VViewEventArgsForPropertyChanged@@V1@AEAY0BC@$$CBG@Details@WRL@Microsoft@@YAJPEAPEAVViewEventArgsForPropertyChanged@@AEAY0BC@$$CBG@Z @ 0x180019408
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VViewEventArgsForPropertyChanged@@AEAY0BC@$$CBG@wil@@YA?AV?$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@AEAY0BC@$$CBG@Z @ 0x18020D450 (--$MakeAndInitializeOrThrow@VViewEventArgsForPropertyChanged@@AEAY0BC@$$CBG@wil@@YA-AV-$ComPtr@V.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?InternalRelease@?$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@IEAAKXZ @ 0x1800190F0 (-InternalRelease@-$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Initialize@PEBG@String@Internal@Windows@@QEAAJAEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x180019520 (--$Initialize@PEBG@String@Internal@Windows@@QEAAJAEBQEBGUdummy_t@_StringDetail@12@@Z.c)
 *     ??0ViewEventArgsForPropertyChanged@@QEAA@XZ @ 0x1800195B0 (--0ViewEventArgsForPropertyChanged@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForSelectTargetView@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019600 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForPropertyChanged,ViewEventArgsForPropertyChanged,unsigned short const (&)[18]>(
        ViewEventArgsForPropertyChanged **a1,
        __int64 a2)
{
  void *v4; // rax
  ViewEventArgsForPropertyChanged *v5; // rax
  ViewEventArgsForPropertyChanged *v6; // rbx
  __int64 v7; // rcx
  int v8; // eax
  volatile int *v9; // rdx
  unsigned int v10; // esi
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v16; // [rsp+40h] [rbp+8h] BYREF
  __int64 v17; // [rsp+50h] [rbp+18h] BYREF
  ViewEventArgsForPropertyChanged *v18; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v4;
  if ( !v4 )
    return 2147942414LL;
  v5 = ViewEventArgsForPropertyChanged::ViewEventArgsForPropertyChanged((ViewEventArgsForPropertyChanged *)v4);
  v6 = v5;
  v18 = v5;
  v16 = 0LL;
  v17 = a2;
  *((_DWORD *)v5 + 12) = 5;
  v7 = *((_QWORD *)v5 + 7);
  if ( v7 )
  {
    *((_QWORD *)v5 + 7) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = Windows::Internal::String::Initialize<unsigned short const *>((char *)v6 + 96, &v17);
  v10 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x190,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\ViewEventArgs.h",
      (const char *)(unsigned int)v8,
      v14);
    Microsoft::WRL::ComPtr<ViewEventArgsForPropertyChanged>::InternalRelease((__int64 *)&v18);
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v16);
    return v10;
  }
  else
  {
    if ( v6 )
    {
      v11 = *((_QWORD *)v6 + 11);
      while ( v11 >= 0 )
      {
        if ( (_DWORD)v11 != 0x7FFFFFFF )
        {
          v12 = v11;
          v11 = _InterlockedCompareExchange64((volatile signed __int64 *)v6 + 11, v11 + 1, v11);
          if ( v12 != v11 )
            continue;
        }
        goto LABEL_10;
      }
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v11 + 16), v9);
LABEL_10:
      *a1 = v6;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView>::Release(v6);
    }
    else
    {
      *a1 = 0LL;
    }
    return 0LL;
  }
}
