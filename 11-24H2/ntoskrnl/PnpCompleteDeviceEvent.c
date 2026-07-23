/*
 * XREFs of PnpCompleteDeviceEvent @ 0x1409ED2C0
 * Callers:
 *     PnpProcessCompletedEject @ 0x140721780 (PnpProcessCompletedEject.c)
 *     PnpDeviceEventWorker @ 0x1409ED430 (PnpDeviceEventWorker.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PiPdcDeactivate @ 0x1409ED014 (PiPdcDeactivate.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PnpCompleteDeviceEvent(PVOID P, int a2)
{
  __int32 i; // eax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  _DWORD *v8; // rax
  void *v9; // rcx
  __int64 v10; // rcx
  void *v11; // rcx
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
  if ( *((_BYTE *)P + 72) || (v7 = *((_QWORD *)P + 10)) != 0 && *(_BYTE *)(v7 + 72) )
  {
    v11 = (void *)*((_QWORD *)P + 6);
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
  }
  else
  {
    v8 = (_DWORD *)*((_QWORD *)P + 18);
    if ( *((_QWORD *)P + 3) )
    {
      *v8 = a2;
      KeSetEvent(*((PRKEVENT *)P + 3), 0, 0);
    }
    else if ( v8 && *((_DWORD *)P + 34) == 1 )
    {
      *v8 = a2;
    }
    if ( *((_QWORD *)P + 4) )
      guard_dispatch_icall_no_overrides(*((_QWORD *)P + 5), v6);
  }
  v9 = (void *)*((_QWORD *)P + 20);
  if ( v9 )
    ObfDereferenceObjectWithTag(v9, 0x56706E50u);
  v10 = *((_QWORD *)P + 10);
  if ( v10 && _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 64), 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag(*((PVOID *)P + 10), 0x4B706E50u);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 16, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag(P, 0x4B706E50u);
}
