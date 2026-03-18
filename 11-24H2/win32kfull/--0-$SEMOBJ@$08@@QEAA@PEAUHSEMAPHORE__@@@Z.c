/*
 * XREFs of ??0?$SEMOBJ@$08@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x140328850
 * Callers:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1400D5F30 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x140265D70 (-vSpHideSprites@@YAXPEAUHDEV__@@H@Z.c)
 * Callees:
 *     ??$GreAcquireSemaphoreCommon@$08P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400E07DC (--$GreAcquireSemaphoreCommon@$08P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 *__fastcall SEMOBJ<9>::SEMOBJ<9>(__int64 *a1, __int64 a2)
{
  *a1 = a2;
  GreAcquireSemaphoreCommon<9,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, a2);
  return a1;
}
