/*
 * XREFs of FsRtlAcknowledgeEcp @ 0x140A147D0
 * Callers:
 *     FsRtlpAttachOplockKey @ 0x140375F60 (FsRtlpAttachOplockKey.c)
 * Callees:
 *     <none>
 */

void __stdcall FsRtlAcknowledgeEcp(PVOID EcpContext)
{
  *((_DWORD *)EcpContext - 6) |= 8u;
}
