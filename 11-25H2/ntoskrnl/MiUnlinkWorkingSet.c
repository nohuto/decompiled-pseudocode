/*
 * XREFs of MiUnlinkWorkingSet @ 0x14041773C
 * Callers:
 *     MiDeletePartitionResources @ 0x1407EBEB4 (MiDeletePartitionResources.c)
 *     MmDeleteProcessAddressSpace @ 0x1408D7B40 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     KeWaitForGate @ 0x140418844 (KeWaitForGate.c)
 */

__int64 __fastcall MiUnlinkWorkingSet(__int64 a1)
{
  KIRQL v2; // di
  _QWORD *v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rdx
  _DWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v8[4]; // [rsp+28h] [rbp-20h] BYREF

  v7[1] = 0;
  v7[0] = 393479;
  v8[1] = v8;
  v8[0] = v8;
  v2 = ExAcquireSpinLockExclusive(&dword_140E37180);
  while ( (*(_DWORD *)(a1 + 184) & 0x600) != 0 || (*(_DWORD *)(a1 + 184) & 0xF000) != 0 )
  {
    *(_QWORD *)(a1 + 104) = v7;
    MiReleaseSpinLockExclusive(&dword_140E37180, v2);
    KeWaitForGate(v7, 18LL);
    ExAcquireSpinLockExclusive(&dword_140E37180);
  }
  v3 = (_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 )
  {
    if ( *(_QWORD **)(v4 + 8) != v3 || (v5 = *(_QWORD **)(a1 + 32), (_QWORD *)*v5 != v3) )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    *v3 = 0LL;
  }
  *(_QWORD *)(a1 + 104) = MmBadPointer;
  return MiReleaseSpinLockExclusive(&dword_140E37180, v2);
}
