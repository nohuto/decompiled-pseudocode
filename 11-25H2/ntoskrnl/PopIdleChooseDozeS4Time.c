/*
 * XREFs of PopIdleChooseDozeS4Time @ 0x1405D37CC
 * Callers:
 *     PopIdleArmAoAcDozeS4Timer @ 0x1404D6CD4 (PopIdleArmAoAcDozeS4Timer.c)
 * Callees:
 *     <none>
 */

char __fastcall PopIdleChooseDozeS4Time(unsigned __int64 *a1, int *a2)
{
  unsigned __int64 v2; // r10
  char v3; // bl
  int v4; // r11d
  unsigned __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rcx

  v2 = 0LL;
  v3 = 0;
  v4 = 0;
  v6 = 10000000LL * *((unsigned int *)PopPolicy + 22);
  if ( !dword_140F0A9C0 )
  {
    if ( *(_BYTE *)(PopSmartSuspendDecision + 2) )
    {
      v7 = *(_QWORD *)(PopSmartSuspendDecision + 48);
      v4 = 6;
      if ( !v7 )
        goto LABEL_22;
      v8 = v7 - MEMORY[0xFFFFF78000000014];
      if ( v8 >= 0 )
        v2 = v8;
    }
    else
    {
      if ( qword_140F0A9B8 <= MEMORY[0xFFFFF78000000014] || PopSmartUserPresenceAction != 1 )
        goto LABEL_22;
      if ( MEMORY[0xFFFFF78000000008] - qword_140F0A9E8 <= 10000000
                                                         * (unsigned __int64)(unsigned int)PopSmartUserPresenceGracePeriod )
        v2 = 10000000LL * (unsigned int)PopSmartUserPresenceGracePeriod - (MEMORY[0xFFFFF78000000008] - qword_140F0A9E8);
      if ( (__int64)(v2 + MEMORY[0xFFFFF78000000014]) >= qword_140F0A9B8
                                                       - 10000000
                                                       * ((unsigned int)PopSmartUserPresenceWakeOffset + 60LL)
        || v2 && v6 && v2 >= v6 )
      {
LABEL_21:
        v2 = -(__int64)v2;
        goto LABEL_22;
      }
      v4 = 2;
    }
    v3 = 1;
    goto LABEL_21;
  }
  v3 = 1;
  if ( dword_140F0A9C0 == 1 )
  {
    v4 = 3;
  }
  else if ( dword_140F0A9C0 == 2 )
  {
    v4 = 4;
  }
LABEL_22:
  if ( v6 && !v4 )
  {
    v3 = 1;
    v2 = -10000000LL * *((unsigned int *)PopPolicy + 22);
    v4 = 1;
  }
  *a1 = v2;
  if ( a2 )
    *a2 = v4;
  return v3;
}
