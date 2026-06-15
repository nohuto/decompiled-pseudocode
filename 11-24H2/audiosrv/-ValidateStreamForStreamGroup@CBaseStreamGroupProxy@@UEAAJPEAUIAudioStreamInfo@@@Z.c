/*
 * XREFs of ?ValidateStreamForStreamGroup@CBaseStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180066B50
 * Callers:
 *     ?CreateStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KPEAUSystemAudioStream@@@Z @ 0x1800F5560 (-CreateStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x1800161E8 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x18002CC00 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::ValidateStreamForStreamGroup(
        CBaseStreamGroupProxy *this,
        struct IAudioStreamInfo *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // r9
  __int64 v9; // rdx
  const struct tWAVEFORMATEX *v10; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  SaDeviceParams *v12; // [rsp+38h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+40h] [rbp+18h] BYREF

  if ( !(*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 144LL))(a2)
    || (*(unsigned __int8 (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)this + 248LL))(this) )
  {
    return 0LL;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v4 = *((_QWORD *)this + 11);
  v13 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 96);
  if ( !v4 || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 168LL))(v4) )
  {
LABEL_15:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v13);
    return 0LL;
  }
  v5 = *((_QWORD *)this + 11);
  v12 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, SaDeviceParams **))(*(_QWORD *)v5 + 120LL))(v5, &v12);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v10 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)this + 144LL))(this);
    if ( !(unsigned int)CompareWaveFormat(*((const struct tWAVEFORMATEX **)v12 + 3), v10) )
    {
      v7 = -2004287447;
      v9 = 396LL;
      v8 = 2290679849LL;
      goto LABEL_10;
    }
    if ( v12 )
      SaDeviceParams::`scalar deleting destructor'(v12);
    goto LABEL_15;
  }
  v8 = (unsigned int)v6;
  v9 = 395LL;
LABEL_10:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)v8);
  if ( v12 )
    SaDeviceParams::`scalar deleting destructor'(v12);
  v12 = 0LL;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v13);
  return v7;
}
