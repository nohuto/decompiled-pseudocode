/*
 * XREFs of ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x1800757A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?TryOpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJPEAPEAUIPropertyStore@@@Z @ 0x180022EB4 (-TryOpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJPEAPEAUIPropertyStore@@@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x1800271EC (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?GetBuffer@CAudioEndpointId@@QEAAPEBGXZ @ 0x180029FB0 (-GetBuffer@CAudioEndpointId@@QEAAPEBGXZ.c)
 *     ?GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180032D50 (-GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x180037B80 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18005AE08 (-LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FBC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Log_IfFailedWithExpected@in1diag3@details@wil@@YAJPEAXIPEBDJIZZ @ 0x1800C3890 (-Log_IfFailedWithExpected@in1diag3@details@wil@@YAJPEAXIPEBDJIZZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPerStreamVolumeAudioSession::CompleteConstruction(CPerStreamVolumeAudioSession *this, char a2)
{
  const unsigned __int16 *Buffer; // rax
  int v5; // eax
  int MixFormat; // edi
  void *v7; // rcx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  void *v12; // rax
  void *v13; // rcx
  __int64 i; // r8
  int v15; // esi
  void *v16; // rcx
  __int64 v18; // rcx
  unsigned int v19; // eax
  int SessionConfiguration; // eax
  struct _GUID v21; // [rsp+40h] [rbp-40h] BYREF
  LPVOID *p_pv; // [rsp+50h] [rbp-30h]
  struct tWAVEFORMATEX *v23; // [rsp+58h] [rbp-28h] BYREF
  char v24; // [rsp+60h] [rbp-20h]
  EffectPack *v25[2]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v26; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  LPVOID pv; // [rsp+A0h] [rbp+20h] BYREF
  struct _RTL_CRITICAL_SECTION *v29; // [rsp+B0h] [rbp+30h] BYREF

  *(_OWORD *)v25 = 0LL;
  v26 = 0LL;
  Buffer = CAudioEndpointId::GetBuffer((CPerStreamVolumeAudioSession *)((char *)this + 584));
  v5 = (*(__int64 (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD, EffectPack **))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                                 + 40LL))(
         g_pEndpointCharacteristicsCache,
         Buffer,
         0LL,
         0LL,
         v25);
  MixFormat = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x602,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_25;
  }
  pv = 0LL;
  p_pv = &pv;
  v23 = 0LL;
  v24 = 1;
  v21 = GUID_00000000_0000_0000_0000_000000000000;
  MixFormat = EffectPack::GetMixFormat(v25[1], eHostProcessConnector, &v21, &v23);
  if ( v24 )
  {
    v7 = *p_pv;
    *p_pv = v23;
    if ( v7 )
      CoTaskMemFree(v7);
  }
  if ( MixFormat < 0 )
  {
    v8 = (unsigned int)MixFormat;
    v9 = 1548LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)v8);
LABEL_9:
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      &pv,
      0LL);
    goto LABEL_25;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  v29 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 736);
  v10 = *((unsigned __int16 *)pv + 1);
  *((_DWORD *)this + 222) = v10;
  v11 = 4 * v10;
  if ( !is_mul_ok(v10, 4uLL) )
    v11 = -1LL;
  v12 = operator new[](v11, (const struct std::nothrow_t *)&std::nothrow);
  v13 = (void *)*((_QWORD *)this + 112);
  *((_QWORD *)this + 112) = v12;
  if ( v13 )
    operator delete(v13);
  if ( !*((_QWORD *)this + 112) )
  {
    MixFormat = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x614,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)0x8007000ELL);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v29);
    goto LABEL_9;
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 222); i = (unsigned int)(i + 1) )
    *(_DWORD *)(*((_QWORD *)this + 112) + 4 * i) = 1065353216;
  if ( this != (CPerStreamVolumeAudioSession *)-736LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  v15 = a2 & 2;
  *((_BYTE *)this + 920) = v15 != 0;
  if ( *((_DWORD *)v25[0] + 16) == 3 )
  {
    *((_BYTE *)this + 920) = 0;
  }
  else if ( v15 )
  {
    v18 = *((_QWORD *)this + 116);
    *((_QWORD *)this + 116) = 0LL;
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    v19 = CPerStreamVolumeAudioSession::TryOpenSessionPropertyStore(this, (struct IPropertyStore **)this + 116);
    if ( wil::details::in1diag3::Log_IfFailedWithExpected(
           retaddr,
           (void *)0x634,
           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
           (const char *)v19,
           2,
           0x80070002,
           -2147024891) >= 0 )
    {
      if ( *((_QWORD *)this + 116) )
      {
        SessionConfiguration = CPerStreamVolumeAudioSession::LoadSessionConfiguration(this);
        MixFormat = SessionConfiguration;
        if ( SessionConfiguration < 0 )
        {
          v8 = (unsigned int)SessionConfiguration;
          v9 = 1592LL;
          goto LABEL_8;
        }
      }
    }
  }
  v16 = pv;
  pv = 0LL;
  if ( v16 )
    CoTaskMemFree(v16);
  MixFormat = 0;
LABEL_25:
  EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v25);
  return (unsigned int)MixFormat;
}
