/*
 * XREFs of ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_CommitMousePosAndMoveOptions@@PEAU_MousePacketPerf@@@Z @ 0x14017581C
 * Callers:
 *     EditionCommitMousePosAndMove @ 0x140175780 (EditionCommitMousePosAndMove.c)
 * Callees:
 *     SetWakeBit @ 0x1400456D0 (SetWakeBit.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14004A50C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     PhkFirstValid @ 0x140080F00 (PhkFirstValid.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x1400812C0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x140092D78 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHKPEAX_K@Z @ 0x140093BC8 (-MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHKPEAX_K@Z.c)
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x140094048 (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     IsRemoteConnection @ 0x140131CF0 (IsRemoteConnection.c)
 *     TransitionCursorSuppressionState @ 0x140132F80 (TransitionCursorSuppressionState.c)
 *     UsingPenCursors @ 0x140178AF4 (UsingPenCursors.c)
 *     RawInputRequestedForMouse @ 0x14017ADD4 (RawInputRequestedForMouse.c)
 *     EditionPostRawMouseInputMessage @ 0x140230980 (EditionPostRawMouseInputMessage.c)
 *     Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline @ 0x140274E78 (Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline.c)
 *     ?RestoreMouseCursors@@YAXXZ @ 0x1402A3D14 (-RestoreMouseCursors@@YAXXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall xxxMoveEventAbsolute(
        int a1,
        int a2,
        __int64 a3,
        void *a4,
        __int64 a5,
        unsigned int a6,
        unsigned __int64 a7,
        char a8,
        LARGE_INTEGER *a9)
{
  bool v9; // si
  unsigned int v11; // r12d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // ebx
  unsigned int v20; // r14d
  __int64 v21; // rcx
  unsigned int v22; // ebx
  __int64 v23; // rdx
  __int64 UserSessionState; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct tagTHREADINFO *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r15
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rdx
  LARGE_INTEGER PerformanceCounter; // rax
  bool v34; // zf
  __int64 v35; // rcx
  unsigned int v37; // ebx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  const struct tagPOINT *v44; // r15
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  LARGE_INTEGER v48; // rax
  LARGE_INTEGER *v49; // r13
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rax
  unsigned int y; // ebx
  unsigned int x; // edi
  CursorApiRouter *v55; // rsi
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int32 v67; // ebx
  __int64 v68; // rdx
  __int64 v69; // rcx
  _DWORD v72[2]; // [rsp+48h] [rbp-99h] BYREF
  unsigned int v73; // [rsp+50h] [rbp-91h]
  LARGE_INTEGER *v74; // [rsp+58h] [rbp-89h]
  __int64 *QuadPart; // [rsp+60h] [rbp-81h] BYREF
  __int64 Valid; // [rsp+68h] [rbp-79h]
  __int64 *v77; // [rsp+70h] [rbp-71h] BYREF
  void *v78; // [rsp+78h] [rbp-69h]
  _WORD v79[2]; // [rsp+80h] [rbp-61h] BYREF
  int v80; // [rsp+84h] [rbp-5Dh]
  int v81; // [rsp+88h] [rbp-59h]
  int v82; // [rsp+8Ch] [rbp-55h]
  int v83; // [rsp+90h] [rbp-51h]
  int v84; // [rsp+94h] [rbp-4Dh]
  _DWORD v85[2]; // [rsp+98h] [rbp-49h] BYREF
  void *v86; // [rsp+A0h] [rbp-41h]
  __int64 v87; // [rsp+A8h] [rbp-39h]
  _DWORD v88[6]; // [rsp+B0h] [rbp-31h] BYREF
  __int64 v89; // [rsp+C8h] [rbp-19h]

  v9 = 0;
  v78 = a4;
  v11 = 1;
  v74 = a9;
  QuadPart = (__int64 *)KeQueryPerformanceCounter(0LL).QuadPart;
  v14 = *(_QWORD *)(W32GetUserSessionState(v13, v12) + 18704);
  v18 = **(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v16, v15) + 18704) + 504LL);
  v19 = ((unsigned __int16)*(_DWORD *)(v14 + 720) | (unsigned __int16)*(_DWORD *)(v18 + 16)) & 0x8000;
  if ( a5 )
    v9 = (unsigned int)RawInputRequestedForMouse() != 0;
  v20 = 2;
  if ( v19 || v9 )
  {
    EnterCrit(1LL, 0LL);
    if ( v19 )
    {
      InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v77, "LowLevelMouseMoveHook", 0LL);
      v22 = a6;
      v88[0] = a1;
      v88[1] = a2;
      v88[5] = 0;
      v88[3] = a8 & 1;
      v88[2] = 0;
      v73 = a6;
      v88[4] = a6;
      v89 = a3;
      UserSessionState = W32GetUserSessionState(0LL, v23);
      Valid = PhkFirstValid(*(_QWORD *)(UserSessionState + 18704), 14LL);
      if ( Valid )
      {
        v26 = (__int64)v74;
        v74[4].QuadPart = (LONGLONG)QuadPart;
        v27 = PtiCurrent(v26, v25);
        v28 = Valid;
        v29 = (__int64)v27;
        v30 = *((_QWORD *)v27 + 196);
        *((_QWORD *)v27 + 196) = v88;
        Valid = xxxCallHook2(v28, 0LL, 512LL, (__int64)v88, 1u);
        v31 = *(_QWORD *)(v29 + 488);
        *(_QWORD *)(v29 + 1568) = v30;
        if ( (*(_DWORD *)(v31 + 4) & *(_DWORD *)(*(_QWORD *)(v29 + 488) + 16LL) & 0xFFFFFDFF) != 0 )
        {
          v32 = *(unsigned int *)(*(_QWORD *)(v29 + 488) + 4LL);
          LODWORD(v32) = v32 & 0xFFFFFDFF;
          SetWakeBit(v29, v32);
        }
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v34 = Valid == 0;
        v74[5] = PerformanceCounter;
        if ( !v34 )
        {
          InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
            (InputTraceLogging::ThreadLockedPerfRegion *)&v77,
            v25);
          UserSessionSwitchLeaveCrit(v35);
          return 0LL;
        }
        v22 = v73;
      }
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
        (InputTraceLogging::ThreadLockedPerfRegion *)&v77,
        v25);
    }
    else
    {
      v22 = a6;
    }
    if ( v9 )
    {
      if ( (unsigned int)RawInputRequestedForMouse() )
      {
        v79[0] = *(_WORD *)(a5 + 2);
        v80 = *(_DWORD *)(a5 + 4);
        v81 = *(_DWORD *)(a5 + 8);
        v82 = *(_DWORD *)(a5 + 12);
        v83 = *(_DWORD *)(a5 + 16);
        v84 = *(_DWORD *)(a5 + 20);
        v86 = v78;
        v79[1] = 0;
        v85[1] = 0;
        v87 = 0LL;
        v85[0] = v78 != 0LL ? 2 : 0;
        if ( (unsigned int)EditionPostRawMouseInputMessage(0LL, a7, v22, v85, v79) )
        {
          *(_WORD *)a5 = -1;
          v11 = 9;
        }
      }
    }
    UserSessionSwitchLeaveCrit(v21);
  }
  if ( (a8 & 2) != 0 )
  {
    v37 = 1;
    if ( *(_DWORD *)(W32GetUserSessionState(v18, v17) + 36396) == 2 )
    {
      EnterCrit(1LL, 0LL);
      if ( *(_DWORD *)(W32GetUserSessionState(v39, v38) + 36396) == 2 )
        TransitionCursorSuppressionState(8LL, 1LL);
      UserSessionSwitchLeaveCrit(v40);
    }
  }
  else
  {
    v37 = 1;
  }
  v41 = W32GetUserSessionState(v18, v17);
  v44 = (const struct tagPOINT *)(v41 + 19240);
  *(_DWORD *)(v41 + 19240) = a1;
  *(_DWORD *)(v41 + 19244) = a2;
  if ( (a8 & 4) != 0 )
  {
    v43 = 0LL;
    if ( !a5 || (*(_BYTE *)(a5 + 2) & 1) != 0 )
      v37 = 0;
  }
  else
  {
    v37 = 2;
  }
  v45 = W32GetUserSessionState(v43, v42);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))CCursorClip::BoundPoint)(
    *(_QWORD *)(v45 + 36296),
    v72,
    *v44,
    v37,
    0,
    v44);
  if ( v72[0] == 2 )
  {
    v11 |= 2u;
  }
  else if ( v72[0] == 1 )
  {
    v11 |= 4u;
  }
  if ( (unsigned int)Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline() && v72[0] )
    SetMouseMoveBoundHitFlagsForMoveSize(v72[1]);
  if ( (a8 & 0x10) == 0 )
    v20 = (a8 & 1) != 0;
  if ( (a8 & 2) != 0 )
  {
    if ( (unsigned int)UsingPenCursors() )
      RestoreMouseCursors();
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&QuadPart, "MoveCursor", 0LL);
    EtwTraceGreMovePointerBegin(a6, (unsigned int)v44->x, (unsigned int)v44->y);
    v48 = KeQueryPerformanceCounter(0LL);
    v49 = v74;
    v74[2] = v48;
    v52 = W32GetUserSessionState(v51, v50);
    y = v44->y;
    x = v44->x;
    v55 = *(CursorApiRouter **)(v52 + 36360);
    v58 = W32GetUserSessionState(v57, v56);
    CursorApiRouter::MovePointer(v55, *(HDEV *)(*(_QWORD *)(v58 + 57008) + 48LL), x, y, v20, v78, a7);
    v49[3] = KeQueryPerformanceCounter(0LL);
    EtwTraceGreMovePointerEnd(a6, (unsigned int)v44->x, (unsigned int)v44->y);
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
      (InputTraceLogging::ThreadLockedPerfRegion *)&QuadPart,
      v59);
    v62 = W32GetUserSessionState(v61, v60);
    CCursorSizes::zzzUpdateGlobalCursorSize(*(CCursorSizes **)(v62 + 36400), v44, 0);
  }
  if ( !IsRemoteConnection(v47, v46) )
  {
    if ( *(_DWORD *)(W32GetUserSessionState(v64, v63) + 16296) )
    {
      v67 = *(_DWORD *)(W32GetUserSessionState(v66, v65) + 16296) + 2;
      _InterlockedExchange((volatile __int32 *)(W32GetUserSessionState(v69, v68) + 16300), v67);
    }
  }
  return v11;
}
