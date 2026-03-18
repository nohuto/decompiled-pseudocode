/*
 * XREFs of ?QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x14004A8C8
 * Callers:
 *     ?CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z @ 0x14030881C (-CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z.c)
 *     ?UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z @ 0x140348530 (-UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGWORKQUEUE::QueueWork(PLIST_ENTRY ListHead, void (*a2)(void *), void *a3, __int64 a4)
{
  __int64 Pool2; // rax

  Pool2 = ExAllocatePool2(64LL, 32LL, 1265072196LL, a4);
  if ( !Pool2 )
    return 3221225495LL;
  *(_OWORD *)Pool2 = 0LL;
  *(_OWORD *)(Pool2 + 16) = 0LL;
  *(_QWORD *)(Pool2 + 16) = a2;
  *(_QWORD *)(Pool2 + 24) = a3;
  ExInterlockedInsertTailList(ListHead, (PLIST_ENTRY)Pool2, (PKSPIN_LOCK)&ListHead[1]);
  return 0LL;
}
