/*
 * XREFs of ?ndisPplConfigureVerifier@@YAXPEAU_NDIS_POOL_HEADER@@PEAX_N@Z @ 0x140056140
 * Callers:
 *     NdisAllocateNetBufferPool @ 0x140055870 (NdisAllocateNetBufferPool.c)
 *     NdisAllocateNetBufferListPool @ 0x140055B30 (NdisAllocateNetBufferListPool.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ndisPplIsUseAfterFreeVerifierEnabled @ 0x1400561B0 (ndisPplIsUseAfterFreeVerifierEnabled.c)
 */

void __fastcall ndisPplConfigureVerifier(struct _NDIS_POOL_HEADER *a1, void *a2)
{
  int v3; // edx

  if ( (unsigned __int8)ndisPplIsUseAfterFreeVerifierEnabled(a2) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v3,
        21,
        10,
        (struct _GUID *)&WPP_da285872e2723d62fcb8cab539a90eca_Traceguids,
        (char)a1);
    }
    a1->PoolFlags |= 1u;
  }
}
