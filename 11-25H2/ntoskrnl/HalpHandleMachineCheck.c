/*
 * XREFs of HalpHandleMachineCheck @ 0x14053CF78
 * Callers:
 *     HalHandleMcheck @ 0x140540850 (HalHandleMcheck.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KxTryToAcquireSpinLock @ 0x140464068 (KxTryToAcquireSpinLock.c)
 *     HalpMceHandler @ 0x14053DAD4 (HalpMceHandler.c)
 *     HalpMceHandlerWithRendezvous @ 0x14053DD90 (HalpMceHandlerWithRendezvous.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHandleMachineCheck(__int64 a1)
{
  __int64 i; // rbx
  __int64 v3; // rdx
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
      if ( (guard_dispatch_icall_no_overrides(*(_QWORD *)(i + 172)) & 8) != 0 )
        break;
    }
    while ( !KxTryToAcquireSpinLock((volatile signed __int32 *)&HalpMceLocalHandlingLock) )
      _mm_pause();
    LOBYTE(v3) = 1;
    HalpMceHandler(a1, v3);
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
