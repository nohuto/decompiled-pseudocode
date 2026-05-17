/*
 * XREFs of RtlpSysVolAllocate @ 0x1800CE870
 * Callers:
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1800CE704 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1800CE8E0 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800CEBBC (RtlpSysVolCheckOwnerAndSecurity.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpSysVolAllocate(unsigned int a1)
{
  return RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}
