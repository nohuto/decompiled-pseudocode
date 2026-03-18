/*
 * XREFs of ?AddDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z @ 0x140344A0C
 * Callers:
 *     DxgkUseAdapterViewInCurrentSession @ 0x140345CB0 (DxgkUseAdapterViewInCurrentSession.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall SESSION_ADAPTER::AddDisplaySource(SESSION_ADAPTER *this, struct DISPLAY_SOURCE *a2)
{
  SESSION_ADAPTER *v2; // rax
  int v5; // ecx
  char *v6; // r8
  char *v7; // rax
  char **v8; // rcx

  v2 = (SESSION_ADAPTER *)*((_QWORD *)a2 + 3);
  if ( v2 )
  {
    if ( v2 != this )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3075;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Caller specified display source is owned by other session.",
        3075LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225506LL;
    }
  }
  else
  {
    v5 = *((_DWORD *)a2 + 4);
    *((_QWORD *)a2 + 3) = this;
    ++*((_DWORD *)this + 27);
    *((_DWORD *)this + 26) |= 1 << v5;
    v6 = (char *)this + 112;
    v7 = (char *)a2 + 32;
    v8 = (char **)*((_QWORD *)v6 + 1);
    if ( *v8 != v6 )
      __fastfail(3u);
    *(_QWORD *)v7 = v6;
    *((_QWORD *)a2 + 5) = v8;
    *v8 = v7;
    *((_QWORD *)v6 + 1) = v7;
  }
  ++*((_DWORD *)a2 + 18);
  return 0LL;
}
