/*
 * XREFs of WmipDeregisterRegEntry @ 0x14046FAA4
 * Callers:
 *     WmipRegisterDevice @ 0x1409D0548 (WmipRegisterDevice.c)
 *     WmipDeregisterDevice @ 0x140A684C4 (WmipDeregisterDevice.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14024A9C0 (ExFreeToNPagedLookasideList.c)
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseMutantEx @ 0x1403379F0 (KeReleaseMutantEx.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     WmipUnreferenceRegEntry @ 0x14046FC2C (WmipUnreferenceRegEntry.c)
 *     WmipRemoveDS @ 0x140AA0824 (WmipRemoveDS.c)
 */

void __fastcall WmipDeregisterRegEntry(char *Entry)
{
  KIRQL v2; // dl
  signed __int32 v3; // edi
  KIRQL v4; // al
  char **v5; // r10
  PVOID *v6; // r9
  void *v7; // rcx
  _DWORD Object[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v9[3]; // [rsp+38h] [rbp-18h] BYREF
  int v10; // [rsp+60h] [rbp+10h] BYREF

  Object[1] = 0;
  v9[1] = v9;
  Object[0] = 393217;
  v9[0] = v9;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v2 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  *((_QWORD *)Entry + 5) = Object;
  _m_prefetchw(Entry + 48);
  v3 = _InterlockedOr((volatile signed __int32 *)Entry + 12, 0xA0000000);
  KeReleaseSpinLock(&WmipRegistrationSpinLock, v2);
  KeReleaseMutantEx((ULONG_PTR)&WmipSMMutex, 1u, 4, &v10);
  WmipUnreferenceRegEntry(Entry);
  KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v4 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  v5 = *(char ***)Entry;
  --WmipInUseRegEntryCount;
  if ( v5[1] != Entry || (v6 = (PVOID *)*((_QWORD *)Entry + 1), *v6 != Entry) )
    __fastfail(3u);
  *v6 = v5;
  v5[1] = (char *)v6;
  KeReleaseSpinLock(&WmipRegistrationSpinLock, v4);
  KeReleaseMutantEx((ULONG_PTR)&WmipSMMutex, 1u, 4, &v10);
  if ( (v3 & 0x10000000) == 0 )
    ObfDereferenceObjectWithTag(*((PVOID *)Entry + 2), 0x746C6644u);
  v7 = (void *)*((_QWORD *)Entry + 3);
  if ( v7 )
    ObfDereferenceObjectWithTag(v7, 0x746C6644u);
  WmipRemoveDS(Entry);
  ExFreeToNPagedLookasideList(&WmipRegLookaside, Entry);
}
