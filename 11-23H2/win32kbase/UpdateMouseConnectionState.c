/*
 * XREFs of UpdateMouseConnectionState @ 0x1C006E868
 * Callers:
 *     UpdateTPCurrentActiveState @ 0x1C006EA60 (UpdateTPCurrentActiveState.c)
 * Callees:
 *     RIMIsRunningOnDesktop @ 0x1C004FEC0 (RIMIsRunningOnDesktop.c)
 *     IsMouseDeviceOnIgnoreList @ 0x1C006E248 (IsMouseDeviceOnIgnoreList.c)
 *     WPP_RECORDER_AND_TRACE_SF_l @ 0x1C006E9DC (WPP_RECORDER_AND_TRACE_SF_l.c)
 */

__int64 __fastcall UpdateMouseConnectionState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  char v10; // bp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 i; // rdi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  PDEVICE_OBJECT v21; // rcx
  __int64 result; // rax

  v4 = 0;
  v5 = *(_QWORD *)(*(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 16840) + 1256LL);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v5, 0LL);
  v10 = 1;
  v12 = *(_QWORD *)(SGDGetUserSessionState(v7, v6, v8, v9) + 16840);
  for ( i = **(_QWORD **)(v12 + 1264); i; i = *(_QWORD *)(i + 56) )
  {
    if ( !*(_BYTE *)(i + 48)
      && !*(_WORD *)(i + 880)
      && (*(_DWORD *)(i + 184) & 0x400) == 0
      && (!RIMIsRunningOnDesktop(v12, v11, v13, v14) || !IsMouseDeviceOnIgnoreList(i, v16, v17)) )
    {
      v4 = 1;
      break;
    }
  }
  ExReleasePushLockSharedEx(v5, 0LL);
  KeLeaveCriticalRegion();
  v21 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v10 = 0;
  }
  LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v18) = v10;
    WPP_RECORDER_AND_TRACE_SF_l(WPP_GLOBAL_Control->AttachedDevice, v18, v19, v20);
  }
  result = SGDGetUserSessionState(v21, v18, v19, v20);
  *(_DWORD *)(result + 16820) = (16 * v4) | *(_DWORD *)(result + 16820) & 0xFFFFFFEF;
  return result;
}
