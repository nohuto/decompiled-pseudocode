/*
 * XREFs of ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagWND@@_K@Z @ 0x140271E98
 * Callers:
 *     xxxProcessHidInput @ 0x14004A660 (xxxProcessHidInput.c)
 * Callees:
 *     FreeHidData @ 0x140082EF0 (FreeHidData.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1400A4BAC (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?DeliverRawInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@QEAUtagHIDDATA@@_N@Z @ 0x140119324 (-DeliverRawInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@QEAUtagHIDDATA@@_N@Z.c)
 *     PostInputMessage @ 0x14012ED84 (PostInputMessage.c)
 *     AllocateHidData @ 0x14012F38C (AllocateHidData.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall PostHidInput(struct DEVICEINFO *a1, void *Src, size_t Size, struct tagWND *a4, unsigned __int64 a5)
{
  size_t v6; // rbx
  unsigned int v8; // ebp
  __int64 v9; // rdx
  unsigned int v10; // edi
  bool v11; // di
  bool v12; // bl
  int v13; // edx
  int v14; // r8d
  __int64 v15; // r9
  __int64 HidData; // rax
  __int64 v18; // rdx
  struct tagHIDDATA *v19; // rsi
  LARGE_INTEGER *v20; // r13
  char v21; // di
  int v22; // r9d
  __int64 v23; // rdx
  bool v24; // bp
  __int64 v25; // rbx
  __int64 UserSessionState; // rax
  int v27; // r8d
  int v28; // edx
  __int16 v29; // [rsp+30h] [rbp-78h]

  v6 = (unsigned int)Size;
  v8 = *(unsigned __int16 *)(*((_QWORD *)a1 + 55) + 44LL);
  v9 = (unsigned int)Size % v8;
  v10 = (unsigned int)Size / v8;
  if ( (_DWORD)v9 )
  {
    v11 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
    v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
    v15 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v9) + 69416);
    v29 = 11;
    goto LABEL_19;
  }
  if ( !v10 )
  {
    v11 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
    v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
    v15 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, (unsigned int)v9) + 69416);
    v29 = 12;
    goto LABEL_19;
  }
  if ( (unsigned int)Size >= 0xFFFFFFF8 )
    return 0LL;
  HidData = AllocateHidData(*(void **)a1, 2LL, (unsigned int)(Size + 8), a5, (__int64 *)a4);
  v19 = (struct tagHIDDATA *)HidData;
  if ( !HidData )
  {
    v11 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
    v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
    v15 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v18) + 69416);
    v29 = 13;
LABEL_19:
    LOBYTE(v14) = v12;
    LOBYTE(v13) = v11;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v13,
      v14,
      v15,
      3,
      20,
      v29,
      (__int64)&WPP_daaec9a2452c30258aeab0c9883363ec_Traceguids);
    return 0LL;
  }
  v20 = *(LARGE_INTEGER **)(HidData + 24);
  *(_DWORD *)(HidData + 80) = v8;
  *(_DWORD *)(HidData + 84) = v10;
  memmove((void *)(HidData + 88), Src, v6);
  v21 = 1;
  InputTraceLogging::RIM::DeliverRawInput(a1, v19, a5 == 1, v22);
  if ( !(unsigned int)PostInputMessage(
                        *(struct tagQ **)(v20[2].QuadPart + 472),
                        v20,
                        0xFFu,
                        a5,
                        *(_QWORD *)v19,
                        0,
                        0LL,
                        0LL,
                        0,
                        0LL,
                        0LL,
                        0LL,
                        0,
                        0,
                        0LL) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
    {
      v21 = 0;
    }
    v24 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v21 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v25 = *(_QWORD *)(v20[2].QuadPart + 472);
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v23);
      LOBYTE(v27) = v24;
      LOBYTE(v28) = v21;
      WPP_RECORDER_AND_TRACE_SF_qq(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v28,
        v27,
        *(_QWORD *)(UserSessionState + 69416),
        3,
        20,
        14,
        (__int64)&WPP_daaec9a2452c30258aeab0c9883363ec_Traceguids,
        a5,
        v25);
    }
    FreeHidData((__int64)v19);
    return 0LL;
  }
  return 1LL;
}
