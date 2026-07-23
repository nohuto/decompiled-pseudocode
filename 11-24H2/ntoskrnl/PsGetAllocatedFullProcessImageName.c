/*
 * XREFs of PsGetAllocatedFullProcessImageName @ 0x140949CE0
 * Callers:
 *     PfCalculateProcessHash @ 0x140949AC0 (PfCalculateProcessHash.c)
 *     PiUEventHandleVetoEvent @ 0x140A8758C (PiUEventHandleVetoEvent.c)
 *     PnpLogVetoInformation @ 0x140A9A584 (PnpLogVetoInformation.c)
 *     ViCreateProcessCallbackInternal @ 0x140B988D0 (ViCreateProcessCallbackInternal.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PsGetAllocatedFullProcessImageName(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 Pool2; // rax
  __int64 v5; // rbx

  v2 = *(_QWORD *)(a1 + 848);
  Pool2 = ExAllocatePool2(0x40uLL, *(unsigned __int16 *)(v2 + 2) + 16LL, 0x6E497350u);
  v5 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  *(_OWORD *)Pool2 = *(_OWORD *)v2;
  if ( *(_QWORD *)(Pool2 + 8) )
  {
    *(_QWORD *)(Pool2 + 8) = Pool2 + 16;
    memmove((void *)(Pool2 + 16), *(const void **)(v2 + 8), *(unsigned __int16 *)(v2 + 2));
  }
  *a2 = v5;
  return 0LL;
}
