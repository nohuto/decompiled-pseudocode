/*
 * XREFs of PopUpdatePowerLimitTimeTracking @ 0x1405CD00C
 * Callers:
 *     PopPowerLimitTelemetryWorker @ 0x14041B868 (PopPowerLimitTelemetryWorker.c)
 *     PopPowerLimitSxTransition @ 0x1405CCF04 (PopPowerLimitSxTransition.c)
 *     PoSetPowerLimitValue @ 0x140749110 (PoSetPowerLimitValue.c)
 *     PopFreePowerLimitRequest @ 0x140749974 (PopFreePowerLimitRequest.c)
 * Callees:
 *     <none>
 */

void __fastcall PopUpdatePowerLimitTimeTracking(__int64 a1, unsigned int a2)
{
  __int64 v2; // r11
  __int64 v3; // r10
  _QWORD *v4; // r9
  unsigned int v5; // r8d
  __int64 v6; // rdx
  unsigned int v7; // ecx
  unsigned int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // eax
  __int64 v11; // rdx

  if ( *(_BYTE *)(a1 + 48) )
  {
    v2 = *(_QWORD *)(a1 + 64);
    if ( v2 )
    {
      v3 = a2;
      v4 = (_QWORD *)(*(_QWORD *)(a1 + 56) + 104LL * a2);
      v5 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 16LL * a2 + 8);
      if ( v5 == -1 || (v6 = *(_QWORD *)(v2 + 80), v7 = *(_DWORD *)(v6 + 36 * v3 + 8), v5 == v7) )
      {
        v10 = 10;
      }
      else
      {
        v8 = *(_DWORD *)(v6 + 36 * v3 + 12);
        if ( v5 >= v8 && v5 <= v7 && (v9 = v7 - v8) != 0 )
          v10 = 10 * (v5 - v8) / v9;
        else
          v10 = 11;
      }
      v11 = MEMORY[0xFFFFF78000000008];
      v4[v10 + 1] += MEMORY[0xFFFFF78000000008] - *v4;
      *v4 = v11;
    }
  }
}
