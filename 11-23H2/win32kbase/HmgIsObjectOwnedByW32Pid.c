/*
 * XREFs of HmgIsObjectOwnedByW32Pid @ 0x1C0098CFC
 * Callers:
 *     HmgCheckDCForPrivateReferences @ 0x1C0159028 (HmgCheckDCForPrivateReferences.c)
 * Callees:
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0043040 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?bOwnedBy@ENTRYOBJ@@QEBAHK@Z @ 0x1C0098D6C (-bOwnedBy@ENTRYOBJ@@QEBAHK@Z.c)
 */

__int64 __fastcall HmgIsObjectOwnedByW32Pid(struct OBJECT *a1, unsigned int a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  ENTRYOBJ *EntryFromObject; // rax

  v4 = 0;
  v5 = SGDGetSessionState(a1);
  if ( a1 )
  {
    if ( *(_QWORD *)a1 )
    {
      EntryFromObject = GdiHandleManager::GetEntryFromObject(
                          *(GdiHandleEntryDirectory ***)(*(_QWORD *)(v5 + 24) + 8008LL),
                          a1);
      if ( EntryFromObject )
        return (unsigned int)ENTRYOBJ::bOwnedBy(EntryFromObject, a2) != 0;
    }
  }
  return v4;
}
