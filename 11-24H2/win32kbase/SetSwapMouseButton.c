/*
 * XREFs of SetSwapMouseButton @ 0x14013B5A0
 * Callers:
 *     UnpackMouseSettings @ 0x140213D04 (UnpackMouseSettings.c)
 * Callees:
 *     BroadcastSettingsUpdateToAllContainers @ 0x14013B680 (BroadcastSettingsUpdateToAllContainers.c)
 */

char __fastcall SetSwapMouseButton(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rcx
  char v3; // di
  __int64 v5; // rcx
  bool v6; // bl
  __int64 v7; // rcx

  v1 = (unsigned __int8)a1;
  v3 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(a1) + 19928) + 1988LL) != 0;
  if ( v3 != (_BYTE)v1 )
  {
    v5 = *(_QWORD *)(W32GetUserSessionState(v2) + 19928);
    *(_DWORD *)(v5 + 1988) = v1;
    v6 = *(_BYTE *)(W32GetUserSessionState(v5) + 16352) == 0;
    *(_BYTE *)(W32GetUserSessionState(v7) + 16352) = v6;
    BroadcastSettingsUpdateToAllContainers();
  }
  return v3;
}
