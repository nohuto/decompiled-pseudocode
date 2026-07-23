/*
 * XREFs of MiUnlinkWorkingSet @ 0x140270560
 * Callers:
 *     MiDeletePartitionResources @ 0x1407FC4B4 (MiDeletePartitionResources.c)
 *     MmDeleteProcessAddressSpace @ 0x140AE7D64 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     KeWaitForGate @ 0x140271C4C (KeWaitForGate.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiUnlinkWorkingSet(__int64 a1)
{
  _QWORD *v2; // rdx
  KIRQL v3; // di
  _QWORD *v4; // rax
  __int64 v5; // rcx
  _DWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v8[4]; // [rsp+28h] [rbp-20h] BYREF

  v7[1] = 0;
  v7[0] = 393479;
  v8[1] = v8;
  v8[0] = v8;
  v3 = ExAcquireSpinLockExclusive(&SpinLock);
  while ( (*(_DWORD *)(a1 + 184) & 0x600) != 0 || (*(_DWORD *)(a1 + 184) & 0xF000) != 0 )
  {
    LOBYTE(v2) = v3;
    *(_QWORD *)(a1 + 104) = v7;
    MiReleaseSpinLockExclusive(&SpinLock, v2);
    KeWaitForGate(v7, 18LL);
    ExAcquireSpinLockExclusive(&SpinLock);
  }
  v4 = (_QWORD *)(a1 + 24);
  v5 = *(_QWORD *)(a1 + 24);
  if ( v5 )
  {
    if ( *(_QWORD **)(v5 + 8) != v4 || (v2 = *(_QWORD **)(a1 + 32), (_QWORD *)*v2 != v4) )
      __fastfail(3u);
    *v2 = v5;
    *(_QWORD *)(v5 + 8) = v2;
    *v4 = 0LL;
  }
  LOBYTE(v2) = v3;
  *(_QWORD *)(a1 + 104) = MmBadPointer;
  return MiReleaseSpinLockExclusive(&SpinLock, v2);
}
