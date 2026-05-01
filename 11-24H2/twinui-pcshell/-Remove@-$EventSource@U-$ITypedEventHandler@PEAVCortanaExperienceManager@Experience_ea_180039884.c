/*
 * XREFs of ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@URect@Foundation@5@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180039884
 * Callers:
 *     ??$InvokeDelegates@V_lambda_721e5e573830a3eafdff38e0e874721f_@@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@URect@Foundation@5@@Foundation@Windows@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_721e5e573830a3eafdff38e0e874721f_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@URect@Foundation@5@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x1803784F0 (--$InvokeDelegates@V_lambda_721e5e573830a3eafdff38e0e874721f_@@U-$ITypedEventHandler@PEAVCortana.c)
 *     ?remove_NotifyRelaunch@CortanaSharedExperienceManager@@UEAAJUEventRegistrationToken@@@Z @ 0x180380D00 (-remove_NotifyRelaunch@CortanaSharedExperienceManager@@UEAAJUEventRegistrationToken@@@Z.c)
 *     ?remove_NotifyRelaunch@SearchAppExperienceManager@@UEAAJUEventRegistrationToken@@@Z @ 0x1803ADCE0 (-remove_NotifyRelaunch@SearchAppExperienceManager@@UEAAJUEventRegistrationToken@@@Z.c)
 *     ?remove_NotifyRelaunch@UndockedSearchAppExperienceManager@@UEAAJUEventRegistrationToken@@@Z @ 0x1803C4040 (-remove_NotifyRelaunch@UndockedSearchAppExperienceManager@@UEAAJUEventRegistrationToken@@@Z.c)
 * Callees:
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180039AB8 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003B490 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x18003B714 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x18003B768 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Foundation::Rect>,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2)
{
  RTL_SRWLOCK *v2; // rbp
  RTL_SRWLOCK v5; // rbx
  RTL_SRWLOCK v6; // r13
  struct IUnknown **v7; // rax
  Microsoft::WRL::Details::EventTargetArray *v8; // r15
  unsigned __int64 v9; // r13
  _QWORD *v10; // rax
  _QWORD *v11; // r12
  volatile int *v12; // rdx
  int v13; // r14d
  struct IUnknown **v14; // r14
  void **v15; // r12
  bool v17; // cl
  RTL_SRWLOCK v18; // rcx
  char v19; // [rsp+20h] [rbp-38h] BYREF
  char v20; // [rsp+60h] [rbp+8h]

  v2 = a1 + 2;
  v5.Ptr = 0LL;
  AcquireSRWLockExclusive(a1 + 2);
  v6.Ptr = a1->Ptr;
  if ( !a1->Ptr )
  {
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    return 0LL;
  }
  v7 = (struct IUnknown **)*((_QWORD *)v6.Ptr + 2);
  v8 = 0LL;
  v20 = 0;
  v9 = ((__int64)(*((_QWORD *)v6.Ptr + 3) - (_QWORD)v7) >> 3) - 1;
  if ( !v9 )
  {
    v17 = *v7 == a2;
LABEL_21:
    if ( v17 )
    {
      AcquireSRWLockExclusive(a1 + 1);
      if ( &v19 != (char *)a1 )
      {
        v5.Ptr = a1->Ptr;
        a1->Ptr = 0LL;
      }
      v18.Ptr = a1->Ptr;
      a1->Ptr = v8;
      if ( v18.Ptr )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v18.Ptr);
      if ( a1 != (RTL_SRWLOCK *)-8LL )
        ReleaseSRWLockExclusive(a1 + 1);
      goto LABEL_10;
    }
LABEL_8:
    if ( v8 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v8);
LABEL_10:
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    if ( v5.Ptr )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v5.Ptr);
    return 0LL;
  }
  v10 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v10;
  if ( v10 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>(v10);
    v11[2] = 0LL;
    v11[3] = 0LL;
    v11[4] = 0LL;
    *v11 = &Microsoft::WRL::Details::EventTargetArray::`vftable';
    v13 = Microsoft::WRL::Details::EventTargetArray::RuntimeClassInitialize(
            (Microsoft::WRL::Details::EventTargetArray *)v11,
            v9);
    if ( v13 >= 0 )
    {
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)((char *)v11 + 12), v12);
      v13 = 0;
      v8 = (Microsoft::WRL::Details::EventTargetArray *)v11;
    }
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v11);
    if ( v13 >= 0 )
    {
      v14 = (struct IUnknown **)*((_QWORD *)a1->Ptr + 2);
      v15 = (void **)*((_QWORD *)a1->Ptr + 4);
      if ( v14 != *((struct IUnknown ***)a1->Ptr + 3) )
      {
        v17 = 0;
        while ( 1 )
        {
          if ( v17 || a2 != *v14 )
          {
            if ( !v9 )
              goto LABEL_21;
            Microsoft::WRL::Details::EventTargetArray::AddTail(v8, *v14, *v15);
            v17 = v20;
            ++v15;
            --v9;
          }
          else
          {
            v17 = 1;
            v20 = 1;
          }
          if ( ++v14 == *((struct IUnknown ***)a1->Ptr + 3) )
            goto LABEL_21;
        }
      }
      goto LABEL_8;
    }
    if ( v8 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v8);
  }
  else
  {
    v13 = -2147024882;
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return (unsigned int)v13;
}
