/*
 * XREFs of ?ForEachStream@CBaseStreamGroupProxy@@UEAAXV?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x180023B60
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$_Func_class@XPEAUIAudioStreamInfo@@@std@@QEBAXPEAUIAudioStreamInfo@@@Z @ 0x180023334 (--R-$_Func_class@XPEAUIAudioStreamInfo@@@std@@QEBAXPEAUIAudioStreamInfo@@@Z.c)
 *     _lambda_95aa79fe68308ee8971a6083ea2ebe7c_::__lambda_95aa79fe68308ee8971a6083ea2ebe7c_ @ 0x180023370 (_lambda_95aa79fe68308ee8971a6083ea2ebe7c_--__lambda_95aa79fe68308ee8971a6083ea2ebe7c_.c)
 *     ??0?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@$$QEAV01@@Z @ 0x1800235CC (--0-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@$$QEAV01@@Z.c)
 *     ?_Tidy@?$_Func_class@XPEAUIAudioStreamInfo@@@std@@IEAAXXZ @ 0x180023650 (-_Tidy@-$_Func_class@XPEAUIAudioStreamInfo@@@std@@IEAAXXZ.c)
 *     _lambda_530575f8b419a08780554bb070101504_::operator() @ 0x180023D38 (_lambda_530575f8b419a08780554bb070101504_--operator().c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CBaseStreamGroupProxy::ForEachStream(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r14
  __int64 v5; // rdx
  _BYTE *v6; // r8
  __int64 (__fastcall ***v7)(_QWORD, _BYTE *); // rcx
  __int64 *v8; // rbx
  __int64 *v9; // rsi
  _BYTE *v10; // rdx
  __int64 v11; // rdx
  __int64 (__fastcall ***v12)(_QWORD, _BYTE *); // rcx
  __int64 *v13; // rbx
  __int64 *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v20; // [rsp+20h] [rbp-A9h] BYREF
  _BYTE v21[56]; // [rsp+28h] [rbp-A1h] BYREF
  _BYTE *v22; // [rsp+60h] [rbp-69h]
  _BYTE v23[56]; // [rsp+70h] [rbp-59h] BYREF
  __int64 v24; // [rsp+A8h] [rbp-21h]
  _BYTE v25[64]; // [rsp+B0h] [rbp-19h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 152);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 152));
  v6 = 0LL;
  v22 = 0LL;
  v7 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a2 + 56);
  if ( v7 )
  {
    v6 = (_BYTE *)(**v7)(v7, v21);
    v22 = v6;
  }
  v8 = *(__int64 **)(a1 + 192);
  v9 = *(__int64 **)(a1 + 200);
  if ( v8 != v9 )
  {
    do
      std::_Func_class<void,IAudioStreamInfo *>::operator()((__int64)v21, *v8++);
    while ( v8 != v9 );
    v6 = v22;
  }
  v24 = 0LL;
  if ( v6 )
  {
    if ( v6 == v21 )
    {
      v24 = (*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v6 + 8LL))(v6, v23);
      if ( !v22 )
        goto LABEL_9;
      v10 = v21;
      LOBYTE(v10) = v22 != v21;
      (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v22 + 32LL))(v22, v10);
    }
    else
    {
      v24 = (__int64)v6;
    }
    v22 = 0LL;
  }
LABEL_9:
  lambda_95aa79fe68308ee8971a6083ea2ebe7c_::__lambda_95aa79fe68308ee8971a6083ea2ebe7c_((__int64)v21, v5);
  std::_Func_class<void,IAudioStreamInfo *>::_Tidy((__int64)v23, v11);
  v24 = 0LL;
  v12 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a2 + 56);
  if ( v12 )
    v24 = (**v12)(v12, v23);
  v13 = *(__int64 **)(a1 + 216);
  v14 = *(__int64 **)(a1 + 224);
  while ( v13 != v14 )
  {
    v15 = *v13;
    v20 = v15;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    lambda_530575f8b419a08780554bb070101504_::operator()(v23, &v20);
    ++v13;
  }
  std::function<void (IAudioStreamInfo *)>::function<void (IAudioStreamInfo *)>((__int64)v25, (__int64)v23);
  lambda_95aa79fe68308ee8971a6083ea2ebe7c_::__lambda_95aa79fe68308ee8971a6083ea2ebe7c_((__int64)v23, v16);
  std::_Func_class<void,IAudioStreamInfo *>::_Tidy((__int64)v25, v17);
  if ( v4 )
    LeaveCriticalSection(v4);
  return std::_Func_class<void,IAudioStreamInfo *>::_Tidy(a2, v18);
}
