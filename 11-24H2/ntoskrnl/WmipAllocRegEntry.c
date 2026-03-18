/*
 * XREFs of WmipAllocRegEntry @ 0x1404AC7D8
 * Callers:
 *     WmipRegisterDevice @ 0x1409D0548 (WmipRegisterDevice.c)
 *     WmipInitializeDataStructs @ 0x140C3CBEC (WmipInitializeDataStructs.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140248B90 (ExAllocateFromNPagedLookasideList.c)
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseMutantEx @ 0x1403379F0 (KeReleaseMutantEx.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     WmipAllocProviderId @ 0x140AA11C8 (WmipAllocProviderId.c)
 */

_QWORD *__fastcall WmipAllocRegEntry(__int64 a1, int a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  KIRQL v7; // al
  _QWORD *v8; // rcx
  int v9; // [rsp+50h] [rbp+18h] BYREF

  v4 = ExAllocateFromNPagedLookasideList(&WmipRegLookaside);
  v5 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0x40uLL);
    v5[2] = a1;
    *((_DWORD *)v5 + 12) = a2 & 0xFF000000 | 1;
    *((_DWORD *)v5 + 14) = WmipAllocProviderId();
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    v7 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
    v8 = off_140E090D8;
    ++WmipInUseRegEntryCount;
    if ( *off_140E090D8 != (_UNKNOWN *)&WmipInUseRegEntryHead )
      __fastfail(3u);
    *v5 = &WmipInUseRegEntryHead;
    v5[1] = v8;
    *v8 = v5;
    off_140E090D8 = (_UNKNOWN **)v5;
    KeReleaseSpinLock(&WmipRegistrationSpinLock, v7);
    KeReleaseMutantEx((ULONG_PTR)&WmipSMMutex, 1u, 4, &v9);
  }
  return v5;
}
