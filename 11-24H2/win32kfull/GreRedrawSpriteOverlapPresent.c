/*
 * XREFs of GreRedrawSpriteOverlapPresent @ 0x1400D4F5C
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x14022C6A8 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ??$GreAcquireSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140022FAC (--$GreAcquireSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002A350 (--$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1400D50D4 (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 */

__int64 __fastcall GreRedrawSpriteOverlapPresent(__int64 a1)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // r14
  int v3; // esi
  void (__fastcall *v4)(__int64); // rcx
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64); // rcx
  __int64 v8; // rbx
  int v9; // r15d
  void (__fastcall *v10)(__int64); // rcx
  __int64 v11; // rsi
  __int64 (__fastcall *v12)(__int64); // rcx
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v2 = Gre::Base::Globals((Gre::Base *)a1);
  GreIncNonRBLockCount(*(_QWORD *)v2 + 1040LL);
  if ( *(_DWORD *)(a1 + 140) )
  {
    v8 = 0LL;
    do
    {
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8 * v8);
      v9 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v13);
      v10 = (void (__fastcall *)(__int64))GreAcquireSemaphoreSharedInternal;
      v11 = *(_QWORD *)v2 + 1040LL;
      if ( !v9 )
        v10 = (void (__fastcall *)(__int64))GreAcquireSemaphoreInternal;
      GreAcquireSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(v10, *(_QWORD *)v2 + 1040LL);
      vSpRedrawSpriteOverlapPresent(*(HDEV *)(*(_QWORD *)(a1 + 144) + 8 * v8));
      v12 = (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal;
      if ( !v9 )
        v12 = (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal;
      GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(v12, v11);
      v8 = (unsigned int)(v8 + 1);
    }
    while ( (unsigned int)v8 < *(_DWORD *)(a1 + 140) );
  }
  else
  {
    v13 = *(_QWORD *)(a1 + 80);
    v3 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v13);
    v4 = (void (__fastcall *)(__int64))GreAcquireSemaphoreSharedInternal;
    v5 = *(_QWORD *)v2 + 1040LL;
    if ( !v3 )
      v4 = (void (__fastcall *)(__int64))GreAcquireSemaphoreInternal;
    GreAcquireSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(v4, *(_QWORD *)v2 + 1040LL);
    vSpRedrawSpriteOverlapPresent(*(HDEV *)(a1 + 80));
    v6 = (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal;
    if ( !v3 )
      v6 = (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal;
    GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(v6, v5);
  }
  return GreDecNonRBLockCount(*(_QWORD *)v2 + 1040LL);
}
