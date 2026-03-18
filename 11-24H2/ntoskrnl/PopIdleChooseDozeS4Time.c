/*
 * XREFs of PopIdleChooseDozeS4Time @ 0x1405D812C
 * Callers:
 *     PopIdleArmAoAcDozeS4Timer @ 0x1404D63C4 (PopIdleArmAoAcDozeS4Timer.c)
 * Callees:
 *     Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline @ 0x1405CCC74 (Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall PopIdleChooseDozeS4Time(unsigned __int64 *a1, int *a2)
{
  unsigned __int64 v2; // rdi
  char v3; // bp
  int v4; // esi
  __int64 v7; // rbx
  unsigned __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rax

  v2 = 0LL;
  v3 = 0;
  v4 = 0;
  v7 = MEMORY[0xFFFFF78000000014];
  v8 = 10000000LL * *((unsigned int *)PopPolicy + 22);
  if ( (unsigned int)Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline() || !dword_140F0BDA0 )
  {
    if ( *(_BYTE *)(PopSmartSuspendDecision + 2) )
    {
      v9 = *(_QWORD *)(PopSmartSuspendDecision + 48);
      v4 = 6;
      if ( !v9 )
        goto LABEL_23;
      v10 = v9 - v7;
      if ( v10 >= 0 )
        v2 = v10;
    }
    else
    {
      if ( qword_140F0BD98 <= v7 || PopSmartUserPresenceAction != 1 )
        goto LABEL_23;
      if ( MEMORY[0xFFFFF78000000008] - qword_140F0BDC8 <= 10000000
                                                         * (unsigned __int64)(unsigned int)PopSmartUserPresenceGracePeriod )
        v2 = 10000000LL * (unsigned int)PopSmartUserPresenceGracePeriod - (MEMORY[0xFFFFF78000000008] - qword_140F0BDC8);
      if ( (__int64)(v2 + v7) >= qword_140F0BD98 - 10000000 * ((unsigned int)PopSmartUserPresenceWakeOffset + 60LL)
        || v2 && v8 && v2 >= v8 )
      {
LABEL_22:
        v2 = -(__int64)v2;
        goto LABEL_23;
      }
      v4 = 2;
    }
    v3 = 1;
    goto LABEL_22;
  }
  v3 = 1;
  if ( dword_140F0BDA0 == 1 )
  {
    v4 = 3;
  }
  else if ( dword_140F0BDA0 == 2 )
  {
    v4 = 4;
  }
LABEL_23:
  if ( v8 && !v4 )
  {
    v3 = 1;
    v2 = -(__int64)v8;
    v4 = 1;
  }
  *a1 = v2;
  if ( a2 )
    *a2 = v4;
  return v3;
}
