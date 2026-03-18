/*
 * XREFs of xxxDoScrollMenu @ 0x1402E6618
 * Callers:
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14006F8FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x140070890 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140070D94 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140073680 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxTrackPopupMenuEx @ 0x140099644 (xxxTrackPopupMenuEx.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x14009D218 (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1400A4BAC (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     GetAppCompatFlags @ 0x1400C13E0 (GetAppCompatFlags.c)
 *     CalcSBStuff @ 0x140258028 (CalcSBStuff.c)
 *     GetWndSBDisableFlags @ 0x1402585DC (GetWndSBDisableFlags.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1402E1AD0 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1402E1C74 (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dqq @ 0x1402E34DC (WPP_RECORDER_AND_TRACE_SF_Dqq.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqldd @ 0x1402E543C (WPP_RECORDER_AND_TRACE_SF_qqldd.c)
 *     xxxSBTrackInit @ 0x1402E6E60 (xxxSBTrackInit.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

_QWORD *__fastcall xxxDoScrollMenu(struct tagWND *a1, __int64 a2, unsigned int a3, ULONG_PTR a4)
{
  int v5; // edi
  __int64 v7; // rdx
  char v8; // r14
  char v9; // r13
  __int64 v10; // rsi
  __int64 UserSessionState; // rax
  __int64 v12; // rdx
  char v13; // di
  __int64 v14; // rax
  bool v15; // di
  __int64 v16; // rbx
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  struct tagMENU *ScrollMenu; // rax
  __int64 v21; // rdx
  int v22; // ebx
  __int64 v23; // rdx
  int v25; // [rsp+20h] [rbp-A9h]
  int v26; // [rsp+28h] [rbp-A1h]
  int v27; // [rsp+30h] [rbp-99h]
  int v28; // [rsp+38h] [rbp-91h]
  int v29; // [rsp+40h] [rbp-89h]
  char v30; // [rsp+70h] [rbp-59h]
  __int64 v31[2]; // [rsp+78h] [rbp-51h] BYREF
  __int64 v32; // [rsp+88h] [rbp-41h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+90h] [rbp-39h] BYREF
  _BYTE v34[64]; // [rsp+A0h] [rbp-29h] BYREF

  BugCheckParameter3[0] = a4;
  v5 = a4;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v31, a2);
  memset_0(v34, 0, sizeof(v34));
  v8 = 1;
  v9 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v30 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v10 = *(_QWORD *)a1;
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v7);
    v29 = v10;
    WPP_RECORDER_AND_TRACE_SF_qqldd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v9,
      v30,
      *(_QWORD *)(UserSessionState + 69416),
      v25,
      v26,
      v27,
      v28);
    v5 = BugCheckParameter3[0];
  }
  if ( (int)GetAppCompatFlags(0LL, v7) >= 0 )
  {
    CalcSBStuff((__int64)a1, (__int64)v34, a3);
    if ( (GetWndSBDisableFlags((__int64 *)a1, a3) & 3) == 3 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
      {
        v8 = 0;
      }
      v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v16 = *(_QWORD *)a1;
        v17 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v12);
        LOBYTE(v18) = v15;
        LOBYTE(v19) = v8;
        WPP_RECORDER_AND_TRACE_SF_qq(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v19,
          v18,
          *(_QWORD *)(v17 + 69416),
          3,
          9,
          67,
          (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
          v16,
          0);
      }
    }
    else
    {
      ScrollMenu = xxxGetScrollMenu(a1, a3);
      v32 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=((__int64)v31, (__int64)ScrollMenu);
      if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v31) )
      {
        v21 = v32;
        if ( !v32 )
          v21 = *(_QWORD *)v31[0];
        Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, v21);
        v22 = xxxTrackPopupMenuEx((__int64)v31, 386LL, (__int16)v5, SHIWORD(v5), (__int64)a1, 0LL);
        Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(BugCheckParameter3, v23);
        if ( v22 )
        {
          if ( (unsigned __int8)v22 == 4 )
          {
            xxxSBTrackInit(a1);
          }
          else
          {
            xxxDoScroll(0LL, (struct tagTHREADINFO **)a1, (unsigned __int8)v22, 0, a3);
            xxxDoScroll(0LL, (struct tagTHREADINFO **)a1, 8u, 0, a3);
          }
        }
      }
    }
  }
  else
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
    {
      v8 = 0;
    }
    v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v14 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v12);
      WPP_RECORDER_AND_TRACE_SF_Dqq(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v8,
        v13,
        *(_QWORD *)(v14 + 69416),
        v25,
        v26,
        v27,
        v28,
        v29);
    }
  }
  return SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v31, v12);
}
