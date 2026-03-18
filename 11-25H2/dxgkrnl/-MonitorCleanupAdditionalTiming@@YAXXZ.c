/*
 * XREFs of ?MonitorCleanupAdditionalTiming@@YAXXZ @ 0x14026E45C
 * Callers:
 *     ?MonitorCleanupGlobal@@YAJXZ @ 0x1400062AC (-MonitorCleanupGlobal@@YAJXZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

void MonitorCleanupAdditionalTiming(void)
{
  void *v0; // rcx

  while ( 1 )
  {
    v0 = qword_14015E4C0;
    if ( !qword_14015E4C0 )
      break;
    qword_14015E4C0 = *(void **)qword_14015E4C0;
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v0);
  }
}
