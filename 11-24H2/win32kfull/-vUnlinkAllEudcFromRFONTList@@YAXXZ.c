/*
 * XREFs of ?vUnlinkAllEudcFromRFONTList@@YAXXZ @ 0x14021CC4C
 * Callers:
 *     bDeleteAllFlEntry @ 0x1400FE098 (bDeleteAllFlEntry.c)
 * Callees:
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400BB04C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400BBE78 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BC@@@QEAAXXZ @ 0x1400BBF8C (-vUnlock@-$SEMOBJ@$0BC@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BC@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400DCDFC (--0-$SEMOBJ@$0BC@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlinkAllEudcFromRFONTListInternal@@YAXPEAUHDEV__@@@Z @ 0x14030CDBC (-vUnlinkAllEudcFromRFONTListInternal@@YAXPEAUHDEV__@@@Z.c)
 */

void __fastcall vUnlinkAllEudcFromRFONTList(int a1, __int64 a2)
{
  __int64 v2; // rbx
  HDEV i; // rcx
  HDEV v4; // rax
  HDEV v5; // rbx
  HSEMAPHORE v6; // [rsp+30h] [rbp+8h] BYREF
  HSEMAPHORE v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  SEMOBJ<17>::SEMOBJ<17>(&v7, v2 + 4872);
  SEMOBJ<18>::SEMOBJ<18>(&v6, v2 + 4872);
  for ( i = 0LL; ; i = v5 )
  {
    v4 = (HDEV)hdevEnumerateAll(i);
    v5 = v4;
    if ( !v4 )
      break;
    vUnlinkAllEudcFromRFONTListInternal(v4);
  }
  SEMOBJ<18>::vUnlock(&v6);
  SEMOBJ<17>::vUnlock(&v7);
}
