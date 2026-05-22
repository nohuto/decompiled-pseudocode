/*
 * XREFs of ?StopWatching@GameInputWatcher@@QEAAXXZ @ 0x180097388
 * Callers:
 *     ?UnloadGameInput@GameInputServerProxy@@AEAAXXZ @ 0x1800717B8 (-UnloadGameInput@GameInputServerProxy@@AEAAXXZ.c)
 *     ??1GameInputWatcher@@QEAA@XZ @ 0x18010A2A4 (--1GameInputWatcher@@QEAA@XZ.c)
 *     ?StartWatching@GameInputWatcher@@QEAAJPEBGPEAXP6AX1@Z@Z @ 0x18010A828 (-StartWatching@GameInputWatcher@@QEAAJPEBGPEAXP6AX1@Z@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall GameInputWatcher::StopWatching(GameInputWatcher *this)
{
  const struct std::nothrow_t *v2; // rdx
  struct _TP_WAIT *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  v3 = (struct _TP_WAIT *)*((_QWORD *)this + 1);
  if ( v3 )
  {
    SetThreadpoolWait(v3, 0LL, 0LL);
    WaitForThreadpoolWaitCallbacks(*((PTP_WAIT *)this + 1), 1);
    CloseThreadpoolWait(*((PTP_WAIT *)this + 1));
    *((_QWORD *)this + 1) = 0LL;
  }
  if ( *(_QWORD *)this )
  {
    SetThreadpoolTimer(*(PTP_TIMER *)this, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(*(PTP_TIMER *)this, 1);
    CloseThreadpoolTimer(*(PTP_TIMER *)this);
    *(_QWORD *)this = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 2);
  if ( v4 != (void *)-1LL )
  {
    CloseHandle(v4);
    *((_QWORD *)this + 2) = -1LL;
  }
  v5 = (void *)*((_QWORD *)this + 3);
  if ( v5 )
  {
    CloseHandle(v5);
    *((_QWORD *)this + 3) = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v6 )
    operator delete(v6, v2);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
}
