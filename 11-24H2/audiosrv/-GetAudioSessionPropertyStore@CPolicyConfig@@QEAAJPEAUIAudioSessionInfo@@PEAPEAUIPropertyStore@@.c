/*
 * XREFs of ?GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z @ 0x18001735C
 * Callers:
 *     ?TryOpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJPEAPEAUIPropertyStore@@@Z @ 0x18006DBD8 (-TryOpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJPEAPEAUIPropertyStore@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180016CE8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAPEAVWeakRef@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x180018198 (--$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?PruneStaleEntries@@YAXAEAV?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@@Z @ 0x180051650 (-PruneStaleEntries@@YAXAEAV-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@.c)
 *     ??$_Emplace_back_with_unused_capacity@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAAEAVWeakRef@WRL@Microsoft@@AEBV234@@Z @ 0x18005965C (--$_Emplace_back_with_unused_capacity@AEBVWeakRef@WRL@Microsoft@@@-$vector@VWeakRef@WRL@Microsof.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18005FF0C (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$AsWeak@UIAudioSessionStore@@@WRL@Microsoft@@YAJPEAUIAudioSessionStore@@PEAVWeakRef@01@@Z @ 0x18006B608 (--$AsWeak@UIAudioSessionStore@@@WRL@Microsoft@@YAJPEAUIAudioSessionStore@@PEAVWeakRef@01@@Z.c)
 *     ??$MakeAndInitialize@VCAudioSessionStore@@UIAudioSessionStore@@AEAPEAUIAudioSessionInfo@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioSessionStore@@AEAPEAUIAudioSessionInfo@@@Z @ 0x18006EE8C (--$MakeAndInitialize@VCAudioSessionStore@@UIAudioSessionStore@@AEAPEAUIAudioSessionInfo@@@Detail.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CPolicyConfig::GetAudioSessionPropertyStore(
        CPolicyConfig *this,
        struct IAudioSessionInfo *a2,
        struct IPropertyStore **a3)
{
  struct IPropertyStore **v3; // r14
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  const char *v6; // r9
  __int64 *v7; // r15
  __int64 *v8; // rsi
  __int64 v9; // rbx
  int v10; // eax
  int (__fastcall *v11)(__int64 *, GUID *, __int64 *); // r14
  __int64 v12; // r14
  unsigned __int8 (__fastcall *v13)(__int64, __int64); // r15
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v18; // rcx
  __int64 result; // rax
  __int64 v20; // rax
  int v21; // eax
  unsigned int v22; // ebx
  __int64 v23; // rdx
  char *v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v30; // [rsp+28h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v32; // [rsp+70h] [rbp+8h] BYREF
  struct IAudioSessionInfo *v33; // [rsp+78h] [rbp+10h] BYREF
  struct IPropertyStore **v34; // [rsp+80h] [rbp+18h] BYREF
  __int64 *v35; // [rsp+88h] [rbp+20h] BYREF

  v34 = a3;
  v33 = a2;
  v3 = a3;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  *(_QWORD *)v29 = v5;
  PruneStaleEntries((char *)this + 64);
  v7 = 0LL;
  *v3 = 0LL;
  v8 = (__int64 *)*((_QWORD *)this + 8);
  try
  {
    while ( v8 != *((__int64 **)this + 9) )
    {
      v9 = *v8;
      v30 = v9;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      v35 = 0LL;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v35);
      v35 = 0LL;
      if ( v9 )
      {
        v10 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 **))(*(_QWORD *)v9 + 24LL))(
                v9,
                &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                &v35);
        v7 = v35;
      }
      else
      {
        v10 = 0;
      }
      if ( v10 >= 0 && v7 )
      {
        v32 = 0LL;
        v11 = *(int (__fastcall **)(__int64 *, GUID *, __int64 *))*v7;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v32);
        if ( v11(v7, &GUID_e5f61c43_fc50_4785_bbe0_b5ee4f99ee0a, &v32) >= 0 )
        {
          v12 = v32;
          v13 = *(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v32 + 24LL);
          v14 = (*(__int64 (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)v33 + 64LL))(v33);
          if ( v13(v12, v14) )
          {
            v3 = v34;
            (**(void (__fastcall ***)(__int64, GUID *, struct IPropertyStore **))v32)(
              v32,
              &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99,
              v34);
            v27 = v32;
            if ( v32 )
            {
              v32 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
            }
            v28 = (__int64)v35;
            if ( v35 )
            {
              v35 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
            }
            if ( v9 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
            break;
          }
        }
        v15 = v32;
        if ( v32 )
        {
          v32 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
        v7 = v35;
        v3 = v34;
      }
      if ( v7 )
      {
        v35 = 0LL;
        (*(void (__fastcall **)(__int64 *))(*v7 + 16))(v7);
      }
      v7 = 0LL;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      ++v8;
    }
    if ( !*v3 )
    {
      v34 = 0LL;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v34);
      v16 = Microsoft::WRL::Details::MakeAndInitialize<CAudioSessionStore,IAudioSessionStore,IAudioSessionInfo * &>(
              &v34,
              &v33);
      v17 = v16;
      if ( v16 < 0 )
      {
        if ( v16 == -2147024894 || v16 == -2147024891 )
        {
          v18 = (__int64)v34;
          if ( v34 )
          {
            v34 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
          }
          if ( v5 )
            LeaveCriticalSection(v5);
          return v17;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x864,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
            (const char *)(unsigned int)v16);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v34);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(v29);
          return v17;
        }
      }
      v32 = 0LL;
      v35 = &v32;
      v20 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v35);
      v21 = Microsoft::WRL::AsWeak<IAudioSessionStore>(v34, v20);
      v22 = v21;
      if ( v21 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x867,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
          (const char *)(unsigned int)v21);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v32);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v34);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(v29);
        return v22;
      }
      v23 = *((_QWORD *)this + 9);
      v24 = (char *)this + 64;
      if ( v23 == *((_QWORD *)this + 10) )
        std::vector<Microsoft::WRL::WeakRef>::_Emplace_reallocate<Microsoft::WRL::WeakRef const &>(v24, v23, &v32);
      else
        std::vector<Microsoft::WRL::WeakRef>::_Emplace_back_with_unused_capacity<Microsoft::WRL::WeakRef const &>(
          v24,
          &v32);
      ((void (__fastcall *)(struct IPropertyStore **, GUID *, struct IPropertyStore **))(*v34)->lpVtbl)(
        v34,
        &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99,
        v3);
      v25 = v32;
      if ( v32 )
      {
        v32 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
      }
      v26 = (__int64)v34;
      if ( v34 )
      {
        v34 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      }
    }
    if ( v5 )
      LeaveCriticalSection(v5);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v34) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x86E,
                     (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
                     v6);
    return (unsigned int)v34;
  }
  return result;
}
