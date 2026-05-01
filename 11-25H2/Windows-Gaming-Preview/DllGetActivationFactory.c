/*
 * XREFs of DllGetActivationFactory @ 0x18000B7C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180001D00 (__security_check_cookie.c)
 *     ?GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PEAPEAUIUnknown@@@Z @ 0x18000B3C8 (-GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DllGetActivationFactory(HSTRING string, _QWORD *Ptr)
{
  PCWSTR StringRawBuffer; // r14
  const struct _GUID **v5; // rbx
  unsigned __int64 v6; // rbp
  __int64 v7; // rax
  unsigned __int16 *v8; // rcx
  __int64 v9; // rax
  int v10; // r8d
  int v11; // edx
  unsigned int v12; // ebx
  BOOL hasEmbedNull; // [rsp+30h] [rbp-58h] BYREF
  int v15; // [rsp+34h] [rbp-54h] BYREF
  _OWORD v16[2]; // [rsp+38h] [rbp-50h] BYREF
  int v17; // [rsp+58h] [rbp-30h]
  wchar_t v18; // [rsp+5Ch] [rbp-2Ch]

  InitOnceExecuteOnce(
    &Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::initOnceInProc_,
    (PINIT_ONCE_FN)_lambda_5f1dd388c03885d19ee806198d2ac5ef_::_lambda_invoker_cdecl_,
    0LL,
    0LL);
  byte_180059F18 = 1;
  *Ptr = 0LL;
  hasEmbedNull = 0;
  if ( WindowsIsStringEmpty(string) || WindowsStringHasEmbeddedNull(string, &hasEmbedNull) < 0 || hasEmbedNull )
  {
    v16[0] = *(_OWORD *)L"activatibleClassId";
    v16[1] = *(_OWORD *)L"bleClassId";
    v17 = *(_DWORD *)L"Id";
    v18 = aActivatiblecla[18];
    v12 = -2147024809;
    RoOriginateErrorW(2147942487LL, 18LL, v16);
  }
  else
  {
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    v5 = (const struct _GUID **)((*(__int64 (__fastcall **)(void *))(Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_
                                                                   + 40LL))(&Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_)
                               + 8);
    v6 = (*(__int64 (__fastcall **)(void *))(Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_
                                           + 48LL))(&Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_);
    if ( (unsigned __int64)v5 >= v6 )
    {
LABEL_11:
      v12 = -2147221231;
      RoOriginateError(2147746065LL, string);
    }
    else
    {
      while ( 1 )
      {
        if ( *v5 )
        {
          v7 = (*(__int64 (**)(void))(*v5)->Data4)();
          v8 = (unsigned __int16 *)StringRawBuffer;
          v9 = v7 - (_QWORD)StringRawBuffer;
          do
          {
            v10 = *(unsigned __int16 *)((char *)v8 + v9);
            v11 = *v8 - v10;
            if ( v11 )
              break;
            ++v8;
          }
          while ( v10 );
          if ( !v11 )
            break;
        }
        if ( (unsigned __int64)++v5 >= v6 )
          goto LABEL_11;
      }
      v15 = 1;
      return (unsigned int)Microsoft::WRL::Details::GetCacheEntry(
                             (Microsoft::WRL::Details *)&Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_,
                             (struct Microsoft::WRL::Details::ModuleBase *)&v15,
                             &GUID_00000035_0000_0000_c000_000000000046.Data1,
                             *v5,
                             Ptr);
    }
  }
  return v12;
}
