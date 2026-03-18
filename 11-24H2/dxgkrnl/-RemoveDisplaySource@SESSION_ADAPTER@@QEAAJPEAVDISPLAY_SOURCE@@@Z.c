/*
 * XREFs of ?RemoveDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z @ 0x1403F80C4
 * Callers:
 *     DxgkUseAdapterViewInCurrentSession @ 0x140345CB0 (DxgkUseAdapterViewInCurrentSession.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1400A2000 (memset.c)
 */

__int64 __fastcall SESSION_ADAPTER::RemoveDisplaySource(SESSION_ADAPTER *this, struct DISPLAY_SOURCE *a2)
{
  int v6; // ecx
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  _QWORD *v9; // rax

  if ( *((SESSION_ADAPTER **)a2 + 3) == this )
  {
    if ( (*((_DWORD *)a2 + 18))-- == 1 )
    {
      memset((char *)a2 + 88, 0, 0x200uLL);
      v6 = *((_DWORD *)a2 + 4);
      *((_QWORD *)a2 + 75) = 0LL;
      *((_DWORD *)this + 26) &= ~(1 << v6);
      *((_QWORD *)a2 + 3) = 0LL;
      v7 = (_QWORD *)((char *)a2 + 32);
      v8 = *v7;
      if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v9 = (_QWORD *)v7[1], (_QWORD *)*v9 != v7) )
        __fastfail(3u);
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      --*((_DWORD *)this + 27);
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(2LL, a2, -1073741811LL);
    WdLogGlobalForLineNumber = 3128;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Caller specified display source 0x%I64x is not owned by current session, returning 0x%I64x.",
      (__int64)a2,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
