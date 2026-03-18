/*
 * XREFs of HmgFreeFast @ 0x1401C2310
 * Callers:
 *     ?vDeleteCore@XDCOBJ@@QEAAXXZ @ 0x140036330 (-vDeleteCore@XDCOBJ@@QEAAXXZ.c)
 *     HmgFree @ 0x140173F70 (HmgFree.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001F87C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14002DFB0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ??0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z @ 0x140030720 (--0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x140032060 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x140035F20 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C1930 (--0-$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     FreeObjectFast @ 0x1401C217C (FreeObjectFast.c)
 */

void __fastcall HmgFreeFast(_QWORD *a1, unsigned int a2)
{
  unsigned int *v4; // rbx
  struct OBJECT *EntryObject; // rax
  unsigned int v6; // ebx
  char *v7; // rsi
  unsigned int *v8; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]
  HSEMAPHORE v11; // [rsp+60h] [rbp+18h] BYREF

  SEMOBJ<20>::SEMOBJ<20>(&v11, a1);
  HANDLELOCK::HANDLELOCK((__int64)&v8, (__int64)a1, a2, 1u);
  if ( v9 )
  {
    v4 = v8;
    EntryObject = GdiHandleManager::GetEntryObject(*(GdiHandleManager **)(v10 + 5672), *v8);
    v6 = *((unsigned __int8 *)v4 + 14);
    v7 = (char *)EntryObject;
    HANDLELOCK::vUnlockAndRelease((HANDLELOCK *)&v8);
    if ( v7 )
      FreeObjectFast((__int64)a1, v7, v6);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v8);
  SEMOBJ<20>::vUnlock(&v11);
}
