/*
 * XREFs of ??_GCDWMBackchannelManager@@UEAAPEAXI@Z @ 0x140046570
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1CBackchannelManager@@UEAA@XZ @ 0x1400465B0 (--1CBackchannelManager@@UEAA@XZ.c)
 */

CDWMBackchannelManager *__fastcall CDWMBackchannelManager::`scalar deleting destructor'(
        CDWMBackchannelManager *this,
        char a2)
{
  *(_QWORD *)this = &CDWMBackchannelManager::`vftable';
  CBackchannelManager::~CBackchannelManager(this);
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
