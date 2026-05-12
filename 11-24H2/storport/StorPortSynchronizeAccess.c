/*
 * XREFs of StorPortSynchronizeAccess @ 0x140027730
 * Callers:
 *     StorPortSynchronizeAccessVrfy @ 0x1401C17E0 (StorPortSynchronizeAccessVrfy.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x14001A910 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1400277E0 (RaidAdapterReleaseInterruptLock.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

char __fastcall StorPortSynchronizeAccess(__int64 a1, __int64 (__fastcall *a2)(__int64, __int64), __int64 a3)
{
  __int64 v3; // rax
  KIRQL v4; // di
  _DWORD *v8; // rbx
  __int64 v9; // rdx
  char v10; // si

  v3 = *(_QWORD *)(a1 - 16);
  v4 = 0;
  if ( !v3 )
    return 0;
  v8 = *(_DWORD **)v3;
  if ( !*(_QWORD *)v3 || (*(_BYTE *)(v3 + 248) & 1) != 0 || *v8 != 1094997074 )
    return 0;
  if ( v8[218] == 1 )
    v4 = RaidAdapterAcquireInterruptLock(*(_QWORD *)v3);
  v10 = a2(a1, a3);
  if ( v8[218] == 1 )
  {
    LOBYTE(v9) = v4;
    RaidAdapterReleaseInterruptLock(v8, v9);
  }
  return v10;
}
