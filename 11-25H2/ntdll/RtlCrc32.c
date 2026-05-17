/*
 * XREFs of RtlCrc32 @ 0x1800FA660
 * Callers:
 *     <none>
 * Callees:
 *     RtlpComputeCrcInternal @ 0x1800FA6C0 (RtlpComputeCrcInternal.c)
 *     RtlpCrc32c @ 0x18011E770 (RtlpCrc32c.c)
 *     Feature_FasterCrc32__private_IsEnabledDeviceUsageNoInline @ 0x18011E8A0 (Feature_FasterCrc32__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall RtlCrc32(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi

  v3 = a3;
  if ( (unsigned int)Feature_FasterCrc32__private_IsEnabledDeviceUsageNoInline() )
    return RtlpCrc32c(a1, a2, (unsigned int)v3);
  else
    return RtlpComputeCrcInternal(a1, a2, v3, &Crc32Ctrl);
}
