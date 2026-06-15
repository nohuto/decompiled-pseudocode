/*
 * XREFs of ?LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAUIVolumeStrip@@@Z @ 0x18007D32C
 * Callers:
 *     ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z @ 0x18007D0D8 (-GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?reset@?$unique_ptr@MU?$function_deleter@P6AXPEAX@Z$1?_freea@@YAX0@Z@wil@@@wistd@@QEAAXPEAM@Z @ 0x180070774 (-reset@-$unique_ptr@MU-$function_deleter@P6AXPEAX@Z$1-_freea@@YAX0@Z@wil@@@wistd@@QEAAXPEAM@Z.c)
 *     ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@HPEAH@Z @ 0x180085DD0 (-SetMute@CAudioSession@@UEAAJHPEBU_GUID@@HPEAH@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FBC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_dg @ 0x1800C4774 (WPP_SF_dg.c)
 *     WPP_SF_g @ 0x1800C47C8 (WPP_SF_g.c)
 *     _alloca_probe @ 0x18015E810 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::LoadEndpointVolumeInformation(
        CPerEndpointVolumeAudioSession *this,
        const unsigned __int16 *a2,
        struct IVolumeStrip *a3)
{
  unsigned int v5; // edi
  int v6; // esi
  __int64 v7; // rdx
  size_t v9; // rcx
  __int64 v10; // rax
  void *v11; // rsp
  unsigned int *v12; // rsi
  unsigned int *v13; // rax
  unsigned int i; // r15d
  int v15; // eax
  unsigned int v16; // r12d
  unsigned int v17; // eax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // kr00_8
  void *v20; // rax
  void *v21; // rcx
  __int64 v22; // rdx
  float v23; // xmm6_4
  unsigned int v24; // r8d
  float v25; // xmm0_4
  unsigned int v26; // eax
  __int64 v27; // [rsp+0h] [rbp-30h] BYREF
  unsigned int v28; // [rsp+30h] [rbp+0h] BYREF
  int v29; // [rsp+34h] [rbp+4h] BYREF
  int v30; // [rsp+38h] [rbp+8h] BYREF
  unsigned int *v31; // [rsp+40h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v32; // [rsp+48h] [rbp+18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+58h]

  v5 = 0;
  v28 = 0;
  v6 = (*(__int64 (__fastcall **)(struct IVolumeStrip *, unsigned int *))(*(_QWORD *)a3 + 48LL))(a3, &v28);
  if ( v6 < 0 )
  {
    v7 = 1752LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v29 = 0;
  v6 = (*(__int64 (__fastcall **)(struct IVolumeStrip *, int *))(*(_QWORD *)a3 + 152LL))(a3, &v29);
  if ( v6 < 0 )
  {
    v7 = 1756LL;
    goto LABEL_3;
  }
  v6 = CAudioSession::SetMute(this, v29, &EVENTCONTEXT_AUDIOSUBSYSTEM, 1, 0LL);
  if ( v6 < 0 )
  {
    v7 = 1758LL;
    goto LABEL_3;
  }
  v30 = 0;
  v6 = (*(__int64 (__fastcall **)(struct IVolumeStrip *, int *))(*(_QWORD *)a3 + 80LL))(a3, &v30);
  if ( v6 < 0 )
  {
    v7 = 1762LL;
    goto LABEL_3;
  }
  v9 = (4LL * v28 + 16) & -(__int64)(4 * (unsigned __int64)v28 < 4 * (unsigned __int64)v28 + 16);
  if ( !v9 )
  {
    v31 = 0LL;
    goto LABEL_47;
  }
  if ( v9 > 0x400 )
  {
    v13 = (unsigned int *)malloc(v9);
    v12 = v13;
    if ( !v13 )
      goto LABEL_19;
    *v13 = 56797;
    goto LABEL_18;
  }
  v10 = v9 + 15;
  if ( v9 + 15 < v9 )
    v10 = 0xFFFFFFFFFFFFFF0LL;
  v11 = alloca(v10 & 0xFFFFFFFFFFFFFFF0uLL);
  v12 = &v28;
  if ( &v27 != (__int64 *)-48LL )
  {
    v28 = 52428;
LABEL_18:
    v12 += 4;
  }
LABEL_19:
  v31 = v12;
  if ( !v12 )
  {
LABEL_47:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6E5,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)0x8007000ELL);
    wistd::unique_ptr<float,wil::function_deleter<void (*)(void *),&void _freea(void *)>>::reset((__int64 *)&v31, 0LL);
    return 2147942414LL;
  }
  for ( i = 0; i < v28; ++i )
  {
    v15 = (*(__int64 (__fastcall **)(struct IVolumeStrip *, _QWORD, unsigned int *))(*(_QWORD *)a3 + 112LL))(
            a3,
            i,
            &v12[i]);
    v16 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6E9,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)(unsigned int)v15);
LABEL_45:
      wistd::unique_ptr<float,wil::function_deleter<void (*)(void *),&void _freea(void *)>>::reset((__int64 *)&v31, 0LL);
      return v16;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  v32 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 736);
  *((_DWORD *)this + 194) = v30;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_g(*((_QWORD *)WPP_GLOBAL_Control + 2), 37LL, &WPP_6681b08aa41435022487e8d1ae4eb6cc_Traceguids);
  }
  v17 = v28;
  *((_DWORD *)this + 222) = v28;
  v19 = v17;
  v18 = 4LL * v17;
  if ( !is_mul_ok(v19, 4uLL) )
    v18 = -1LL;
  v20 = operator new[](v18, (const struct std::nothrow_t *)&std::nothrow);
  v21 = (void *)*((_QWORD *)this + 112);
  *((_QWORD *)this + 112) = v20;
  if ( v21 )
    operator delete(v21);
  v22 = *((_QWORD *)this + 112);
  if ( !v22 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6F6,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)0x8007000ELL);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v32);
    v16 = -2147024882;
    goto LABEL_45;
  }
  v23 = 0.0;
  v24 = 0;
  if ( *((_DWORD *)this + 222) )
  {
    do
    {
      *(_DWORD *)(v22 + 4LL * v24) = v12[v24];
      v22 = *((_QWORD *)this + 112);
      v25 = fmaxf(*(float *)(v22 + 4LL * v24), v23);
      v23 = v25;
      ++v24;
      v26 = *((_DWORD *)this + 222);
    }
    while ( v24 < v26 );
    if ( v25 > 0.0 && v26 )
    {
      do
      {
        *(float *)(*((_QWORD *)this + 112) + 4LL * v5) = *(float *)(*((_QWORD *)this + 112) + 4LL * v5) / v25;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_dg(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            38LL,
            &WPP_6681b08aa41435022487e8d1ae4eb6cc_Traceguids,
            v5,
            *(float *)(*((_QWORD *)this + 112) + 4LL * v5));
        }
        ++v5;
      }
      while ( v5 < *((_DWORD *)this + 222) );
    }
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v32);
  wistd::unique_ptr<float,wil::function_deleter<void (*)(void *),&void _freea(void *)>>::reset((__int64 *)&v31, 0LL);
  return 0LL;
}
