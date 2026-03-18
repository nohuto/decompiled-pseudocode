/*
 * XREFs of KGetAppModelStateSeparatedRegKeyPath @ 0x1409B1E98
 * Callers:
 *     KIsSideloadingEnabled @ 0x1407BA5F8 (KIsSideloadingEnabled.c)
 *     KIsUnlockSettingEnabled @ 0x140A564D4 (KIsUnlockSettingEnabled.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045CBF0 (RtlInitUnicodeStringEx.c)
 *     RtlGetPersistedStateLocation @ 0x1409B3D60 (RtlGetPersistedStateLocation.c)
 *     ExAllocatePoolWithTag @ 0x140B62010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KGetAppModelStateSeparatedRegKeyPath(PCWSTR SourceString, __int64 a2, UNICODE_STRING *a3)
{
  int PersistedStateLocation; // eax
  NTSTATUS inited; // ebx
  int v7; // ebx
  PVOID PoolWithTag; // rdi
  SIZE_T NumberOfBytes; // [rsp+70h] [rbp+18h] BYREF

  LODWORD(NumberOfBytes) = 0;
  if ( a3 )
  {
    PersistedStateLocation = RtlGetPersistedStateLocation(SourceString, 0LL, 0, (__int64)&NumberOfBytes);
    inited = PersistedStateLocation;
    if ( PersistedStateLocation >= 0 )
    {
      return (unsigned int)-1073741823;
    }
    else if ( PersistedStateLocation == -2147483643 )
    {
      v7 = NumberOfBytes;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x4D707041u);
      if ( PoolWithTag )
      {
        inited = RtlGetPersistedStateLocation(SourceString, PoolWithTag, v7, (__int64)&NumberOfBytes);
        if ( inited < 0 || (inited = RtlInitUnicodeStringEx(a3, (PCWSTR)PoolWithTag), inited < 0) )
          ExFreePoolWithTag(PoolWithTag, 0x4D707041u);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)inited;
}
