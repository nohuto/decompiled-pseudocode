/*
 * XREFs of ?xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z @ 0x1C013A874
 * Callers:
 *     ?xxxReportHotKey@@YAXPEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0010910 (-xxxReportHotKey@@YAXPEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?xxxReportWindowHotKey@@YAXPEBUtagHOTKEY@@PEAUtagWND@@W4ReportHotKeyHint@@@Z @ 0x1C013AA08 (-xxxReportWindowHotKey@@YAXPEBUtagHOTKEY@@PEAUtagWND@@W4ReportHotKeyHint@@@Z.c)
 * Callees:
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C002E5BC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?ShellHotKey@NotifyShell@@YA_NPEBUtagWND@@_J_KW4SHELLHOTKEYADDITIONACTIONRESULT@@@Z @ 0x1C009CB54 (-ShellHotKey@NotifyShell@@YA_NPEBUtagWND@@_J_KW4SHELLHOTKEYADDITIONACTIONRESULT@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00AC0AC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00B02D0 (HMValidateHandleNoSecure.c)
 *     Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsage @ 0x1C0139810 (Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsage.c)
 */

void __fastcall xxxReportHotKeyToShell(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  unsigned int v5; // edi
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int16 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct tagTHREADINFO *v17; // rdx
  __int128 v18; // [rsp+20h] [rbp-48h] BYREF
  __int64 v19; // [rsp+30h] [rbp-38h]
  __int128 v20; // [rsp+38h] [rbp-30h] BYREF
  __int64 v21; // [rsp+48h] [rbp-20h]

  v5 = 0;
  if ( a4 )
  {
    v9 = HMValidateHandleNoSecure(a4, 1);
    if ( v9 )
    {
      v19 = 0LL;
      v21 = 0LL;
      v18 = 0LL;
      v20 = 0LL;
      ThreadLock(a1, &v18);
      ThreadLock(v9, &v20);
      if ( (unsigned int)Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsage() )
      {
        v13 = 1026;
        if ( (a5 & 2) != 0 && gpqForeground && (*(_BYTE *)(gpqForeground + 396LL) & 1) == 0 )
          v13 = 1538;
        if ( xxxSetForegroundWindowWithOptions(v9, 0x1Fu, v13, 0) )
          v5 = 1;
      }
      else
      {
        v5 = xxxSetForegroundWindow2(v9, 0LL, 2u) != 0;
      }
      ThreadUnlock1(v11, v10, v12);
      a1 = (__int64 *)ThreadUnlock1(v15, v14, v16);
    }
  }
  if ( NotifyShell::ShellHotKey(a1, a2, a3, v5) )
  {
    if ( a1 )
      v17 = (struct tagTHREADINFO *)a1[2];
    else
      v17 = *(struct tagTHREADINFO **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 328LL) + 16LL);
    CInputGlobals::SetPtiLastWoken(gpInputGlobals, v17, a5 & 1);
  }
}
