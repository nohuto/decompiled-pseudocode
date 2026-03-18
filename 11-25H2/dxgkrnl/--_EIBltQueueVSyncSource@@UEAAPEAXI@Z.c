/*
 * XREFs of ??_EIBltQueueVSyncSource@@UEAAPEAXI@Z @ 0x140092610
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

IBltQueueVSyncSource *__fastcall IBltQueueVSyncSource::`vector deleting destructor'(
        IBltQueueVSyncSource *this,
        char a2)
{
  *(_QWORD *)this = &IBltQueueVSyncSource::`vftable';
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
