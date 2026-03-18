/*
 * XREFs of ?xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z @ 0x1C01F087C
 * Callers:
 *     ?xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z @ 0x1C01F0D1C (-xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0044724 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _GetProp @ 0x1C00B6E24 (_GetProp.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?HitTargetAndMonitorFromPoint@@YA_NUtagPOINT@@W4THRESHOLD_SELECTOR@@PEAPEAUtagMONITOR@@PEAW4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01E9628 (-HitTargetAndMonitorFromPoint@@YA_NUtagPOINT@@W4THRESHOLD_SELECTOR@@PEAPEAUtagMONITOR@@PEAW4THRE.c)
 *     ?MoveDragRect@@YA_NPEBUMOVESIZEDATA@@UtagPOINT@@_NPEAUtagRECT@@@Z @ 0x1C01E9AA8 (-MoveDragRect@@YA_NPEBUMOVESIZEDATA@@UtagPOINT@@_NPEAUtagRECT@@@Z.c)
 *     ?SetDragInThresholdAlways@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C01E9ED4 (-SetDragInThresholdAlways@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?SetDragInToDragOutThreshold@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C01E9F20 (-SetDragInToDragOutThreshold@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?SetDragOutThresholdAlways@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C01E9F58 (-SetDragOutThresholdAlways@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?SetDragOutToDragInThreshold@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C01E9FA0 (-SetDragOutToDragInThreshold@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxMoveDragRectFromMaximize@@YAXPEAUMOVESIZEDATA@@UtagPOINT@@AEBUtagRECT@@W4THRESHOLD_MARGIN_DIRECTION@@PEAU3@PEAI@Z @ 0x1C01EEF2C (-xxxMoveDragRectFromMaximize@@YAXPEAUMOVESIZEDATA@@UtagPOINT@@AEBUtagRECT@@W4THRESHOLD_MARGIN_DI.c)
 *     ?xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@2@Z @ 0x1C01F17A8 (-xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@.c)
 *     ?SHData_NeedsArrangementCallout@MOVESIZEDATA@@QEBA_NW4THRESHOLD_MARGIN_DIRECTION@@AEBUtagPOINT@@@Z @ 0x1C0239D84 (-SHData_NeedsArrangementCallout@MOVESIZEDATA@@QEBA_NW4THRESHOLD_MARGIN_DIRECTION@@AEBUtagPOINT@@.c)
 */

char __fastcall xxxSizeOrMoveRect(struct MOVESIZEDATA *this, struct tagPOINT a2, struct tagRECT *a3, unsigned int *a4)
{
  unsigned int v5; // edx
  int v8; // eax
  int v9; // ecx
  PDEVICE_OBJECT v10; // rcx
  int v11; // r9d
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // r9
  unsigned int v15; // r15d
  int v16; // eax
  unsigned int v17; // r12d
  __int64 v18; // rcx
  bool v19; // al
  char v20; // r13
  _DWORD *Prop; // rax
  int v22; // edx
  int v23; // r8d
  unsigned int v24; // r8d
  char v25; // r8
  bool v26; // [rsp+40h] [rbp-58h]
  __int64 v27[10]; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v28; // [rsp+A0h] [rbp+8h] BYREF
  struct tagPOINT v29; // [rsp+A8h] [rbp+10h]
  struct tagRECT *v30; // [rsp+B0h] [rbp+18h]
  _DWORD *v31; // [rsp+B8h] [rbp+20h]

  v31 = a4;
  v30 = a3;
  v29 = a2;
  *a4 = 534;
  v5 = *((_DWORD *)this + 50);
  if ( (v5 & 0x800) == 0 )
    return MoveDragRect(this, a2, 0, a3);
  v8 = a2.x - *((_DWORD *)this + 42);
  v9 = v29.y - *((_DWORD *)this + 43);
  v28 = __PAIR64__(v9, v8);
  if ( v8 == *((_DWORD *)this + 65) && v9 == *((_DWORD *)this + 66) )
  {
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v5) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v5) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(a3) = 0;
    }
    if ( !(_BYTE)v5 && !(_BYTE)a3 )
      return 0;
    v11 = 44;
