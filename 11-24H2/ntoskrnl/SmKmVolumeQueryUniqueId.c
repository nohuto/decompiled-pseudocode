/*
 * XREFs of SmKmVolumeQueryUniqueId @ 0x14079B92C
 * Callers:
 *     SmKmEtwAppendProductName @ 0x14060BE04 (SmKmEtwAppendProductName.c)
 *     SmcCacheStart @ 0x14079D588 (SmcCacheStart.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x1404523B0 (IoSetThreadHardErrorMode.c)
 *     SmSanitizeString @ 0x14060B1B4 (SmSanitizeString.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     SmKmSendDeviceControl @ 0x14079A6C8 (SmKmSendDeviceControl.c)
 */

__int64 __fastcall SmKmVolumeQueryUniqueId(struct _DEVICE_OBJECT *a1, unsigned __int16 *a2, ULONG a3)
{
  BOOLEAN v6; // bp
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  NTSTATUS v10; // ebx
  unsigned int v11; // ebx

  v6 = IoSetThreadHardErrorMode(0);
  v10 = SmKmSendDeviceControl(v7, a1, v8, v9, a2, a3);
  if ( v10 >= 0 )
  {
    v11 = *a2;
    if ( v11 >= 2 )
    {
      memmove(a2, a2 + 1, *a2);
      SmSanitizeString(a2, (v11 & 0xFFFFFFFE) + 2);
      v10 = 0;
    }
    else
    {
      v10 = -1073740730;
    }
  }
  IoSetThreadHardErrorMode(v6);
  return (unsigned int)v10;
}
