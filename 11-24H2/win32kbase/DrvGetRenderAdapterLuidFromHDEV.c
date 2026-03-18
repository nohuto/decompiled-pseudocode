/*
 * XREFs of DrvGetRenderAdapterLuidFromHDEV @ 0x1401CB0F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140013D34 (--$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140014248 (--$GreAcquireSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001F398 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140022160 (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1400C2438 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 */

__int64 __fastcall DrvGetRenderAdapterLuidFromHDEV(__int64 a1, _QWORD *a2)
{
  __int64 SessionState; // rax
  __int64 v5; // rbx
  unsigned int v6; // edi
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v8 = a1;
  SessionState = W32GetSessionState(a1);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v9, *(_QWORD **)(SessionState + 88));
  v5 = *(_QWORD *)(a1 + 48);
  GreAcquireSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))EngAcquireSemaphoreShared, v5);
  v6 = 0;
  if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v8) )
    *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 2544) + 576LL);
  else
    v6 = -1073741811;
  GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v5);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v9);
  return v6;
}
