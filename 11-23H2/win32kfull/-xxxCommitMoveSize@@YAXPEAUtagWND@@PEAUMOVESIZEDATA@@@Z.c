/*
 * XREFs of ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1C01EB3CC
 * Callers:
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01EE188 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0044724 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     xxxSetWindowPos @ 0x1C0045448 (xxxSetWindowPos.c)
 *     ?xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z @ 0x1C005E948 (-xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C005E99C (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?IsVerticallyMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C005FE74 (-IsVerticallyMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     _MonitorFromRect @ 0x1C00AE960 (_MonitorFromRect.c)
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C00B04A0 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     _GetProp @ 0x1C00B6E24 (_GetProp.c)
 *     CkptRestore @ 0x1C00E1D4C (CkptRestore.c)
 *     _GetDesktopWindow @ 0x1C00EA360 (_GetDesktopWindow.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x1C01A5C10 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     ?MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z @ 0x1C01E9A1C (-MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z.c)
 *     ?ShouldGoMonitorMaximizedMoveSizeData@@YA_NPEAUMOVESIZEDATA@@@Z @ 0x1C01EA044 (-ShouldGoMonitorMaximizedMoveSizeData@@YA_NPEAUMOVESIZEDATA@@@Z.c)
 *     ?SwapRect@@YAXPEAUtagRECT@@0@Z @ 0x1C01EA48C (-SwapRect@@YAXPEAUtagRECT@@0@Z.c)
 *     ?UpdateDwmSnapArrangedInitiated@@YAXPEAUtagWND@@@Z @ 0x1C01EA7E4 (-UpdateDwmSnapArrangedInitiated@@YAXPEAUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddddddD @ 0x1C01F1BA0 (WPP_RECORDER_AND_TRACE_SF_ddddddD.c)
 *     ?MigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C023B054 (-MigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 */

