/*
 * XREFs of ProviderHandleLookup @ 0x180046040
 * Callers:
 *     EtwNotificationUnregister @ 0x180045F20 (EtwNotificationUnregister.c)
 *     EtwEventProviderEnabled @ 0x1800679F0 (EtwEventProviderEnabled.c)
 *     EtwEventWriteEndScenario @ 0x1800CC080 (EtwEventWriteEndScenario.c)
 *     EtwEventWriteStartScenario @ 0x1800CC1C0 (EtwEventWriteStartScenario.c)
 *     EtwpSetProviderTraits @ 0x1800E9BD0 (EtwpSetProviderTraits.c)
 *     EtwEventWriteString @ 0x1800EA8B0 (EtwEventWriteString.c)
 *     EtwpTrackProviderBinary @ 0x1800F8358 (EtwpTrackProviderBinary.c)
 *     EtwpUseDescriptorType @ 0x18015D438 (EtwpUseDescriptorType.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProviderHandleLookup(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v3; // r8
  __int64 v4; // r11
  unsigned __int64 v5; // r10

  result = 0LL;
  v3 = (a2 >> 1) & 7;
  v4 = qword_1801D02A0[v3];
  if ( ((v4 != 0 && a2 >> 4 < dword_18019C7E0[v3]) & (unsigned __int8)a2) != 0 )
  {
    v5 = (unsigned __int64)a2 >> 4;
    if ( (*(_QWORD *)(v4 + 8 * v5) & 1) == 0 )
      return *(_QWORD *)(v4 + 8 * v5);
  }
  return result;
}
