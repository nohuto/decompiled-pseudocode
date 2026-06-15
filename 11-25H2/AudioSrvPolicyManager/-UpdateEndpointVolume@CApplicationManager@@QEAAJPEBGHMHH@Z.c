/*
 * XREFs of ?UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z @ 0x18003C0E4
 * Callers:
 *     ??1CAastPreStartContext@@UEAA@XZ @ 0x18003ECEC (--1CAastPreStartContext@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x18003EECC (-RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007BD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000D140 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??1?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001765C (--1-$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     WPP_SF_Sd @ 0x180038478 (WPP_SF_Sd.c)
 *     WPP_SF_Sg @ 0x18003C7C0 (WPP_SF_Sg.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::UpdateEndpointVolume(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        int a3,
        float a4,
        int a5,
        int a6)
{
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  int v12; // r8d
  unsigned int v13; // ebx
  __int64 v14; // rdx
  unsigned int v15; // ebx
  int v17; // [rsp+20h] [rbp-38h]
  double v18; // [rsp+20h] [rbp-38h]
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  CApplicationManager *v21; // [rsp+60h] [rbp+8h] BYREF

  v21 = this;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v19 = v8;
  v21 = 0LL;
  v9 = *(_QWORD *)g_VolumeProvider;
  v21 = 0LL;
  v10 = (*(__int64 (__fastcall **)(struct IVolumeProvider *, const unsigned __int16 *, CApplicationManager **))(v9 + 40))(
          g_VolumeProvider,
          a2,
          &v21);
  v13 = v10;
  if ( v10 >= 0 )
  {
    if ( !a5 )
      goto LABEL_22;
    v15 = a6;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v17 = a6;
      WPP_SF_Sd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x33u, &WPP_7ac9f868b6f432f4e1ddc0ca024d1633_Traceguids, a2, v17);
    }
    v10 = (*(__int64 (__fastcall **)(CApplicationManager *, _QWORD, __int64 *, _QWORD))(*(_QWORD *)v21 + 144LL))(
            v21,
            v15,
            &PBM_INITIATED_ENDPOINT_VOLUME_CHANGE,
            0LL);
    v13 = v10;
    if ( v10 < 0 )
    {
      v14 = 3052LL;
    }
    else
    {
LABEL_22:
      if ( !a3 )
        goto LABEL_18;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v18 = a4;
        WPP_SF_Sg(*((_QWORD *)WPP_GLOBAL_Control + 2), v11, v12, (_DWORD)a2, SLOBYTE(v18));
      }
      v10 = (*(__int64 (__fastcall **)(CApplicationManager *, __int64, __int64 *, _QWORD))(*(_QWORD *)v21 + 56LL))(
              v21,
              v11,
              &PBM_INITIATED_ENDPOINT_VOLUME_CHANGE,
              0LL);
      v13 = v10;
      if ( v10 >= 0 )
      {
LABEL_18:
        v13 = 0;
        goto LABEL_19;
      }
      v14 = 3060LL;
    }
  }
  else
  {
    v14 = 3045LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
    (const char *)(unsigned int)v10);
LABEL_19:
  wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>((__int64 *)&v21);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v19);
  return v13;
}
