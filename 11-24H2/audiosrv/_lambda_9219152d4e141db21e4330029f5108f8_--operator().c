/*
 * XREFs of _lambda_9219152d4e141db21e4330029f5108f8_::operator() @ 0x1800C0C0C
 * Callers:
 *     ?OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x180020D60 (-OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z.c)
 *     ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x1800567B0 (-RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?ForEachEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x1800256F0 (-ForEachEntry@-$CLockedList_UniqueValuesOnly@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEA.c)
 *     ?GetCurrentSessionGain@CAudioSession@@IEAAXPEA_NPEAMPEA_J@Z @ 0x180051A04 (-GetCurrentSessionGain@CAudioSession@@IEAAXPEA_NPEAMPEA_J@Z.c)
 *     ?reset@?$unique_ptr@MU?$function_deleter@P6AXPEAX@Z$1?_freea@@YAX0@Z@wil@@@wistd@@QEAAXPEAM@Z @ 0x1800616F4 (-reset@-$unique_ptr@MU-$function_deleter@P6AXPEAX@Z$1-_freea@@YAX0@Z@wil@@@wistd@@QEAAXPEAM@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800A7F28 (memcpy_0.c)
 *     WPP_SF_S @ 0x1800C033C (WPP_SF_S.c)
 *     WPP_SF_S_guid_ @ 0x1800C306C (WPP_SF_S_guid_.c)
 *     WPP_SF_Sg @ 0x1800C32A0 (WPP_SF_Sg.c)
 *     _alloca_probe @ 0x180167ED0 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_9219152d4e141db21e4330029f5108f8_::operator()(CAudioSession **a1, __int64 a2, int a3)
{
  unsigned int v4; // r14d
  GUID **v5; // rax
  GUID *v6; // rcx
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  unsigned int v8; // r15d
  size_t v9; // rdi
  size_t v10; // rcx
  __int64 v11; // rax
  void *v12; // rsp
  void **v13; // rdx
  _DWORD *v14; // rax
  void *v15; // rbx
  __int64 v16; // r8
  CAudioSession *v17; // rcx
  void (__fastcall *v18)(CAudioSession *, __int64, __int64); // r9
  __int64 v19; // rdx
  struct _RTL_CRITICAL_SECTION *v20; // rdi
  int v21; // r8d
  int v22; // xmm6_4
  int v23; // edi
  int v24; // ecx
  struct _RTL_CRITICAL_SECTION *v25; // rcx
  unsigned __int64 v26; // r8
  void **v27; // rax
  __int64 v28; // r9
  unsigned int v29; // edx
  __int64 v31; // [rsp+0h] [rbp-40h] BYREF
  int v32[2]; // [rsp+20h] [rbp-20h]
  void *v33; // [rsp+28h] [rbp-18h]
  __int64 v34; // [rsp+30h] [rbp-10h]
  int v35; // [rsp+40h] [rbp+0h] BYREF
  float v36; // [rsp+44h] [rbp+4h] BYREF
  __int64 v37; // [rsp+48h] [rbp+8h] BYREF
  void *v38; // [rsp+50h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v39; // [rsp+58h] [rbp+18h] BYREF
  void **v40; // [rsp+60h] [rbp+20h] BYREF
  CAudioSession *v41; // [rsp+68h] [rbp+28h]
  void *v42; // [rsp+70h] [rbp+30h]
  unsigned __int64 v43; // [rsp+78h] [rbp+38h]
  __int64 v44; // [rsp+80h] [rbp+40h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+78h]

  v4 = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    v5 = (GUID **)a1[1];
    v6 = &GUID_00000000_0000_0000_0000_000000000000;
    if ( *v5 )
      v6 = *v5;
    WPP_SF_S_guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      (_DWORD)WPP_GLOBAL_Control,
      a3,
      *((_QWORD *)*a1 + 82),
      (__int64)v6);
  }
  LOBYTE(v35) = 0;
  v36 = 1.0;
  v37 = 0LL;
  CAudioSession::GetCurrentSessionGain(*a1, (bool *)&v35, &v36, &v37);
  v38 = 0LL;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)*a1 + 736);
  EnterCriticalSection(v7);
  v39 = v7;
  v8 = *((_DWORD *)*a1 + 222);
  v9 = 4LL * v8;
  v10 = (v9 + 16) & -(__int64)(v9 < v9 + 16);
  if ( v10 )
  {
    if ( v10 > 0x400 )
    {
      v14 = malloc(v10);
      if ( v14 )
      {
        *v14 = 56797;
        v14 += 4;
      }
      v13 = (void **)v14;
    }
    else
    {
      v11 = v10 + 15;
      if ( v10 + 15 < v10 )
        v11 = 0xFFFFFFFFFFFFFF0LL;
      v12 = alloca(v11 & 0xFFFFFFFFFFFFFFF0uLL);
      v13 = (void **)&v35;
      if ( &v31 != (__int64 *)-64LL )
      {
        v35 = 52428;
        v13 = &v38;
      }
    }
  }
  else
  {
    v13 = 0LL;
  }
  wistd::unique_ptr<float,wil::function_deleter<void (*)(void *),&void _freea(void *)>>::reset(
    (__int64 *)&v38,
    (__int64)v13);
  v15 = v38;
  if ( !v38 )
  {
    v4 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE78,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)0x8007000ELL);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v39);
    goto LABEL_35;
  }
  memcpy_0(v38, *((const void **)*a1 + 112), v9);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v39);
  if ( !*(_BYTE *)a1[2] )
  {
    v17 = *a1;
    v18 = *(void (__fastcall **)(CAudioSession *, __int64, __int64))(*(_QWORD *)*a1 + 424LL);
    v19 = *(unsigned int *)a1[3];
    v34 = v37;
    v33 = v15;
    v32[0] = v8;
    LOBYTE(v16) = v35;
    v18(v17, v19, v16);
  }
  (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)*a1 + 8LL))(*a1);
  v20 = (struct _RTL_CRITICAL_SECTION *)((char *)*a1 + 736);
  EnterCriticalSection(v20);
  v37 = (__int64)v20;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_Sg(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      64,
      v21,
      *((_QWORD *)*a1 + 82),
      *(_OWORD *)&_mm_cvtps_pd((__m128)*((unsigned int *)*a1 + 194)));
  }
  v22 = *((_DWORD *)*a1 + 194);
  v23 = *((_DWORD *)*a1 + 195);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)&v37);
  v24 = *(_DWORD *)a1[3];
  if ( v24 )
  {
    if ( v24 != 1 )
      goto LABEL_30;
    v25 = (struct _RTL_CRITICAL_SECTION *)((char *)*a1 + 432);
    v28 = *(_QWORD *)a1[1];
    v29 = *(_DWORD *)a1[4];
    v27 = &CAudioChannelVolumeChanged::`vftable';
    v41 = *a1;
    v42 = v15;
    v43 = __PAIR64__(v29, v8);
    v44 = v28;
  }
  else
  {
    v25 = (struct _RTL_CRITICAL_SECTION *)((char *)*a1 + 432);
    v26 = *(_QWORD *)a1[1];
    v27 = &CAudioSessionVolumeChanged::`vftable';
    v41 = *a1;
    LODWORD(v42) = v22;
    BYTE4(v42) = v23 != 0;
    v43 = v26;
  }
  v40 = v27;
  CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::ForEachEntry(
    v25,
    (void (__fastcall ***)(_QWORD, __int64 *))&v40);
LABEL_30:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x41u,
      (__int64)&WPP_ea93f1868512325b454513e390c361b8_Traceguids,
      *((const wchar_t **)*a1 + 82));
  }
  (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)*a1 + 16LL))(*a1);
LABEL_35:
  wistd::unique_ptr<float,wil::function_deleter<void (*)(void *),&void _freea(void *)>>::reset((__int64 *)&v38, 0LL);
  return v4;
}
