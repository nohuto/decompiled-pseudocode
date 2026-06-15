/*
 * XREFs of ?ForEachStream@CBaseStreamGroupProxy@@UEAAXV?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x180016E30
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_530575f8b419a08780554bb070101504_::operator() @ 0x180017008 (_lambda_530575f8b419a08780554bb070101504_--operator().c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x180027BB0 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??0?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@$$QEAV01@@Z @ 0x180048C0C (--0-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@$$QEAV01@@Z.c)
 *     _lambda_95aa79fe68308ee8971a6083ea2ebe7c_::__lambda_95aa79fe68308ee8971a6083ea2ebe7c_ @ 0x180048C84 (_lambda_95aa79fe68308ee8971a6083ea2ebe7c_--__lambda_95aa79fe68308ee8971a6083ea2ebe7c_.c)
 *     ??R?$_Func_class@XPEAUIAudioStreamInfo@@@std@@QEBAXPEAUIAudioStreamInfo@@@Z @ 0x180048CBC (--R-$_Func_class@XPEAUIAudioStreamInfo@@@std@@QEBAXPEAUIAudioStreamInfo@@@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CBaseStreamGroupProxy::ForEachStream(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r14
  _BYTE *v5; // r8
  __int64 (__fastcall ***v6)(_QWORD, _BYTE *); // rcx
  _QWORD *v7; // rbx
  _QWORD *v8; // rsi
  _BYTE *v9; // rdx
  __int64 (__fastcall ***v10)(_QWORD, _BYTE *); // rcx
  __int64 *v11; // rbx
  __int64 *v12; // rdi
  __int64 v13; // rcx
  __int64 v15; // [rsp+20h] [rbp-A9h] BYREF
  _BYTE v16[56]; // [rsp+28h] [rbp-A1h] BYREF
  _BYTE *v17; // [rsp+60h] [rbp-69h]
  _BYTE v18[56]; // [rsp+70h] [rbp-59h] BYREF
  __int64 v19; // [rsp+A8h] [rbp-21h]
  _BYTE v20[64]; // [rsp+B0h] [rbp-19h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 152);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 152));
  v5 = 0LL;
  v17 = 0LL;
  v6 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a2 + 56);
  if ( v6 )
  {
    v5 = (_BYTE *)(**v6)(v6, v16);
    v17 = v5;
  }
  v7 = *(_QWORD **)(a1 + 192);
  v8 = *(_QWORD **)(a1 + 200);
  if ( v7 != v8 )
  {
    do
      std::_Func_class<void,IAudioStreamInfo *>::operator()(v16, *v7++);
    while ( v7 != v8 );
    v5 = v17;
  }
  v19 = 0LL;
  if ( v5 )
  {
    if ( v5 == v16 )
    {
      v19 = (*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v5 + 8LL))(v5, v18);
      if ( !v17 )
        goto LABEL_9;
      v9 = v16;
      LOBYTE(v9) = v17 != v16;
      (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v17 + 32LL))(v17, v9);
    }
    else
    {
      v19 = (__int64)v5;
    }
    v17 = 0LL;
  }
LABEL_9:
  lambda_95aa79fe68308ee8971a6083ea2ebe7c_::__lambda_95aa79fe68308ee8971a6083ea2ebe7c_(v16);
  std::_Func_class<void,>::_Tidy(v18);
  v19 = 0LL;
  v10 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a2 + 56);
  if ( v10 )
    v19 = (**v10)(v10, v18);
  v11 = *(__int64 **)(a1 + 216);
  v12 = *(__int64 **)(a1 + 224);
  while ( v11 != v12 )
  {
    v13 = *v11;
    v15 = v13;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    lambda_530575f8b419a08780554bb070101504_::operator()(v18, &v15);
    ++v11;
  }
  std::function<void (IAudioStreamInfo *)>::function<void (IAudioStreamInfo *)>(v20, v18);
  lambda_95aa79fe68308ee8971a6083ea2ebe7c_::__lambda_95aa79fe68308ee8971a6083ea2ebe7c_(v18);
  std::_Func_class<void,>::_Tidy(v20);
  if ( v4 )
    LeaveCriticalSection(v4);
  return std::_Func_class<void,>::_Tidy(a2);
}
