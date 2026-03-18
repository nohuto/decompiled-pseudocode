/*
 * XREFs of ?ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z @ 0x1400233DC
 * Callers:
 *     ??1DXGSHAREDRESOURCECA@@UEAA@XZ @ 0x140392168 (--1DXGSHAREDRESOURCECA@@UEAA@XZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

void __fastcall VIDMM_FLIP_QUEUE_REFERENCES::ReleaseReference(VIDMM_FLIP_QUEUE_REFERENCES *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this, 0xFFFFFFFF) == 1 )
  {
    if ( *((_DWORD *)this + 2) )
    {
      WdLogSingleEntry5(0LL, 275LL, 53LL, this, *((int *)this + 2), 0LL);
      WdLogGlobalForLineNumber = 121;
    }
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  }
}
