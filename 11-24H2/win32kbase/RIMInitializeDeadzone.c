/*
 * XREFs of RIMInitializeDeadzone @ 0x140124D60
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1401DECF0 (RIMCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1401E4F04 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Initialize@RIMDeadzone@@QEAAJXZ @ 0x140124F6C (-Initialize@RIMDeadzone@@QEAAJXZ.c)
 *     rimDestroyDeadzone @ 0x140125368 (rimDestroyDeadzone.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1401254D0 (-Release@RIMDeadzone@@QEAAXXZ.c)
 */

__int64 __fastcall RIMInitializeDeadzone(__int64 a1)
{
  int v1; // edi
  __int64 UserSessionState; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  RIMDeadzone *v5; // rax
  RIMDeadzone *v6; // rbx
  CTouchProcessor **v7; // rcx
  bool v8; // si
  __int64 v9; // rax
  int v10; // r8d
  int v11; // edx
  CTouchProcessor **v12; // rcx
  bool v13; // si
  bool v14; // bp
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // rax

  v1 = 0;
  UserSessionState = W32GetUserSessionState(a1);
  RIMLockExclusive(UserSessionState + 40);
  if ( *(_QWORD *)(W32GetUserSessionState(v3) + 256) )
  {
    v18 = *(_QWORD *)(W32GetUserSessionState(v4) + 256);
    ++*(_DWORD *)(v18 + 4);
  }
  else
  {
    v5 = (RIMDeadzone *)Win32AllocPoolZInitImpl(256LL, 0x40uLL, 0x7A645052u);
    v6 = v5;
    if ( v5 )
    {
      v1 = RIMDeadzone::Initialize(v5);
      if ( v1 < 0 )
      {
        v12 = &WPP_GLOBAL_Control;
        v13 = 0;
        if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
        {
          v12 = (CTouchProcessor **)*((unsigned int *)WPP_GLOBAL_Control + 11);
          if ( ((unsigned __int8)v12 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
            v13 = 1;
        }
        v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v15 = W32GetUserSessionState(v12);
          LOBYTE(v16) = v14;
          LOBYTE(v17) = v13;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v17,
            v16,
            *(_QWORD *)(v15 + 19392),
            3,
            1,
            13,
            (__int64)&WPP_0506f230af1236dcb1827f6a44be6f8f_Traceguids);
        }
        RIMDeadzone::Release(v6);
        rimDestroyDeadzone();
        GreDeleteFastMutex((char *)v6);
        v6 = 0LL;
      }
    }
    else
    {
      v7 = &WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
      {
        v7 = (CTouchProcessor **)*((unsigned int *)WPP_GLOBAL_Control + 11);
        if ( ((unsigned __int8)v7 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
          LOBYTE(v1) = 1;
      }
      v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v1 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v9 = W32GetUserSessionState(v7);
        LOBYTE(v10) = v8;
        LOBYTE(v11) = v1;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v11,
          v10,
          *(_QWORD *)(v9 + 19392),
          3,
          1,
          12,
          (__int64)&WPP_0506f230af1236dcb1827f6a44be6f8f_Traceguids);
      }
      v1 = -1073741801;
    }
    *(_QWORD *)(W32GetUserSessionState(v7) + 256) = v6;
  }
  v19 = W32GetUserSessionState(v18);
  RIMUnlockExclusive(v19 + 40);
  return (unsigned int)v1;
}
