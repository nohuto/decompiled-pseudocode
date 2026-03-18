/*
 * XREFs of UnpackMouseSettings @ 0x1C01E995C
 * Callers:
 *     ?ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z @ 0x1C01EE440 (-ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z.c)
 * Callees:
 *     ResetAccelerationCurves @ 0x1C0063C60 (ResetAccelerationCurves.c)
 *     UpdateMouseSensitivity @ 0x1C00957D0 (UpdateMouseSensitivity.c)
 *     SetSwapMouseButton @ 0x1C013EFE0 (SetSwapMouseButton.c)
 *     GetMouseSensitivity @ 0x1C01E7F30 (GetMouseSensitivity.c)
 *     EditionxxxBroadcastSPIChange @ 0x1C0232F5C (EditionxxxBroadcastSPIChange.c)
 */

__int64 __fastcall UnpackMouseSettings(int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ecx
  __int64 v6; // rdx
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 result; // rax

  v5 = *a1;
  if ( v5 != *((_DWORD *)gpsi + 497) )
  {
    SetSwapMouseButton(v5 != 0, a2, a3, a4);
    EditionxxxBroadcastSPIChange(33LL, v6, 0LL);
  }
  v7 = a1[1];
  if ( v7 != (unsigned int)GetMouseSensitivity(0LL, a2, a3, a4) )
  {
    UpdateMouseSensitivity(v7, v8, v9, v10);
    ResetAccelerationCurves(0LL, v11, v12, v13);
    EditionxxxBroadcastSPIChange(113LL, v14, 0LL);
  }
  result = (unsigned int)a1[2];
  if ( (_DWORD)result != *((_DWORD *)gpsi + 1247) )
  {
    *((_DWORD *)gpsi + 1247) = result;
    return EditionxxxBroadcastSPIChange(105LL, v8, 0LL);
  }
  return result;
}