LABEL_15:
    WPP_RECORDER_AND_TRACE_SF_(
      v10->AttachedDevice,
      v5,
      (_DWORD)a3,
      v11,
      5,
      1,
      v11,
      (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids);
    return 0;
  }
  v12 = v28;
  v13 = *(_QWORD *)((char *)this + 268);
  *(_QWORD *)((char *)this + 260) = v28;
  v27[0] = 0LL;
  LODWORD(v28) = 0;
  HitTargetAndMonitorFromPoint(v13, (v5 >> 15) & 7, v27, &v28);
  v15 = v28;
  if ( (_DWORD)v28 == 3 )
    v15 = 4;
  if ( *((_DWORD *)this + 60) == 3 )
  {
    LODWORD(v28) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3753);
  }
  v16 = *((_DWORD *)this + 51);
  v17 = *((_DWORD *)this + 60);
  LOBYTE(v28) = v15 != v17;
  *((_DWORD *)this + 51) = v16 ^ (v16 ^ (v16 | (v15 != v17))) & 1;
  v18 = v27[0];
  v19 = v27[0] != *((_QWORD *)this + 29);
  v26 = v19;
  if ( v17 == 4 || (v20 = 1, v15 != 4) )
    v20 = 0;
  *((_DWORD *)this + 60) = v15;
  *((_QWORD *)this + 29) = v18;
  if ( v15 != v17 || v19 )
  {
    if ( v17 == 4 )
    {
      if ( v15 == 4 )
        goto LABEL_35;
LABEL_33:
      SetDragInToDragOutThreshold(this);
      goto LABEL_35;
    }
    if ( v15 != 4 )
    {
      if ( v15 )
      {
        SetDragOutThresholdAlways(this);
        goto LABEL_35;
      }
      goto LABEL_33;
    }
    if ( v17 )
      SetDragOutToDragInThreshold(this);
    else
      SetDragInThresholdAlways(this);
  }
LABEL_35:
  if ( v20 && (*((_DWORD *)this + 50) & 0x80u) != 0 )
  {
    Prop = (_DWORD *)GetProp(
                       *((_QWORD *)this + 2),
                       *((unsigned __int16 *)&WPP_MAIN_CB.AlignmentRequirement + 2),
                       1LL,
                       v14);
    xxxMoveDragRectFromMaximize((__int64)this, v12, Prop, v17, v30, v31);
LABEL_67:
    if ( (*((_DWORD *)this + 50) & 0x400000) != 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v22) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v22) = 0;
      }
      if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v22,
          v23,
          47,
          4,
          1,
          47,
          (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids);
      }
      *((_DWORD *)this + 50) &= 0xFFBFF7FF;
    }
    goto LABEL_76;
  }
  LODWORD(a3) = *((_DWORD *)this + 50);
  v5 = (unsigned __int16)a3 & 0x300;
  if ( (char)a3 < 0 && (*((_BYTE *)this + 204) & 1) == 0 && ((unsigned __int16)a3 & 0x300) == 0 )
  {
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v5) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v5) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(a3) = 0;
    }
    if ( !(_BYTE)v5 && !(_BYTE)a3 )
      return 0;
    v11 = 45;
    goto LABEL_15;
  }
  v25 = 0;
  if ( !v15 && !v17 && ((unsigned __int16)a3 & 0x300) != 0 )
  {
    v24 = (unsigned int)a3 & 0x38000;
    if ( v24 == 0x20000 || v24 == 163840 )
      v25 = 1;
  }
  if ( !MoveDragRect(this, a2, v25, v30) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v22) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v22) = 0;
    }
    if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v22,
        v23,
        46,
        3,
        1,
        46,
        (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids);
    }
    return 0;
  }
  if ( v20 )
    goto LABEL_67;
LABEL_76:
  if ( (_BYTE)v28 || v26 || (unsigned __int8)MOVESIZEDATA::SHData_NeedsArrangementCallout(this, v15, (char *)this + 268) )
    xxxUpdateArrangeDataForMove(this, v27[0], v15, v17);
  return 1;
}
