/*
 * XREFs of ?RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800B3870
 * Callers:
 *     ?RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z @ 0x18001E254 (-RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_3a814fbe6c0904bb3814e1119ec605d5__void_::_Do_call @ 0x1800B3D60 (std--_Func_impl_no_alloc__lambda_3a814fbe6c0904bb3814e1119ec605d5__void_--_Do_call.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x180016924 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x180019F4C (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x18001FE80 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?ReloadApos@AudioEffectsWatcher@@AEAAJXZ @ 0x180034C00 (-ReloadApos@AudioEffectsWatcher@@AEAAJXZ.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18005DA98 (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x180061BC8 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800A3DC4 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1800A42DC (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     memcpy_0 @ 0x1800A7F28 (memcpy_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall AudioEffectsWatcher::RebuildAndPublishFullEffectsListFromApos(AudioEffectsWatcher *this)
{
  void *v2; // rdx
  unsigned int v3; // esi
  __int64 *v4; // rbx
  __int64 v5; // r14
  __int64 *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  int v9; // r14d
  unsigned __int64 v10; // rcx
  void *v11; // rcx
  int v12; // ebx
  char *v13; // r14
  unsigned int v14; // esi
  __int64 *v15; // rbx
  void (*v17)(void *); // [rsp+20h] [rbp-59h]
  char *v18; // [rsp+30h] [rbp-49h] BYREF
  void *v19; // [rsp+38h] [rbp-41h] BYREF
  char v20; // [rsp+40h] [rbp-39h]
  unsigned __int64 v21; // [rsp+48h] [rbp-31h] BYREF
  __int128 v22; // [rsp+50h] [rbp-29h]
  __int128 v23; // [rsp+60h] [rbp-19h] BYREF
  __int64 v24; // [rsp+70h] [rbp-9h] BYREF
  __int64 v25; // [rsp+78h] [rbp-1h] BYREF
  _OWORD v26[2]; // [rsp+80h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v24 = 0LL;
  v25 = 0LL;
  memset(v26, 0, sizeof(v26));
  v17 = (void (*)(void *))wistd::unique_ptr<VolumeControlData,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<VolumeControlData,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>;
  `eh vector constructor iterator'(
    (char *)v26,
    16LL,
    2LL,
    (void (__fastcall *)(char *))std::forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>);
  v22 = *(_OWORD *)((char *)this + 40);
  v23 = v22;
  EtwEventActivityIdControl(4LL, &v23);
  do
  {
    wil::details::ResetEvent(*((wil::details **)this + 19), v2);
    AudioEffectsWatcher::ReloadApos(this);
    *((_DWORD *)this + 44) = 0;
    v3 = 0;
    v4 = &v25;
    do
    {
      v5 = 16LL * (int)v3;
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)((char *)&v24 + v5),
        0LL);
      *(_DWORD *)v4 = 0;
      v6 = *(__int64 **)((char *)v4 + this - (AudioEffectsWatcher *)&v25 + 112);
      if ( v6 )
      {
        v7 = *v6;
        v18 = (char *)&v24 + v5;
        v19 = 0LL;
        v20 = 1;
        v8 = (*(__int64 (__fastcall **)(__int64 *, void **, char *, _QWORD, void (*)(void *)))(v7 + 24))(
               v6,
               &v19,
               (char *)&v25 + v5,
               *((_QWORD *)this + 19),
               v17);
        v9 = v8;
        if ( v8 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            266LL,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
            (const char *)(unsigned int)v8);
        wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v18);
        if ( v9 < 0 )
          *(_DWORD *)v4 = 0;
      }
      *((_DWORD *)this + 44) += *(_DWORD *)v4;
      ++v3;
      v4 += 2;
    }
    while ( v3 < 3 );
  }
  while ( !WaitForSingleObject(*((HANDLE *)this + 19), 0) );
  if ( !*((_DWORD *)this + 44) )
    goto LABEL_15;
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)this + 21,
    0LL);
  v18 = (char *)this + 168;
  v20 = 1;
  v10 = *((unsigned int *)this + 44);
  v19 = 0LL;
  v21 = 0LL;
  v12 = ULongLongMult(v10, 0x10uLL, &v21);
  if ( v12 >= 0 )
    v12 = CTCoAllocPolicy::Alloc(v11, 1, v21, &v19);
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v18);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11B,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
      (const char *)(unsigned int)v12);
  }
  else
  {
LABEL_15:
    v13 = (char *)*((_QWORD *)this + 21);
    v14 = 0;
    v15 = &v25;
    do
    {
      if ( *(_DWORD *)v15 )
      {
        memcpy_0(v13, (const void *)*(v15 - 1), 16LL * *(unsigned int *)v15);
        v13 += 16 * *(unsigned int *)v15;
      }
      ++v14;
      v15 += 2;
    }
    while ( v14 < 3 );
    RtlPublishWnfStateData(
      *(_QWORD *)((char *)this + 92),
      0LL,
      *((_QWORD *)this + 21),
      (unsigned int)(16 * *((_DWORD *)this + 44)),
      0LL);
    v12 = 0;
  }
  EtwEventActivityIdControl(4LL, &v23);
  `eh vector destructor iterator'(
    (char *)&v24,
    16LL,
    3LL,
    (void (__fastcall *)(char *))wistd::unique_ptr<VolumeControlData,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<VolumeControlData,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>);
  return (unsigned int)v12;
}
