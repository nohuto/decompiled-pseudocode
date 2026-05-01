/*
 * XREFs of ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18017DBAC
 * Callers:
 *     ??$InvokeDelegates@V_lambda_baaca31cd2954a77daa2b39672579920_@@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@2345@@Foundation@Windows@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_baaca31cd2954a77daa2b39672579920_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x1802A3D28 (--$InvokeDelegates@V_lambda_baaca31cd2954a77daa2b39672579920_@@U-$ITypedEventHandler@PEAUIShellE.c)
 *     ??$InvokeDelegates@V_lambda_a48ac9b22b1e533b001c2bec4634345b_@@U?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_a48ac9b22b1e533b001c2bec4634345b_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x18030B1A0 (--$InvokeDelegates@V_lambda_a48ac9b22b1e533b001c2bec4634345b_@@U-$ITypedEventHandler@PEAVSplashS.c)
 *     ?remove_Dismissed@CSplashScreen@@UEAAJUEventRegistrationToken@@@Z @ 0x18030C040 (-remove_Dismissed@CSplashScreen@@UEAAJUEventRegistrationToken@@@Z.c)
 *     ?remove_ViewChanged@ShellExperienceView@Cortana@TwinUI@@UEAAJUEventRegistrationToken@@@Z @ 0x1803C68B0 (-remove_ViewChanged@ShellExperienceView@Cortana@TwinUI@@UEAAJUEventRegistrationToken@@@Z.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180039620 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180039AB8 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003B490 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x18003B714 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x18003B768 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x18017DF90 (-InternalRelease@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEBAXXZ @ 0x18017E010 (-InternalAddRef@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2)
{
  RTL_SRWLOCK *v2; // r14
  volatile signed __int32 *v4; // rdi
  _QWORD *Ptr; // r12
  struct IUnknown **v7; // rax
  Microsoft::WRL::Details::EventTargetArray *v8; // rbx
  __int64 v9; // r12
  unsigned __int64 v10; // r12
  bool v11; // cl
  void **v12; // rax
  int v13; // r13d
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  struct IUnknown ***v18; // rax
  struct IUnknown **v19; // r13
  void **v20; // r14
  volatile signed __int32 *v21; // [rsp+20h] [rbp-10h] BYREF
  char v22; // [rsp+70h] [rbp+40h]
  Microsoft::WRL::Details::EventTargetArray *v23; // [rsp+80h] [rbp+50h] BYREF
  void **v24; // [rsp+88h] [rbp+58h] BYREF

  v2 = a1 + 2;
  v4 = 0LL;
  v21 = 0LL;
  AcquireSRWLockExclusive(a1 + 2);
  Ptr = a1->Ptr;
  if ( !a1->Ptr )
  {
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    return 0LL;
  }
  v7 = (struct IUnknown **)Ptr[2];
  v8 = 0LL;
  v9 = Ptr[3] - (_QWORD)v7;
  v23 = 0LL;
  v22 = 0;
  v10 = (v9 >> 3) - 1;
  if ( !v10 )
  {
    v11 = *v7 == a2;
    goto LABEL_22;
  }
  v12 = (void **)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v24 = v12;
  v8 = (Microsoft::WRL::Details::EventTargetArray *)v12;
  if ( v12 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>(v12);
    *((_QWORD *)v8 + 2) = 0LL;
    *((_QWORD *)v8 + 3) = 0LL;
    *((_QWORD *)v8 + 4) = 0LL;
    v24 = 0LL;
    *(_QWORD *)v8 = &Microsoft::WRL::Details::EventTargetArray::`vftable';
    v23 = v8;
    v13 = Microsoft::WRL::Details::EventTargetArray::RuntimeClassInitialize(v8, v10);
    if ( v13 >= 0 )
    {
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalAddRef(&v23, v14, v15, v16);
      v23 = v8;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v8);
      Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>((void **)&v24);
      v18 = (struct IUnknown ***)a1->Ptr;
      v19 = (struct IUnknown **)*((_QWORD *)a1->Ptr + 2);
      v24 = (void **)*((_QWORD *)a1->Ptr + 4);
      if ( v19 == v18[3] )
      {
LABEL_26:
        if ( v8 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v8);
        if ( v2 )
          ReleaseSRWLockExclusive(v2);
        if ( v4 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v4);
        return 0LL;
      }
      v20 = v24;
      v11 = 0;
      do
      {
        if ( v11 || a2 != *v19 )
        {
          if ( !v10 )
            break;
          Microsoft::WRL::Details::EventTargetArray::AddTail(v8, *v19, *v20);
          v11 = v22;
          ++v20;
          --v10;
        }
        else
        {
          v11 = 1;
          v22 = 1;
        }
        ++v19;
      }
      while ( v19 != *((struct IUnknown ***)a1->Ptr + 3) );
      v2 = a1 + 2;
LABEL_22:
      if ( v11 )
      {
        AcquireSRWLockExclusive(a1 + 1);
        Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v21, (char *)a1);
        Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
          (volatile signed __int32 **)a1,
          (char *)&v23);
        if ( a1 != (RTL_SRWLOCK *)-8LL )
          ReleaseSRWLockExclusive(a1 + 1);
        v8 = v23;
        v4 = v21;
      }
      goto LABEL_26;
    }
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease(&v23);
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>((void **)&v24);
    v13 = -2147024882;
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return (unsigned int)v13;
}
