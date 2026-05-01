/*
 * XREFs of CreationThreadDispatcher::RunSync__lambda_d8f5fa1139a2b5a955c089535e3f63ea___ @ 0x18055E43C
 * Callers:
 *     _lambda_33b4202f4967ef1cd2a31cded00016d1_::operator() @ 0x18055E664 (_lambda_33b4202f4967ef1cd2a31cded00016d1_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800AC91C (--1-$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18013FF60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@.c)
 *     ??$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@@Details@12@@Z @ 0x180169DF4 (--$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIAsyncCal.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_78799983d33d247de5fc03aad4230606_____lambda_78799983d33d247de5fc03aad4230606___ @ 0x18055E228 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_78799983d33d247de5fc03aad4230606_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreationThreadDispatcher::RunSync__lambda_d8f5fa1139a2b5a955c089535e3f63ea___(
        __int64 a1,
        __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rax
  volatile signed __int32 **CAsyncCallbackWithLambda__lambda_78799983d33d247de5fc03aad4230606_____lambda_78799983d33d247de5fc03aad4230606; // rax
  __int64 v7; // rbx
  volatile signed __int32 *v8; // rcx
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  HGDIOBJ ho; // [rsp+20h] [rbp-10h] BYREF
  __int64 v14; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  void *v16; // [rsp+50h] [rbp+20h] BYREF
  volatile signed __int32 *v17; // [rsp+60h] [rbp+30h] BYREF
  volatile signed __int32 *v18; // [rsp+68h] [rbp+38h] BYREF

  v16 = 0LL;
  v3 = Microsoft::WRL::AgileRef::As<IAsyncCallbackDispatcher>((Microsoft::WRL::AgileRef *)(a1 + 48), &v16);
  v4 = v3;
  if ( v3 >= 0 )
  {
    ho = *(HGDIOBJ *)a2;
    *(_QWORD *)a2 = 0LL;
    v5 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 8) = 0LL;
    v14 = v5;
    CAsyncCallbackWithLambda__lambda_78799983d33d247de5fc03aad4230606_____lambda_78799983d33d247de5fc03aad4230606 = Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_78799983d33d247de5fc03aad4230606_____lambda_78799983d33d247de5fc03aad4230606___(&v17, &ho);
    v7 = (__int64)*CAsyncCallbackWithLambda__lambda_78799983d33d247de5fc03aad4230606_____lambda_78799983d33d247de5fc03aad4230606;
    v18 = *CAsyncCallbackWithLambda__lambda_78799983d33d247de5fc03aad4230606_____lambda_78799983d33d247de5fc03aad4230606;
    *CAsyncCallbackWithLambda__lambda_78799983d33d247de5fc03aad4230606_____lambda_78799983d33d247de5fc03aad4230606 = 0LL;
    v8 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallback,Microsoft::WRL::FtmBase>::Release(v8);
    }
    wil::com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>::~com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>(&v14);
    if ( ho )
      DeleteObject(ho);
    if ( v7 )
    {
      v11 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v16 + 24LL))(v16, v7);
      v4 = v11;
      if ( v11 >= 0 )
      {
LABEL_12:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v18);
        goto LABEL_13;
      }
      v9 = (unsigned int)v11;
      v10 = 81LL;
    }
    else
    {
      v4 = -2147024882;
      v9 = 2147942414LL;
      v10 = 80LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"onecoreuap\\internal\\shell\\inc\\CreationThreadDispatcher.h",
      (const char *)v9);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x49,
    (int)"onecoreuap\\internal\\shell\\inc\\CreationThreadDispatcher.h",
    (const char *)(unsigned int)v3);
LABEL_13:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v16);
  return v4;
}
