/*
 * XREFs of ?pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z @ 0x14015AA00
 * Callers:
 *     <none>
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14001487C (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x140014F34 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140015800 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14001D188 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??$GreAcquireSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140022FAC (--$GreAcquireSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400255B0 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002569C (--$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140029E08 (--0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002A350 (--$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002B0C8 (--$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002B264 (--$GreAcquireSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400308A8 (--$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400CEB38 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14015C474 (--$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

void __fastcall pConvertDfbSurfaceToDibNKAPC(struct HOBJ__ *a1, void *a2, void *a3)
{
  Gre::Base *v4; // rcx
  __int64 v5; // rdi
  Gre::Base *v6; // rcx
  struct Gre::Base::SESSION_GLOBALS *v7; // r15
  __int64 v8; // rdx
  int v9; // ecx
  __int64 SessionState; // rax
  __int64 v11; // rbx
  Gre::Base *v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // r13
  bool v17; // zf
  __int64 v18; // rcx
  _BYTE v19[32]; // [rsp+30h] [rbp-89h] BYREF
  __int64 v20; // [rsp+50h] [rbp-69h]
  HDC v21[18]; // [rsp+60h] [rbp-59h] BYREF
  __int64 v22; // [rsp+120h] [rbp+67h] BYREF

  UserEnterUserCritSec(a1, a2, a3);
  v5 = *(_QWORD *)Gre::Base::Globals(v4) + 624LL;
  GreAcquireSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal, v5);
  v7 = Gre::Base::Globals(v6);
  SURFREF::SURFREF((SURFREF *)v19, a1, v7);
  if ( v20 )
  {
    v9 = *(_DWORD *)(v20 + 116);
    if ( (v9 & 0x20) != 0 )
    {
      SessionState = W32GetSessionState(v9, v8);
      ++*(_DWORD *)(*(_QWORD *)(SessionState + 96) + 4748LL);
      *(_DWORD *)(v20 + 116) &= ~0x20u;
      if ( *(_WORD *)(v20 + 100) == 3 )
      {
        v11 = *(_QWORD *)v7 + 1144LL;
        GreAcquireSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
          (void (__fastcall *)(__int64))GreAcquireSemaphoreInternal,
          v11);
        v13 = *(_QWORD *)Gre::Base::Globals(v12) + 728LL;
        GreAcquireSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(
          (void (__fastcall *)(__int64))GreAcquireSemaphoreInternal,
          v13);
        v14 = *(_QWORD *)v7 + 1040LL;
        GreAcquireSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
          (void (__fastcall *)(__int64))GreAcquireSemaphoreInternal,
          v14);
        v15 = *(_QWORD *)v7 + 520LL;
        GreAcquireSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
          (void (__fastcall *)(__int64))GreAcquireSemaphoreInternal,
          v15);
        v16 = v20;
        DEC_SHARE_REF_CNT(v20);
        v20 = 0LL;
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v21);
        v17 = (*(_DWORD *)(v16 + 112) & 0x400000) == 0;
        v18 = *(_QWORD *)(v16 + 48);
        v22 = v18;
        if ( !v17 && v18 )
          DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v21, (struct PDEVOBJ *)&v22);
        pProcessDfbSurfaces2(v16, 1LL, 1LL);
        DEVLOCKOBJ::~DEVLOCKOBJ(v21);
        if ( v15 )
          GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
            (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
            v15);
        if ( v14 )
          GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
            (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
            v14);
        if ( v13 )
          GreReleaseSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(
            (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
            v13);
        if ( v11 )
          GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
            (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
            v11);
      }
    }
  }
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v19);
  if ( v5 )
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v5);
  UserLeaveUserCritSec();
}
