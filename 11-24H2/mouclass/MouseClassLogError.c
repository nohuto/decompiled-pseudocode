/*
 * XREFs of MouseClassLogError @ 0x1C00056A0
 * Callers:
 *     MouseClassCreate @ 0x1C00037F0 (MouseClassCreate.c)
 *     MouseClassClose @ 0x1C00042B0 (MouseClassClose.c)
 *     MouseClassWWPowerUpComplete @ 0x1C0004E70 (MouseClassWWPowerUpComplete.c)
 *     MouseClassPoRequestComplete @ 0x1C0004FD0 (MouseClassPoRequestComplete.c)
 *     MouseClassFindMorePorts @ 0x1C000E190 (MouseClassFindMorePorts.c)
 *     MouCreateClassObject @ 0x1C000F950 (MouCreateClassObject.c)
 *     MouseAddDeviceEx @ 0x1C000FF40 (MouseAddDeviceEx.c)
 *     DriverEntry @ 0x1C0011080 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void __fastcall MouseClassLogError(void *a1, int a2, int a3, int a4, unsigned int a5, _DWORD *a6, char a7)
{
  _DWORD *ErrorLogEntry; // rax
  _DWORD *v11; // rdx
  __int64 v12; // r8

  ErrorLogEntry = IoAllocateErrorLogEntry(a1, 4 * ((unsigned __int8)a5 + 12));
  if ( ErrorLogEntry )
  {
    ErrorLogEntry[3] = a2;
    *((_QWORD *)ErrorLogEntry + 3) = 0LL;
    *((_WORD *)ErrorLogEntry + 1) = 4 * a5;
    *(_BYTE *)ErrorLogEntry = a7;
    *((_BYTE *)ErrorLogEntry + 1) = 0;
    ErrorLogEntry[4] = a3;
    ErrorLogEntry[5] = a4;
    if ( a5 )
    {
      v11 = a6;
      v12 = a5;
      do
      {
        *(_DWORD *)((char *)v11 + (char *)ErrorLogEntry - (char *)a6 + 40) = *v11;
        ++v11;
        --v12;
      }
      while ( v12 );
    }
    IoWriteErrorLogEntry(ErrorLogEntry);
  }
}
