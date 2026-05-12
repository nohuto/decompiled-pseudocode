/*
 * XREFs of RaCaptureLiveDumpAllowed @ 0x140089C28
 * Callers:
 *     RaidCaptureLiveDump @ 0x140042C58 (RaidCaptureLiveDump.c)
 * Callees:
 *     <none>
 */

char __fastcall RaCaptureLiveDumpAllowed(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // cl
  _BYTE *v4; // rdx

  v3 = 0;
  if ( *(_DWORD *)(a3 + 24) == 1 )
  {
    v4 = *(_BYTE **)(*(_QWORD *)(a3 + 32) + 144LL);
    if ( v4[5] == 11 && v4[6] == 0xBE )
      v3 = v4[7] == 0xF0;
    return DeviceTelemetryLiveDumpConfig == 1 || DeviceTelemetryLiveDumpConfig != 0 && v3;
  }
  return v3;
}
