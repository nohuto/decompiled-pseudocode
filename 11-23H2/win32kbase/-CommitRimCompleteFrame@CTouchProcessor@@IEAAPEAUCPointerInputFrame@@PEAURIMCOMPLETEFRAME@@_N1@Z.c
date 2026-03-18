/*
 * XREFs of ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C01BE724
 * Callers:
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x1C00D41D8 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x1C00D49B8 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x1C01D0228 (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0038570 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C004F080 (Win32AllocPoolZInit.c)
 *     HMAssignmentLock @ 0x1C004FF50 (HMAssignmentLock.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0056A68 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     HMValidateHandleNoSecure @ 0x1C00590FC (HMValidateHandleNoSecure.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0072E20 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C00B9418 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00B9500 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x1C00D6F00 (memmove.c)
 *     EtwTraceBeginPointerFrameCommit @ 0x1C00DF000 (EtwTraceBeginPointerFrameCommit.c)
 *     ?AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z @ 0x1C00E3AD2 (-AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z.c)
 *     ?CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z @ 0x1C00E3DC0 (-CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z.c)
 *     ?FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z @ 0x1C00E3EF8 (-FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z.c)
 *     GetNextFrameId @ 0x1C00E5930 (GetNextFrameId.c)
 *     IsTouchpadDevice @ 0x1C00E5A5C (IsTouchpadDevice.c)
 *     ?CommitFrame@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@@Z @ 0x1C01BDB0C (-CommitFrame@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@@Z.c)
 *     ?CommitFramePointer@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1C01BDCA8 (-CommitFramePointer@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@PEBUtagPOI.c)
 *     ?FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z @ 0x1C01C3EA4 (-FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z.c)
 */

