/*
 * XREFs of GetNvmeHostNQN @ 0x14006E10C
 * Callers:
 *     StorPortNvmeofExtendedFunction @ 0x140074180 (StorPortNvmeofExtendedFunction.c)
 *     NvmeAdapterFabricRegisterDeregisterHost @ 0x1400E2A38 (NvmeAdapterFabricRegisterDeregisterHost.c)
 *     BuildNvmeConnectData @ 0x140119190 (BuildNvmeConnectData.c)
 *     NvmeAdapterAddAuthenticationKey @ 0x140192B98 (NvmeAdapterAddAuthenticationKey.c)
 *     NvmeAdapterConnectController @ 0x140193CD8 (NvmeAdapterConnectController.c)
 *     NvmeAdapterCreateAuthenticationKey @ 0x140194A68 (NvmeAdapterCreateAuthenticationKey.c)
 *     NvmeAdapterDeleteAuthenticationKey @ 0x140194FD0 (NvmeAdapterDeleteAuthenticationKey.c)
 *     NvmeAdapterGetAuthenticationKeys @ 0x14019707C (NvmeAdapterGetAuthenticationKeys.c)
 *     NvmeAdapterGetHostInformation @ 0x140198AE8 (NvmeAdapterGetHostInformation.c)
 * Callees:
 *     GetNvmeHostName @ 0x14006E238 (GetNvmeHostName.c)
 *     GetNvmeHostUuid @ 0x14006E3F8 (GetNvmeHostUuid.c)
 *     memmove @ 0x140143780 (memmove.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall GetNvmeHostNQN(char a1, char *a2)
{
  int NvmeHostUuid; // esi
  size_t v5; // rbx
  __int128 v6; // xmm1
  size_t v7; // rbx
  int v8; // eax
  __int128 v9; // xmm1
  char Src[37]; // [rsp+28h] [rbp-49h] BYREF
  char v12[40]; // [rsp+50h] [rbp-21h] BYREF
  _OWORD v13[2]; // [rsp+78h] [rbp+7h] BYREF
  int v14; // [rsp+98h] [rbp+27h]
  _OWORD v15[2]; // [rsp+A0h] [rbp+2Fh] BYREF

  strcpy(Src, "nqn.1991-05.com.microsoft:nvme.host.");
  strcpy(v12, "nqn.2014-08.org.nvmexpress:uuid:");
  memset_0(a2, 0, 0x100uLL);
  NvmeHostUuid = GetNvmeHostUuid(v13);
  if ( NvmeHostUuid >= 0 )
  {
    NvmeHostUuid = GetNvmeHostName(v15);
    if ( NvmeHostUuid < 0 || a1 )
    {
      NvmeHostUuid = 0;
      v7 = -1LL;
      do
        ++v7;
      while ( v12[v7] );
      memmove(a2, v12, v7);
      v8 = v14;
      v9 = v13[1];
      *(_OWORD *)&a2[v7] = v13[0];
      *(_OWORD *)&a2[v7 + 16] = v9;
      *(_DWORD *)&a2[v7 + 32] = v8;
    }
    else
    {
      v5 = -1LL;
      do
        ++v5;
      while ( Src[v5] );
      memmove(a2, Src, v5);
      v6 = v15[1];
      *(_OWORD *)&a2[v5] = v15[0];
      *(_OWORD *)&a2[v5 + 16] = v6;
    }
  }
  return (unsigned int)NvmeHostUuid;
}
