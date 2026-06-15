/*
 * XREFs of ?RegisterAppVolumePolicyChange@CApplication@@QEAAJPEAUIAudioAppVolumePolicyChange@@@Z @ 0x180035FBC
 * Callers:
 *     ?RegisterAppVolumePolicyChange@CProcess@@UEAAJPEAUIAudioAppVolumePolicyChange@@@Z @ 0x180036040 (-RegisterAppVolumePolicyChange@CProcess@@UEAAJPEAUIAudioAppVolumePolicyChange@@@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000D140 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?NewNode@?$CAtlList@PEAUIAudioAppVolumePolicyChange@@V?$CElementTraits@PEAUIAudioAppVolumePolicyChange@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAUIAudioAppVolumePolicyChange@@PEAV312@1@Z @ 0x18001E4D0 (-NewNode@-$CAtlList@PEAUIAudioAppVolumePolicyChange@@V-$CElementTraits@PEAUIAudioAppVolumePolicy.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::RegisterAppVolumePolicyChange(
        CApplication *this,
        struct IAudioAppVolumePolicyChange *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  __int64 v4; // r8
  unsigned int v5; // edi
  __int64 *v6; // rax
  ATL::CAtlException *v8; // rbx
  ATL::CAtlException *v9; // [rsp+20h] [rbp-28h] BYREF
  struct IAudioAppVolumePolicyChange *v10; // [rsp+58h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+60h] [rbp+18h] BYREF

  v10 = a2;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  try
  {
    v11 = v3;
    v5 = 0;
    v6 = ATL::CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>::NewNode(
           (__int64)this + 120,
           (__int64 *)&v10,
           v4,
           *((_QWORD *)this + 15));
    if ( *((_QWORD *)this + 15) )
      *(_QWORD *)(*((_QWORD *)this + 15) + 8LL) = v6;
    else
      *((_QWORD *)this + 16) = v6;
    *((_QWORD *)this + 15) = v6;
  }
  catch ( ATL::CAtlException *v9 )
  {
    v8 = v9;
    if ( *(_DWORD *)v9 == -1073741571 )
      _o__resetstkoflw();
    v5 = *(_DWORD *)v8;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v11);
  return v5;
}
