/*
 * XREFs of CreationThreadDispatcher::RunSync__lambda_bcebae3c85cfd9e005edaacce9819866___ @ 0x1801E4604
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_31e7354c0c30629dcdaa463304acc43b___::Run @ 0x1801E4800 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_31e7354c0c30629dcdaa463304acc43b___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18013FF60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@.c)
 *     ??$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@@Details@12@@Z @ 0x180169DF4 (--$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIAsyncCal.c)
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_66405e3b8e1056c6c6844002bdbc1d67_____lambda_66405e3b8e1056c6c6844002bdbc1d67___ @ 0x1801E43F8 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_66405e3b8e1056c6c6844002bdbc1d67_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CreationThreadDispatcher::RunSync__lambda_bcebae3c85cfd9e005edaacce9819866___(
        __int64 a1,
        __int64 *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  volatile signed __int32 **CAsyncCallbackWithLambda__lambda_66405e3b8e1056c6c6844002bdbc1d67_____lambda_66405e3b8e1056c6c6844002bdbc1d67; // rax
  __int64 v6; // rbx
  volatile signed __int32 *v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v13; // [rsp+30h] [rbp+8h] BYREF
  volatile signed __int32 *v14; // [rsp+40h] [rbp+18h] BYREF
  __int64 v15; // [rsp+48h] [rbp+20h] BYREF

  v13 = 0LL;
  v3 = Microsoft::WRL::AgileRef::As<IAsyncCallbackDispatcher>((Microsoft::WRL::AgileRef *)(a1 + 48), &v13);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v15 = *a2;
    CAsyncCallbackWithLambda__lambda_66405e3b8e1056c6c6844002bdbc1d67_____lambda_66405e3b8e1056c6c6844002bdbc1d67 = Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_66405e3b8e1056c6c6844002bdbc1d67_____lambda_66405e3b8e1056c6c6844002bdbc1d67___(&v14, &v15);
    v6 = (__int64)*CAsyncCallbackWithLambda__lambda_66405e3b8e1056c6c6844002bdbc1d67_____lambda_66405e3b8e1056c6c6844002bdbc1d67;
    v15 = (__int64)*CAsyncCallbackWithLambda__lambda_66405e3b8e1056c6c6844002bdbc1d67_____lambda_66405e3b8e1056c6c6844002bdbc1d67;
    *CAsyncCallbackWithLambda__lambda_66405e3b8e1056c6c6844002bdbc1d67_____lambda_66405e3b8e1056c6c6844002bdbc1d67 = 0LL;
    v7 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallback,Microsoft::WRL::FtmBase>::Release(v7);
    }
    if ( v6 )
    {
      v10 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v13 + 24LL))(v13, v6);
      v4 = v10;
      if ( v10 >= 0 )
      {
LABEL_10:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
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
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v13);
  return v4;
}
