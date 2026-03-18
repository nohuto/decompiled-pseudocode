/*
 * XREFs of HalpHandleMachineCheck @ 0x14053F7A8
 * Callers:
 *     HalHandleMcheck @ 0x140543080 (HalHandleMcheck.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KxTryToAcquireSpinLock @ 0x1404633C8 (KxTryToAcquireSpinLock.c)
 *     HalpMceHandler @ 0x140540304 (HalpMceHandler.c)
 *     HalpMceHandlerWithRendezvous @ 0x1405405C0 (HalpMceHandlerWithRendezvous.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHandleMachineCheck(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rbx
  __int64 v6; // rdx
  __int64 result; // rax

  _InterlockedIncrement(&WheapCriticalStateRefCount);
  if ( HalpMceBroadcast )
  {
    for ( i = *(_QWORD *)&KeGetPcr()->HalReserved[6]; ; i = *(_QWORD *)(i + 184) )
    {
      if ( !i )
      {
        result = HalpMceHandlerWithRendezvous(a1);
        goto LABEL_12;
      }
      if ( (guard_dispatch_icall_no_overrides(*(_QWORD *)(i + 172), 378LL, 0LL, a4) & 8) != 0 )
        break;
    }
    while ( !KxTryToAcquireSpinLock((volatile signed __int32 *)&HalpMceLocalHandlingLock) )
      _mm_pause();
    LOBYTE(v6) = 1;
    HalpMceHandler(a1, v6);
    result = KxReleaseSpinLock(&HalpMceLocalHandlingLock);
  }
  else
  {
    result = HalpMceHandler(a1, 0LL);
  }
LABEL_12:
  _InterlockedDecrement(&WheapCriticalStateRefCount);
  return result;
}
