/*
 * XREFs of ??_GCTokenManager@@AEAAPEAXI@Z @ 0x140097DA0
 * Callers:
 *     ?Release@CTokenManager@@UEAAJXZ @ 0x140035580 (-Release@CTokenManager@@UEAAJXZ.c)
 *     CreateTokenManagerSessionGlobal @ 0x140053D80 (CreateTokenManagerSessionGlobal.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1CTokenManager@@AEAA@XZ @ 0x140097C68 (--1CTokenManager@@AEAA@XZ.c)
 */

struct _LIST_ENTRY *__fastcall CTokenManager::`scalar deleting destructor'(struct _LIST_ENTRY *this)
{
  CTokenManager::~CTokenManager(this);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
