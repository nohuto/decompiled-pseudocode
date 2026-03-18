/*
 * XREFs of ??0CDwmAppHost@@QEAA@XZ @ 0x1400041AC
 * Callers:
 *     _dynamic_initializer_for__g_dwmAppHost__ @ 0x140001F40 (_dynamic_initializer_for__g_dwmAppHost__.c)
 * Callees:
 *     <none>
 */

CDwmAppHost *__fastcall CDwmAppHost::CDwmAppHost(CDwmAppHost *this)
{
  HANDLE CurrentProcess; // rax
  _OWORD ProcessInformation[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v4; // [rsp+50h] [rbp-18h]

  dword_14001D598 = 1;
  qword_14001D5B0 = 0LL;
  *(_OWORD *)&hInstance = 0LL;
  g_dwmAppHost = (__int64)&CDwmAppHost::`vftable';
  qword_14001D5C8[0] = (__int64)&CSettingsManager::`vftable';
  dword_14001D5B8 = 0;
  hWnd = 0LL;
  byte_14001D5E8 = 1;
  SRWLock.Ptr = 0LL;
  dword_14001D600 = 0;
  *(_QWORD *)&uExitCode = 0LL;
  byte_14001D618 = 0;
  qword_14001D620 = 0LL;
  byte_14001D628 = 0;
  dword_14001D62C = 3000;
  qword_14001D630 = 0LL;
  byte_14001D638 = 0;
  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  v4 = 0LL;
  CurrentProcess = GetCurrentProcess();
  if ( NtQueryInformationProcess(CurrentProcess, ProcessBasicInformation, ProcessInformation, 0x30u, 0LL) >= 0 )
    LODWORD(qword_14001D5B0) = DWORD2(v4);
  return (CDwmAppHost *)&g_dwmAppHost;
}
