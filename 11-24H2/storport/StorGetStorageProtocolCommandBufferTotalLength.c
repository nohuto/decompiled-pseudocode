/*
 * XREFs of StorGetStorageProtocolCommandBufferTotalLength @ 0x14008F6F4
 * Callers:
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x140060974 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidUnitSendSrbProtocolCommandSynchronously @ 0x1400A05BC (RaidUnitSendSrbProtocolCommandSynchronously.c)
 *     NvmeAdapterStorageProtocolCommandIoctlCompletion @ 0x1400D9FA0 (NvmeAdapterStorageProtocolCommandIoctlCompletion.c)
 *     NvmeNamespaceStorageProtocolCommandIoctlCompletion @ 0x140113700 (NvmeNamespaceStorageProtocolCommandIoctlCompletion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorGetStorageProtocolCommandBufferTotalLength(_DWORD *a1, unsigned int *a2)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r8
  unsigned int v7; // edx
  __int64 result; // rax

  v4 = 84LL;
  if ( !a1 || !a2 )
    return 3221225485LL;
  v5 = (unsigned int)(a1[9] + a1[13]);
  if ( v5 > 0x54 )
    v4 = (unsigned int)v5;
  v6 = (unsigned int)(a1[8] + a1[12]);
  if ( v6 <= v4 )
    v6 = (unsigned int)v4;
  v7 = a1[7] + a1[11];
  if ( v7 <= v6 )
    v7 = v6;
  result = 0LL;
  *a2 = v7;
  return result;
}
