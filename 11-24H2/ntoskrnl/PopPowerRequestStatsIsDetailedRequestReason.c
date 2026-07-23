/*
 * XREFs of PopPowerRequestStatsIsDetailedRequestReason @ 0x140AC8FFC
 * Callers:
 *     PopPowerRequestStatsGetIdForRequest @ 0x140A18BD4 (PopPowerRequestStatsGetIdForRequest.c)
 * Callees:
 *     strncmp @ 0x1406C0A20 (strncmp.c)
 */

char __fastcall PopPowerRequestStatsIsDetailedRequestReason(__int64 a1)
{
  char v1; // bl
  int v2; // ecx
  const char **v3; // rsi
  unsigned int v4; // edi
  _KPROCESS *Process; // rbp
  const char *v6; // rdx
  size_t v7; // r8

  v1 = 0;
  if ( *(_QWORD *)(a1 + 48) )
  {
    if ( *(_DWORD *)a1 )
    {
      v2 = *(_DWORD *)((a1 + 63) & 0xFFFFFFFFFFFFFFF8uLL);
      if ( (v2 & 1) == 0 && (v2 & 2) != 0 )
      {
        v3 = (const char **)&PopPowerRequestStatsVerboseProcessList;
        v4 = 0;
        Process = KeGetCurrentThread()->ApcState.Process;
        while ( 1 )
        {
          v6 = *v3;
          v7 = -1LL;
          do
            ++v7;
          while ( v6[v7] );
          if ( !strncmp((const char *)&Process[1].SecureState, v6, v7) )
            break;
          ++v4;
          ++v3;
          if ( v4 >= 2 )
            return v1;
        }
        return 1;
      }
    }
  }
  return v1;
}
