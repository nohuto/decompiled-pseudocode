/*
 * XREFs of ?OnGroupingParamChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@U_GUID@@PEBU3@@Z @ 0x1800C3AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800150E8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180020AB0 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180021540 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42AC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_S @ 0x1800C033C (WPP_SF_S.c)
 *     WPP_SF_qd @ 0x1800C3678 (WPP_SF_qd.c)
 */

__int64 __fastcall CServerAudioSessionControl::OnGroupingParamChanged(
        CServerAudioSessionControl *this,
        struct IAudioSessionInfo *a2,
        struct _GUID *a3,
        struct _GUID *a4)
{
  int MediaEvent; // edi
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // ebp
  unsigned int v11; // r14d
  unsigned int *v12; // rax
  unsigned int *v13; // rbx
  char *v14; // rcx
  GUID *v15; // rax
  GUID v16; // xmm0
  __int64 v17; // r8
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+60h] [rbp+8h] BYREF

  MediaEvent = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x16u, (__int64)&WPP_ab1375f163c73c4b99e57586ff560771_Traceguids, 0LL);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v8 = *((_QWORD *)this + 9);
  v19 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 656);
    v10 = 2 * *(_DWORD *)(v9 - 16) + 2;
    v11 = 2 * *(_DWORD *)(v9 - 16) + 74;
    v12 = (unsigned int *)operator new[](v11, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v12;
    if ( v12 )
    {
      *v12 = v11;
      v14 = (char *)(v12 + 18);
      v15 = &GUID_00000000_0000_0000_0000_000000000000;
      if ( a4 )
        v15 = a4;
      v16 = *v15;
      v13[6] = v10;
      v13[1] = 4;
      *(GUID *)(v13 + 7) = v16;
      *((struct _GUID *)v13 + 3) = *a3;
      StringCbCopyW(v14, v10, *(char **)(*((_QWORD *)this + 9) + 656LL));
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x17u,
          (__int64)&WPP_ab1375f163c73c4b99e57586ff560771_Traceguids,
          v13,
          *((_DWORD *)this + 20));
      }
      MediaEvent = GenerateMediaEvent(v13, *((unsigned int *)this + 20), v17);
      operator delete(v13);
      if ( MediaEvent < 0 )
        AudSrvTraceLoggingErrorHelper("CServerAudioSessionControl::OnGroupingParamChanged", 683, MediaEvent);
    }
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v19);
  return (unsigned int)MediaEvent;
}
