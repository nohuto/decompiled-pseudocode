/*
 * XREFs of CreationThreadDispatcher::RunSync__lambda_6bd17a0f38fc15379b652e4a7dca1691___ @ 0x1806BC3CC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4___::Run @ 0x1806BCF10 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002CCD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 *     ??$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801A8EE8 (--$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIAsyncCal.c)
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_a3b1a5efa940eb4938a491b1a4a3cfe8_____lambda_a3b1a5efa940eb4938a491b1a4a3cfe8___ @ 0x1806BC1A0 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_a3b1a5efa940eb4938a491b1a4a3cfe8_.c)
 *     _lambda_6bd17a0f38fc15379b652e4a7dca1691_::_lambda_6bd17a0f38fc15379b652e4a7dca1691_ @ 0x1806BC4BC (_lambda_6bd17a0f38fc15379b652e4a7dca1691_--_lambda_6bd17a0f38fc15379b652e4a7dca1691_.c)
 *     _lambda_6bd17a0f38fc15379b652e4a7dca1691_::__lambda_6bd17a0f38fc15379b652e4a7dca1691_ @ 0x1806BC7B8 (_lambda_6bd17a0f38fc15379b652e4a7dca1691_--__lambda_6bd17a0f38fc15379b652e4a7dca1691_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreationThreadDispatcher::RunSync__lambda_6bd17a0f38fc15379b652e4a7dca1691___(
        __int64 a1,
        __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  volatile signed __int32 **CAsyncCallbackWithLambda__lambda_a3b1a5efa940eb4938a491b1a4a3cfe8_____lambda_a3b1a5efa940eb4938a491b1a4a3cfe8; // rax
  __int64 v6; // rbx
  volatile signed __int32 *v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  _BYTE v12[32]; // [rsp+20h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v14; // [rsp+60h] [rbp+20h] BYREF
  volatile signed __int32 *v15; // [rsp+70h] [rbp+30h] BYREF
  volatile signed __int32 *v16; // [rsp+78h] [rbp+38h] BYREF

  v14 = 0LL;
  v3 = Microsoft::WRL::AgileRef::As<IAsyncCallbackDispatcher>((_QWORD *)(a1 + 48), &v14);
  v4 = v3;
  if ( v3 >= 0 )
  {
    lambda_6bd17a0f38fc15379b652e4a7dca1691_::_lambda_6bd17a0f38fc15379b652e4a7dca1691_(v12, a2);
    CAsyncCallbackWithLambda__lambda_a3b1a5efa940eb4938a491b1a4a3cfe8_____lambda_a3b1a5efa940eb4938a491b1a4a3cfe8 = Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_a3b1a5efa940eb4938a491b1a4a3cfe8_____lambda_a3b1a5efa940eb4938a491b1a4a3cfe8___(&v15, (__int64)v12);
    v6 = (__int64)*CAsyncCallbackWithLambda__lambda_a3b1a5efa940eb4938a491b1a4a3cfe8_____lambda_a3b1a5efa940eb4938a491b1a4a3cfe8;
    v16 = *CAsyncCallbackWithLambda__lambda_a3b1a5efa940eb4938a491b1a4a3cfe8_____lambda_a3b1a5efa940eb4938a491b1a4a3cfe8;
    *CAsyncCallbackWithLambda__lambda_a3b1a5efa940eb4938a491b1a4a3cfe8_____lambda_a3b1a5efa940eb4938a491b1a4a3cfe8 = 0LL;
    v7 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release(v7);
    }
    lambda_6bd17a0f38fc15379b652e4a7dca1691_::__lambda_6bd17a0f38fc15379b652e4a7dca1691_(v12);
    if ( v6 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 24LL))(v14, v6);
      v4 = v10;
      if ( v10 >= 0 )
      {
LABEL_10:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
        goto LABEL_11;
      }
      v8 = (unsigned int)v10;
      v9 = 81LL;
    }
    else
    {
      v4 = -2147024882;
      v8 = 2147942414LL;
      v9 = 80LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\internal\\shell\\inc\\creationthreaddispatcher.h",
      (const char *)v8);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x49,
    (int)"onecoreuap\\internal\\shell\\inc\\creationthreaddispatcher.h",
    (const char *)(unsigned int)v3);
LABEL_11:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
  return v4;
}
