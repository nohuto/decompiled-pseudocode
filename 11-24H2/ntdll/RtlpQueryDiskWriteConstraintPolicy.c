/*
 * XREFs of RtlpQueryDiskWriteConstraintPolicy @ 0x18015D46C
 * Callers:
 *     RtlQueryResourcePolicy @ 0x1800A9730 (RtlQueryResourcePolicy.c)
 * Callees:
 *     RtlpGetVolumeHandle @ 0x1801115B4 (RtlpGetVolumeHandle.c)
 *     RtlpQueryDiskWriteConstraintPolicyByHandle @ 0x18015D4D4 (RtlpQueryDiskWriteConstraintPolicyByHandle.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 */

__int64 __fastcall RtlpQueryDiskWriteConstraintPolicy(unsigned __int16 *a1, __int64 a2)
{
  int VolumeHandle; // ebx
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  Handle = 0LL;
  VolumeHandle = RtlpGetVolumeHandle(a1, &Handle);
  if ( VolumeHandle >= 0 )
  {
    VolumeHandle = RtlpQueryDiskWriteConstraintPolicyByHandle(Handle, a2);
    if ( VolumeHandle >= 0 )
      VolumeHandle = 0;
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)VolumeHandle;
}
