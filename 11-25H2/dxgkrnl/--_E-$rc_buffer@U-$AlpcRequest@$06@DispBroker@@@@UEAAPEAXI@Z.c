/*
 * XREFs of ??_E?$rc_buffer@U?$AlpcRequest@$06@DispBroker@@@@UEAAPEAXI@Z @ 0x140067610
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1ReferenceCounted@@UEAA@XZ @ 0x14001233C (--1ReferenceCounted@@UEAA@XZ.c)
 */

ReferenceCounted *__fastcall rc_buffer<DispBroker::AlpcRequest<7>>::`vector deleting destructor'(
        ReferenceCounted *a1,
        char a2)
{
  ReferenceCounted::~ReferenceCounted(a1);
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a1);
  return a1;
}
