/*
 * XREFs of ?AssignChannelEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x1801B17D4
 * Callers:
 *     ?CreateChannel@CInternalMilCmdConnection@@QEAAJPEAUIDwmChannelProvider@@PEAPEAVCChannel@@@Z @ 0x1801B1B90 (-CreateChannel@CInternalMilCmdConnection@@QEAAJPEAUIDwmChannelProvider@@PEAPEAVCChannel@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x180181738 (-GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     ?AssignEntry@HANDLE_TABLE@@QEAAJIK@Z @ 0x1801AFB40 (-AssignEntry@HANDLE_TABLE@@QEAAJIK@Z.c)
 */

__int64 __fastcall CChannelTable::AssignChannelEntry(
        CChannelTable *this,
        unsigned int a2,
        struct CLIENT_CHANNEL_HANDLE_ENTRY **a3)
{
  int MasterTableEntry; // eax
  unsigned int v7; // ebx
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v8; // rsi
  HANDLE EventW; // rax
  signed int LastError; // eax
  unsigned int v12; // [rsp+20h] [rbp-18h]
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v13; // [rsp+58h] [rbp+20h] BYREF

  v13 = 0LL;
  MasterTableEntry = HANDLE_TABLE::AssignEntry(this, a2, 1);
  v7 = MasterTableEntry;
  if ( MasterTableEntry < 0 )
  {
    v12 = 69;
LABEL_7:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, MasterTableEntry, v12, 0LL);
    return v7;
  }
  MasterTableEntry = CChannelTable::GetMasterTableEntry(this, a2, &v13);
  v7 = MasterTableEntry;
  if ( MasterTableEntry < 0 )
  {
    v12 = 71;
    goto LABEL_7;
  }
  v8 = v13;
  *((_QWORD *)v13 + 1) = 0LL;
  SetLastError(0);
  EventW = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)v8 + 2) = EventW;
  if ( EventW )
  {
    ++*((_DWORD *)this + 8);
    *a3 = v8;
  }
  else
  {
    LastError = GetLastError();
    v7 = LastError;
    if ( LastError > 0 )
      v7 = (unsigned __int16)LastError | 0x80070000;
    if ( (v7 & 0x80000000) == 0 )
      v7 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x4Au, 0LL);
  }
  return v7;
}
