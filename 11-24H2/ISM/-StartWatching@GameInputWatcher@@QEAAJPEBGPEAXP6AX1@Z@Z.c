/*
 * XREFs of ?StartWatching@GameInputWatcher@@QEAAJPEBGPEAXP6AX1@Z@Z @ 0x18010C738
 * Callers:
 *     ?LoadGameInput@GameInputServerProxy@@AEAAJXZ @ 0x1800713E0 (-LoadGameInput@GameInputServerProxy@@AEAAJXZ.c)
 * Callees:
 *     ?StopWatching@GameInputWatcher@@QEAAXXZ @ 0x180097498 (-StopWatching@GameInputWatcher@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E878 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall GameInputWatcher::StartWatching(
        GameInputWatcher *this,
        LPCWSTR lpFileName,
        void *a3,
        void (*a4)(void *))
{
  unsigned int v7; // edi
  PTP_TIMER ThreadpoolTimer; // rax
  signed int LastError; // eax
  PTP_WAIT ThreadpoolWait; // rax
  HANDLE EventW; // rax
  HANDLE FileW; // rax
  void *v13; // rax
  const struct std::nothrow_t *v14; // rdx
  void *v15; // rcx
  void *v16; // rdx
  void *v17; // rcx

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  if ( *((_QWORD *)this + 2) == -1LL )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(GameInputWatcher::TimerCallback, this, 0LL);
    *(_QWORD *)this = ThreadpoolTimer;
    if ( !ThreadpoolTimer )
      goto LABEL_4;
    ThreadpoolWait = CreateThreadpoolWait((PTP_WAIT_CALLBACK)GameInputWatcher::WaitCallback, this, 0LL);
    *((_QWORD *)this + 1) = ThreadpoolWait;
    if ( !ThreadpoolWait )
      goto LABEL_4;
    EventW = CreateEventW(0LL, 0, 0, 0LL);
    *((_QWORD *)this + 3) = EventW;
    if ( !EventW )
      goto LABEL_4;
    FileW = CreateFileW(lpFileName, 0x80000020, 7u, 0LL, 3u, 0x42000000u, 0LL);
    *((_QWORD *)this + 2) = FileW;
    if ( FileW == (HANDLE)-1LL )
      goto LABEL_4;
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = *((_QWORD *)this + 3);
    v13 = operator new[](0x1000uLL, (const struct std::nothrow_t *)&std::nothrow);
    v15 = (void *)*((_QWORD *)this + 8);
    *((_QWORD *)this + 8) = v13;
    if ( v15 )
      operator delete(v15, v14);
    v16 = (void *)*((_QWORD *)this + 8);
    if ( v16
      && (v17 = (void *)*((_QWORD *)this + 2),
          *((_QWORD *)this + 14) = a3,
          *((_QWORD *)this + 15) = GameInputServerProxy::OnModuleUpdated,
          ReadDirectoryChangesW(v17, v16, 0x1000u, 0, 0x59u, 0LL, (LPOVERLAPPED)this + 1, 0LL)) )
    {
      SetThreadpoolWait(*((PTP_WAIT *)this + 1), *((HANDLE *)this + 3), 0LL);
      v7 = 0;
    }
    else
    {
LABEL_4:
      LastError = GetLastError();
      v7 = LastError;
      if ( LastError > 0 )
        v7 = (unsigned __int16)LastError | 0x80070000;
      GameInputWatcher::StopWatching(this);
    }
  }
  else
  {
    v7 = -2147418113;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  return v7;
}
