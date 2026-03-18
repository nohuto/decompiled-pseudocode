/*
 * XREFs of _RegisterRawInputDevices @ 0x14012FA44
 * Callers:
 *     NtUserRegisterRawInputDevices @ 0x14012F7B0 (NtUserRegisterRawInputDevices.c)
 *     RegisterModernAppThreadForRawKeyboard @ 0x1402725CC (RegisterModernAppThreadForRawKeyboard.c)
 *     UnregisterModernAppThreadForRawKeyboard @ 0x140272684 (UnregisterModernAppThreadForRawKeyboard.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?UnregisterRawInputDevice@RawInput@InputTraceLogging@@SAXPEBUtagRAWINPUTDEVICE@@@Z @ 0x14012DB50 (-UnregisterRawInputDevice@RawInput@InputTraceLogging@@SAXPEBUtagRAWINPUTDEVICE@@@Z.c)
 *     ?RegisterRawInputDevice@RawInput@InputTraceLogging@@SAXPEBUtagRAWINPUTDEVICE@@@Z @ 0x14012DC8C (-RegisterRawInputDevice@RawInput@InputTraceLogging@@SAXPEBUtagRAWINPUTDEVICE@@@Z.c)
 *     AllocateProcessHidTable @ 0x14012DFD4 (AllocateProcessHidTable.c)
 *     ?HidRequestValidityCheck@@YAHQEAUtagRAWINPUTDEVICE@@PEBUtagPROCESS_HID_TABLE@@W4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x14012FBEC (-HidRequestValidityCheck@@YAHQEAUtagRAWINPUTDEVICE@@PEBUtagPROCESS_HID_TABLE@@W4_REGISTER_RAW_IN.c)
 *     ?CleanupFreedTLCInfo@@YAXXZ @ 0x14012FEF0 (-CleanupFreedTLCInfo@@YAXXZ.c)
 *     ?RawInputListener@RawInput@InputTraceLogging@@SAXPEBUtagPROCESS_HID_TABLE@@@Z @ 0x140130094 (-RawInputListener@RawInput@InputTraceLogging@@SAXPEBUtagPROCESS_HID_TABLE@@@Z.c)
 *     ?HidDeviceStartStop@@YAXXZ @ 0x140130500 (-HidDeviceStartStop@@YAXXZ.c)
 *     ?FixupOrphanedExclusiveRequests@@YAXPEAUtagPROCESSINFO@@@Z @ 0x140130530 (-FixupOrphanedExclusiveRequests@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1401305C0 (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z @ 0x140130AE8 (-SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z.c)
 *     FreeHidProcessRequest @ 0x140130B64 (FreeHidProcessRequest.c)
 *     ?SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KW4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x140130C30 (-SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@.c)
 */

__int64 __fastcall RegisterRawInputDevices(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // r9
  const struct tagPROCESS_HID_TABLE **v8; // rbx
  const struct tagPROCESS_HID_TABLE *v9; // rax
  unsigned int v10; // esi
  unsigned int v11; // edi
  const struct tagPROCESS_HID_TABLE *v12; // rdx
  unsigned int i; // esi
  __int64 v14; // r14
  struct tagPROCESS_HID_REQUEST *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 ProcessHidTable; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int128 v22; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v23; // [rsp+78h] [rbp+10h] BYREF

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v8 = (const struct tagPROCESS_HID_TABLE **)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v7 = -*(_QWORD *)CurrentProcessWin32Process;
    v8 = (const struct tagPROCESS_HID_TABLE **)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
  }
  v9 = v8[104];
  if ( v9 )
  {
    *((_QWORD *)v9 + 11) = 0LL;
    *((_DWORD *)v9 + 24) = 0;
  }
  v10 = 0;
  v11 = 1;
  while ( v10 < a2 )
  {
    v12 = v8[104];
    v22 = *(_OWORD *)(a1 + 16LL * v10);
    if ( !(unsigned int)HidRequestValidityCheck(&v22, v12, a3, v7) )
      goto LABEL_14;
    ++v10;
  }
  if ( !v8[104] )
  {
    ProcessHidTable = AllocateProcessHidTable();
    v8[104] = (const struct tagPROCESS_HID_TABLE *)ProcessHidTable;
    if ( !ProcessHidTable )
    {
      UserSetLastError(8);
LABEL_14:
      v11 = 0;
      goto LABEL_15;
    }
    *(_QWORD *)(ProcessHidTable + 104) = v8;
  }
  for ( i = 0; i < a2; ++i )
  {
    v14 = a1 + 16LL * i;
    v23 = 0;
    v15 = SearchProcessHidRequest((struct tagPROCESSINFO *)v8, *(_WORD *)v14, *(_WORD *)(v14 + 2), &v23);
    if ( (*(_DWORD *)(v14 + 4) & 1) != 0 )
    {
      if ( v15 )
      {
        FreeHidProcessRequest(v15);
        InputTraceLogging::RawInput::UnregisterRawInputDevice((const struct tagRAWINPUTDEVICE *)v14, v20, v21);
      }
    }
    else
    {
      if ( !(unsigned int)SetProcDeviceRequest(v8, v14, v15, v23, a3) )
        goto LABEL_14;
      InputTraceLogging::RawInput::RegisterRawInputDevice((const struct tagRAWINPUTDEVICE *)v14, v16, v17);
    }
  }
LABEL_15:
  if ( v8[104] )
  {
    AdjustLegacyDeviceFlags((struct tagPROCESSINFO *)v8);
    FixupOrphanedExclusiveRequests((struct tagPROCESSINFO *)v8);
    CleanupFreedTLCInfo();
    HidDeviceStartStop();
    InputTraceLogging::RawInput::RawInputListener(v8[104]);
  }
  return v11;
}
