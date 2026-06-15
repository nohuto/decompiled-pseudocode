/*
 * XREFs of ?OnVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@M_NPEBU_GUID@@@Z @ 0x180062510
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FBC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_S @ 0x1800C17A4 (WPP_SF_S.c)
 *     WPP_SF_qD @ 0x1800C49A0 (WPP_SF_qD.c)
 *     WPP_SF_Sgd @ 0x1800C5E78 (WPP_SF_Sgd.c)
 */

__int64 __fastcall CServerAudioSessionControl::OnVolumeChanged(
        CServerAudioSessionControl *this,
        struct IAudioSessionInfo *a2,
        float a3,
        char a4,
        struct _GUID *a5)
{
  int v5; // r8d
  int MediaEvent; // edi
  _QWORD *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // r14d
  unsigned int v13; // r15d
  unsigned int *v14; // rax
  unsigned int *v15; // rbx
  _WORD *v16; // rcx
  GUID *v17; // rax
  unsigned __int64 v18; // rdx
  GUID v19; // xmm0
  unsigned __int64 v20; // r8
  __int64 v21; // r9
  __int16 v22; // ax
  _WORD *v23; // rax
  HANDLE ProcessHeap; // rax
  double v26; // [rsp+20h] [rbp-38h]

  MediaEvent = 0;
  v9 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_ab1375f163c73c4b99e57586ff560771_Traceguids);
      v9 = WPP_GLOBAL_Control;
    }
    if ( v9 != &WPP_GLOBAL_Control && (*((_BYTE *)v9 + 28) & 0x40) != 0 && *((_BYTE *)v9 + 25) >= 4u )
    {
      v26 = a3;
      WPP_SF_Sgd(v9[2], (_DWORD)a2, v5, 0, SLOBYTE(v26), a4);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v10 = *((_QWORD *)this + 9);
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 656);
    v12 = 2 * *(_DWORD *)(v11 - 16) + 2;
    v13 = 2 * *(_DWORD *)(v11 - 16) + 74;
    v14 = (unsigned int *)operator new[](v13, (const struct std::nothrow_t *)&std::nothrow);
    v15 = v14;
    if ( v14 )
    {
      *v14 = v13;
      v16 = v14 + 18;
      v17 = &GUID_00000000_0000_0000_0000_000000000000;
      if ( a5 )
        v17 = a5;
      v18 = (unsigned __int64)v12 >> 1;
      v19 = *v17;
      v15[1] = 1;
      *((float *)v15 + 12) = a3;
      *(GUID *)(v15 + 7) = v19;
      v15[6] = v12;
      *((_BYTE *)v15 + 52) = a4;
      if ( v18 )
      {
        v20 = 2147483646 - v18;
        v21 = *(_QWORD *)(*((_QWORD *)this + 9) + 656LL) - (_QWORD)v16;
        do
        {
          if ( !(v20 + v18) )
            break;
          v22 = *(_WORD *)((char *)v16 + v21);
          if ( !v22 )
            break;
          *v16++ = v22;
          --v18;
        }
        while ( v18 );
        v23 = v16 - 1;
        if ( v18 )
          v23 = v16;
        *v23 = 0;
      }
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qD(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          30LL,
          &WPP_ab1375f163c73c4b99e57586ff560771_Traceguids,
          v15,
          *((_DWORD *)this + 20));
      }
      MediaEvent = GenerateMediaEvent(v15, *((unsigned int *)this + 20));
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v15);
      if ( MediaEvent < 0 )
        AudSrvTraceLoggingErrorHelper("CServerAudioSessionControl::OnVolumeChanged", 1131, MediaEvent);
    }
  }
  if ( this != (CServerAudioSessionControl *)-32LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  return (unsigned int)MediaEvent;
}
