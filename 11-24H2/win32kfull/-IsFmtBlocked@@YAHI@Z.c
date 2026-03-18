/*
 * XREFs of ?IsFmtBlocked@@YAHI@Z @ 0x140103EFC
 * Callers:
 *     ?CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z @ 0x1401056F4 (-CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z.c)
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x140106020 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x14017CF18 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     _GetPriorityClipboardFormat @ 0x1401FD150 (_GetPriorityClipboardFormat.c)
 *     NtUserGetUpdatedClipboardFormats @ 0x140203EF0 (NtUserGetUpdatedClipboardFormats.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsFmtBlocked(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 i; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx

  v2 = a1;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(W32GetUserSessionState(a1, a2) + 21920); i = (unsigned int)(i + 1) )
  {
    a2 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 21912);
    if ( v2 == *(_DWORD *)(a2 + 4 * i) )
      return 0LL;
  }
  return 1LL;
}
