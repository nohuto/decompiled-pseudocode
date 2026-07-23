/*
 * XREFs of PsGetSupportedProcessorArchitectures @ 0x14091D820
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PsWow64IsMachineSupported @ 0x14091D930 (PsWow64IsMachineSupported.c)
 *     PsWow64GetProcessMachine @ 0x14091D9C0 (PsWow64GetProcessMachine.c)
 */

__int64 __fastcall PsGetSupportedProcessorArchitectures(
        _DWORD *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4,
        __int64 a5)
{
  int IsMachineSupported; // r15d
  unsigned int v9; // r14d
  __int16 ProcessMachine; // bx
  unsigned int v11; // ecx
  int v12; // ecx
  unsigned int v13; // eax
  int v14; // eax

  IsMachineSupported = PsWow64IsMachineSupported(332LL);
  v9 = IsMachineSupported != 0 ? 12 : 8;
  *a4 = v9;
  if ( v9 > a3 )
    return 3221225507LL;
  ProcessMachine = 0;
  if ( a5 )
    ProcessMachine = PsWow64GetProcessMachine(a5);
  memset_0(a1, 0, v9);
  v11 = *a1 & 0xFFFF0000 | 0x8664;
  *a1 = v11;
  v11 |= 0x10000u;
  *a1 = v11;
  v11 |= 0x20000u;
  *a1 = v11;
  v12 = v11 | 0x40000;
  *a1 = v12;
  if ( ProcessMachine == -31132 )
    *a1 = v12 | 0x80000;
  if ( IsMachineSupported )
  {
    v13 = a1[1] & 0xFFFF0000 | 0x14C;
    a1[1] = v13;
    v13 |= 0x20000u;
    a1[1] = v13;
    v14 = v13 | 0x100000;
    a1[1] = v14;
    if ( ProcessMachine == 332 )
      a1[1] = v14 | 0x80000;
  }
  return 0LL;
}
