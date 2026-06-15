/*
 * XREFs of ?IsAudioFormatSupported@CAPOWrapperClient@@AEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0009_0001@@PEAUIAudioMediaType@@1PEAPEAU3@@Z @ 0x180025100
 * Callers:
 *     ?IsInputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x180024E70 (-IsInputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     ?IsOutputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x1800715F0 (-IsOutputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x180019F4C (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     CreateAudioMediaType_Unsafe @ 0x1800A6ED8 (CreateAudioMediaType_Unsafe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAPOWrapperClient::IsAudioFormatSupported(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned int v6; // r14d
  __int64 v8; // rdi
  __int64 v9; // r9
  __int64 *v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // ebx
  void *v13; // rcx
  int AudioMediaType_Unsafe; // eax
  unsigned int v15; // edi
  void *v16; // rcx
  void *v18; // rcx
  __int64 v19; // rdx
  int v20[2]; // [rsp+38h] [rbp-18h] BYREF
  char v21; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  LPVOID pv; // [rsp+70h] [rbp+20h] BYREF

  v6 = a2;
  if ( !*(_QWORD *)(a1 + 88) )
  {
    v12 = -2147024809;
    v19 = 315LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
      (const char *)v12);
    return v12;
  }
  v8 = 0LL;
  if ( a3 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 40LL))(a3);
    if ( !v8 )
    {
      v12 = -2004287480;
      v19 = 321LL;
      goto LABEL_23;
    }
  }
  v9 = 0LL;
  if ( a4 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 40LL))(a4, a2, a3, 0LL);
    if ( !v9 )
    {
      v12 = -2004287480;
      v19 = 328LL;
      goto LABEL_23;
    }
  }
  pv = 0LL;
  v10 = *(__int64 **)(a1 + 88);
  v11 = *v10;
  *(_QWORD *)v20 = 0LL;
  v21 = 1;
  v12 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, __int64, int *))(v11 + 40))(v10, v6, v8, v9, v20);
  if ( v21 )
  {
    v13 = pv;
    pv = *(LPVOID *)v20;
    if ( v13 )
      CoTaskMemFree(v13);
  }
  if ( (v12 & 0x80000000) != 0 )
  {
    v15 = -2005073917;
    if ( v12 == -2005073917 )
      goto LABEL_17;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14E,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
      (const char *)v12);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      &pv,
      0LL);
    return v12;
  }
  if ( !pv )
  {
    v12 = -2004287480;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x150,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
      (const char *)0x88890008LL);
    goto LABEL_13;
  }
  AudioMediaType_Unsafe = CreateAudioMediaType_Unsafe(pv, (unsigned int)*((unsigned __int16 *)pv + 8) + 18, a5);
  v15 = AudioMediaType_Unsafe;
  if ( AudioMediaType_Unsafe >= 0 )
  {
LABEL_13:
    v16 = pv;
    pv = 0LL;
    if ( v16 )
      CoTaskMemFree(v16);
    return v12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x157,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
    (const char *)(unsigned int)AudioMediaType_Unsafe);
LABEL_17:
  v18 = pv;
  pv = 0LL;
  if ( v18 )
    CoTaskMemFree(v18);
  return v15;
}
