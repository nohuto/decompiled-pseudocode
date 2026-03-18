/*
 * XREFs of _RegisterRawInputDevices @ 0x1C0037EE8
 * Callers:
 *     NtUserRegisterRawInputDevices @ 0x1C003A240 (NtUserRegisterRawInputDevices.c)
 *     RegisterModernAppThreadForRawKeyboard @ 0x1C01A980C (RegisterModernAppThreadForRawKeyboard.c)
 *     UnregisterModernAppThreadForRawKeyboard @ 0x1C01A98B8 (UnregisterModernAppThreadForRawKeyboard.c)
 * Callees:
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0037984 (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     FreeHidProcessRequest @ 0x1C0037CD8 (FreeHidProcessRequest.c)
 *     ?HidRequestValidityCheck@@YAHQEAUtagRAWINPUTDEVICE@@PEBUtagPROCESS_HID_TABLE@@W4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x1C0038078 (-HidRequestValidityCheck@@YAHQEAUtagRAWINPUTDEVICE@@PEBUtagPROCESS_HID_TABLE@@W4_REGISTER_RAW_IN.c)
 *     ?SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z @ 0x1C0038218 (-SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z.c)
 *     ?SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KW4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x1C00382A4 (-SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@.c)
 *     ?IsLegacyDevice@@YAHGG@Z @ 0x1C0038444 (-IsLegacyDevice@@YAHGG@Z.c)
 *     ?CleanupFreedTLCInfo@@YAXXZ @ 0x1C0038978 (-CleanupFreedTLCInfo@@YAXXZ.c)
 *     AllocateProcessHidTable @ 0x1C003A5B4 (AllocateProcessHidTable.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall RegisterRawInputDevices(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rax
  unsigned int v13; // edi
  __int128 *v14; // rsi
  __int64 v15; // rdx
  __int64 ProcessHidTable; // rax
  unsigned int v17; // esi
  _DWORD *v18; // rdi
  unsigned __int16 v19; // r8
  unsigned __int16 v20; // dx
  struct tagPROCESS_HID_REQUEST *v21; // rax
  unsigned int v22; // edi
  __int64 v23; // rbx
  __int64 v24; // r10
  __int64 i; // r9
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 *v29; // r9
  __int16 v30; // r11
  __int64 *j; // rax
  __int128 v32; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v33; // [rsp+78h] [rbp+10h] BYREF

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v11 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v10 = -*(_QWORD *)CurrentProcessWin32Process;
    v11 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  }
  v12 = *(_QWORD *)(v11 + 856);
  if ( v12 )
  {
    *(_QWORD *)(v12 + 88) = 0LL;
    *(_DWORD *)(v12 + 96) = 0;
  }
  v13 = 0;
  if ( a2 )
  {
    v14 = (__int128 *)a1;
    do
    {
      v15 = *(_QWORD *)(v11 + 856);
      v32 = *v14;
      if ( !(unsigned int)HidRequestValidityCheck(&v32, v15, a3, v10) )
        goto LABEL_22;
      ++v13;
      ++v14;
    }
    while ( v13 < a2 );
  }
  if ( !*(_QWORD *)(v11 + 856) )
  {
    ProcessHidTable = AllocateProcessHidTable(v8, v7, v9, v10);
    *(_QWORD *)(v11 + 856) = ProcessHidTable;
    if ( !ProcessHidTable )
    {
      UserSetLastError(8LL);
LABEL_22:
      v22 = 0;
      goto LABEL_17;
    }
  }
  v17 = 0;
  if ( a2 )
  {
    v18 = (_DWORD *)(a1 + 4);
    do
    {
      v19 = *((_WORD *)v18 - 1);
      v20 = *((_WORD *)v18 - 2);
      v33 = 0;
      v21 = SearchProcessHidRequest((struct tagPROCESSINFO *)v11, v20, v19, &v33);
      if ( (*v18 & 1) != 0 )
      {
        if ( v21 )
          FreeHidProcessRequest(v21, v33, *(struct tagPROCESS_HID_TABLE **)(v11 + 856));
      }
      else if ( !(unsigned int)SetProcDeviceRequest(v11, a1 + 16LL * v17, v21, v33, a3) )
      {
        goto LABEL_22;
      }
      ++v17;
      v18 += 4;
    }
    while ( v17 < a2 );
  }
  v22 = 1;
LABEL_17:
  if ( *(_QWORD *)(v11 + 856) )
  {
    AdjustLegacyDeviceFlags((struct tagPROCESSINFO *)v11);
    v23 = *(_QWORD *)(v11 + 856);
    v24 = v23 + 48;
    for ( i = *(_QWORD *)(v23 + 48); i != v24; i = *v29 )
    {
      if ( !(unsigned int)IsLegacyDevice(*(_WORD *)(i + 16), *(_WORD *)(i + 18)) )
      {
        for ( j = *(__int64 **)(v23 + 32); j != (__int64 *)(v23 + 32); j = (__int64 *)*j )
        {
          if ( *((_WORD *)j + 8) == v30 )
            goto LABEL_32;
        }
        j = 0LL;
LABEL_32:
        if ( j )
        {
          if ( __CFSHR__(*((_DWORD *)v29 + 5), 4) )
          {
            --*(_DWORD *)(v29[3] + 40);
            *((_DWORD *)v29 + 5) &= ~8u;
          }
        }
        else if ( !__CFSHR__(*((_DWORD *)v29 + 5), 4) )
        {
          ++*(_DWORD *)(v29[3] + 40);
          *((_DWORD *)v29 + 5) |= 8u;
        }
      }
    }
    CleanupFreedTLCInfo();
    v27 = SGDGetUserSessionState(v26);
    CHidInput::HandleDirectStartStopDeviceReadRequest(*(CHidInput **)(v27 + 16840));
  }
  return v22;
}
