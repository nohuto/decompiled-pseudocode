/*
 * XREFs of ??_GCTokenManager@@AEAAPEAXI@Z @ 0x140099FCC
 * Callers:
 *     ?Release@CTokenManager@@UEAAJXZ @ 0x1400355C0 (-Release@CTokenManager@@UEAAJXZ.c)
 *     CreateTokenManagerSessionGlobal @ 0x140053B0C (CreateTokenManagerSessionGlobal.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1CTokenManager@@AEAA@XZ @ 0x140099E94 (--1CTokenManager@@AEAA@XZ.c)
 */

struct _LIST_ENTRY *__fastcall CTokenManager::`scalar deleting destructor'(struct _LIST_ENTRY *this)
{
  CTokenManager::~CTokenManager(this);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
