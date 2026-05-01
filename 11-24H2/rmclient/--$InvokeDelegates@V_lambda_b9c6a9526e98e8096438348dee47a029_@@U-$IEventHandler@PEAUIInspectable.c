/*
 * XREFs of ??$InvokeDelegates@V_lambda_b9c6a9526e98e8096438348dee47a029_@@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_b9c6a9526e98e8096438348dee47a029_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x18000136C
 * Callers:
 *     ??$InvokeAll@$$T$$T@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJ$$T0@Z @ 0x1800104B0 (--$InvokeAll@$$T$$T@-$EventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$Inv.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEBAXXZ @ 0x180001578 (-InternalAddRef@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180001AE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180001FC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?Remove@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180019070 (-Remove@-$EventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$InvokeModeOptio.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001D010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_b9c6a9526e98e8096438348dee47a029_,Windows::Foundation::IEventHandler<IInspectable *>>(
        _QWORD **a1,
        _QWORD *a2,
        __int64 a3)
{
  unsigned int v3; // edi
  _QWORD *v4; // rbx
  _QWORD *v6; // r9
  __int64 *v8; // r14
  _QWORD *i; // rsi
  int v10; // eax
  __int64 v11; // rax
  unsigned int v12; // r15d
  int MatchingRestrictedErrorInfo; // ebp
  _QWORD *v15; // [rsp+58h] [rbp+10h] BYREF
  __int64 v16; // [rsp+68h] [rbp+20h]

  v3 = 0;
  v4 = 0LL;
  v6 = a2;
  if ( a2 )
  {
    v15 = a2;
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalAddRef(&v15, a2, a3);
    v15 = 0LL;
    v4 = v6;
  }
  v8 = (__int64 *)v4[4];
  for ( i = (_QWORD *)v4[2]; i != (_QWORD *)v4[3]; ++i )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)*i + 24LL))(*i, **a1, *a1[1], v6);
    v3 = v10;
    if ( v10 == -2147417848 || v10 == -2147023174 || v10 == -1996357631 || v10 == -2147418105 || v10 == -2147418094 )
    {
      RoTransformError((unsigned int)v10, 0LL, 0LL);
      Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        a3,
        *i);
    }
    else
    {
      if ( v10 >= 0 )
        goto LABEL_15;
      if ( (unsigned int)IsErrorPropagationEnabled() )
      {
        v11 = *v8;
        v15 = 0LL;
        v12 = v3;
        v16 = v11;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
        MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo(v3, &v15);
        if ( MatchingRestrictedErrorInfo >= 0 )
          MatchingRestrictedErrorInfo = RoReportFailedDelegate(*i, v15);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
        v3 = 0;
        if ( MatchingRestrictedErrorInfo < 0 )
          v3 = v12;
        break;
      }
      RoTransformError(v3, 0LL, 0LL);
    }
    v3 = 0;
LABEL_15:
    ++v8;
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v4, a2, a3);
  return v3;
}
