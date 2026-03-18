/*
 * XREFs of ?MonitorCleanupAdditionalTiming@@YAXXZ @ 0x1402753BC
 * Callers:
 *     ?MonitorCleanupGlobal@@YAJXZ @ 0x1400062AC (-MonitorCleanupGlobal@@YAJXZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

void MonitorCleanupAdditionalTiming(void)
{
  void *v0; // rcx

  while ( 1 )
  {
    v0 = qword_1401614C0;
    if ( !qword_1401614C0 )
      break;
    qword_1401614C0 = *(void **)qword_1401614C0;
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v0);
  }
}
