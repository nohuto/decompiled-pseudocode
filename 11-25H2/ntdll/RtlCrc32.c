/*
 * XREFs of RtlCrc32 @ 0x1800FA660
 * Callers:
 *     <none>
 * Callees:
 *     RtlpComputeCrcInternal @ 0x1800FA6C0 (RtlpComputeCrcInternal.c)
 *     RtlpCrc32c @ 0x18011E770 (RtlpCrc32c.c)
 *     Feature_FasterCrc32__private_IsEnabledDeviceUsageNoInline @ 0x18011E8A0 (Feature_FasterCrc32__private_IsEnabledDeviceUsageNoInline.c)
 */

DWORD __cdecl RtlCrc32(const void *Buffer, size_t Size, DWORD InitialCrc)
{
  __int64 v3; // rdi

  v3 = InitialCrc;
  if ( (unsigned int)Feature_FasterCrc32__private_IsEnabledDeviceUsageNoInline() )
    return RtlpCrc32c(Buffer, Size, (unsigned int)v3);
  else
    return RtlpComputeCrcInternal(Buffer, Size, v3, &Crc32Ctrl);
}
