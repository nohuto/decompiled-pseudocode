/*
 * XREFs of ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1400786A4
 * Callers:
 *     ?DestroyAniIcon@@YAHPEAUtagACON@@@Z @ 0x14002CD60 (-DestroyAniIcon@@YAHPEAUtagACON@@@Z.c)
 *     NtUserDestroyCursor @ 0x1400778B0 (NtUserDestroyCursor.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1400786A4 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     DestroyUnlockedCursor @ 0x140079B60 (DestroyUnlockedCursor.c)
 *     DestroyWindowSmIcon @ 0x14008DCFC (DestroyWindowSmIcon.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x140090378 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     DestroyClassSmIcon @ 0x1400B5370 (DestroyClassSmIcon.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x14012C850 (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1401333EC (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 *     ?zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z @ 0x1401343B0 (-zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z.c)
 *     ?_CleanupUnneededSystemCursorSizes@@YAXI@Z @ 0x140134B50 (-_CleanupUnneededSystemCursorSizes@@YAXI@Z.c)
 * Callees:
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x14002CA40 (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1400786A4 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAU_HEAD@@@Z @ 0x140082ADC (--0IdentifyPrimaryDestroyTarget@@QEAA@PEAU_HEAD@@@Z.c)
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x14009347C (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1IdentifyPrimaryDestroyTarget@@QEAA@XZ @ 0x1401807D8 (--1IdentifyPrimaryDestroyTarget@@QEAA@XZ.c)
 *     ?RemoveCursorFromCaptionIconCache@@YAHPEAUtagCURSOR@@@Z @ 0x14019437C (-RemoveCursorFromCaptionIconCache@@YAHPEAUtagCURSOR@@@Z.c)
 *     ?DestroyEmptyCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1401A6A74 (-DestroyEmptyCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

bool __fastcall _DestroyCursor(struct tagCURSOR *a1, __int64 a2)
{
  struct tagCURSOR *v2; // r12
  unsigned int v3; // r13d
  int v5; // esi
  int v6; // r14d
  int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagTHREADINFO *CurrentLogicalCursorThread; // rax
  __int64 v12; // rbx
  __int64 v13; // r15
  __int64 v14; // rcx
  __int64 UserGdiSessionState; // rax
  __int64 ProcessWin32Process; // rax
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rbx
  struct tagCURSOR *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  struct tagCURSOR *v27; // rcx
  int v28; // [rsp+50h] [rbp+8h] BYREF

  v2 = (struct tagCURSOR *)*((_QWORD *)a1 + 6);
  v3 = a2;
  v5 = 0;
  v6 = 0;
  v7 = 1;
  if ( *(_DWORD *)(W32GetUserSessionState(a1, a2) + 19816) )
  {
    v28 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 963LL);
  }
  if ( *(_DWORD *)(W32GetUserSessionState(v9, v8) + 19816) )
  {
    DestroyEmptyCursorObject(a1);
    return 1;
  }
  IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v28, a1);
  CurrentLogicalCursorThread = _GetCurrentLogicalCursorThread();
  v12 = *((_QWORD *)a1 + 3);
  v13 = *((_QWORD *)CurrentLogicalCursorThread + 58);
  if ( (unsigned int)RemoveCursorFromCaptionIconCache(a1) )
  {
    IdentifyPrimaryDestroyTarget::~IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v28);
    return 1;
  }
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      if ( !v12 )
      {
        v5 = 1;
        v7 = *((_DWORD *)a1 + 20) & 1;
        goto LABEL_25;
      }
      if ( (*((_DWORD *)a1 + 20) & 0x84) != 0 )
      {
LABEL_11:
        v5 = 1;
        goto LABEL_25;
      }
      if ( v12 != v13 )
      {
        UserSetLastError(1435);
LABEL_23:
        v5 = 1;
        v7 = 0;
        goto LABEL_25;
      }
    }
    else if ( v3 == 2 && !v12 )
    {
      goto LABEL_11;
    }
  }
  else
  {
    UserGdiSessionState = W32GetUserGdiSessionState(v14);
    ProcessWin32Process = PsGetProcessWin32Process(*(_QWORD *)(UserGdiSessionState + 40));
    v17 = ProcessWin32Process;
    if ( ProcessWin32Process )
      v17 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL) & ProcessWin32Process;
    if ( *(_QWORD *)(_HMPkheFromObject(a1) + 8) == v17 )
    {
      v19 = *(_QWORD *)(W32GetUserGdiSessionState(v18) + 40);
      if ( PsGetCurrentProcess() == v19 )
        FixupGlobalCursor(a1, v13);
    }
  }
  if ( !(unsigned int)HMMarkObjectDestroy(a1) )
    goto LABEL_23;
  *((_DWORD *)a1 + 20) |= 0x2000u;
LABEL_25:
  if ( v2 != a1 && (*(_DWORD *)(*((_QWORD *)a1 + 6) + 80LL) & 0x2000) != 0 )
    v6 = 1;
  if ( v5 )
  {
    if ( v6 )
    {
      v20 = a1;
      do
      {
        *((_QWORD *)v20 + 6) = a1;
        v20 = (struct tagCURSOR *)*((_QWORD *)v20 + 5);
      }
      while ( v20 );
    }
  }
  else
  {
    v22 = *(_QWORD *)(W32GetUserSessionState(v14, 1LL) + 36376);
    if ( v22 == *((_QWORD *)a1 + 6) )
    {
      *(_QWORD *)(W32GetUserSessionState(v22, v21) + 36376) = 0LL;
      *(_QWORD *)(W32GetUserSessionState(v24, v23) + 36384) = 0LL;
    }
    if ( v2 == a1 || v6 )
    {
      v27 = (struct tagCURSOR *)*((_QWORD *)a1 + 5);
      if ( v27 )
      {
        *((_QWORD *)a1 + 5) = 0LL;
        _DestroyCursor(v27, v3);
      }
    }
    else
    {
      v25 = *((_QWORD *)a1 + 6);
      while ( v25 )
      {
        v26 = v25;
        v25 = *(_QWORD *)(v25 + 40);
        if ( (struct tagCURSOR *)v25 == a1 )
        {
          *(_QWORD *)(v26 + 40) = *((_QWORD *)a1 + 5);
          break;
        }
      }
      *((_QWORD *)a1 + 5) = 0LL;
      *((_QWORD *)a1 + 6) = a1;
    }
    CleanupCursorObject((void **)a1);
    DestroyEmptyCursorObject(a1);
  }
  IdentifyPrimaryDestroyTarget::~IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v28);
  return v7 != 0;
}
