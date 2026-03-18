/*
 * XREFs of ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x140281704
 * Callers:
 *     xxxNotifyMonitorChanged @ 0x14008CEB0 (xxxNotifyMonitorChanged.c)
 * Callees:
 *     BuildHwndList @ 0x140047FC0 (BuildHwndList.c)
 *     FreeHwndList @ 0x140048500 (FreeHwndList.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     ?xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z @ 0x140281684 (-xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z.c)
 */

__int64 __fastcall xxxSendGDIScaledDpiChangedMsgs(struct tagWND *a1, struct tagBWL *a2)
{
  int v2; // eax
  unsigned int v3; // esi
  int v4; // ebp
  struct tagBWL *v5; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 *i; // rdi

  v2 = *((_DWORD *)a1 + 95);
  v3 = 0;
  v4 = 0;
  v5 = a2;
  if ( (v2 & 0x40000) == 0 )
    return 0LL;
  *((_DWORD *)a1 + 95) = v2 & 0xFFFBFFFF;
  if ( PtiCurrent((__int64)a1, (__int64)a2) )
  {
    if ( *((_QWORD *)PtiCurrent(v9, v8) + 62) )
    {
      if ( (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent(v11, v10) + 62) + 8LL) + 64LL) & 1) != 0
        && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0x4000000F) == 0x40000000
        && IsTopLevelWindow((__int64)a1) )
      {
        if ( v5 || (v5 = BuildHwndList(a1, 1LL, 0LL, 1), v4 = 1, v5) )
        {
          v3 = xxxSendGDIScaledDpiChangedMessage(*(_QWORD *)a1, v12);
          for ( i = (__int64 *)((char *)v5 + 40); (unsigned __int64)i < *((_QWORD *)v5 + 1); ++i )
            v3 |= xxxSendGDIScaledDpiChangedMessage(*i, v13);
          if ( v4 )
            FreeHwndList(v5, v13);
        }
      }
    }
  }
  return v3;
}
