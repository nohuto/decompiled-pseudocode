/*
 * XREFs of MultiUserCleanupDCs @ 0x140089910
 * Callers:
 *     DrvCleanupAndDestroyMDEV @ 0x14008968C (DrvCleanupAndDestroyMDEV.c)
 * Callees:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1400150B4 (-vCleanupDCs@@YAXK@Z.c)
 *     ?GetEntryFromIndex@GdiHandleManager@@QEAAPEAU_ENTRY@@I@Z @ 0x140015F3C (-GetEntryFromIndex@GdiHandleManager@@QEAAPEAU_ENTRY@@I@Z.c)
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x140089AA0 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 */

void MultiUserCleanupDCs()
{
  unsigned int CurrentProcessId; // eax
  int v1; // esi
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // r14
  GdiHandleManager *v5; // rdi
  unsigned int i; // edx
  unsigned int NextEntryIndex; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebp
  struct _ENTRY *EntryFromIndex; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rdx
  struct _ENTRY *v13; // [rsp+40h] [rbp+8h] BYREF

  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  v13 = 0LL;
  v1 = 0;
  v2 = CurrentProcessId & 0xFFFFFFFC;
  v4 = *(_QWORD *)(W32GetSessionState(v3) + 88);
  v5 = *(GdiHandleManager **)(v4 + 5672);
  if ( v5 )
  {
    for ( i = 0; ; i = v9 )
    {
      NextEntryIndex = GdiHandleManager::GetNextEntryIndex(v5, i, &v13);
      v9 = NextEntryIndex;
      if ( !NextEntryIndex )
        break;
      EntryFromIndex = GdiHandleManager::GetEntryFromIndex(v5, NextEntryIndex);
      v13 = EntryFromIndex;
      if ( *((_BYTE *)EntryFromIndex + 14) == 1 && (*((_DWORD *)EntryFromIndex + 2) & 0xFFFFFFFE) != v2 )
      {
        *((_DWORD *)EntryFromIndex + 2) = v2;
        ++v1;
      }
      v5 = *(GdiHandleManager **)(v4 + 5672);
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
    if ( CurrentProcessWin32Process && *(_QWORD *)CurrentProcessWin32Process )
      *(_DWORD *)(CurrentProcessWin32Process + 60) += v1;
    vCleanupDCs(v2, v12);
  }
}
