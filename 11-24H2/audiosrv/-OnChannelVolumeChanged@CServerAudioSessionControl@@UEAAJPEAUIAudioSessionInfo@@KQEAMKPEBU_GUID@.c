/*
 * XREFs of ?OnChannelVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@KQEAMKPEBU_GUID@@@Z @ 0x180020800
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800150E8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180020AB0 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180021540 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42AC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_S @ 0x1800C033C (WPP_SF_S.c)
 *     WPP_SF_Sdd @ 0x1800C317C (WPP_SF_Sdd.c)
 *     WPP_SF_Sdg @ 0x1800C320C (WPP_SF_Sdg.c)
 *     WPP_SF_qd @ 0x1800C3678 (WPP_SF_qd.c)
 */

__int64 __fastcall CServerAudioSessionControl::OnChannelVolumeChanged(
        CServerAudioSessionControl *this,
        struct IAudioSessionInfo *a2,
        unsigned int a3,
        float *const a4,
        unsigned int a5,
        struct _GUID *a6)
{
  int MediaEvent; // edi
  _QWORD *v10; // rcx
  struct _RTL_CRITICAL_SECTION *v11; // r14
  __int64 v12; // rax
  unsigned int v13; // r13d
  unsigned int *v14; // rax
  unsigned int *v15; // rbx
  GUID *v16; // rax
  __int64 v17; // r15
  GUID v18; // xmm0
  char *v19; // r15
  __int64 v20; // r15
  __int64 v21; // r8

  MediaEvent = 0;
  v10 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 36LL, &WPP_ab1375f163c73c4b99e57586ff560771_Traceguids, 0LL);
      v10 = WPP_GLOBAL_Control;
    }
    if ( v10 != &WPP_GLOBAL_Control && (*((_BYTE *)v10 + 28) & 0x40) != 0 && *((_BYTE *)v10 + 25) >= 4u )
      WPP_SF_Sdd(v10[2], 37, (unsigned int)&WPP_ab1375f163c73c4b99e57586ff560771_Traceguids, 0, a3, a5);
  }
  v11 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v12 = *((_QWORD *)this + 9);
  if ( v12 )
  {
    v13 = 2 * *(_DWORD *)(*(_QWORD *)(v12 + 656) - 16LL) + 2;
    v14 = (unsigned int *)operator new[]((v13 + 4 * a3 + 75) & 0xFFFFFFFC, (const struct std::nothrow_t *)&std::nothrow);
    v15 = v14;
    if ( v14 )
    {
      *v14 = (v13 + 4 * a3 + 75) & 0xFFFFFFFC;
      v16 = &GUID_00000000_0000_0000_0000_000000000000;
      if ( a6 )
        v16 = a6;
      v17 = (v13 + 75) & 0xFFFFFFFC;
      v18 = *v16;
      v15[12] = v17;
      v19 = (char *)v15 + v17;
      v15[1] = 2;
      v15[6] = v13;
      v15[13] = a5;
      v15[14] = a3;
      *(GUID *)(v15 + 7) = v18;
      if ( a3 )
      {
        v20 = v19 - (char *)a4;
        do
        {
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_Sdg(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              38,
              (unsigned int)&WPP_ab1375f163c73c4b99e57586ff560771_Traceguids,
              0,
              MediaEvent,
              *(_OWORD *)&_mm_cvtps_pd((__m128)*(unsigned int *)a4));
          }
          ++MediaEvent;
          *(float *const)((char *)a4 + v20) = *a4;
          ++a4;
        }
        while ( MediaEvent < a3 );
        v11 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
      }
      StringCbCopyW((unsigned __int16 *)v15 + 36, v13, *(const unsigned __int16 **)(*((_QWORD *)this + 9) + 656LL));
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 39LL, &WPP_ab1375f163c73c4b99e57586ff560771_Traceguids, v15);
      }
      MediaEvent = GenerateMediaEvent(v15, *((unsigned int *)this + 20), v21);
      operator delete(v15);
      if ( MediaEvent < 0 )
        AudSrvTraceLoggingErrorHelper("CServerAudioSessionControl::OnChannelVolumeChanged", 1373, MediaEvent);
    }
  }
  if ( v11 )
    LeaveCriticalSection(v11);
  return (unsigned int)MediaEvent;
}
