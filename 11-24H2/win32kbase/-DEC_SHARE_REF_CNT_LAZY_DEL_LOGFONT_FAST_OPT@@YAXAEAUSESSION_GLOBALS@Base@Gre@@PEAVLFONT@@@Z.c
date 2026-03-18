/*
 * XREFs of ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT_FAST_OPT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVLFONT@@@Z @ 0x1401C1A94
 * Callers:
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x140035710 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1401211B0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x14000D610 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     bDeleteFont @ 0x140010D54 (bDeleteFont.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14002DFB0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14002E8D0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x140035F20 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1400D0C38 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?HmgDecrementShareReferenceCountExFastOpt@@YAKAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@PEAH@Z @ 0x1401C1BDC (-HmgDecrementShareReferenceCountExFastOpt@@YAKAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@PEA.c)
 */

void __fastcall DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT_FAST_OPT(GdiHandleManager **a1, struct HOBJ__ **a2)
{
  struct HOBJ__ *v2; // rdi
  struct OBJECT *EntryObject; // rax
  char v5; // bl
  unsigned int *v6; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+28h] [rbp-20h]
  __int16 v8; // [rsp+2Ch] [rbp-1Ch]
  GdiHandleManager **v9; // [rsp+30h] [rbp-18h]

  if ( a2 )
  {
    v2 = *a2;
    if ( (unsigned __int16)HmgDecrementShareReferenceCountExFastOpt(
                             (struct Gre::Base::SESSION_GLOBALS *)a1,
                             (struct _BASEOBJECT *)a2,
                             0LL) == 1 )
    {
      v6 = 0LL;
      v7 = 0;
      v8 = 0;
      v9 = a1;
      HANDLELOCK::bLockHobj((HANDLELOCK *)&v6, v2, 10);
      if ( v7 )
      {
        EntryObject = GdiHandleManager::GetEntryObject(v9[709], *v6);
        v5 = *((_BYTE *)GdiHandleManager::GetEntryFromObject(a1[709], EntryObject) + 15);
        HANDLELOCK::vUnlock((HANDLELOCK *)&v6);
        if ( (v5 & 2) != 0 )
          bDeleteFont((__int64)v2, 0);
      }
      HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v6);
    }
  }
}