struct CPointerInputFrame *__fastcall CTouchProcessor::CommitRimCompleteFrame(
        struct _KTHREAD **this,
        struct RIMCOMPLETEFRAME *a2,
        char a3,
        char a4)
{
  struct RIMCOMPLETEFRAME *v5; // rbp
  unsigned int v7; // r15d
  char v8; // di
  char v9; // r8
  int v10; // edx
  PDEVICE_OBJECT v11; // rcx
  __int16 v12; // ax
  char *v13; // rcx
  KPROCESSOR_MODE v14; // r8
  int v15; // r9d
  __int64 v16; // r12
  int v17; // r8d
  __int64 v18; // rsi
  struct CPointerQFrame *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r13
  __int64 v29; // rbx
  _OWORD *v30; // rcx
  int v31; // ebx
  __int64 v32; // r13
  __int64 v33; // rbx
  int v34; // edx
  __int64 v35; // r15
  void *v36; // rax
  int v37; // edx
  CTouchProcessor *v38; // rcx
  __int64 v39; // rbx
  char *v40; // rcx
  char *v41; // r14
  CTouchProcessor *v42; // rcx
  int v43; // edx
  char v44; // dl
  struct RIMDEV *v46; // [rsp+50h] [rbp-98h]
  __int64 *v47[2]; // [rsp+60h] [rbp-88h] BYREF
  CInpLockGuard *v48[15]; // [rsp+70h] [rbp-78h] BYREF
  PVOID Object; // [rsp+F0h] [rbp+8h] BYREF
  char v50; // [rsp+100h] [rbp+18h]
  char v51; // [rsp+108h] [rbp+20h]

  v51 = a4;
  v50 = a3;
  v5 = a2;
  v7 = 0;
  v8 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v9 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v9 = 0;
  }
  if ( (_BYTE)a2 || v9 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      v9,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      4,
      154,
      (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v48,
    (struct CInpLockGuard *)(this + 4),
    0LL);
  if ( this[5] != KeGetCurrentThread() )
  {
    LODWORD(Object) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6208);
  }
  if ( a4 )
  {
    if ( *((_DWORD *)this + 43) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
        || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v10) = 0;
      }
      if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v10,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          3,
          4,
          155,
          (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
      v11 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
        || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v10) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v8 = 0;
      if ( !(_BYTE)v10 && !v8 )
        goto LABEL_184;
      v12 = 156;
      goto LABEL_183;
    }
  }
  else if ( *((_DWORD *)this + 42) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        4,
        157,
        (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v8 = 0;
    if ( !(_BYTE)v10 && !v8 )
      goto LABEL_184;
    v12 = 158;
LABEL_183:
    WPP_RECORDER_AND_TRACE_SF_(
      v11->AttachedDevice,
      v10,
      v8,
      v11->DeviceExtension,
      5,
      4,
      v12,
      (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
    goto LABEL_184;
  }
  v13 = (char *)*((_QWORD *)v5 + 4);
  v14 = *((_DWORD *)v5 + 48) == 0;
  Object = 0LL;
  v15 = RawInputManagerDeviceObjectResolveHandle(v13, 3u, v14, &Object);
  if ( v15 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (v44 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v44 = 0;
    }
    if ( v44 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v44,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
        2u,
        4u,
        0x9Fu,
        (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids,
        v15);
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v8 = 0;
    if ( !(_BYTE)v10 && !v8 )
      goto LABEL_184;
    v12 = 160;
    goto LABEL_183;
  }
  if ( Object == (PVOID)-72LL )
    v16 = 0LL;
  else
    v16 = *((_QWORD *)Object + 9);
  ObfDereferenceObject(Object);
  v46 = (struct RIMDEV *)HMValidateHandleNoSecure(v16, 19);
  if ( !v46 )
  {
    LODWORD(Object) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6261);
  }
  if ( !*((_DWORD *)v5 + 6) )
  {
    LODWORD(Object) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6264);
  }
  EtwTraceBeginPointerFrameCommit(0, *((_DWORD *)v5 + 6), v17);
  v18 = Win32AllocPoolZInit(0x108uLL, 0x66707355u);
  if ( !v18 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        4,
        161,
        (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v8 = 0;
    if ( !(_BYTE)v10 && !v8 )
      goto LABEL_184;
    v12 = 162;
    goto LABEL_183;
  }
  v19 = CTouchProcessor::AllocPointerQFrameList(this, *((_DWORD *)v5 + 6));
  *(_QWORD *)(v18 + 248) = v19;
  if ( !v19 )
  {
    Win32FreePool((char *)v18);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        4,
        163,
        (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v8 = 0;
    if ( !(_BYTE)v10 && !v8 )
      goto LABEL_184;
    v12 = 164;
    goto LABEL_183;
  }
  v23 = 480LL * *((unsigned int *)v5 + 6);
  if ( v23 <= 0xFFFFFFFF )
    *(_QWORD *)(v18 + 240) = Win32AllocPoolZInit((unsigned int)v23, 0x65707355u);
  if ( !*(_QWORD *)(v18 + 240) )
  {
    CTouchProcessor::FreePointerQFrameList(
      (CTouchProcessor *)v23,
      *(struct CPointerQFrame **)(v18 + 248),
      *((_DWORD *)v5 + 6));
    Win32FreePool((char *)v18);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        4,
        165,
        (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v8 = 0;
    if ( !(_BYTE)v10 && !v8 )
      goto LABEL_184;
    v12 = 166;
    goto LABEL_183;
  }
  *(_DWORD *)(v18 + 224) = 1;
  *(_DWORD *)(v18 + 40) = GetNextFrameId(v23, v20, v21, v22);
  *(_DWORD *)(v18 + 48) = *((_DWORD *)v5 + 6);
  *(_QWORD *)(v18 + 64) = v16;
  *(_OWORD *)(v18 + 72) = *((_OWORD *)v5 + 3);
  *(_OWORD *)(v18 + 88) = *((_OWORD *)v5 + 4);
  *(_OWORD *)(v18 + 104) = *((_OWORD *)v5 + 5);
  *(_OWORD *)(v18 + 120) = *((_OWORD *)v5 + 6);
  *(_OWORD *)(v18 + 136) = *((_OWORD *)v5 + 7);
  *(_OWORD *)(v18 + 152) = *((_OWORD *)v5 + 8);
  *(_OWORD *)(v18 + 168) = *((_OWORD *)v5 + 9);
  *(_OWORD *)(v18 + 184) = *((_OWORD *)v5 + 10);
  *(_OWORD *)(v18 + 200) = *((_OWORD *)v5 + 11);
  *(_QWORD *)(v18 + 216) = *(_QWORD *)(*((_QWORD *)v5 + 29) + 96LL);
  InputTraceLogging::Pointer::CommitFrame(v46, (const struct CPointerInputFrame *)v18);
  v28 = *((_QWORD *)v5 + 29);
  if ( *((_DWORD *)v5 + 6) )
  {
    do
    {
      v29 = 480LL * v7;
      *(_DWORD *)(v29 + *(_QWORD *)(v18 + 240) + 156) = *(_DWORD *)v28;
      v30 = (_OWORD *)(v29 + *(_QWORD *)(v18 + 240) + 160LL);
      *v30 = *(_OWORD *)(v28 + 8);
      v30[1] = *(_OWORD *)(v28 + 24);
      v30[2] = *(_OWORD *)(v28 + 40);
      v30[3] = *(_OWORD *)(v28 + 56);
      v30[4] = *(_OWORD *)(v28 + 72);
      v30[5] = *(_OWORD *)(v28 + 88);
      v30[6] = *(_OWORD *)(v28 + 104);
      v30 += 8;
      *(v30 - 1) = *(_OWORD *)(v28 + 120);
      *v30 = *(_OWORD *)(v28 + 136);
      v30[1] = *(_OWORD *)(v28 + 152);
      v30[2] = *(_OWORD *)(v28 + 168);
      *((_QWORD *)v30 + 6) = *(_QWORD *)(v28 + 184);
      *(_QWORD *)(*(_QWORD *)(v18 + 240) + v29 + 184) = v16;
      CInputDest::SetEmpty((CInputDest *)(v29 + *(_QWORD *)(v18 + 240) + 352LL));
      InputTraceLogging::Pointer::CommitFramePointer(
        v46,
        (const struct CPointerInputFrame *)v18,
        (const struct tagPOINTEREVENTINT *)(v29 + *(_QWORD *)(v18 + 240) + 160LL));
      v31 = *(_DWORD *)(v28 + 28);
      if ( (v31 & 0x10000) != 0 || IsTouchpadDevice(v16) && (v31 & 0x10070) != 0 )
        *((_BYTE *)this + 48) = 1;
      ++v7;
      v28 += 192LL;
    }
    while ( v7 < *((_DWORD *)v5 + 6) );
  }
  *(_DWORD *)(v18 + 56) = *((_DWORD *)v5 + 7);
  v32 = 0LL;
  *(_QWORD *)v18 = *(_QWORD *)(SGDGetUserSessionState(v25, v24, v26, v27) + 3424);
  v33 = *((_QWORD *)v5 + 28);
  while ( 1 )
  {
    if ( !v33 )
    {
      v47[0] = (__int64 *)(v18 + 256);
      v47[1] = *((__int64 **)v46 + 59);
      HMAssignmentLock(v47, 0);
      if ( v50
        || (CTouchProcessor::CommitInputFrame((CTouchProcessor *)this, (struct CPointerInputFrame *)v18),
            IsTouchpadDevice(v16)) )
      {
        *(_DWORD *)(v18 + 228) |= 0x80u;
      }
      else if ( v51 )
      {
        *(_DWORD *)(v18 + 228) |= 0x40u;
        ++*((_DWORD *)this + 42);
      }
      else
      {
        ++*((_DWORD *)this + 43);
      }
      *(_QWORD *)(v18 + 32) = v18 + 24;
      *(_QWORD *)(v18 + 24) = v18 + 24;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
        || (LOBYTE(v37) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v37) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v8 = 0;
      if ( (_BYTE)v37 || v8 )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v37,
          v8,
          WPP_GLOBAL_Control->DeviceExtension,
          5,
          4,
          170,
          (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
      goto LABEL_185;
    }
    v35 = Win32AllocPoolZInit(0x20uLL, 0x64727355u);
    if ( !v35 )
      break;
    v36 = (void *)Win32AllocPoolZInit(*(unsigned int *)(v33 + 4), 0x64727355u);
    *(_QWORD *)(v35 + 16) = v36;
    *(_DWORD *)(v35 + 4) = *(_DWORD *)v33;
    *(_DWORD *)(v35 + 8) = *(_DWORD *)(v33 + 4);
    memmove(v36, *(const void **)(v33 + 8), *(unsigned int *)(v33 + 4));
    if ( v32 )
      *(_QWORD *)(v32 + 24) = v35;
    else
      *(_QWORD *)(v18 + 232) = v35;
    v33 = *(_QWORD *)(v33 + 16);
    v32 = v35;
  }
  v38 = (CTouchProcessor *)WPP_GLOBAL_Control;
  LOBYTE(v34) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
  if ( (_BYTE)v34 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v34,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      4,
      168,
      (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
  v39 = *(_QWORD *)(v18 + 232);
  while ( v39 )
  {
    v40 = *(char **)(v39 + 16);
    v41 = (char *)v39;
    if ( v40 )
      Win32FreePool(v40);
    v39 = *(_QWORD *)(v39 + 24);
    Win32FreePool(v41);
  }
  CTouchProcessor::FreePointerInfoList(v38, *(struct CPointerInfoNode **)(v18 + 240), *((_DWORD *)v5 + 6));
  CTouchProcessor::FreePointerQFrameList(v42, *(struct CPointerQFrame **)(v18 + 248), *((_DWORD *)v5 + 6));
  Win32FreePool((char *)v18);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
    || (LOBYTE(v43) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v43) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v8 = 0;
  if ( (_BYTE)v43 || v8 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v43,
      v8,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      4,
      169,
      (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
LABEL_184:
  v18 = 0LL;
LABEL_185:
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v48);
  return (struct CPointerInputFrame *)v18;
}
