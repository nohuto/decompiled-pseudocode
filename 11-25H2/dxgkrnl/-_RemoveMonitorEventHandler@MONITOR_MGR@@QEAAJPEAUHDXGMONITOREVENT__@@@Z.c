/*
 * XREFs of ?_RemoveMonitorEventHandler@MONITOR_MGR@@QEAAJPEAUHDXGMONITOREVENT__@@@Z @ 0x14026E1CC
 * Callers:
 *     ?MonitorUnregisterMonitorEventCallback@@YAJPEAVADAPTER_DISPLAY@@PEAUHDXGMONITOREVENT__@@@Z @ 0x140189B28 (-MonitorUnregisterMonitorEventCallback@@YAJPEAVADAPTER_DISPLAY@@PEAUHDXGMONITOREVENT__@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1?$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0JI@@@QEAA@XZ @ 0x14005F4E0 (--1-$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0JI@@@QEAA@XZ.c)
 *     ??0?$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0JI@@@QEAA@AEAVMONITOR_MGR@@@Z @ 0x14008FEE0 (--0-$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0JI@@@QEAA@AEAVMONITOR_MGR@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_RemoveMonitorEventHandler(MONITOR_MGR *this, struct HDXGMONITOREVENT__ ***a2)
{
  struct HDXGMONITOREVENT__ **v4; // rcx
  struct HDXGMONITOREVENT__ *v5; // rax
  struct HDXGMONITOREVENT__ **v6; // rcx
  struct HDXGMONITOREVENT__ **v7; // rax
  char v9; // [rsp+30h] [rbp+8h] BYREF

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3274;
  }
  MUTEX_MEMBER_LOCK<MONITOR_MGR,152>::MUTEX_MEMBER_LOCK<MONITOR_MGR,152>((MUTEX_LOCK *)&v9, (__int64)this);
  v4 = (struct HDXGMONITOREVENT__ **)((char *)this + 72);
  if ( !a2 || (v5 = *v4, *v4 == (struct HDXGMONITOREVENT__ *)v4) )
  {
LABEL_12:
    WdLogSingleEntry1(2LL, a2);
    WdLogGlobalForLineNumber = 3287;
    MUTEX_MEMBER_LOCK<MONITOR_MGR,152>::~MUTEX_MEMBER_LOCK<MONITOR_MGR,152>((MUTEX_LOCK *)&v9);
    return 3221225485LL;
  }
  else
  {
    while ( v5 != (struct HDXGMONITOREVENT__ *)a2 )
    {
      if ( v4 == (struct HDXGMONITOREVENT__ **)v5 )
        goto LABEL_12;
      v5 = *(struct HDXGMONITOREVENT__ **)v5;
    }
    v6 = *a2;
    if ( (*a2)[1] != (struct HDXGMONITOREVENT__ *)a2 || (v7 = a2[1], *v7 != (struct HDXGMONITOREVENT__ *)a2) )
      __fastfail(3u);
    *v7 = (struct HDXGMONITOREVENT__ *)v6;
    v6[1] = (struct HDXGMONITOREVENT__ *)v7;
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a2);
    MUTEX_MEMBER_LOCK<MONITOR_MGR,152>::~MUTEX_MEMBER_LOCK<MONITOR_MGR,152>((MUTEX_LOCK *)&v9);
    return 0LL;
  }
}
