/*
 * XREFs of GreRemoveDisplayDriverRealizations @ 0x140132334
 * Callers:
 *     zzzDecomposeDesktop @ 0x140131E78 (zzzDecomposeDesktop.c)
 *     zzzComposeDesktop @ 0x140168F78 (zzzComposeDesktop.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140015800 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140022FAC (--$GreAcquireSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GrepAcquireLockValidate@$03@@YAXXZ @ 0x1400230C4 (--$GrepAcquireLockValidate@$03@@YAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400255B0 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002569C (--$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140029210 (--$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002A350 (--$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14002AFD0 (--0-$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002B0C8 (--$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002B264 (--$GreAcquireSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400308A8 (--$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140060F1C (--$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400BB04C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400BBE78 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BC@@@QEAAXXZ @ 0x1400BBF8C (-vUnlock@-$SEMOBJ@$0BC@@@QEAAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400CEB38 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0N@@@QEAAXXZ @ 0x1400D2138 (-vUnlock@-$SEMOBJ@$0N@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BC@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400DCDFC (--0-$SEMOBJ@$0BC@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400DD250 (--$GreReleaseSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14010E354 (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GrepAcquirePushLockCommon@$0A@$00P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z @ 0x1401525C4 (--$GrepAcquirePushLockCommon@$0A@$00P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z.c)
 *     ??$GrepReleasePushLockCommon@$0A@$00P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z @ 0x140152638 (--$GrepReleasePushLockCommon@$0A@$00P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14015C474 (--$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140208834 (--0-$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14021BC54 (--0-$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

void __fastcall GreRemoveDisplayDriverRealizations(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SessionState; // rax
  __int64 v5; // rcx
  Gre::Base *v6; // rcx
  struct Gre::Base::SESSION_GLOBALS *v7; // rbx
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // r12
  HSEMAPHORE v11; // rdi
  __int64 v12; // r13
  __int64 v13; // rcx
  HSEMAPHORE v14; // rbx
  struct _GRETHREAD *v15; // rax
  HSEMAPHORE v17; // [rsp+20h] [rbp-28h] BYREF
  HSEMAPHORE v18; // [rsp+28h] [rbp-20h] BYREF
  __int64 v19; // [rsp+30h] [rbp-18h] BYREF
  __int64 v20; // [rsp+38h] [rbp-10h]
  __int64 v21; // [rsp+90h] [rbp+48h]
  __int64 v22; // [rsp+98h] [rbp+50h] BYREF
  HSEMAPHORE v23; // [rsp+A0h] [rbp+58h] BYREF
  HSEMAPHORE v24; // [rsp+A8h] [rbp+60h] BYREF

  if ( a1 )
  {
    v22 = a1;
    SessionState = W32GetSessionState(a1, a2, a3);
    v21 = *(_QWORD *)(SessionState + 96) + 4872LL;
    GrepAcquirePushLockCommon<0,1,void (*)(W32_PUSH_LOCK *,unsigned long)>(v5, *(_QWORD *)(SessionState + 96) + 13496LL);
    v7 = Gre::Base::Globals(v6);
    v8 = *(_QWORD *)v7 + 624LL;
    GreAcquireSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal, v8);
    v9 = *(_QWORD *)v7 + 1144LL;
    GreAcquireSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v9);
    v10 = *(_QWORD *)v7 + 728LL;
    GreAcquireSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(
      (void (__fastcall *)(__int64))GreAcquireSemaphoreInternal,
      v10);
    v11 = *(HSEMAPHORE *)(a1 + 56);
    GreAcquireSemaphoreInternal(v11);
    GrepAcquireLockValidate<4>();
    v20 = *(_QWORD *)v7 + 1040LL;
    GreAcquireSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
      (void (__fastcall *)(__int64))GreAcquireSemaphoreInternal,
      v20);
    v12 = *(_QWORD *)v7 + 520LL;
    GreAcquireSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
      (void (__fastcall *)(__int64))GreAcquireSemaphoreInternal,
      v12);
    SEMOBJ<8>::SEMOBJ<8>((HSEMAPHORE *)&v19, (__int64)&v22);
    SEMOBJ<10>::SEMOBJ<10>(&v18, v7);
    SEMOBJ<13>::SEMOBJ<13>(&v17, v7);
    SEMOBJ<17>::SEMOBJ<17>(&v24, v21);
    SEMOBJ<18>::SEMOBJ<18>(&v23, v21);
    SEMOBJ<20>::SEMOBJ<20>(&v22, v7);
    bDynamicProcessAllDriverRealizations(a1, 0LL, 1LL);
    if ( v22 )
      GreReleaseSemaphoreCommon<20,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
        v22);
    SEMOBJ<18>::vUnlock(&v23);
    SEMOBJ<17>::vUnlock(&v24);
    SEMOBJ<13>::vUnlock(&v17);
    v14 = v18;
    if ( v18 )
    {
      EtwTraceGreLockReleaseSemaphore(L"HT", v18);
      v15 = GreGetCurrentThreadCrossSessionCheck();
      if ( v15 )
      {
        if ( (*((_BYTE *)v15 + 18))-- == 1 )
          *(_QWORD *)v15 &= ~0x400uLL;
        if ( !*(_QWORD *)v15 )
          GrepOnAllLocksReleased();
      }
      GreReleaseSemaphoreExclusiveInternal(v14);
    }
    if ( v19 )
      GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
        v19);
    if ( v12 )
      GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
        v12);
    if ( v20 )
      GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
        v20);
    if ( v11 )
      GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
        (__int64)v11);
    if ( v10 )
      GreReleaseSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
        v10);
    if ( v9 )
      GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
        v9);
    if ( v8 )
      GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
        v8);
    GrepReleasePushLockCommon<0,1,void (*)(W32_PUSH_LOCK *,unsigned long)>(v13, v21 + 8624);
  }
}
