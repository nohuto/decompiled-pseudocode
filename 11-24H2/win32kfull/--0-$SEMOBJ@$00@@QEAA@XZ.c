/*
 * XREFs of ??0?$SEMOBJ@$00@@QEAA@XZ @ 0x1402646D4
 * Callers:
 *     NtGdiExtFloodFill @ 0x14015AE80 (NtGdiExtFloodFill.c)
 * Callees:
 *     ??$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14015C474 (--$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

Gre::Base *__fastcall SEMOBJ<1>::SEMOBJ<1>(Gre::Base *a1)
{
  __int64 v2; // rdx

  v2 = *(_QWORD *)Gre::Base::Globals(a1) + 624LL;
  *(_QWORD *)a1 = v2;
  GreAcquireSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v2);
  return a1;
}
