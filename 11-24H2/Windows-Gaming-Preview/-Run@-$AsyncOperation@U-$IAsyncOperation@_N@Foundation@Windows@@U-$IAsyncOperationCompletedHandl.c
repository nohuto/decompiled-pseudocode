/*
 * XREFs of ?Run@?$AsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@V?$CBasicResult@E$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAXXZ @ 0x18002E4D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_AfterExecute@?$AsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@V?$CBasicResult@E$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXJ@Z @ 0x18002FEE8 (-_AfterExecute@-$AsyncOperation@U-$IAsyncOperation@_N@Foundation@Windows@@U-$IAsyncOperationComp.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Windows::Internal::CBasicResult<unsigned char,0>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::Run(
        __int64 a1)
{
  signed __int32 v2; // edx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 result; // rax
  int v7; // eax
  __int64 v8; // rdx
  unsigned __int32 v9; // [rsp+40h] [rbp+10h] BYREF
  signed __int32 v10; // [rsp+48h] [rbp+18h] BYREF
  signed __int32 v11; // [rsp+50h] [rbp+20h] BYREF

  v9 = 0;
  v10 = -2;
  _InterlockedCompareExchange(&v10, *(_DWORD *)(a1 - 144), -2);
  if ( v10 )
  {
    v2 = *(_DWORD *)(a1 - 144);
    v11 = -2;
    _InterlockedCompareExchange(&v11, v2, -2);
    if ( v11 != 3 )
      goto LABEL_6;
    _InterlockedCompareExchange((volatile signed __int32 *)&v9, *(_DWORD *)(a1 - 140), v9);
    v3 = *(_QWORD *)(a1 - 152);
    if ( v3 )
      SetRestrictedErrorInfo(v3);
    v4 = v9;
    if ( (v9 & 0x80000000) == 0 )
    {
LABEL_6:
      v4 = 2147943623LL;
      v9 = -2147023673;
    }
  }
  else
  {
    v4 = v9;
  }
  v5 = a1 - 208;
  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v5 + 256));
  if ( (_DWORD)result == 1 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(v5 + 264) + 8LL))(
           *(_QWORD *)(v5 + 264),
           1LL,
           v4,
           v5 + 288);
    if ( v7 >= 0 && *(_BYTE *)(v5 + 297) )
    {
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 280), 0xFFFFFFFF);
      if ( (_DWORD)result != 1 )
        return result;
      v8 = *(unsigned int *)(v5 + 284);
    }
    else
    {
      v8 = (unsigned int)v7;
    }
    return Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Windows::Internal::CBasicResult<unsigned char,0>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::_AfterExecute(
             v5,
             v8);
  }
  return result;
}
