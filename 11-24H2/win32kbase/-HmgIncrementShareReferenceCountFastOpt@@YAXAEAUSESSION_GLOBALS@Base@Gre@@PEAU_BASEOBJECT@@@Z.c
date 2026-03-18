/*
 * XREFs of ?HmgIncrementShareReferenceCountFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@@Z @ 0x1401C1CA4
 * Callers:
 *     HmgIncrementShareReferenceCount @ 0x1400357D0 (HmgIncrementShareReferenceCount.c)
 *     INC_SHARE_REF_CNT_FAST @ 0x1401C2430 (INC_SHARE_REF_CNT_FAST.c)
 * Callees:
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14002DFB0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14002E8D0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     HmgPentryFromPobj @ 0x140032C30 (HmgPentryFromPobj.c)
 *     ??0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@W4HandleLockOptions@@@Z @ 0x1401C195C (--0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@W4HandleLockOptions@@@Z.c)
 *     ?TrackObjectReferenceIncrementFast@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@PEAX@Z @ 0x1401C3B24 (-TrackObjectReferenceIncrementFast@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedTy.c)
 */

void __fastcall HmgIncrementShareReferenceCountFastOpt(struct Gre::Base::SESSION_GLOBALS *a1, struct _BASEOBJECT *a2)
{
  char v4; // dl
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+28h] [rbp-20h]

  HANDLELOCK::HANDLELOCK((__int64)&v7, (__int64)a1, a2, 1);
  if ( !v8 )
  {
    HmgPentryFromPobj(a2);
    goto LABEL_9;
  }
  v4 = *(_BYTE *)(v7 + 14);
  if ( v4 == 5 )
  {
    v5 = *((_QWORD *)a2 + 85);
    v6 = 0LL;
LABEL_6:
    TrackObjectReferenceIncrementFast(a1, v6, v5);
    goto LABEL_7;
  }
  if ( v4 == 16 )
  {
    v5 = *((_QWORD *)a2 + 17);
    v6 = 2LL;
    goto LABEL_6;
  }
LABEL_7:
  ++*((_DWORD *)a2 + 2);
  HANDLELOCK::vUnlock((HANDLELOCK *)&v7);
LABEL_9:
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v7);
}