void __fastcall xxxCommitMoveSize(struct tagWND *a1, struct MOVESIZEDATA *a2)
{
  _DWORD *v2; // r14
  int v3; // ebx
  int v4; // edi
  struct MOVESIZEDATA *v7; // rdx
  int v8; // r8d
  __int64 v9; // r9
  unsigned __int8 v10; // al
  __int64 v11; // r9
  int v12; // r12d
  _DWORD *Prop; // rdi
  struct tagMONITOR *v14; // r8
  int v15; // edx
  __int64 v16; // rcx
  char v17; // dl
  struct tagWND *v18; // rbx
  int v19; // eax
  int v20; // edx
  struct tagMONITOR *v21; // r8
  char v22; // dl
  __int64 v23; // rdx
  __int64 v24; // rcx
  char v25; // dl
  int v26; // edx
  __int64 v27; // rdx
  struct tagRECT *v28; // rbp
  int v29; // eax
  int v30; // ebp
  char v31; // dl
  _DWORD *v32; // rcx
  int v33; // [rsp+20h] [rbp-E8h]
  int v34; // [rsp+28h] [rbp-E0h]
  int v35; // [rsp+38h] [rbp-D0h]
  __int64 v36; // [rsp+40h] [rbp-C8h]
  __int64 v37; // [rsp+48h] [rbp-C0h]
  __int64 v38; // [rsp+50h] [rbp-B8h]
  __int64 v39; // [rsp+58h] [rbp-B0h]
  __int64 v40; // [rsp+60h] [rbp-A8h]
  __int64 v41; // [rsp+68h] [rbp-A0h]
  struct tagRECT v42; // [rsp+80h] [rbp-88h] BYREF
  __int64 v43; // [rsp+90h] [rbp-78h] BYREF
  __int128 v44; // [rsp+98h] [rbp-70h]
  int v45; // [rsp+A8h] [rbp-60h]
  char v46; // [rsp+ACh] [rbp-5Ch]
  __int128 v47; // [rsp+B0h] [rbp-58h]

  v2 = (_DWORD *)((char *)a2 + 200);
  v3 = 0;
  v4 = 0;
  if ( *((_QWORD *)a1 + 13) != GetDesktopWindow((__int64)a1) )
    goto LABEL_82;
  v10 = ShouldGoMonitorMaximizedMoveSizeData(v7);
  v12 = v10;
  if ( (*v2 & 0x300) != 0 || v10 )
    v3 = 1;
  Prop = (_DWORD *)GetProp((__int64)a1, *((unsigned __int16 *)&WPP_MAIN_CB.AlignmentRequirement + 2), 1LL, v11);
  if ( Prop )
  {
    if ( (unsigned int)(*((_DWORD *)a2 + 44) - 1) <= 1
      && (v15 = 24576, (*v2 & 0x6000) == 0x6000)
      && (*v2 & 0x300) == 0x300 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v15) = 0;
      }
      if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v15,
          (_DWORD)v14,
          (unsigned int)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
          4,
          1,
          51,
          (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids);
      }
      *Prop = *((_DWORD *)a2 + 6);
      Prop[2] = *((_DWORD *)a2 + 8);
    }
    else if ( *((_QWORD *)a2 + 27) == *((_QWORD *)a2 + 29) )
    {
      if ( (*v2 & 0x1000) == 0 && v3 )
      {
        *(_OWORD *)Prop = *(_OWORD *)((char *)a2 + 136);
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (v25 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          v25 = 0;
        }
        LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_dddddd(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v25,
            (char)v14,
            (__int64)gFullLog,
            4u,
            1u,
            0x36u,
            (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids);
        AdvancedWindowPos::MigrateCheckpoint(a1, *((struct tagWND **)a2 + 29), v14);
      }
    }
    else if ( v12 || IsSemiMaximized(a1) )
    {
      if ( (*v2 & 0x800000) != 0 )
      {
        v16 = *(_QWORD *)Prop - *((_QWORD *)a2 + 19);
        if ( *(_QWORD *)Prop == *((_QWORD *)a2 + 19) )
          v16 = *((_QWORD *)Prop + 1) - *((_QWORD *)a2 + 20);
        if ( v16 )
        {
          *(_OWORD *)Prop = *(_OWORD *)((char *)a2 + 152);
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (v17 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            v17 = 0;
          }
          if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_dddddd(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v17,
              WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
              (__int64)gFullLog,
              4u,
              1u,
              0x34u,
              (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids);
        }
      }
      if ( IsVerticallyMaximized(a1) )
        MonitorFromRect((__int64)Prop, 2LL, 0LL);
      v18 = (struct tagWND *)*((_QWORD *)a2 + 29);
      if ( (*v2 & 0x300) == 0x300 )
      {
        v19 = *((_DWORD *)a2 + 65);
        if ( *Prop <= v19 && v19 < Prop[2] )
          v18 = (struct tagWND *)MonitorFromRect((__int64)Prop, 2LL, 0LL);
      }
      if ( IsVerticallyMaximized(a1) && ((unsigned __int16)v21 & 0x300) == 0x300 )
      {
        LODWORD(v21) = (unsigned int)v21 | 0x40000;
        *v2 = (_DWORD)v21;
      }
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v20) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v20) = 0;
      }
      LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v20,
          (_DWORD)v21,
          (unsigned int)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
          4,
          1,
          53,
          (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids);
      AdvancedWindowPos::MigrateCheckpoint(a1, v18, v21);
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (v22 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v22 = 0;
    }
    if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v22,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gFullLog,
        4u,
        1u,
        0x37u,
        (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids);
  }
  if ( ((*(_QWORD *)v2 ^ (*(_QWORD *)v2 >> 5)) & 0x300LL) != 0 || (*(_QWORD *)v2 & 0x40000) != 0 )
  {
    v3 = 1;
  }
  else
  {
    v23 = *((_QWORD *)a1 + 5);
    v3 = 0;
    v24 = *((_QWORD *)a2 + 3) - *(_QWORD *)(v23 + 88);
    if ( !v24 )
      v24 = *((_QWORD *)a2 + 4) - *(_QWORD *)(v23 + 96);
    if ( v24 )
    {
      v4 = 1;
      goto LABEL_73;
    }
  }
  v4 = 0;
