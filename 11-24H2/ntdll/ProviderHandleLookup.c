/*
 * XREFs of ProviderHandleLookup @ 0x180049C60
 * Callers:
 *     EtwNotificationUnregister @ 0x180049B40 (EtwNotificationUnregister.c)
 *     EtwEventWriteEndScenario @ 0x1800CC990 (EtwEventWriteEndScenario.c)
 *     EtwEventWriteStartScenario @ 0x1800CCAD0 (EtwEventWriteStartScenario.c)
 *     EtwEventProviderEnabled @ 0x1800E3AD0 (EtwEventProviderEnabled.c)
 *     EtwpSetProviderTraits @ 0x1800E3D80 (EtwpSetProviderTraits.c)
 *     EtwEventWriteString @ 0x1800E4C30 (EtwEventWriteString.c)
 *     EtwpTrackProviderBinary @ 0x18011836C (EtwpTrackProviderBinary.c)
 *     EtwpUseDescriptorType @ 0x18015A248 (EtwpUseDescriptorType.c)
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
  v4 = qword_1801CD2A0[v3];
  if ( ((v4 != 0 && a2 >> 4 < dword_1801997F0[v3]) & (unsigned __int8)a2) != 0 )
  {
    v5 = (unsigned __int64)a2 >> 4;
    if ( (*(_QWORD *)(v4 + 8 * v5) & 1) == 0 )
      return *(_QWORD *)(v4 + 8 * v5);
  }
  return result;
}
