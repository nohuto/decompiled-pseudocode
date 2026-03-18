/*
 * XREFs of ?GrepGetSystemPaletteUse@@YAIAEAVXDCOBJ@@@Z @ 0x1401FA9E4
 * Callers:
 *     GreGetSystemPaletteUse @ 0x1401FA99C (GreGetSystemPaletteUse.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140015800 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140028C7C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

__int64 __fastcall GrepGetSystemPaletteUse(struct XDCOBJ *a1)
{
  unsigned int v1; // edi
  __int64 v2; // rbx
  struct Gre::Base::SESSION_GLOBALS *v3; // rax
  int v5; // edi
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v2 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v3 = Gre::Base::Globals(a1);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v6, v3);
  if ( (*(_DWORD *)(v2 + 2156) & 0x100) != 0 )
  {
    v5 = *(_DWORD *)(*(_QWORD *)(v2 + 1792) + 24LL);
    if ( (v5 & 0x1000) != 0 )
      v1 = 2;
    else
      v1 = (v5 & 0x10000 | 0x8000u) >> 15;
  }
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v6);
  return v1;
}
