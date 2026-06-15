/*
 * XREFs of ?OnStateChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180014EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800150E8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42AC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_S @ 0x1800C033C (WPP_SF_S.c)
 *     WPP_SF_qd @ 0x1800C3678 (WPP_SF_qd.c)
 */

__int64 __fastcall CServerAudioSessionControl::OnStateChanged(
        CServerAudioSessionControl *this,
        struct IAudioSessionInfo *a2,
        enum _AudioSessionState a3,
        unsigned int a4)
{
  int MediaEvent; // ebp
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v9; // ebx
  unsigned int v10; // edi
  unsigned int *v11; // rax
  unsigned int *v12; // r14
  unsigned __int64 v13; // rdx
  __int64 v14; // r8
  _WORD *v15; // rax
  unsigned __int64 v16; // r9
  __int16 v17; // cx
  _WORD *v18; // rcx
  HANDLE ProcessHeap; // rax

  MediaEvent = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 24LL, &WPP_ab1375f163c73c4b99e57586ff560771_Traceguids, 0LL);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v7 = *((_QWORD *)this + 9);
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 656);
    v9 = 2 * *(_DWORD *)(v8 - 16) + 2;
    v10 = 2 * *(_DWORD *)(v8 - 16) + 74;
    v11 = (unsigned int *)operator new[](v10, (const struct std::nothrow_t *)&std::nothrow);
    v12 = v11;
    if ( !v11 )
    {
      MediaEvent = -2147024882;
LABEL_14:
      AudSrvTraceLoggingErrorHelper("CServerAudioSessionControl::OnStateChanged", 0x2FDu, MediaEvent);
      goto LABEL_15;
    }
    *v11 = v10;
    v11[1] = 8;
    v11[6] = v9;
    v11[12] = a4;
    v13 = (unsigned __int64)v9 >> 1;
    v14 = *(_QWORD *)(*((_QWORD *)this + 9) + 656LL);
    v15 = v11 + 18;
    if ( v13 )
    {
      v16 = 2147483646 - v13;
      v14 -= (__int64)v15;
      do
      {
        if ( !(v16 + v13) )
          break;
        v17 = *(_WORD *)((char *)v15 + v14);
        if ( !v17 )
          break;
        *v15++ = v17;
        --v13;
      }
      while ( v13 );
      v18 = v15 - 1;
      if ( v13 )
        v18 = v15;
      *v18 = 0;
    }
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 25LL, &WPP_ab1375f163c73c4b99e57586ff560771_Traceguids, v12);
    }
    MediaEvent = GenerateMediaEvent(v12, *((unsigned int *)this + 20), v14);
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v12);
    if ( MediaEvent < 0 )
      goto LABEL_14;
  }
LABEL_15:
  if ( this != (CServerAudioSessionControl *)-32LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  return (unsigned int)MediaEvent;
}
