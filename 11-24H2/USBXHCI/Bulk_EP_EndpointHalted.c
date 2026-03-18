/*
 * XREFs of Bulk_EP_EndpointHalted @ 0x140031EE0
 * Callers:
 *     <none>
 * Callees:
 *     Bulk_ProcessStreamOnEndpointStopOrHalt @ 0x14002CB9C (Bulk_ProcessStreamOnEndpointStopOrHalt.c)
 */

void __fastcall Bulk_EP_EndpointHalted(__int64 a1)
{
  KSPIN_LOCK *v2; // rdi
  KIRQL v3; // al
  int v4; // edx
  KIRQL v5; // dl

  if ( *(_DWORD *)(a1 + 64) )
  {
    v2 = (KSPIN_LOCK *)(a1 + 96);
    v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v4 = *(_DWORD *)(a1 + 332);
    *(_BYTE *)(a1 + 104) = v3;
    if ( (v4 & 4) != 0 )
    {
      v5 = v3;
    }
    else
    {
      Bulk_ProcessStreamOnEndpointStopOrHalt(a1);
      *(_DWORD *)(a1 + 332) |= 4u;
      v5 = *(_BYTE *)(a1 + 104);
    }
    KeReleaseSpinLock(v2, v5);
  }
}
