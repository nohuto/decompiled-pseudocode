/*
 * XREFs of HmgUnlock @ 0x140131968
 * Callers:
 *     GreUnlockRegion @ 0x140131950 (GreUnlockRegion.c)
 * Callees:
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14002DFB0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14002E8D0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??0HANDLELOCK@@QEAA@PEAUHOBJ__@@W4HandleLockOptions@@@Z @ 0x1400306B0 (--0HANDLELOCK@@QEAA@PEAUHOBJ__@@W4HandleLockOptions@@@Z.c)
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14003506C (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x140035F20 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 */

__int64 __fastcall HmgUnlock(unsigned int a1)
{
  __int16 v1; // edi^2
  unsigned int v2; // ebx
  struct OBJECT *EntryObject; // rax
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+28h] [rbp-20h]
  char v7; // [rsp+2Dh] [rbp-1Bh]
  __int64 v8; // [rsp+30h] [rbp-18h]

  v1 = HIWORD(a1);
  v2 = 0;
  HANDLELOCK::HANDLELOCK((__int64)&v5, a1, 0);
  if ( v6 )
  {
    if ( *(_BYTE *)(v5 + 14) == 4 && *(_WORD *)(v5 + 12) == v1 )
    {
      EntryObject = GdiHandleManager::GetEntryObject(*(GdiHandleManager **)(v8 + 5672), *(_DWORD *)v5);
      if ( !EntryObject )
      {
LABEL_5:
        HANDLELOCK::vUnlock((HANDLELOCK *)&v5);
        goto LABEL_6;
      }
      if ( *((_WORD *)EntryObject + 6) && *((struct _KTHREAD **)EntryObject + 2) == KeGetCurrentThread() )
      {
        OBJECT::InterlockedDecrementExclusiveLockCount(EntryObject);
        v2 = 1;
        goto LABEL_5;
      }
    }
    v7 = 1;
    goto LABEL_5;
  }
LABEL_6:
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v5);
  return v2;
}