LABEL_73:
  MakeArrangedStateObservable(a2);
  if ( v12 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v26) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v26) = 0;
    }
    if ( (_BYTE)v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v26,
        v8,
        (unsigned int)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
        4,
        1,
        56,
        (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids);
    }
    v43 = *((_QWORD *)a2 + 29);
    v44 = 0LL;
    v45 = 0;
    v46 = 0;
    v47 = 0LL;
    xxxMinMaximizeEx(a1, 3u, gdwPUDFlags & 0x10000 | 6, (__int64)&v43);
    *((_DWORD *)a2 + 50) |= 0x20000000u;
    return;
  }
LABEL_82:
  v27 = (unsigned int)*v2;
  if ( (*v2 & 0x7000) == 0x1000 && (v27 & 0x20) == 0
    || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0 && (v27 & 0x80000) == 0 )
  {
    v28 = (struct tagRECT *)GetProp((__int64)a1, *((unsigned __int16 *)&WPP_MAIN_CB.AlignmentRequirement + 2), 1LL, v9);
    if ( v28 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v27) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v27) = 0;
      }
      if ( (_BYTE)v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v27,
          v8,
          (_DWORD)WPP_GLOBAL_Control,
          4,
          1,
          57,
          (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids);
      }
      v42 = *(struct tagRECT *)((char *)a2 + 24);
      SwapRect(v28, &v42);
      xxxMinMaximize(*((_QWORD *)a2 + 2), 9LL, 4LL);
      SwapRect(&v42, v28);
      MakeArrangedStateObservable(a2);
    }
  }
  v29 = *((_DWORD *)a2 + 44);
  v30 = 516;
  if ( (v29 == 9 && !v4 || v29 == 10) && !v3 )
    v30 = 517;
  if ( (*v2 & 0x300) != 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v27) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v27) = 0;
    }
    if ( (_BYTE)v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v27,
        v8,
        (unsigned int)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
        4,
        1,
        58,
        (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids);
    }
    UpdateDwmSnapArrangedInitiated(*((struct tagWND **)a2 + 2), v27);
  }
  *v2 |= 0x20000000u;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v27) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v27) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v8) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(v8) = 0;
  }
  if ( (_BYTE)v27 || (_BYTE)v8 )
    WPP_RECORDER_AND_TRACE_SF_ddddddD(
      WPP_GLOBAL_Control->AttachedDevice,
      v27,
      v8,
      (_DWORD)gFullLog,
      v33,
      v34,
      59,
      v35,
      *((_DWORD *)a2 + 6),
      *((_DWORD *)a2 + 7),
      *((_DWORD *)a2 + 8),
      *((_DWORD *)a2 + 9),
      *((_DWORD *)a2 + 8) - *((_DWORD *)a2 + 6),
      *((_BYTE *)a2 + 36) - *((_DWORD *)a2 + 7),
      v30);
  xxxSetWindowPos(
    a1,
    0LL,
    *((unsigned int *)a2 + 6),
    *((unsigned int *)a2 + 7),
    *((_DWORD *)a2 + 8) - *((_DWORD *)a2 + 6),
    *((_DWORD *)a2 + 9) - *((_DWORD *)a2 + 7),
    v30);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v31 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v31 = 0;
  }
  if ( v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v32 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 40LL);
    LODWORD(v41) = v32[25] - v32[23];
    LODWORD(v40) = v32[24] - v32[22];
    LODWORD(v39) = v32[25];
    LODWORD(v38) = v32[24];
    LODWORD(v37) = v32[23];
    LODWORD(v36) = v32[22];
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v31,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      4u,
      1u,
      0x3Cu,
      (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
    CkptRestore(a1, (struct MOVESIZEDATA *)((char *)a2 + 24));
}
