/*
 * XREFs of PnpCompleteDeviceEvent @ 0x1409EF9F0
 * Callers:
 *     PnpProcessCompletedEject @ 0x140723BF0 (PnpProcessCompletedEject.c)
 *     PnpDeviceEventWorker @ 0x1409EFB60 (PnpDeviceEventWorker.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PiPdcDeactivate @ 0x1409EF744 (PiPdcDeactivate.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PnpCompleteDeviceEvent(PVOID P, int a2)
{
  __int32 i; // eax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  _DWORD *v10; // rax
  void *v11; // rcx
  __int64 v12; // rcx
  void *v13; // rcx
  LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  Interval.QuadPart = -1000000LL;
  for ( i = _InterlockedExchange((volatile __int32 *)P + 17, 1); i; i = _InterlockedExchange(
                                                                          (volatile __int32 *)P + 17,
                                                                          1) )
    KeDelayExecutionThread(0, 0, &Interval);
  v5 = *((_QWORD *)P + 10);
  if ( v5 )
  {
    while ( _InterlockedExchange((volatile __int32 *)(v5 + 68), 1) )
    {
      KeDelayExecutionThread(0, 0, &Interval);
      v5 = *((_QWORD *)P + 10);
    }
  }
  PiPdcDeactivate(*((void **)P + 14));
  *((_QWORD *)P + 14) = 0LL;
  if ( *((_BYTE *)P + 72) || (v9 = *((_QWORD *)P + 10)) != 0 && *(_BYTE *)(v9 + 72) )
  {
    v13 = (void *)*((_QWORD *)P + 6);
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
  }
  else
  {
    v10 = (_DWORD *)*((_QWORD *)P + 18);
    if ( *((_QWORD *)P + 3) )
    {
      *v10 = a2;
      KeSetEvent(*((PRKEVENT *)P + 3), 0, 0);
    }
    else if ( v10 && *((_DWORD *)P + 34) == 1 )
    {
      *v10 = a2;
    }
    if ( *((_QWORD *)P + 4) )
      guard_dispatch_icall_no_overrides(*((_QWORD *)P + 5), v6, v7, v8);
  }
  v11 = (void *)*((_QWORD *)P + 20);
  if ( v11 )
    ObfDereferenceObjectWithTag(v11, 0x56706E50u);
  v12 = *((_QWORD *)P + 10);
  if ( v12 && _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 64), 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag(*((PVOID *)P + 10), 0x4B706E50u);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 16, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag(P, 0x4B706E50u);
}
