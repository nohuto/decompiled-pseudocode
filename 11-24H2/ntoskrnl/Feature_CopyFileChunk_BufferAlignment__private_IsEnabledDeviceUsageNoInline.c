/*
 * XREFs of Feature_CopyFileChunk_BufferAlignment__private_IsEnabledDeviceUsageNoInline @ 0x1405948FC
 * Callers:
 *     IopFreeCopyObjectsFromDataBuffer @ 0x14025F988 (IopFreeCopyObjectsFromDataBuffer.c)
 *     NtCopyFileChunk @ 0x140ABE950 (NtCopyFileChunk.c)
 * Callees:
 *     Feature_CopyFileChunk_BufferAlignment__private_IsEnabledFallback @ 0x140594934 (Feature_CopyFileChunk_BufferAlignment__private_IsEnabledFallback.c)
 */

__int64 Feature_CopyFileChunk_BufferAlignment__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_CopyFileChunk_BufferAlignment__private_featureState & 0x10) != 0 )
    return Feature_CopyFileChunk_BufferAlignment__private_featureState & 1;
  else
    return Feature_CopyFileChunk_BufferAlignment__private_IsEnabledFallback(
             (unsigned int)Feature_CopyFileChunk_BufferAlignment__private_featureState,
             3LL);
}
