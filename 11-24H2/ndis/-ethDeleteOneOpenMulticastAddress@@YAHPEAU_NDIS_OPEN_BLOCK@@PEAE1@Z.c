/*
 * XREFs of ?ethDeleteOneOpenMulticastAddress@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAE1@Z @ 0x140096178
 * Callers:
 *     ?ndisSetOpenEthAddDeleteMulticast@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1400BE2BC (-ndisSetOpenEthAddDeleteMulticast@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_DL @ 0x14006C7B0 (WPP_RECORDER_SF_DL_ea_14006C7B0.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 */

__int64 __fastcall ethDeleteOneOpenMulticastAddress(struct _NDIS_OPEN_BLOCK *a1, unsigned __int8 *a2, char *a3)
{
  unsigned __int8 *v4; // rsi
  __int64 NumAddresses; // r9
  __int64 v7; // rdi
  int v8; // eax
  unsigned __int8 *MCastAddress; // rcx
  _ETH_MULTICAST_WRAPPER *MCastAddressBuf; // rdx
  unsigned int RefCount; // r8d
  unsigned int v12; // eax
  unsigned int OldNumAddresses; // ecx

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      11,
      (struct _GUID *)&WPP_e414b6904fca3a214ba3367950cb0e83_Traceguids,
      (char)a1);
  }
  NumAddresses = a1->NumAddresses;
  v7 = 0LL;
  *a3 = 1;
  v8 = 1;
  if ( (_DWORD)NumAddresses )
  {
    MCastAddress = a1->MCastAddressBuf->MCastAddress;
    while ( *(_DWORD *)(MCastAddress + 2) != *(_DWORD *)(v4 + 2) || *(_WORD *)MCastAddress != *(_WORD *)v4 )
    {
      v7 = (unsigned int)(v7 + 1);
      MCastAddress += 12;
      v8 = 1;
      if ( (unsigned int)v7 >= (unsigned int)NumAddresses )
        goto LABEL_10;
    }
    v8 = 0;
  }
LABEL_10:
  if ( v8 || (MCastAddressBuf = a1->MCastAddressBuf, RefCount = MCastAddressBuf[v7].RefCount, RefCount <= 1) )
  {
    if ( (_DWORD)v7 != (_DWORD)NumAddresses || !v8 )
    {
      memmove(a1->OldMCastAddressBuf, a1->MCastAddressBuf, 12 * NumAddresses);
      v12 = a1->NumAddresses;
      a1->OldNumAddresses = v12--;
      a1->NumAddresses = v12;
      if ( v12 )
      {
        memmove(a1->MCastAddressBuf, a1->OldMCastAddressBuf, 12 * v7);
        OldNumAddresses = a1->OldNumAddresses;
        if ( (unsigned int)v7 < OldNumAddresses - 1 )
          memmove(
            &a1->MCastAddressBuf[v7],
            &a1->OldMCastAddressBuf[(unsigned int)(v7 + 1)],
            12LL * (OldNumAddresses - (unsigned int)v7 - 1));
      }
      *a3 = 0;
    }
  }
  else
  {
    MCastAddressBuf[v7].RefCount = RefCount - 1;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xCu,
      (struct _GUID *)&WPP_e414b6904fca3a214ba3367950cb0e83_Traceguids,
      *a3,
      0);
  return 0LL;
}
