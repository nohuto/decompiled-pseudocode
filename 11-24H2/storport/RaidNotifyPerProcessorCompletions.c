/*
 * XREFs of RaidNotifyPerProcessorCompletions @ 0x140044ED0
 * Callers:
 *     RaidStartIoPacket @ 0x140004760 (RaidStartIoPacket.c)
 * Callees:
 *     <none>
 */

char __fastcall RaidNotifyPerProcessorCompletions(__int64 a1, unsigned __int16 *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ecx
  char *v4; // rax
  unsigned __int64 v5; // rcx
  unsigned int v7; // ecx

  if ( (*(_BYTE *)(a1 + 4660) & 1) != 0 )
  {
    v2 = *a2;
    if ( FeatureFixKcsanRacyAccessV2 )
    {
      if ( v2 < g_RaidPerfRedirectGroupCount )
      {
        v3 = *((unsigned __int8 *)a2 + 2);
        if ( v3 < *((_DWORD *)g_RaidDPCRedirectionProcessors + *a2)
          && !*((_DWORD *)g_RaidPerProcessorState + 32 * (unsigned __int64)((*a2 << 6) + v3) + 24) )
        {
          v4 = (char *)g_RaidPerProcessorState;
          v5 = (*((unsigned __int8 *)a2 + 2) + ((unsigned __int64)*a2 << 6)) << 7;
LABEL_7:
          _InterlockedExchange((volatile __int32 *)&v4[v5 + 96], 2);
          return 1;
        }
      }
    }
    else if ( v2 < g_RaidPerfRedirectGroupCount )
    {
      v7 = *((unsigned __int8 *)a2 + 2);
      if ( v7 < *((_DWORD *)g_RaidDPCRedirectionProcessors + *a2) )
      {
        v4 = (char *)g_RaidPerProcessorState;
        v5 = (unsigned __int64)((*a2 << 6) + v7) << 7;
        if ( !*(_DWORD *)((char *)g_RaidPerProcessorState + v5 + 96) )
          goto LABEL_7;
      }
    }
  }
  return 0;
}
