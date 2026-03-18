/*
 * XREFs of ??_GCBackchannelManager@@UEAAPEAXI@Z @ 0x1400A0430
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1CBackchannelManager@@UEAA@XZ @ 0x1400465B0 (--1CBackchannelManager@@UEAA@XZ.c)
 */

PVOID *__fastcall CBackchannelManager::`scalar deleting destructor'(PVOID *this, char a2)
{
  CBackchannelManager::~CBackchannelManager(this);
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
