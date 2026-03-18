/*
 * XREFs of Command_D0EntryPostInterruptsEnabled @ 0x140031554
 * Callers:
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x140037740 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001A724 (WPP_RECORDER_SF_.c)
 *     Command_SendInternalCommandSynchronously @ 0x14003D644 (Command_SendInternalCommandSynchronously.c)
 *     Etw_ControllerFirmareVersionUpdate @ 0x14004E8B8 (Etw_ControllerFirmareVersionUpdate.c)
 *     memset @ 0x140058EC0 (memset.c)
 */

__int64 __fastcall Command_D0EntryPostInterruptsEnabled(__int64 a1, int a2)
{
  __int64 v2; // rsi
  char *v3; // rbx
  __int64 v5; // rbp
  __int64 Pool2; // rax
  int v8; // edx
  int v9; // r9d
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int16 v12; // ax
  __int16 v13; // cx
  unsigned int *v14; // rsi
  bool v15; // zf
  void *v16; // rcx
  __int64 (__fastcall *v17)(); // rcx
  unsigned int v18; // eax

  v2 = *(_QWORD *)(a1 + 8);
  v3 = 0LL;
  v5 = *(_QWORD *)(v2 + 88);
  if ( a2 != 5 )
    return 0LL;
  if ( (*(_DWORD *)(v5 + 108) & 0x100) != 0 )
  {
    Pool2 = ExAllocatePool2(64LL, 128LL, 1229146200LL);
    v3 = (char *)Pool2;
    if ( !Pool2 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v9 = 27;
      LOBYTE(v8) = 2;
LABEL_7:
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 16), v8, 7, v9, (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids);
      return 0LL;
    }
    *(_QWORD *)Pool2 = a1;
    KeInitializeEvent((PRKEVENT)(Pool2 + 104), SynchronizationEvent, 0);
    *((_QWORD *)v3 + 10) = 0LL;
    *((_DWORD *)v3 + 22) = 0;
    *((_DWORD *)v3 + 23) = 0;
    *((_QWORD *)v3 + 12) = 0LL;
    *((_QWORD *)v3 + 6) = Command_GetSupportedExtendedCapabilityCommandCompletion;
    v10 = *((_DWORD *)v3 + 11) & 0xFFFF63FF;
    *((_QWORD *)v3 + 7) = v3;
    *((_DWORD *)v3 + 11) = v10 | 0x6000;
    Command_SendInternalCommandSynchronously(a1, v3);
    if ( (*(_BYTE *)(v5 + 112) & 1) != 0 )
      *(_DWORD *)(v2 + 1036) = 2;
  }
  v11 = *(_QWORD *)(a1 + 8);
  v12 = *(_WORD *)(v11 + 648);
  if ( v12 != 4147 && v12 != 6418 && v12 != 6945 && _stricmp((const char *)(v11 + 704), "NVDA") )
    goto LABEL_28;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 728LL) = -1LL;
  if ( !v3 )
  {
    v3 = (char *)ExAllocatePool2(64LL, 128LL, 1229146200LL);
    if ( !v3 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v9 = 28;
      LOBYTE(v8) = 3;
      goto LABEL_7;
    }
  }
  v13 = *(_WORD *)(*(_QWORD *)(a1 + 8) + 648LL);
  if ( v13 == 4147 || v13 == 6418 )
  {
    memset(v3 + 8, 0, 0x78uLL);
    *(_QWORD *)v3 = a1;
    KeInitializeEvent((PRKEVENT)(v3 + 104), SynchronizationEvent, 0);
    v17 = Command_RenesasGetFirmwareVersionCommandCompletion;
    v14 = (unsigned int *)(v3 + 44);
    goto LABEL_25;
  }
  v14 = (unsigned int *)(v3 + 44);
  v15 = v13 == 6945;
  v16 = v3 + 8;
  if ( !v15 )
  {
    memset(v16, 0, 0x78uLL);
    *(_QWORD *)v3 = a1;
    KeInitializeEvent((PRKEVENT)(v3 + 104), SynchronizationEvent, 0);
    v17 = Command_NvidiaGetFirmwareVersionCommandCompletion;
LABEL_25:
    v18 = *v14 & 0xFFFF03FF | 0xC400;
LABEL_26:
    *((_QWORD *)v3 + 7) = v3;
    *((_QWORD *)v3 + 6) = v17;
    *v14 = v18;
    Command_SendInternalCommandSynchronously(a1, v3);
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 728LL) != -1LL )
      Etw_ControllerFirmareVersionUpdate();
    goto LABEL_28;
  }
  memset(v16, 0, 0x78uLL);
  *(_QWORD *)v3 = a1;
  KeInitializeEvent((PRKEVENT)(v3 + 104), SynchronizationEvent, 0);
  *((_QWORD *)v3 + 7) = v3;
  *((_QWORD *)v3 + 6) = Command_ASMediaGetFirmwareVersionLowCommandCompletion;
  *v14 = *v14 & 0xFFFF03FF | 0xD000;
  Command_SendInternalCommandSynchronously(a1, v3);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 728LL) != -1LL )
  {
    memset(v3 + 8, 0, 0x78uLL);
    *(_QWORD *)v3 = a1;
    KeInitializeEvent((PRKEVENT)(v3 + 104), SynchronizationEvent, 0);
    v17 = Command_ASMediaGetFirmwareVersionHighCommandCompletion;
    v18 = *v14 & 0xFFFF03FF | 0xCC00;
    goto LABEL_26;
  }
LABEL_28:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x49434858u);
  return 0LL;
}
