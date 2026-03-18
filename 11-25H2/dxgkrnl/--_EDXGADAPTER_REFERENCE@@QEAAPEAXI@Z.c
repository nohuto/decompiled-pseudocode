/*
 * XREFs of ??_EDXGADAPTER_REFERENCE@@QEAAPEAXI@Z @ 0x14006AC40
 * Callers:
 *     _DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::_AdapterArray @ 0x1401A83E4 (_DxgkCheckAndUpdatePairingForNewAdapter_--_2_--AdapterArray--_AdapterArray.c)
 *     _DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::AddAdapter @ 0x1401A859C (_DxgkCheckAndUpdatePairingForNewAdapter_--_2_--AdapterArray--AddAdapter.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x140033498 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 */

char *__fastcall DXGADAPTER_REFERENCE::`vector deleting destructor'(DXGADAPTER_REFERENCE *this)
{
  char *v1; // rbx

  v1 = (char *)this - 8;
  `vector destructor iterator'(
    (char *)this,
    16LL,
    *((_QWORD *)this - 1),
    (void (__fastcall *)(char *))DXGADAPTER_REFERENCE::~DXGADAPTER_REFERENCE);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v1);
  return v1;
}
