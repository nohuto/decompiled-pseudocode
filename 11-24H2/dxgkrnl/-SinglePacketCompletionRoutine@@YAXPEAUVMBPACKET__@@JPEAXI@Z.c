/*
 * XREFs of ?SinglePacketCompletionRoutine@@YAXPEAUVMBPACKET__@@JPEAXI@Z @ 0x140057A10
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x140011084 (McTemplateK0p_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGKVMB_SINGLEPACKETCONTEXT@@QEAAXXZ @ 0x140057A88 (-ReleaseReference@DXGKVMB_SINGLEPACKETCONTEXT@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall SinglePacketCompletionRoutine(struct VMBPACKET__ *a1, __int64 a2, void *a3)
{
  volatile __int64 *v4; // rdi
  __int64 v5; // r8

  v4 = (volatile __int64 *)((__int64 (__fastcall *)(struct VMBPACKET__ *, __int64, void *))qword_140160460)(a1, a2, a3);
  if ( _InterlockedExchange64(v4 + 1, 0LL) )
    ((void (__fastcall *)(struct VMBPACKET__ *))qword_140160450)(a1);
  DXGKVMB_SINGLEPACKETCONTEXT::ReleaseReference((DXGKVMB_SINGLEPACKETCONTEXT *)v4);
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
      McTemplateK0p_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventVmBusCompletePacketAsync, v5, a1);
  }
}
