/*
 * XREFs of ?GetPhysicalFrameBounds@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@@Z @ 0x1C00170B8
 * Callers:
 *     NtUserGetWindowCompositionAttribute @ 0x1C00ECC50 (NtUserGetWindowCompositionAttribute.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0044D3C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetOrCreate@CWindowMarginProp@WindowMargins@@SAPEAV12@PEAUtagWND@@@Z @ 0x1C00EBFF8 (-GetOrCreate@CWindowMarginProp@WindowMargins@@SAPEAV12@PEAUtagWND@@@Z.c)
 *     GetWindowDpiLastNotify @ 0x1C00EDCC0 (GetWindowDpiLastNotify.c)
 *     W32GetCurrentThread @ 0x1C011D630 (W32GetCurrentThread.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x1C01A5C10 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x1C021BEF8 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 */

struct tagRECT *__fastcall WindowMargins::GetPhysicalFrameBounds(
        WindowMargins *this,
        struct tagRECT *__return_ptr retstr,
        const struct tagWND *a3)
{
  struct tagRECT *v3; // r14
  char v5; // bp
  char v6; // r8
  int v7; // edx
  int v8; // r8d
  struct WindowMargins::CWindowMarginProp *v9; // rax
  int v10; // edx
  int v11; // r8d
  __int64 v12; // rax
  INT v13; // r12d
  __int64 v14; // rcx
  int v15; // eax
  INT WindowDpiLastNotify; // ebx
  __int64 v17; // rax
  int v18; // ecx
  __int64 v19; // rax
  INT v20; // edi
  __int16 v21; // r14
  __int16 v22; // r15
  __int16 v23; // di
  int v24; // r8d
  int v25; // r8d
  __int64 v27; // [rsp+B0h] [rbp+8h]
  __int64 v28; // [rsp+B8h] [rbp+10h] BYREF

  v3 = retstr;
  v5 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
    || (LOBYTE(retstr) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(retstr) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v6 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v6 = 0;
  }
  if ( (_BYTE)retstr || v6 )
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)retstr,
      v6,
      26,
      5,
      21,
      26,
      (__int64)&WPP_96908661ae193f2a313f40ac3be36134_Traceguids,
      *(_QWORD *)&v3->left);
  *(_OWORD *)this = *(_OWORD *)(*(_QWORD *)&v3[2].right + 88LL);
  v28 = ValidateHmonitor(*(_QWORD *)(*(_QWORD *)&v3[2].right + 256LL));
  LogicalToPhysicalDPIRect(this, this, *(unsigned int *)(*(_QWORD *)&v3[2].right + 288LL), &v28);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
    || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v7) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v8) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(v8) = 0;
  }
  if ( (_BYTE)v7 || (_BYTE)v8 )
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      WPP_GLOBAL_Control->AttachedDevice,
      v7,
      v8,
      (_DWORD)gFullLog,
      5,
      21,
      27,
      (__int64)&WPP_96908661ae193f2a313f40ac3be36134_Traceguids,
      *(_DWORD *)this,
      *((_DWORD *)this + 1),
      *((_DWORD *)this + 2),
      *((_DWORD *)this + 3),
      *(_BYTE *)this - *((_DWORD *)this + 2),
      *((_BYTE *)this + 12) - *((_DWORD *)this + 1));
  v9 = WindowMargins::CWindowMarginProp::GetOrCreate((struct tagWND *)v3);
  if ( v9 )
  {
    v12 = *(_QWORD *)((char *)v9 + 44);
    v27 = v12;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v11) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v11) = 0;
    }
    v13 = (__int16)v12;
    if ( (_BYTE)v10 || (_BYTE)v11 )
      WPP_RECORDER_AND_TRACE_SF_dddd(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        v11,
        SWORD2(v12),
        5,
        21,
        28,
        (__int64)&WPP_96908661ae193f2a313f40ac3be36134_Traceguids,
        v12,
        SBYTE4(v12),
        SBYTE2(v12),
        SBYTE6(v12));
    if ( (*(_DWORD *)(*(_QWORD *)&v3[2].right + 288LL) & 0xF) == 2
      || (!W32GetCurrentThread()
       || !*((_QWORD *)PtiCurrentShared() + 57)
       || (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared() + 57) + 8LL) + 64LL) & 1) == 0
       || (v14 = *(_QWORD *)&v3[2].right, v15 = *(_DWORD *)(v14 + 288), (v15 & 0xF) != 0)
       || (v15 & 0x40000000) == 0
        ? ((v17 = *(_QWORD *)&v3[2].right, v18 = *(_DWORD *)(v17 + 288) & 0xF, v18 != 3)
         ? ((*(_DWORD *)(v17 + 232) & 0x400) == 0
          ? (v18
          || (v19 = *(_QWORD *)(*(_QWORD *)&v3[1].left + 456LL)) == 0
          || (*(_DWORD *)(**(_QWORD **)(v19 + 8) + 64LL) & 1) == 0
           ? (WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)&v3[1].left + 424LL) + 284LL))
           : (WindowDpiLastNotify = 96))
          : (WindowDpiLastNotify = GetWindowDpiLastNotify(v3)))
         : (WindowDpiLastNotify = (*(_DWORD *)(v17 + 288) >> 8) & 0x1FF))
        : (WindowDpiLastNotify = (unsigned __int16)GreGetScaledLogPixels(*(unsigned __int16 *)(v14 + 284))),
          v20 = *(unsigned __int16 *)(*(_QWORD *)(v28 + 40) + 60LL),
          v20 == WindowDpiLastNotify) )
    {
      v23 = HIWORD(v27);
      v21 = WORD2(v27);
      v22 = WORD1(v27);
    }
    else
    {
      LOWORD(v13) = EngMulDiv(v13, v20, WindowDpiLastNotify);
      v21 = EngMulDiv(SWORD2(v27), v20, WindowDpiLastNotify);
      v22 = EngMulDiv(SWORD1(v27), v20, WindowDpiLastNotify);
      v23 = EngMulDiv(SHIWORD(v27), v20, WindowDpiLastNotify);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
        || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v10) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(v24) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        LOBYTE(v24) = 0;
      }
      if ( (_BYTE)v10 || (_BYTE)v24 )
        WPP_RECORDER_AND_TRACE_SF_dddd(
          WPP_GLOBAL_Control->AttachedDevice,
          v10,
          v24,
          v22,
          5,
          21,
          29,
          (__int64)&WPP_96908661ae193f2a313f40ac3be36134_Traceguids,
          v13,
          v21,
          v22,
          v23);
    }
    *(_DWORD *)this += (__int16)v13;
    *((_DWORD *)this + 1) += v21;
    *((_DWORD *)this + 2) -= v22;
    *((_DWORD *)this + 3) -= v23;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
    || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v10) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v5 = 0;
  if ( (_BYTE)v10 || v5 )
  {
    v25 = 30;
    LOBYTE(v25) = v5;
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      WPP_GLOBAL_Control->AttachedDevice,
      v10,
      v25,
      (_DWORD)gFullLog,
      5,
      21,
      30,
      (__int64)&WPP_96908661ae193f2a313f40ac3be36134_Traceguids,
      *(_DWORD *)this,
      *((_DWORD *)this + 1),
      *((_DWORD *)this + 2),
      *((_DWORD *)this + 3),
      *(_BYTE *)this - *((_DWORD *)this + 2),
      *((_BYTE *)this + 12) - *((_DWORD *)this + 1));
  }
  return (struct tagRECT *)this;
}
