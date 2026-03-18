/*
 * XREFs of ??_GBLTQUEUE@@QEAAPEAXI@Z @ 0x140078198
 * Callers:
 *     ??1DXGDODPRESENT@@QEAA@XZ @ 0x1402814EC (--1DXGDODPRESENT@@QEAA@XZ.c)
 *     ?StartEmulation@REMOTE_VSYNC@@AEAAJXZ @ 0x1403C5558 (-StartEmulation@REMOTE_VSYNC@@AEAAJXZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1BLTQUEUE@@QEAA@XZ @ 0x1402814B8 (--1BLTQUEUE@@QEAA@XZ.c)
 */

BLTQUEUE *__fastcall BLTQUEUE::`scalar deleting destructor'(BLTQUEUE *this, char a2)
{
  BLTQUEUE::~BLTQUEUE(this);
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
