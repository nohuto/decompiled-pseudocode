/*
 * XREFs of ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x18012DE58
 * Callers:
 *     ?WaitForSyncFlush@CInternalMilCmdConnection@@QEAAJI@Z @ 0x18012DD3C (-WaitForSyncFlush@CInternalMilCmdConnection@@QEAAJI@Z.c)
 *     ?AssignChannelEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x180218030 (-AssignChannelEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     ?DestroyHandle@CChannelTable@@QEAAXI@Z @ 0x18025D43C (-DestroyHandle@CChannelTable@@QEAAXI@Z.c)
 *     ??1CChannel@@AEAA@XZ @ 0x180261394 (--1CChannel@@AEAA@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180180980 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 */

__int64 __fastcall CChannelTable::GetMasterTableEntry(
        CChannelTable *this,
        unsigned int a2,
        struct CLIENT_CHANNEL_HANDLE_ENTRY **a3)
{
  _QWORD *v3; // r8
  int v4; // r9d
  __int64 v5; // r10
  unsigned int v6; // ebx

  if ( (unsigned int)HANDLE_TABLE::ValidEntry(this, a2) )
  {
    *v3 = *(_QWORD *)(v5 + 24) + (unsigned int)(*(_DWORD *)(v5 + 8) * v4);
    return 0;
  }
  else
  {
    v6 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024890, 0x24u, 0LL);
  }
  return v6;
}
