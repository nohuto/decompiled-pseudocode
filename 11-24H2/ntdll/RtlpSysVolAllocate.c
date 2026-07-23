/*
 * XREFs of RtlpSysVolAllocate @ 0x1800C6430
 * Callers:
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1800C62C4 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1800C64A0 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800C677C (RtlpSysVolCheckOwnerAndSecurity.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall RtlpSysVolAllocate(unsigned int a1)
{
  return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
