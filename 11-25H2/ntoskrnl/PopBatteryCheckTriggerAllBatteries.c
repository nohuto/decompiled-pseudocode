/*
 * XREFs of PopBatteryCheckTriggerAllBatteries @ 0x140A5E410
 * Callers:
 *     PopBatteryCheckTrigger @ 0x140A5E3D8 (PopBatteryCheckTrigger.c)
 *     PopBatteryApplyCompositeState @ 0x140AC1ED8 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     <none>
 */

char __fastcall PopBatteryCheckTriggerAllBatteries(__int64 a1, int a2)
{
  __int64 v2; // r8
  char v4; // r9
  unsigned int v5; // r10d
  unsigned int v6; // ecx

  v2 = qword_140F0AAD0;
  v4 = 1;
  while ( (__int64 *)v2 != &qword_140F0AAD0 )
  {
    v5 = *(_DWORD *)(v2 + 64);
    if ( v5 - 1 <= 0xFFFFFFFD )
    {
      v6 = *(_DWORD *)(v2 + 68);
      if ( v6 <= *(_DWORD *)(a1 + 24) * v5 / 0x64 + v5 / 0xC8 )
        v6 = *(_DWORD *)(a1 + 24) * v5 / 0x64 + v5 / 0xC8;
      if ( *(_DWORD *)(v2 + 88) > a2 * v5 / 0x64 + v6 )
        return 0;
    }
    v2 = *(_QWORD *)v2;
  }
  return v4;
}
