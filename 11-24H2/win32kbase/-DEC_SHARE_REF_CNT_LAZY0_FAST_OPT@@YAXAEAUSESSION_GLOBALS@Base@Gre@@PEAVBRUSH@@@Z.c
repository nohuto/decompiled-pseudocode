/*
 * XREFs of ?DEC_SHARE_REF_CNT_LAZY0_FAST_OPT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z @ 0x1401C4C40
 * Callers:
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x140035780 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1401211B0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     bDeleteBrush @ 0x140014820 (bDeleteBrush.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14002DFB0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14002E8D0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x140035F20 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1400D0C38 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?HmgDecrementShareReferenceCountExFastOpt@@YAKAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@PEAH@Z @ 0x1401C1BDC (-HmgDecrementShareReferenceCountExFastOpt@@YAKAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@PEA.c)
 */

void __fastcall DEC_SHARE_REF_CNT_LAZY0_FAST_OPT(struct Gre::Base::SESSION_GLOBALS *a1, struct HOBJ__ **a2)
{
  struct HOBJ__ *v3; // rsi
  int v4; // edi
  _DWORD *v5; // rax
  unsigned int *v6; // [rsp+28h] [rbp-20h] BYREF
  int v7; // [rsp+30h] [rbp-18h]
  __int16 v8; // [rsp+34h] [rbp-14h]
  struct Gre::Base::SESSION_GLOBALS *v9; // [rsp+38h] [rbp-10h]

  if ( a2 )
  {
    v3 = *a2;
    if ( (unsigned __int16)HmgDecrementShareReferenceCountExFastOpt(a1, (struct _BASEOBJECT *)a2, 0LL) == 1 )
    {
      v4 = 0;
      v6 = 0LL;
      v7 = 0;
      v8 = 0;
      v9 = a1;
      HANDLELOCK::bLockHobj((HANDLELOCK *)&v6, v3, 16);
      if ( v7 )
      {
        v5 = (_DWORD *)*((_QWORD *)GdiHandleManager::GetEntryObject(*((GdiHandleManager **)v9 + 709), *v6) + 6);
        if ( v5 )
          v4 = *v5 & 2;
        HANDLELOCK::vUnlock((HANDLELOCK *)&v6);
      }
      if ( v4 )
        bDeleteBrush(v3, 0, 0);
      HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v6);
    }
  }
}
