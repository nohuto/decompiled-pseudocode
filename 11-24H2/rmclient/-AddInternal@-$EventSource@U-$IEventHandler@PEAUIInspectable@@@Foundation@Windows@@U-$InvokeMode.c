/*
 * XREFs of ?AddInternal@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x1800017B8
 * Callers:
 *     ?Add@?$AgileEventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18000159C (-Add@-$AgileEventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$InvokeModeOpt.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x180001E88 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL.c)
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x180001EA0 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180001FC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?InternalRelease@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x180002020 (-InternalRelease@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180002174 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180002790 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??1?$MakeAllocator@VEventTargetArray@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001377C (--1-$MakeAllocator@VEventTargetArray@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180013CF8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001D010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2,
        void *a3,
        ...)
{
  RTL_SRWLOCK *v3; // r14
  struct IUnknown *v5; // r15
  unsigned __int64 v6; // rdi
  Microsoft::WRL::Details::EventTargetArray *v7; // rbp
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  volatile int *v10; // rdx
  int v11; // edi
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  _QWORD *Ptr; // rax
  _QWORD *v17; // rbx
  __int64 *v18; // r12
  __int64 *v19; // r15
  __int64 v20; // rdi
  __int64 v21; // r13
  __int64 v22; // rcx
  void *v23; // r8
  PVOID v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // r8
  _QWORD v27[11]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v28; // [rsp+80h] [rbp+8h] BYREF
  struct IUnknown *v29; // [rsp+88h] [rbp+10h]
  void *v30; // [rsp+90h] [rbp+18h]
  _QWORD *v31; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  va_list va1; // [rsp+A0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v31 = va_arg(va1, _QWORD *);
  v30 = a3;
  v29 = a2;
  v3 = a1 + 2;
  v5 = a2;
  *v31 = 0LL;
  AcquireSRWLockExclusive(a1 + 2);
  v6 = 1LL;
  if ( a1->Ptr )
    v6 = ((__int64)(*((_QWORD *)a1->Ptr + 3) - *((_QWORD *)a1->Ptr + 2)) >> 3) + 1;
  v7 = 0LL;
  v8 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v28 = v8;
  v9 = v8;
  if ( !v8 )
  {
    Microsoft::WRL::Details::MakeAllocator<Microsoft::WRL::Details::EventTargetArray>::~MakeAllocator<Microsoft::WRL::Details::EventTargetArray>(&v28);
    v11 = -2147024882;
LABEL_11:
    if ( v3 )
      ReleaseSRWLockExclusive(v3);
    return (unsigned int)v11;
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>(v8);
  *v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  v9[2] = 0LL;
  *v9 = &Microsoft::WRL::Details::EventTargetArray::`vftable';
  v9[3] = 0LL;
  v9[4] = 0LL;
  v11 = Microsoft::WRL::Details::EventTargetArray::RuntimeClassInitialize(
          (Microsoft::WRL::Details::EventTargetArray *)v9,
          v6);
  if ( v11 >= 0 )
  {
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)((char *)v9 + 12), v10);
    v7 = (Microsoft::WRL::Details::EventTargetArray *)v9;
    v11 = 0;
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v9, v10, v12);
  if ( v11 < 0 )
  {
    if ( v7 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
        v7,
        v13,
        v14);
    goto LABEL_11;
  }
  Ptr = a1->Ptr;
  if ( a1->Ptr )
  {
    v17 = (_QWORD *)Ptr[2];
    v18 = (__int64 *)Ptr[4];
    if ( v17 != (_QWORD *)Ptr[3] )
    {
      do
      {
        v19 = (__int64 *)*((_QWORD *)v7 + 3);
        v20 = *v17;
        v21 = *v18;
        if ( *v19 != *v17 )
        {
          if ( v20 )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v20 + 8LL))(*v17);
          v22 = *v19;
          *v19 = v20;
          if ( v22 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
        }
        ++v18;
        ++v17;
        *(_QWORD *)(*((_QWORD *)v7 + 4) + 8 * ((__int64)(*((_QWORD *)v7 + 3) - *((_QWORD *)v7 + 2)) >> 3)) = v21;
        *((_QWORD *)v7 + 3) += 8LL;
      }
      while ( v17 != *((_QWORD **)a1->Ptr + 3) );
      v5 = v29;
    }
  }
  v23 = v30;
  *v31 = v5;
  Microsoft::WRL::Details::EventTargetArray::AddTail(v7, v5, v23);
  AcquireSRWLockExclusive(a1 + 1);
  v24 = 0LL;
  if ( v27 != (_QWORD *)a1 )
  {
    v24 = a1->Ptr;
    a1->Ptr = 0LL;
  }
  v27[0] = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease(v27);
  v31 = a1->Ptr;
  a1->Ptr = v7;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease((_QWORD **)va);
  if ( a1 != (RTL_SRWLOCK *)-8LL )
    ReleaseSRWLockExclusive(a1 + 1);
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  if ( v24 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
      v24,
      v25,
      v26);
  return 0LL;
}
