/*
 * XREFs of ?DestroyOutputDuplManager@@YAJPEAVOUTPUTDUPL_MGR@@@Z @ 0x1401DFB38
 * Callers:
 *     ??1ADAPTER_DISPLAY@@QEAA@XZ @ 0x14019471C (--1ADAPTER_DISPLAY@@QEAA@XZ.c)
 *     ??1OUTPUTDUPL_SESSION_MGR@@QEAA@XZ @ 0x1401DF068 (--1OUTPUTDUPL_SESSION_MGR@@QEAA@XZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1OUTPUTDUPL_MGR_INDIRECT@@QEAA@XZ @ 0x140076384 (--1OUTPUTDUPL_MGR_INDIRECT@@QEAA@XZ.c)
 *     ??_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z @ 0x140076418 (--_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall DestroyOutputDuplManager(struct OUTPUTDUPL_MGR *a1)
{
  char *v2; // rbx

  if ( a1 )
  {
    if ( *((_BYTE *)a1 + 88) )
    {
      v2 = (char *)a1 - 24;
      if ( a1 != (struct OUTPUTDUPL_MGR *)24 )
      {
        OUTPUTDUPL_MGR_INDIRECT::~OUTPUTDUPL_MGR_INDIRECT((struct OUTPUTDUPL_MGR *)((char *)a1 - 24));
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v2);
      }
    }
    else
    {
      OUTPUTDUPL_MGR::`scalar deleting destructor'(a1);
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 3926;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid parameter for the function DestroyOutputDuplManager pOutputDuplMgr = 0x%I64x.",
      0LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
