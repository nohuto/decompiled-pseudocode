/*
 * XREFs of PopPowerRequestStatsIsDetailedRequestReason @ 0x140AC45F4
 * Callers:
 *     PopPowerRequestStatsGetIdForRequest @ 0x140A198D4 (PopPowerRequestStatsGetIdForRequest.c)
 * Callees:
 *     Feature_2395269435__private_IsEnabledDeviceUsageNoInline @ 0x1405C87C4 (Feature_2395269435__private_IsEnabledDeviceUsageNoInline.c)
 *     strncmp @ 0x1406B4820 (strncmp.c)
 */

char __fastcall PopPowerRequestStatsIsDetailedRequestReason(__int64 a1)
{
  char v1; // bl
  int v3; // ecx
  _KPROCESS *Process; // r15
  int v5; // esi
  const char **i; // r14
  const char *v7; // rbp
  int IsEnabledDeviceUsageNoInline; // eax
  size_t v9; // r8
  const char *v10; // rcx

  v1 = 0;
  if ( *(_QWORD *)(a1 + 48) )
  {
    if ( *(_DWORD *)a1 )
    {
      v3 = *(_DWORD *)((a1 + 63) & 0xFFFFFFFFFFFFFFF8uLL);
      if ( (v3 & 1) == 0 && (v3 & 2) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( (unsigned int)Feature_2395269435__private_IsEnabledDeviceUsageNoInline() || *(_QWORD *)(a1 + 8) )
        {
          v5 = 0;
          for ( i = (const char **)PopPowerRequestStatsVerboseProcessList; ; ++i )
          {
            v7 = *i;
            IsEnabledDeviceUsageNoInline = Feature_2395269435__private_IsEnabledDeviceUsageNoInline();
            v9 = -1LL;
            do
              ++v9;
            while ( v7[v9] );
            v10 = IsEnabledDeviceUsageNoInline
                ? (const char *)&Process[1].SecureState
                : (const char *)(*(_QWORD *)(a1 + 8) + 824LL);
            if ( !strncmp(v10, v7, v9) )
              break;
            if ( (unsigned int)++v5 >= 2 )
              return v1;
          }
          return 1;
        }
      }
    }
  }
  return v1;
}
