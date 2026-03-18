/*
 * XREFs of DrvCleanupAndDestroyMDEV @ 0x14008968C
 * Callers:
 *     CleanupGDI @ 0x140165F88 (CleanupGDI.c)
 * Callees:
 *     ??$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140011900 (--$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140012DEC (--0-$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140016394 (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001F2CC (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001F398 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001FC40 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x14001FC70 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140020150 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140021F20 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GrepAcquireLockValidate@$0BD@@@YAXXZ @ 0x140023374 (--$GrepAcquireLockValidate@$0BD@@@YAXXZ.c)
 *     ??$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140087C14 (--$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     MultiUserCleanupDCs @ 0x140089910 (MultiUserCleanupDCs.c)
 *     DrvDestroyMDEV @ 0x140089B74 (DrvDestroyMDEV.c)
 */

__int64 __fastcall DrvCleanupAndDestroyMDEV(__int64 a1)
{
  __int64 v2; // rcx
  __int64 *v3; // r14
  __int64 v4; // rdi
  __int64 v5; // rsi
  int v6; // r8d
  struct _ERESOURCE *v7; // rbx
  struct _GRETHREAD *v8; // rax
  __int64 v10; // rbx
  __int64 result; // rax
  HSEMAPHORE v12; // [rsp+38h] [rbp+10h] BYREF

  MultiUserCleanupDCs();
  v3 = *(__int64 **)(W32GetSessionState(v2) + 88);
  v4 = *v3 + 624;
  GreAcquireSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v4);
  v5 = *v3 + 1144;
  GreAcquireSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v5);
  SEMOBJ<6>::SEMOBJ<6>(&v12, v3);
  DrvDestroyMDEV(a1);
  v7 = (struct _ERESOURCE *)v12;
  if ( v12 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Sprite", (int)v12, v6);
    v8 = GreGetCurrentThreadCrossSessionCheck();
    if ( v8 )
    {
      if ( (*((_BYTE *)v8 + 14))-- == 1 )
        *(_QWORD *)v8 &= ~0x40uLL;
    }
    GreReleaseSemaphoreSharedInternal(v7);
  }
  if ( v5 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v5);
  v10 = *v3;
  GreAcquireSemaphoreInternal((struct _ERESOURCE *)*v3);
  result = GrepAcquireLockValidate<19>();
  if ( v10 )
    result = GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
               (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
               v10);
  if ( v4 )
    return GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
             (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
             v4);
  return result;
}
