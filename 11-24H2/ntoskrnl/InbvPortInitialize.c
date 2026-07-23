/*
 * XREFs of InbvPortInitialize @ 0x1406A2474
 * Callers:
 *     HdlspEnableTerminal @ 0x140BAF9D4 (HdlspEnableTerminal.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x14034B090 (MmMapIoSpaceEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall InbvPortInitialize(int a1, unsigned int a2, __int64 a3, _DWORD *a4, char a5, unsigned __int8 a6)
{
  unsigned __int8 v6; // r11
  unsigned int v8; // r8d
  __int64 v11; // rbp
  __int64 *v12; // r14
  char v13; // di
  int v14; // eax

  v6 = a6;
  v8 = 1;
  if ( a2 )
    v8 = a2;
  if ( v8 > 4 )
    return 0;
  v11 = v8 - 1;
  v12 = (__int64 *)((char *)&Ports + 40 * v11);
  if ( *v12 )
    return 0;
  if ( a6 )
  {
    v13 = a5;
  }
  else
  {
    v13 = 0;
    if ( a3 )
    {
      v6 = 1;
      goto LABEL_12;
    }
    a3 = v8;
  }
  if ( !a3 || a6 >= 0x15u )
    return 0;
LABEL_12:
  UartHardwareDriver = (__int64)UartHardwareDrivers[v6];
  if ( !UartHardwareDriver )
    return 0;
  if ( v13 )
  {
    a3 = MmMapIoSpaceEx(a3, 4096LL, 516LL);
    if ( !a3 )
      return 0;
  }
  *v12 = a3;
  v14 = 19200;
  if ( a1 )
    v14 = a1;
  dword_140EEFE88[10 * v11] = v14;
  *a4 = v11;
  return guard_dispatch_icall_no_overrides(0LL, (char *)&Ports + 40 * v11);
}
