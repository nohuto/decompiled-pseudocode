/*
 * XREFs of ?WnfPacketCompletionRoutine@@YAXPEAUVMBPACKET__@@JPEAXI@Z @ 0x14007B760
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x14001428C (McTemplateK0p_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall WnfPacketCompletionRoutine(struct VMBPACKET__ *a1, __int64 a2, void *a3)
{
  __int64 v4; // r8

  _InterlockedDecrement((volatile signed __int32 *)(((__int64 (__fastcall *)(struct VMBPACKET__ *, __int64, void *))qword_14015D440)(
                                                      a1,
                                                      a2,
                                                      a3)
                                                  + 76));
  ((void (__fastcall *)(struct VMBPACKET__ *))qword_14015D430)(a1);
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
      McTemplateK0p_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventVmBusCompletePacketAsync, v4, a1);
  }
}
