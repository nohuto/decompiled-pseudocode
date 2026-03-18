/*
 * XREFs of ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1401CE2C0
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x140015300 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14002DFB0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14002E8D0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?HmgShareLockEx@@YAPEAU_BASEOBJECT@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x14002EB90 (-HmgShareLockEx@@YAPEAU_BASEOBJECT@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z.c)
 *     ??0HANDLELOCK@@QEAA@PEAUHOBJ__@@W4HandleLockOptions@@@Z @ 0x1400306B0 (--0HANDLELOCK@@QEAA@PEAUHOBJ__@@W4HandleLockOptions@@@Z.c)
 *     ??0XEPALOBJ2@@QEAA@XZ @ 0x1401C24C4 (--0XEPALOBJ2@@QEAA@XZ.c)
 *     ??1XEPALOBJ2@@QEAA@XZ @ 0x1401C2508 (--1XEPALOBJ2@@QEAA@XZ.c)
 *     ?bGarbageCollect@XEPALOBJ2@@QEAA_NXZ @ 0x1401C2710 (-bGarbageCollect@XEPALOBJ2@@QEAA_NXZ.c)
 */

void __fastcall vGarbageCollectObject<XEPALOBJ2>(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // [rsp+20h] [rbp-40h] BYREF
  int v5; // [rsp+28h] [rbp-38h]
  char v6; // [rsp+2Dh] [rbp-33h]
  struct _BASEOBJECT *v7[5]; // [rsp+38h] [rbp-28h] BYREF

  XEPALOBJ2::XEPALOBJ2((XEPALOBJ2 *)v7);
  v2 = HmgShareLockEx(a1, 8, 0);
  v7[0] = (struct _BASEOBJECT *)v2;
  if ( v2 && *(_DWORD *)(v2 + 8) <= 1u && (*(_BYTE *)(v2 + 14) & 0x40) != 0 )
  {
    HANDLELOCK::HANDLELOCK((__int64)&v4, a1, 1u);
    if ( v5 )
    {
      if ( (*(_DWORD *)(v4 + 8) & 0xFFFFFFFE) == 0x80000012 )
      {
        HANDLELOCK::vUnlock((HANDLELOCK *)&v4);
        if ( XEPALOBJ2::bGarbageCollect((XEPALOBJ2 *)v7) )
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(W32GetSessionState(v3) + 88) + 1756LL));
        goto LABEL_10;
      }
      HANDLELOCK::vUnlock((HANDLELOCK *)&v4);
    }
    v6 = 1;
LABEL_10:
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v4);
  }
  XEPALOBJ2::~XEPALOBJ2(v7);
}
