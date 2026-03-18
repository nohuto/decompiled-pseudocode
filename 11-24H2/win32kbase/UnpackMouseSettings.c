/*
 * XREFs of UnpackMouseSettings @ 0x140213D04
 * Callers:
 *     ?ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z @ 0x140217380 (-ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z.c)
 * Callees:
 *     GetMouseSensitivity @ 0x1401080E0 (GetMouseSensitivity.c)
 *     ResetAccelerationCurves @ 0x1401289C0 (ResetAccelerationCurves.c)
 *     SetSwapMouseButton @ 0x14013B5A0 (SetSwapMouseButton.c)
 *     UpdateMouseSensitivity @ 0x14013B630 (UpdateMouseSensitivity.c)
 *     EditionxxxBroadcastSPIChange @ 0x14023B278 (EditionxxxBroadcastSPIChange.c)
 */

__int64 __fastcall UnpackMouseSettings(int *a1)
{
  int v1; // edi
  __int64 v3; // rcx
  __int64 v4; // rdx
  unsigned int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v8; // ebx
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx

  v1 = *a1;
  if ( v1 != *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(a1) + 19928) + 1988LL) )
  {
    LOBYTE(v3) = v1 != 0;
    SetSwapMouseButton(v3);
    EditionxxxBroadcastSPIChange(33LL, v4, 0LL);
  }
  v5 = a1[1];
  if ( v5 != GetMouseSensitivity(0LL) )
  {
    UpdateMouseSensitivity(v5);
    ResetAccelerationCurves(0LL);
    EditionxxxBroadcastSPIChange(113LL, v7, 0LL);
  }
  v8 = a1[2];
  result = W32GetUserSessionState(v6);
  v10 = *(_QWORD *)(result + 19928);
  if ( v8 != *(_DWORD *)(v10 + 4988) )
  {
    *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v10) + 19928) + 4988LL) = v8;
    return EditionxxxBroadcastSPIChange(105LL, v11, 0LL);
  }
  return result;
}
