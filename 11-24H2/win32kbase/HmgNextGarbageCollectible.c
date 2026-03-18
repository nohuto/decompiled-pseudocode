/*
 * XREFs of HmgNextGarbageCollectible @ 0x1400899DC
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x140015300 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001F87C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001FCA8 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x140035F20 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x140089AA0 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     ?HmgpComputeHandleValue@@YAPEAUHOBJ__@@PEBVOBJECT@@IQEAVENTRYOBJ@@@Z @ 0x14008A4F0 (-HmgpComputeHandleValue@@YAPEAUHOBJ__@@PEBVOBJECT@@IQEAVENTRYOBJ@@@Z.c)
 */

__int64 __fastcall HmgNextGarbageCollectible(unsigned int a1, struct HOBJ__ **a2, _BYTE *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rbp
  GdiHandleManager *v8; // rsi
  unsigned int NextEntryIndex; // eax
  struct _ENTRY *v10; // rdi
  struct OBJECT *EntryObject; // rax
  struct HOBJ__ *v12; // rax
  HSEMAPHORE v14[5]; // [rsp+20h] [rbp-28h] BYREF
  struct _ENTRY *v15; // [rsp+68h] [rbp+20h] BYREF

  SEMOBJ<20>::SEMOBJ<20>(v14);
  v15 = 0LL;
  v7 = *(_QWORD *)(W32GetSessionState(v6) + 88);
  while ( 1 )
  {
    v8 = *(GdiHandleManager **)(v7 + 5672);
    NextEntryIndex = GdiHandleManager::GetNextEntryIndex(v8, a1, &v15);
    a1 = NextEntryIndex;
    if ( !NextEntryIndex )
      break;
    v10 = v15;
    if ( *((_DWORD *)v15 + 2) == -2147483630 )
    {
      EntryObject = GdiHandleManager::GetEntryObject(v8, NextEntryIndex);
      if ( (*((_BYTE *)EntryObject + 14) & 0x40) != 0 )
      {
        v12 = HmgpComputeHandleValue(EntryObject, a1, v10);
        *a2 = v12;
        if ( v12 )
        {
          *a3 = *((_BYTE *)v10 + 14);
          goto LABEL_7;
        }
      }
    }
  }
  a1 = 0;
LABEL_7:
  SEMOBJ<20>::vUnlock(v14);
  return a1;
}
