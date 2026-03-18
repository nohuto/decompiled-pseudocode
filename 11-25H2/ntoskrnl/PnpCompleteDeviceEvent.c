/*
 * XREFs of PnpCompleteDeviceEvent @ 0x14096DC54
 * Callers:
 *     PnpProcessCompletedEject @ 0x140717AF0 (PnpProcessCompletedEject.c)
 *     PnpDeviceEventWorker @ 0x14096E070 (PnpDeviceEventWorker.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PiPdcDeactivate @ 0x14096DDBC (PiPdcDeactivate.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PnpCompleteDeviceEvent(PVOID P, int a2)
{
  __int32 i; // eax
  __int64 v5; // rcx
  __int64 v6; // rax
  _DWORD *v7; // rax
  void *v8; // rcx
  __int64 v9; // rcx
  void *v10; // rcx
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
  PiPdcDeactivate(*((_QWORD *)P + 14));
  *((_QWORD *)P + 14) = 0LL;
  if ( *((_BYTE *)P + 72) || (v6 = *((_QWORD *)P + 10)) != 0 && *(_BYTE *)(v6 + 72) )
  {
    v10 = (void *)*((_QWORD *)P + 6);
    if ( v10 )
      ExFreePoolWithTag(v10, 0);
  }
  else
  {
    v7 = (_DWORD *)*((_QWORD *)P + 18);
    if ( *((_QWORD *)P + 3) )
    {
      *v7 = a2;
      KeSetEvent(*((PRKEVENT *)P + 3), 0, 0);
    }
    else if ( v7 && *((_DWORD *)P + 34) == 1 )
    {
      *v7 = a2;
    }
    if ( *((_QWORD *)P + 4) )
      guard_dispatch_icall_no_overrides(*((_QWORD *)P + 5));
  }
  v8 = (void *)*((_QWORD *)P + 20);
  if ( v8 )
    ObfDereferenceObjectWithTag(v8, 0x56706E50u);
  v9 = *((_QWORD *)P + 10);
  if ( v9 && _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 64), 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag(*((PVOID *)P + 10), 0x4B706E50u);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 16, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag(P, 0x4B706E50u);
}
