/*
 * XREFs of RtlpGetPersistedRegistryLocation @ 0x1405EF3DC
 * Callers:
 *     RtlpEtcGetDwordFromPersistedState @ 0x1405EF1AC (RtlpEtcGetDwordFromPersistedState.c)
 * Callees:
 *     RtlGetPersistedStateLocation @ 0x1409CC0E0 (RtlGetPersistedStateLocation.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpGetPersistedRegistryLocation(PCWSTR SourceString, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  int PersistedStateLocation; // eax
  int v8; // ebx
  int v9; // ebx
  void *Pool2; // rdi
  _DWORD v12[4]; // [rsp+40h] [rbp-28h] BYREF

  v12[0] = 0;
  PersistedStateLocation = RtlGetPersistedStateLocation(SourceString, 0LL, 0, (__int64)v12);
  v8 = PersistedStateLocation;
  if ( PersistedStateLocation == -2147483643 )
  {
    v9 = v12[0];
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      v8 = RtlGetPersistedStateLocation(SourceString, Pool2, v9, (__int64)v12);
      if ( v8 < 0 )
      {
        ExFreePoolWithTag(Pool2, 0);
      }
      else
      {
        *a3 = Pool2;
        if ( a4 )
          *a4 = (v12[0] >> 1) - 1;
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else if ( PersistedStateLocation >= 0 )
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v8;
}
