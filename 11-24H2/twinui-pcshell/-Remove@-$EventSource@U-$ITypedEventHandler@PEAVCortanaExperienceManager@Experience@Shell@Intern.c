/*
 * XREFs of ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@UWindowId@UI@5@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180038E80
 * Callers:
 *     ?remove_WindowChanged@UndockedSearchAppExperienceManager@@UEAAJUEventRegistrationToken@@@Z @ 0x180038E40 (-remove_WindowChanged@UndockedSearchAppExperienceManager@@UEAAJUEventRegistrationToken@@@Z.c)
 *     ??$InvokeDelegates@V_lambda_bc798bc91d3352a764cb262da2d2d108_@@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@UWindowId@UI@5@@Foundation@Windows@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_bc798bc91d3352a764cb262da2d2d108_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@UWindowId@UI@5@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x1803AEB18 (--$InvokeDelegates@V_lambda_bc798bc91d3352a764cb262da2d2d108_@@U-$ITypedEventHandler@PEAVCortana.c)
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180039620 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180039AB8 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003B490 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x18003B714 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x18003B768 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::UI::WindowId>,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2)
{
  RTL_SRWLOCK *v2; // rbp
  __int64 v4; // rdi
  _QWORD *Ptr; // r13
  struct IUnknown **v7; // rax
  Microsoft::WRL::Details::EventTargetArray *v8; // rbx
  __int64 v9; // r13
  unsigned __int64 v10; // r13
  _QWORD *v11; // rax
  _QWORD *v12; // r15
  volatile int *v13; // rdx
  int v14; // r14d
  struct IUnknown **v15; // r14
  void **v16; // r15
  bool v17; // cl
  _QWORD *v19; // [rsp+20h] [rbp-48h]
  char v20; // [rsp+70h] [rbp+8h]
  Microsoft::WRL::Details::EventTargetArray *v21; // [rsp+80h] [rbp+18h] BYREF
  __int64 v22; // [rsp+88h] [rbp+20h] BYREF

  v2 = a1 + 2;
  v4 = 0LL;
  v22 = 0LL;
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
  v21 = 0LL;
  v20 = 0;
  v10 = (v9 >> 3) - 1;
  if ( !v10 )
  {
    v17 = *v7 == a2;
LABEL_13:
    if ( v17 )
    {
      AcquireSRWLockExclusive(a1 + 1);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v22, a1);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(a1, &v21);
      if ( a1 != (RTL_SRWLOCK *)-8LL )
        ReleaseSRWLockExclusive(a1 + 1);
      v8 = v21;
      v4 = v22;
    }
LABEL_17:
    if ( v8 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v8);
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v4);
    return 0LL;
  }
  v11 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v11;
  if ( v11 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>(v11);
    v12[2] = 0LL;
    v12[3] = 0LL;
    v12[4] = 0LL;
    *v12 = &Microsoft::WRL::Details::EventTargetArray::`vftable';
    v14 = Microsoft::WRL::Details::EventTargetArray::RuntimeClassInitialize(
            (Microsoft::WRL::Details::EventTargetArray *)v12,
            v10);
    if ( v14 >= 0 )
    {
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)((char *)v12 + 12), v13);
      v8 = (Microsoft::WRL::Details::EventTargetArray *)v12;
      v19 = v12;
      v21 = (Microsoft::WRL::Details::EventTargetArray *)v12;
      v14 = 0;
    }
    else
    {
      v19 = 0LL;
    }
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v12);
    if ( v14 >= 0 )
    {
      v15 = (struct IUnknown **)*((_QWORD *)a1->Ptr + 2);
      v16 = (void **)*((_QWORD *)a1->Ptr + 4);
      if ( v15 != *((struct IUnknown ***)a1->Ptr + 3) )
      {
        v17 = 0;
        while ( 1 )
        {
          if ( v17 || a2 != *v15 )
          {
            if ( !v10 )
              goto LABEL_13;
            Microsoft::WRL::Details::EventTargetArray::AddTail(v8, *v15, *v16);
            v17 = v20;
            ++v16;
            --v10;
          }
          else
          {
            v17 = 1;
            v20 = 1;
          }
          if ( ++v15 == *((struct IUnknown ***)a1->Ptr + 3) )
            goto LABEL_13;
        }
      }
      goto LABEL_17;
    }
    if ( v19 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v8);
  }
  else
  {
    v14 = -2147024882;
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return (unsigned int)v14;
}
