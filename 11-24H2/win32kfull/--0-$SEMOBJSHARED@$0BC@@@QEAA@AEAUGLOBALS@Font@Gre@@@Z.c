/*
 * XREFs of ??0?$SEMOBJSHARED@$0BC@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x14031D37C
 * Callers:
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z @ 0x14025B70C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z @ 0x14025BE74 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z.c)
 * Callees:
 *     ??$GreAcquireSemaphoreCommon@$0BC@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14015A684 (--$GreAcquireSemaphoreCommon@$0BC@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 *__fastcall SEMOBJSHARED<18>::SEMOBJSHARED<18>(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdx

  v2 = *(_QWORD *)(a2 + 15480);
  *a1 = v2;
  GreAcquireSemaphoreCommon<18,void (*)(HSEMAPHORE__ *)>(
    (void (__fastcall *)(__int64))GreAcquireSemaphoreSharedInternal,
    v2);
  return a1;
}
