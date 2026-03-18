/*
 * XREFs of FsRtlAcknowledgeEcp @ 0x140A1AB70
 * Callers:
 *     FsRtlpAttachOplockKey @ 0x14041D800 (FsRtlpAttachOplockKey.c)
 * Callees:
 *     <none>
 */

void __stdcall FsRtlAcknowledgeEcp(PVOID EcpContext)
{
  *((_DWORD *)EcpContext - 6) |= 8u;
}
