/*
 * XREFs of ?HmgDecrementShareReferenceCountExFastOpt@@YAKAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@PEAH@Z @ 0x1401C1BDC
 * Callers:
 *     HmgDecrementShareReferenceCountEx @ 0x1400358E0 (HmgDecrementShareReferenceCountEx.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1401211B0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT_FAST_OPT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVLFONT@@@Z @ 0x1401C1A94 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT_FAST_OPT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVLFONT@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0_FAST_OPT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z @ 0x1401C4C40 (-DEC_SHARE_REF_CNT_LAZY0_FAST_OPT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z.c)
 * Callees:
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14002DFB0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14002E8D0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     HmgPentryFromPobj @ 0x140032C30 (HmgPentryFromPobj.c)
 *     ??0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@W4HandleLockOptions@@@Z @ 0x1401C195C (--0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@W4HandleLockOptions@@@Z.c)
 *     ?TrackObjectReferenceDecrementFast@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@PEAX@Z @ 0x1401C3AEC (-TrackObjectReferenceDecrementFast@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedTy.c)
 */

__int64 __fastcall HmgDecrementShareReferenceCountExFastOpt(
        struct Gre::Base::SESSION_GLOBALS *a1,
        struct _BASEOBJECT *a2,
        int *a3)
{
  unsigned int v3; // edi
  __int64 v7; // rcx
  char v8; // al
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  int v13; // [rsp+28h] [rbp-20h]

  v3 = 0;
  if ( a3 )
    *a3 = 0;
  HANDLELOCK::HANDLELOCK((__int64)&v12, (__int64)a1, a2, 5);
  if ( !v13 )
  {
    HmgPentryFromPobj(a2);
    goto LABEL_13;
  }
  v7 = v12;
  if ( a3 )
    *a3 = (*(unsigned __int8 *)(v12 + 15) >> 3) & 1;
  v8 = *(_BYTE *)(v7 + 14);
  v3 = *((_DWORD *)a2 + 2);
  if ( v8 == 5 )
  {
    v9 = *((_QWORD *)a2 + 85);
    v10 = 0LL;
LABEL_10:
    TrackObjectReferenceDecrementFast(a1, v10, v9);
    goto LABEL_11;
  }
  if ( v8 == 16 )
  {
    v9 = *((_QWORD *)a2 + 17);
    v10 = 2LL;
    goto LABEL_10;
  }
LABEL_11:
  --*((_DWORD *)a2 + 2);
  HANDLELOCK::vUnlock((HANDLELOCK *)&v12);
LABEL_13:
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v12);
  return v3;
}
