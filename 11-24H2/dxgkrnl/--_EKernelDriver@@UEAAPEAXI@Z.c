/*
 * XREFs of ??_EKernelDriver@@UEAAPEAXI@Z @ 0x1403F39C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

KernelDriver *__fastcall KernelDriver::`vector deleting destructor'(KernelDriver *this, char a2)
{
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
