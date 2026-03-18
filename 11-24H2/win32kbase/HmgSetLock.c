/*
 * XREFs of HmgSetLock @ 0x1401268B8
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1400150B4 (-vCleanupDCs@@YAXK@Z.c)
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x140015750 (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     ?GetEntryFromIndex@GdiHandleManager@@QEAAPEAU_ENTRY@@I@Z @ 0x140015F3C (-GetEntryFromIndex@GdiHandleManager@@QEAAPEAU_ENTRY@@I@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x140035F20 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 */

__int64 __fastcall HmgSetLock(__int64 a1)
{
  __int16 v1; // edi^2
  unsigned int v2; // esi
  GdiHandleManager *v3; // rbp
  struct _ENTRY *EntryFromIndex; // rax
  unsigned int v5; // ebx

  v1 = WORD1(a1);
  v2 = (unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000;
  v3 = *(GdiHandleManager **)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 5672LL);
  EntryFromIndex = GdiHandleManager::GetEntryFromIndex(v3, v2);
  v5 = (unsigned int)EntryFromIndex;
  if ( EntryFromIndex && *((_WORD *)EntryFromIndex + 6) == v1 )
    *((_WORD *)GdiHandleManager::GetEntryObject(v3, v2) + 6) = 0;
  else
    return 0;
  return v5;
}
