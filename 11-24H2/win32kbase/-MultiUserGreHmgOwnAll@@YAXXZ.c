/*
 * XREFs of ?MultiUserGreHmgOwnAll@@YAXXZ @ 0x14008985C
 * Callers:
 *     MultiUserNtGreCleanup @ 0x140089C68 (MultiUserNtGreCleanup.c)
 * Callees:
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x140089AA0 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 */

void MultiUserGreHmgOwnAll(void)
{
  unsigned int CurrentProcessId; // eax
  unsigned int v1; // ebx
  unsigned int v2; // esi
  __int64 v3; // rcx
  __int64 v4; // rdi
  GdiHandleManager *v5; // rcx
  unsigned int i; // edx
  unsigned int NextEntryIndex; // eax
  __int64 v8; // rcx
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v10; // ecx
  struct _ENTRY *v11; // [rsp+30h] [rbp+8h] BYREF

  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  v11 = 0LL;
  v1 = 0;
  v2 = CurrentProcessId;
  v4 = *(_QWORD *)(W32GetSessionState(v3) + 88);
  v5 = *(GdiHandleManager **)(v4 + 5672);
  if ( v5 )
  {
    for ( i = 0; ; i = NextEntryIndex )
    {
      NextEntryIndex = GdiHandleManager::GetNextEntryIndex(v5, i, &v11);
      if ( !NextEntryIndex )
        break;
      if ( (unsigned __int8)(*((_BYTE *)v11 + 14) - 1) <= 0x1Du )
      {
        *((_DWORD *)v11 + 2) = v2 & 0xFFFFFFFC;
        ++v1;
      }
      v5 = *(GdiHandleManager **)(v4 + 5672);
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process )
      {
        v10 = *(_DWORD *)(CurrentProcessWin32Process + 64);
        *(_DWORD *)(CurrentProcessWin32Process + 60) = v1;
        if ( v1 <= v10 )
          v1 = v10;
        *(_DWORD *)(CurrentProcessWin32Process + 64) = v1;
      }
    }
  }
}
