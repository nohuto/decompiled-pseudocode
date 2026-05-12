/*
 * XREFs of RaidGetNpemControlInterface @ 0x14008C704
 * Callers:
 *     RaidQueryLedState @ 0x14008D944 (RaidQueryLedState.c)
 *     RaidSetLedStateByNpem @ 0x14008E09C (RaidSetLedStateByNpem.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaidQueryNpemControlInterface @ 0x14008DA84 (RaidQueryNpemControlInterface.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaidGetNpemControlInterface(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v5; // rax
  __int64 Pool; // rbx
  __int64 v7; // rdx
  int NpemControlInterface; // ebp

  if ( !a2 )
    return 3221225485LL;
  v3 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v3 != 1094997074 )
    return 3221225485LL;
  if ( !v3 )
    return 3221225473LL;
  v5 = *(_QWORD *)(v3 + 5704);
  if ( v5 )
  {
    *a2 = v5;
    return 0LL;
  }
  else
  {
    Pool = RaidAllocatePool(64LL, 64LL, 1347314002LL, a1);
    if ( Pool )
    {
      NpemControlInterface = RaidQueryNpemControlInterface(*(PDEVICE_OBJECT *)(v3 + 32));
      if ( NpemControlInterface < 0
        || (LOBYTE(v7) = 1,
            NpemControlInterface = (*(__int64 (__fastcall **)(_QWORD, __int64))(Pool + 32))(*(_QWORD *)(Pool + 8), v7),
            NpemControlInterface < 0) )
      {
        ExFreePoolWithTag((PVOID)Pool, 0x504E6152u);
        Pool = 0LL;
      }
      else
      {
        *a2 = Pool;
      }
      *(_QWORD *)(v3 + 5704) = Pool;
      return (unsigned int)NpemControlInterface;
    }
    else
    {
      return 3221225626LL;
    }
  }
}
