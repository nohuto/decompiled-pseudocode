/*
 * XREFs of ACPIEcLogError @ 0x140056040
 * Callers:
 *     ACPIEcServiceIoLoop @ 0x140018860 (ACPIEcServiceIoLoop.c)
 *     ACPIEcWatchdogDpc @ 0x14004EA00 (ACPIEcWatchdogDpc.c)
 * Callees:
 *     memset @ 0x140070F40 (memset.c)
 */

void __fastcall ACPIEcLogError(__int64 a1, int a2)
{
  _WORD *ErrorLogEntry; // rax
  _WORD *v5; // rbx
  char *v6; // r8
  unsigned int v7; // edx
  unsigned __int8 v8; // r9
  __int64 v9; // rax

  ErrorLogEntry = IoAllocateErrorLogEntry(AcpiDriverObject, 0xF0u);
  v5 = ErrorLogEntry;
  if ( ErrorLogEntry )
  {
    memset(ErrorLogEntry, 0, 0xF0uLL);
    v5[1] = 192;
    v6 = (char *)(v5 + 22);
    *((_DWORD *)v5 + 3) = a2;
    v7 = 76;
    *((_DWORD *)v5 + 10) = *(_DWORD *)(a1 + 512);
    v8 = *(_BYTE *)(a1 + 505);
    do
    {
      v9 = v8 + 27LL;
      v8 = (v8 - 1) & 0x1F;
      *(_OWORD *)v6 = *(_OWORD *)(a1 + 24 * v9);
      *((_QWORD *)v6 + 2) = *(_QWORD *)(a1 + 24 * v9 + 16);
      if ( v8 == *(_BYTE *)(a1 + 505) )
        break;
      v6 += 24;
      v7 += 24;
    }
    while ( v7 <= 0xF0 );
    IoWriteErrorLogEntry(v5);
  }
}
