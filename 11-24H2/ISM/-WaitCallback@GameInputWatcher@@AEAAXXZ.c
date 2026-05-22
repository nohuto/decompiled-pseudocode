/*
 * XREFs of ?WaitCallback@GameInputWatcher@@AEAAXXZ @ 0x180065B60
 * Callers:
 *     ?WaitCallback@GameInputWatcher@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x180065B40 (-WaitCallback@GameInputWatcher@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z.c)
 * Callees:
 *     _wcsicmp @ 0x18009D484 (_wcsicmp.c)
 */

void __fastcall GameInputWatcher::WaitCallback(GameInputWatcher *this)
{
  struct _OVERLAPPED *lpOverlapped; // rbp
  unsigned int *i; // rbx
  struct _TP_TIMER *v4; // rcx
  DWORD v5; // [rsp+60h] [rbp+8h] BYREF
  _FILETIME pftDueTime; // [rsp+68h] [rbp+10h] BYREF

  lpOverlapped = (struct _OVERLAPPED *)((char *)this + 32);
  v5 = 0;
  if ( GetOverlappedResult(*((HANDLE *)this + 2), (LPOVERLAPPED)this + 1, &v5, 1) )
  {
    for ( i = (unsigned int *)*((_QWORD *)this + 8); ; i = (unsigned int *)((char *)i + *i) )
    {
      *((_WORD *)i + ((unsigned __int64)i[2] >> 1) + 6) = 0;
      if ( (i[1] == 1 || i[1] == 3)
        && (!wcsicmp((const wchar_t *)i + 6, L"GameInput.dll")
         || !wcsicmp((const wchar_t *)i + 6, L"GameInputRedist.dll")) )
      {
        v4 = *(struct _TP_TIMER **)this;
        pftDueTime = (_FILETIME)-10000000LL;
        SetThreadpoolTimer(v4, &pftDueTime, 0, 0x3E8u);
        return;
      }
      if ( !*i )
        break;
    }
    if ( ReadDirectoryChangesW(*((HANDLE *)this + 2), *((LPVOID *)this + 8), 0x1000u, 0, 0x59u, 0LL, lpOverlapped, 0LL) )
      SetThreadpoolWait(*((PTP_WAIT *)this + 1), *((HANDLE *)this + 3), 0LL);
  }
}
