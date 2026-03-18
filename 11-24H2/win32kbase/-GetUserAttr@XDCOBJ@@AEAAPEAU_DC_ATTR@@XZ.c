/*
 * XREFs of ?GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ @ 0x140034BE0
 * Callers:
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x140020190 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x140034798 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?SaveAttributes@XDCOBJ@@AEAAHXZ @ 0x140034840 (-SaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1400348A0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1400349F0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     GrepDeleteDC @ 0x140034C20 (GrepDeleteDC.c)
 * Callees:
 *     ?GreDecodeUserModePointer@@YAPEAXPEAX@Z @ 0x14000D050 (-GreDecodeUserModePointer@@YAPEAXPEAX@Z.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x14000D610 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 */

struct _DC_ATTR *__fastcall XDCOBJ::GetUserAttr(XDCOBJ *this)
{
  struct _DC_ATTR *result; // rax

  result = GdiHandleManager::GetEntryFromObject(
             *(GdiHandleManager **)(*((_QWORD *)this + 2) + 5672LL),
             *(struct OBJECT **)this);
  if ( result )
    return (struct _DC_ATTR *)GreDecodeUserModePointer(*((void **)result + 2));
  return result;
}
