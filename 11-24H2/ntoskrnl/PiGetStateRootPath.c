/*
 * XREFs of PiGetStateRootPath @ 0x1409CB310
 * Callers:
 *     IoGetDeviceDirectory @ 0x14071EEF0 (IoGetDeviceDirectory.c)
 *     PiGetDriverMutableStateDirectory @ 0x14071FBB8 (PiGetDriverMutableStateDirectory.c)
 *     PiOpenDriverRedirectedStateRootKey @ 0x14071FEDC (PiOpenDriverRedirectedStateRootKey.c)
 *     PiOpenDriverRedirectedStateKey @ 0x140A84618 (PiOpenDriverRedirectedStateKey.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140C22798 (PiCreateDriverDataDirectoryRoot.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045AA10 (RtlInitUnicodeStringEx.c)
 *     RtlGetPersistedStateLocation @ 0x1409CC0E0 (RtlGetPersistedStateLocation.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiGetStateRootPath(PCWSTR SourceString, __int64 a2, __int64 a3, UNICODE_STRING *a4)
{
  int PersistedStateLocation; // eax
  NTSTATUS inited; // ebx
  int v9; // ebx
  void *Pool2; // rdi
  int v11; // eax
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  if ( !a4 )
    return (unsigned int)-1073741811;
  LODWORD(v12) = 0;
  PersistedStateLocation = RtlGetPersistedStateLocation(SourceString, 0LL, 0, (__int64)&v12);
  inited = PersistedStateLocation;
  if ( PersistedStateLocation >= 0 )
    return (unsigned int)-1073741823;
  if ( PersistedStateLocation == -2147483643 )
  {
    v9 = v12;
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    v11 = RtlGetPersistedStateLocation(SourceString, Pool2, v9, (__int64)&v12);
    inited = v11;
    if ( v11 == -1073741772 )
    {
      inited = -1073741595;
    }
    else if ( v11 >= 0 )
    {
      inited = RtlInitUnicodeStringEx(a4, (PCWSTR)Pool2);
      if ( inited >= 0 )
        return (unsigned int)inited;
    }
    ExFreePoolWithTag(Pool2, 0);
  }
  return (unsigned int)inited;
}
