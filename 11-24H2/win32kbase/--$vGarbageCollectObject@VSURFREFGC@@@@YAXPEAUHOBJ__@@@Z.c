/*
 * XREFs of ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1401CE1E0
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x140015300 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140022264 (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14002DFB0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14002E8D0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?HmgShareLockEx@@YAPEAU_BASEOBJECT@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x14002EB90 (-HmgShareLockEx@@YAPEAU_BASEOBJECT@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z.c)
 *     ??0HANDLELOCK@@QEAA@PEAUHOBJ__@@W4HandleLockOptions@@@Z @ 0x1400306B0 (--0HANDLELOCK@@QEAA@PEAUHOBJ__@@W4HandleLockOptions@@@Z.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x140036A88 (--0SURFREF@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x140037010 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??1SURFREFGC@@QEAA@XZ @ 0x140152F18 (--1SURFREFGC@@QEAA@XZ.c)
 */

void __fastcall vGarbageCollectObject<SURFREFGC>(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // [rsp+20h] [rbp-50h] BYREF
  int v5; // [rsp+28h] [rbp-48h]
  char v6; // [rsp+2Dh] [rbp-43h]
  _BYTE v7[32]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v8; // [rsp+58h] [rbp-18h]
  HSEMAPHORE v9; // [rsp+60h] [rbp-10h] BYREF

  SURFREF::SURFREF((SURFREF *)v7);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>(&v9);
  v2 = HmgShareLockEx(a1, 5, 0);
  v8 = v2;
  if ( v2 && *(_DWORD *)(v2 + 8) <= 1u && (*(_BYTE *)(v2 + 14) & 0x40) != 0 )
  {
    HANDLELOCK::HANDLELOCK((__int64)&v4, a1, 1u);
    if ( v5 )
    {
      if ( (*(_DWORD *)(v4 + 8) & 0xFFFFFFFE) == 0x80000012 )
      {
        HANDLELOCK::vUnlock((HANDLELOCK *)&v4);
        if ( (unsigned int)SURFACE::bDeleteSurface(v8, 1, 0) )
        {
          v8 = 0LL;
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(W32GetSessionState(v3) + 88) + 1756LL));
        }
        goto LABEL_10;
      }
      HANDLELOCK::vUnlock((HANDLELOCK *)&v4);
    }
    v6 = 1;
LABEL_10:
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v4);
  }
  SURFREFGC::~SURFREFGC((SURFREFGC *)v7);
}
