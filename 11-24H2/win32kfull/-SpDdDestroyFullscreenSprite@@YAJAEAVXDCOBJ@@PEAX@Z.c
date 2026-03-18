/*
 * XREFs of ?SpDdDestroyFullscreenSprite@@YAJAEAVXDCOBJ@@PEAX@Z @ 0x1403211FC
 * Callers:
 *     NtGdiDdDestroyFullscreenSprite @ 0x1403259C0 (NtGdiDdDestroyFullscreenSprite.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140015800 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     IsDwmActive @ 0x140022F80 (IsDwmActive.c)
 *     ??0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z @ 0x140023E24 (--0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400255B0 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140028C4C (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ??0?$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14002AF14 (--0-$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     GreDeleteSprite @ 0x140030374 (GreDeleteSprite.c)
 *     ??1ENTER_DWM_CRIT_COMMON@@QEAA@XZ @ 0x1401987B0 (--1ENTER_DWM_CRIT_COMMON@@QEAA@XZ.c)
 */

__int64 __fastcall SpDdDestroyFullscreenSprite(struct XDCOBJ *a1, void *a2)
{
  unsigned int v4; // esi
  _QWORD *v5; // rbx
  Gre::Base *v6; // rdi
  Gre::Base *v7; // rcx
  _BYTE v9[56]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  v4 = -1073741811;
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((Gre::Base *)&v11);
  v5 = (_QWORD *)*((_QWORD *)a1 + 2);
  SEMOBJ<2>::SEMOBJ<2>((HSEMAPHORE *)&v10, v5);
  v6 = *(Gre::Base **)(*(_QWORD *)a1 + 48LL);
  ENTER_DWM_CRIT_COMMON::ENTER_DWM_CRIT_COMMON((__int64)v9, v5, (__int64)v6, 0);
  if ( IsDwmActive(v7) && (unsigned int)GreDeleteSprite(v6, 0LL, a2, 1) )
    v4 = 0;
  ENTER_DWM_CRIT_COMMON::~ENTER_DWM_CRIT_COMMON((ENTER_DWM_CRIT_COMMON *)v9);
  if ( v10 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v10);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v11);
  return v4;
}
