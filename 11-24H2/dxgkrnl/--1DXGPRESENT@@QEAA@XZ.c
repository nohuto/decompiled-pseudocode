/*
 * XREFs of ??1DXGPRESENT@@QEAA@XZ @ 0x1402CD254
 * Callers:
 *     ??1DXGCONTEXT@@QEAA@XZ @ 0x1402CD6D8 (--1DXGCONTEXT@@QEAA@XZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

void __fastcall DXGPRESENT::~DXGPRESENT(void **this)
{
  void *v2; // rcx
  __int64 i; // rsi
  unsigned int v4; // ecx

  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this[2]);
  v2 = this[15];
  this[2] = 0LL;
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v2);
  this[15] = 0LL;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v4 = 1;
    if ( *((_DWORD *)this + 17) )
      v4 = *((_DWORD *)this + 17);
    if ( (unsigned int)i >= v4 )
      break;
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this[i + 28]);
    this[i + 28] = 0LL;
  }
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this[140]);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this[106]);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this[92]);
}
