/*
 * XREFs of ?NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x1400F50DC
 * Callers:
 *     NtUserEnumDisplaySettings @ 0x14016C140 (NtUserEnumDisplaySettings.c)
 * Callees:
 *     DrvEnumDisplaySettings @ 0x140024870 (DrvEnumDisplaySettings.c)
 *     EtwTraceReleaseUserCrit @ 0x140034270 (EtwTraceReleaseUserCrit.c)
 *     UserSessionSwitchEnterCrit @ 0x14004C9C0 (UserSessionSwitchEnterCrit.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x140092CF0 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     UpdateDirtyVisRgnTrackers @ 0x1400AC0A0 (UpdateDirtyVisRgnTrackers.c)
 *     DestroyExclusiveUserCritDeferredUnlockList @ 0x14016AAC8 (DestroyExclusiveUserCritDeferredUnlockList.c)
 */

__int64 __fastcall NtUserEnumDisplaySettingsExclusive(
        struct _UNICODE_STRING *a1,
        unsigned int a2,
        struct _devicemodeW *a3,
        int a4)
{
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  unsigned int v11; // esi
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned int Count; // eax
  unsigned int v18; // eax

  UserSessionSwitchEnterCrit((__int64)a1);
  if ( *(_DWORD *)(W32GetUserGdiSessionState(v8) + 32) )
  {
    UserSessionState = W32GetUserSessionState(v9);
    v11 = DrvEnumDisplaySettings(
            a1,
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 104LL) + 80LL),
            a2,
            (__int64)a3,
            a4);
  }
  else
  {
    v11 = -1073741823;
  }
  v12 = W32GetUserSessionState(v9);
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
  v15 = *(unsigned int *)(CurrentThreadWin32Thread + 24);
  LOBYTE(v15) = v15 & 0xC;
  if ( (_BYTE)v15 == 8 )
  {
    UpdateDirtyVisRgnTrackers(v15, v13);
    *(_DWORD *)(v12 + 19844) = 0;
    *(_QWORD *)(v12 + 19824) = 0LL;
    DestroyExclusiveUserCritDeferredUnlockList();
    *(_QWORD *)(v12 + 24) = 0LL;
  }
  v16 = *(_QWORD *)CurrentThreadWin32Thread;
  if ( *(_QWORD *)CurrentThreadWin32Thread && (*(_DWORD *)(CurrentThreadWin32Thread + 24) & 2) == 0 )
    *(_BYTE *)(v16 + 1708) = 0;
  Count = AtomicExecutionCheck::GetCount(v16);
  if ( Count )
    KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
  EtwTraceReleaseUserCrit();
  v18 = *(_DWORD *)(CurrentThreadWin32Thread + 24) & 0xFFFFFFF1;
  *(_DWORD *)(CurrentThreadWin32Thread + 24) = v18;
  if ( (v18 & 0x10) != 0 )
    PsSetThreadWin32Thread(KeGetCurrentThread(), 0LL, CurrentThreadWin32Thread);
  ExReleaseFastResource(*(_QWORD *)v12, CurrentThreadWin32Thread + 32);
  KeLeaveCriticalRegion();
  return v11;
}
