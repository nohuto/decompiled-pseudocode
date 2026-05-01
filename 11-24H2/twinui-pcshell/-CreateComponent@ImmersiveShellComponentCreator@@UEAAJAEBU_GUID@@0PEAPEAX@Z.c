/*
 * XREFs of ?CreateComponent@ImmersiveShellComponentCreator@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180027030
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ImmersiveShellComponentCreator::CreateComponent(
        ImmersiveShellComponentCreator *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rax
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  int v12; // ebx
  PVOID v13; // rbx
  RTL_SRWLOCK *v14; // rsi
  void *v15; // rcx
  __int64 v16; // rcx
  int v18; // eax
  __int64 v19; // rcx
  RTL_SRWLOCK *v20; // rsi
  void *v21; // rcx
  int v22; // [rsp+20h] [rbp-30h]
  int v23; // [rsp+30h] [rbp-20h] BYREF
  PVOID v24; // [rsp+38h] [rbp-18h] BYREF
  PVOID Ptr[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v24 = 0LL;
  InitOnceExecuteOnce(
    &Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::initOnceInProc_,
    _lambda_5f1dd388c03885d19ee806198d2ac5ef_::_lambda_invoker_cdecl_,
    0LL,
    0LL);
  byte_1808CCD20 = 1;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
  v24 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64 *))(Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_
                                            + 32))(&Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_)
     + 8;
  v8 = (*(__int64 (__fastcall **)(__int64 *))(Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_
                                            + 40))(&Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_);
  while ( 1 )
  {
    if ( v7 >= v8 )
    {
      v12 = -2147221231;
      goto LABEL_18;
    }
    if ( *(_QWORD *)v7 )
    {
      v9 = *(_QWORD **)(*(_QWORD *)v7 + 8LL);
      v10 = *v9 - *(_QWORD *)&a2->Data1;
      if ( *v9 == *(_QWORD *)&a2->Data1 )
        v10 = v9[1] - *(_QWORD *)a2->Data4;
      if ( !v10 )
        break;
    }
    v7 += 8LL;
  }
  _mm_lfence();
  v23 = 1;
  v11 = *(_QWORD *)v7;
  v24 = 0LL;
  Ptr[0] = 0LL;
  if ( !**(_QWORD **)(v11 + 24) )
    goto LABEL_9;
  v20 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(__int64 *))(Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_
                                                            + 56))(&Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_);
  AcquireSRWLockShared(v20);
  v21 = **(void ***)(v11 + 24);
  if ( !v21 )
  {
    if ( v20 )
      ReleaseSRWLockShared(v20);
LABEL_9:
    v12 = (*(__int64 (__fastcall **)(int *, __int64, GUID *, PVOID *))v11)(
            &v23,
            v11,
            &GUID_00000001_0000_0000_c000_000000000046,
            Ptr);
    if ( v12 >= 0 )
    {
      if ( (v23 & 4) != 0 )
        goto LABEL_16;
      v13 = 0LL;
      v14 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(__int64 *))(Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_
                                                                + 56))(&Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_);
      AcquireSRWLockExclusive(v14);
      v15 = **(void ***)(v11 + 24);
      if ( v15 )
      {
        v13 = DecodePointer(v15);
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)v13 + 8LL))(v13);
      }
      else
      {
        **(_QWORD **)(v11 + 24) = EncodePointer(Ptr[0]);
      }
      if ( v14 )
        ReleaseSRWLockExclusive(v14);
      if ( v13 )
      {
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr[0] + 16LL))(Ptr[0]);
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr[0] + 16LL))(Ptr[0]);
      }
      else
      {
LABEL_16:
        v13 = Ptr[0];
      }
      v24 = v13;
      v12 = 0;
    }
    goto LABEL_18;
  }
  Ptr[0] = DecodePointer(v21);
  v12 = (**(__int64 (__fastcall ***)(PVOID, GUID *, __int64 *))Ptr[0])(
          Ptr[0],
          &GUID_00000001_0000_0000_c000_000000000046,
          (__int64 *)&v24);
  if ( v20 )
    ReleaseSRWLockShared(v20);
LABEL_18:
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\private\\immersiveshellcomponentcreator.h",
      (const char *)(unsigned int)v12,
      v22);
    v16 = (__int64)v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    return (unsigned int)v12;
  }
  v18 = (*(__int64 (__fastcall **)(PVOID, _QWORD, const struct _GUID *, void **))(*(_QWORD *)v24 + 24LL))(
          v24,
          0LL,
          a3,
          a4);
  v12 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\private\\immersiveshellcomponentcreator.h",
      (const char *)(unsigned int)v18,
      v22);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
    return (unsigned int)v12;
  }
  v19 = (__int64)v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  return 0LL;
}
