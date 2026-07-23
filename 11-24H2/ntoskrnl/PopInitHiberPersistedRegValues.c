/*
 * XREFs of PopInitHiberPersistedRegValues @ 0x140750B4C
 * Callers:
 *     PopInitializeHibernateGlobals @ 0x140750C3C (PopInitializeHibernateGlobals.c)
 * Callees:
 *     PopQueryHiberPersistedRegValue @ 0x140750FD0 (PopQueryHiberPersistedRegValue.c)
 *     RtlGetPersistedStateLocation @ 0x1409B4B60 (RtlGetPersistedStateLocation.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 PopInitHiberPersistedRegValues()
{
  unsigned int v0; // ebx
  NTSTATUS PersistedStateLocation; // edi
  ULONG BufferLengthIn; // edi
  WCHAR *TargetPath; // rsi
  int **v4; // rsi
  ULONG BufferLengthOut; // [rsp+50h] [rbp+8h] BYREF

  v0 = 0;
  BufferLengthOut = 0;
  if ( RtlGetPersistedStateLocation(
         L"Power",
         0LL,
         L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\CONTROL\\POWER",
         LocationTypeRegistry,
         0LL,
         0,
         &BufferLengthOut) == -2147483643 )
  {
    BufferLengthIn = BufferLengthOut;
    TargetPath = (WCHAR *)ExAllocatePool2(0x100uLL, BufferLengthOut, 0x72626968u);
    if ( TargetPath )
    {
      PersistedStateLocation = RtlGetPersistedStateLocation(
                                 L"Power",
                                 0LL,
                                 L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\CONTROL\\POWER",
                                 LocationTypeRegistry,
                                 TargetPath,
                                 BufferLengthIn,
                                 &BufferLengthOut);
      if ( PersistedStateLocation < 0 )
      {
        ExFreePoolWithTag(TargetPath, 0x72626968u);
      }
      else
      {
        PopHibernatePersistedRegLocation = TargetPath;
        v4 = &off_140E07508;
        do
        {
          PopQueryHiberPersistedRegValue(v0++, *v4);
          v4 += 3;
        }
        while ( v0 < 4 );
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)PersistedStateLocation;
}
