/*
 * XREFs of ?OnIconPathChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z @ 0x1800C4F90
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180009E10 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FBC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_qD @ 0x1800C49A0 (WPP_SF_qD.c)
 *     WPP_SF_SS @ 0x1800C5D00 (WPP_SF_SS.c)
 */

__int64 __fastcall CServerAudioSessionControl::OnIconPathChanged(
        CServerAudioSessionControl *this,
        struct IAudioSessionInfo *a2,
        char *a3,
        struct _GUID *a4)
{
  int MediaEvent; // edi
  __int64 v8; // rax
  int v9; // ecx
  __int64 v10; // rax
  unsigned int v11; // r14d
  unsigned __int64 v12; // r15
  unsigned int v13; // r12d
  unsigned int *v14; // rax
  unsigned int *v15; // rbx
  char *v16; // rcx
  GUID *v17; // rax
  GUID v18; // xmm0
  __int64 v20; // [rsp+20h] [rbp-38h]
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+60h] [rbp+8h] BYREF

  MediaEvent = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_SS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      20,
      (unsigned int)&WPP_ab1375f163c73c4b99e57586ff560771_Traceguids,
      0,
      (__int64)a3);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v8 = *((_QWORD *)this + 9);
  v21 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  if ( v8 )
  {
    v9 = *(_DWORD *)(*(_QWORD *)(v8 + 656) - 16LL);
    v10 = -1LL;
    v11 = 2 * v9 + 2;
    do
      ++v10;
    while ( *(_WORD *)&a3[2 * v10] );
    v12 = 2 * v10 + 2;
    v13 = v12 + 2 * v9 + 74;
    v14 = (unsigned int *)operator new[](v13, (const struct std::nothrow_t *)&std::nothrow);
    v15 = v14;
    if ( v14 )
    {
      *v14 = v13;
      v16 = (char *)(v14 + 18);
      v17 = &GUID_00000000_0000_0000_0000_000000000000;
      if ( a4 )
        v17 = a4;
      v18 = *v17;
      v15[1] = 256;
      v15[6] = v11;
      *(GUID *)(v15 + 7) = v18;
      v15[12] = v12;
      v15[13] = v11 + 72;
      StringCbCopyW(v16, v11, *(char **)(*((_QWORD *)this + 9) + 656LL));
      StringCbCopyW((char *)v15 + v15[13], v12, a3);
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        LODWORD(v20) = *((_DWORD *)this + 20);
        WPP_SF_qD(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x15u,
          (__int64)&WPP_ab1375f163c73c4b99e57586ff560771_Traceguids,
          v15,
          v20);
      }
      MediaEvent = GenerateMediaEvent(v15, *((unsigned int *)this + 20));
      operator delete(v15);
      if ( MediaEvent < 0 )
        AudSrvTraceLoggingErrorHelper("CServerAudioSessionControl::OnIconPathChanged", 488, MediaEvent);
    }
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v21);
  return (unsigned int)MediaEvent;
}
