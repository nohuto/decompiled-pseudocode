/*
 * XREFs of VidMmSetExistingSysMemStore @ 0x140097040
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1400341A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140034390 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall VidMmSetExistingSysMemStore(__int64 **a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rcx

  v3 = **a1;
  if ( (*(_DWORD *)(v3 + 28) & 0x10000) != 0 )
  {
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v3 + 136));
    v6 = 0;
    if ( *(_DWORD *)(v3 + 432) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2278;
      DxgkLogInternalTriageEvent(v7, 0x40000LL);
      v6 = -1073741811;
    }
    else
    {
      *(_QWORD *)(v3 + 424) = a2;
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v3 + 136));
    return v6;
  }
  else
  {
    WdLogSingleEntry1(1LL, a1);
    WdLogGlobalForLineNumber = 2267;
    DxgkLogInternalTriageEvent(v4, 0x40000LL);
    return 3221225485LL;
  }
}
