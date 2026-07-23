/*
 * XREFs of MiHonorExistingHotMemoryFlights @ 0x1407E9B54
 * Callers:
 *     MiAllocateInitialMemoryBlocks @ 0x1407E9474 (MiAllocateInitialMemoryBlocks.c)
 * Callees:
 *     MiExtendMemoryBlocks @ 0x1407E9A94 (MiExtendMemoryBlocks.c)
 *     MiUnlinkHotAddFlight @ 0x1407EA69C (MiUnlinkHotAddFlight.c)
 */

__int64 __fastcall MiHonorExistingHotMemoryFlights(__int64 a1)
{
  __int64 *v1; // rax
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  unsigned int v6; // ecx
  __int64 *v7; // rax
  __int64 *v8; // rdi
  unsigned int v9; // r8d

  v1 = (__int64 *)qword_140E2ED40;
  if ( !qword_140E2ED40 )
  {
    v1 = &qword_140E2ED40;
    qword_140E2ED48 = (__int64)&qword_140E2ED40;
    qword_140E2ED40 = (__int64)&qword_140E2ED40;
  }
  while ( v1 != &qword_140E2ED40 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    v4 = v1[2];
    if ( v3 >= v4 )
    {
      if ( v3 < v1[3] )
        return 3221225496LL;
    }
    else if ( *(_QWORD *)(a1 + 24) > v4 )
    {
      return 3221225496LL;
    }
    v1 = (__int64 *)*v1;
  }
  if ( dword_140E2ED50 != -1 )
  {
    v6 = *(_DWORD *)(a1 + 152);
    if ( v6 + dword_140E2ED54 >= v6 )
    {
      v7 = (__int64 *)qword_140E2ED48;
      ++dword_140E2ED50;
      dword_140E2ED54 += v6;
      if ( (__int64 *)qword_140E2ED40 == &qword_140E2ED40 )
      {
        if ( *(__int64 **)qword_140E2ED48 == &qword_140E2ED40 )
        {
          *(_QWORD *)a1 = &qword_140E2ED40;
          *(_QWORD *)(a1 + 8) = v7;
          *v7 = a1;
          qword_140E2ED48 = a1;
          return 0LL;
        }
      }
      else if ( *(__int64 **)qword_140E2ED48 == &qword_140E2ED40 )
      {
        *(_QWORD *)a1 = &qword_140E2ED40;
        *(_QWORD *)(a1 + 8) = v7;
        *v7 = a1;
        v8 = (__int64 *)qword_140E2ED40;
        qword_140E2ED48 = a1;
        while ( v8 != &qword_140E2ED40 )
        {
          if ( (int)MiExtendMemoryBlocks((__int64)v8) < 0 )
          {
            MiUnlinkHotAddFlight(a1);
            return v9;
          }
          v8 = (__int64 *)*v8;
        }
        return 0LL;
      }
      __fastfail(3u);
    }
  }
  return 3221225626LL;
}
