/*
 * XREFs of ??1DISPLAYDIAGNOSTICADAPTERDATA@@QEAA@XZ @ 0x14006D0E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x140023380 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall DISPLAYDIAGNOSTICADAPTERDATA::~DISPLAYDIAGNOSTICADAPTERDATA(DISPLAYDIAGNOSTICADAPTERDATA *this)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)*((_QWORD *)this + 6);
  if ( v2 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v2);
  v3 = (void *)*((_QWORD *)this + 435);
  if ( v3 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v3);
  `vector destructor iterator'(
    (char *)this + 64,
    224LL,
    4LL,
    (void (__fastcall *)(char *))VIDPNSOURCEINFO::~VIDPNSOURCEINFO);
}
