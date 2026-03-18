/*
 * XREFs of DpiGdiSyncDisplayCallout @ 0x1403F798C
 * Callers:
 *     ?RequestSyncCallout@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z @ 0x1401D68A8 (-RequestSyncCallout@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z.c)
 *     DpiGdiHandleAsyncDisplayCallout @ 0x140235D10 (DpiGdiHandleAsyncDisplayCallout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGdiSyncDisplayCallout(__int64 a1, char a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v4; // eax
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF
  __int128 v7; // [rsp+40h] [rbp-18h]

  v6 = 0LL;
  v7 = 0LL;
  if ( dword_140160D20 == 2 )
  {
    LOBYTE(a3) = 1;
    HIBYTE(v7) = a2;
    LODWORD(v6) = 8;
    v4 = SMgrGdiCallout(&v6, a1, a3, 0LL, 0LL, 0LL);
    v3 = v4;
    if ( v4 >= 0 )
    {
      if ( SDWORD2(v7) < 0 )
      {
        v3 = DWORD2(v7);
        WdLogSingleEntry1(3LL, SDWORD2(v7));
        WdLogGlobalForLineNumber = 370;
      }
    }
    else
    {
      WdLogSingleEntry1(3LL, v4);
      WdLogGlobalForLineNumber = 360;
    }
  }
  else
  {
    v3 = -1073741661;
    WdLogSingleEntry1(3LL, -1073741661LL);
    WdLogGlobalForLineNumber = 342;
  }
  return v3;
}
