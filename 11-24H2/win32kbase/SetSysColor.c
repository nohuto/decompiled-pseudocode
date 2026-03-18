/*
 * XREFs of SetSysColor @ 0x1400A0B4C
 * Callers:
 *     xxxSetSysColors @ 0x1400A0834 (xxxSetSysColors.c)
 * Callees:
 *     hCreateSolidBrushInternal @ 0x14000D270 (hCreateSolidBrushInternal.c)
 *     GreGetNearestColor @ 0x140039A60 (GreGetNearestColor.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1400855A4 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x140085760 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     GreSetBrushOwner @ 0x1400857A0 (GreSetBrushOwner.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x140085B74 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     GreMarkUndeletableBrush @ 0x14010BC50 (GreMarkUndeletableBrush.c)
 *     GreSetMagicColors @ 0x14014964C (GreSetMagicColors.c)
 *     LeaveRenderCrit @ 0x140162BD0 (LeaveRenderCrit.c)
 */

__int64 __fastcall SetSysColor(unsigned int a1, struct tagPALETTEENTRY NearestColor, char a3)
{
  __int64 v4; // rdi
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  __int64 v9; // r8
  __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // edi
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // edi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned __int64 SolidBrushInternal; // rbx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  _QWORD v32[7]; // [rsp+20h] [rbp-38h] BYREF

  v4 = a1;
  PsEnterPriorityRegion();
  KeEnterCriticalRegion();
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
  UserSessionState = W32GetUserSessionState(v7);
  LOBYTE(v9) = 1;
  ExAcquireFastResourceExclusive(*(_QWORD *)(UserSessionState + 8), CurrentThreadWin32Thread + 104, v9);
  v10 = (unsigned int)v4;
  v12 = *(_QWORD *)(W32GetUserSessionState(v11) + 19928);
  *(struct tagPALETTEENTRY *)(v12 + 4 * v4 + 4444) = NearestColor;
  if ( (a3 & 4) != 0 )
  {
    v12 = *(_QWORD *)(W32GetUserSessionState(v12) + 57008);
    if ( (*(_DWORD *)(v12 + 140) & 2) != 0
      && ((_DWORD)v4 == 1 || (_DWORD)v4 == 15 || (_DWORD)v4 == 16 || (_DWORD)v4 == 20) )
    {
      v13 = W32GetUserSessionState(v12);
      GreSetMagicColors(*(HDC *)(*(_QWORD *)(v13 + 57008) + 64LL), NearestColor);
    }
  }
  if ( (a3 & 8) != 0
    || (a3 & 2) != 0
    && (v14 = v4 - 1) != 0
    && (v15 = v14 - 9) != 0
    && (v16 = v15 - 1) != 0
    && (v17 = v16 - 1) != 0
    && (v18 = v17 - 12) != 0
    && (unsigned int)(v18 - 3) >= 2 )
  {
    v19 = W32GetUserSessionState(v12);
    NearestColor = (struct tagPALETTEENTRY)GreGetNearestColor(
                                             *(HDC *)(*(_QWORD *)(v19 + 57008) + 64LL),
                                             *(_DWORD *)&NearestColor);
  }
  v20 = *(_QWORD *)(W32GetUserSessionState(v12) + 19928);
  *(struct tagPALETTEENTRY *)(v20 + 4 * v10 + 4568) = NearestColor;
  v21 = *(_QWORD *)(W32GetUserSessionState(v20) + 19928);
  if ( *(_QWORD *)(v21 + 8 * v10 + 4696) )
  {
    v30 = W32GetUserSessionState(v21);
    GreSetSolidBrushInternal(*(HBRUSH *)(*(_QWORD *)(v30 + 19928) + 8 * v10 + 4696), *(_DWORD *)&NearestColor, 0, 1);
  }
  else
  {
    SolidBrushInternal = hCreateSolidBrushInternal(*(_DWORD *)&NearestColor, 0, 0LL, 0);
    v24 = *(_QWORD *)(W32GetUserSessionState(v23) + 19928);
    *(_QWORD *)(v24 + 8 * v10 + 4696) = SolidBrushInternal;
    v25 = W32GetUserSessionState(v24);
    GreMarkUndeletableBrush(*(_QWORD *)(*(_QWORD *)(v25 + 19928) + 8 * v10 + 4696));
    v27 = W32GetUserSessionState(v26);
    GreSetBrushOwner(*(HBRUSH *)(*(_QWORD *)(v27 + 19928) + 8 * v10 + 4696), 0);
    v29 = W32GetUserSessionState(v28);
    BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v32, *(_QWORD *)(*(_QWORD *)(v29 + 19928) + 8 * v10 + 4696));
    if ( v32[0] )
      *(_DWORD *)(v32[0] + 40LL) |= 0x40200u;
    BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v32);
  }
  return LeaveRenderCrit();
}
