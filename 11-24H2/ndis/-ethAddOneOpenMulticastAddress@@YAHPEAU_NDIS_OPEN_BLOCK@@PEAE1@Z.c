/*
 * XREFs of ?ethAddOneOpenMulticastAddress@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAE1@Z @ 0x140095F4C
 * Callers:
 *     ?ndisSetOpenEthAddDeleteMulticast@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1400BE2BC (-ndisSetOpenEthAddDeleteMulticast@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_DL @ 0x14006C7B0 (WPP_RECORDER_SF_DL_ea_14006C7B0.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 */

__int64 __fastcall ethAddOneOpenMulticastAddress(struct _NDIS_OPEN_BLOCK *a1, unsigned __int8 *a2, char *a3)
{
  unsigned __int8 *v4; // r14
  unsigned int NumAddresses; // r9d
  unsigned int v7; // edi
  unsigned int i; // r8d
  int v9; // esi
  _ETH_MULTICAST_WRAPPER *MCastAddressBuf; // rdx
  __int64 v11; // rcx
  unsigned int v12; // r9d
  unsigned int v13; // ebp
  unsigned int v14; // r8d
  unsigned __int8 *MCastAddress; // rax
  __int64 v16; // r15

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      13,
      (struct _GUID *)&WPP_e414b6904fca3a214ba3367950cb0e83_Traceguids,
      (char)a1);
  }
  NumAddresses = a1->NumAddresses;
  v7 = 0;
  *a3 = 1;
  for ( i = 0; ; ++i )
  {
    v9 = 1;
    if ( i >= NumAddresses )
      break;
    MCastAddressBuf = a1->MCastAddressBuf;
    if ( *(_DWORD *)&MCastAddressBuf[i].MCastAddress[2] == *(_DWORD *)(v4 + 2)
      && *(_WORD *)MCastAddressBuf[i].MCastAddress == *(_WORD *)v4 )
    {
      ++MCastAddressBuf[i].RefCount;
      goto LABEL_24;
    }
  }
  v11 = a1->NumAddresses;
  if ( (unsigned int)(v11 + 1) <= a1->MaxMulticastAddresses )
  {
    memmove(a1->OldMCastAddressBuf, a1->MCastAddressBuf, 12 * v11);
    v12 = a1->NumAddresses;
    v13 = 0;
    a1->OldNumAddresses = v12;
    a1->NumAddresses = v12 + 1;
    if ( v12 )
    {
      v14 = *(_DWORD *)(v4 + 2);
      MCastAddress = a1->OldMCastAddressBuf->MCastAddress;
      while ( *(_DWORD *)(MCastAddress + 2) <= v14 )
      {
        if ( *(_DWORD *)(MCastAddress + 2) >= v14 )
        {
          if ( *(_WORD *)MCastAddress > *(_WORD *)v4 )
            break;
          v9 = -(*(_WORD *)MCastAddress < *(_WORD *)v4);
        }
        else
        {
          v9 = -1;
        }
        ++v13;
        MCastAddress += 12;
        if ( v13 >= v12 )
          goto LABEL_21;
      }
      v9 = 1;
    }
LABEL_21:
    v16 = v13;
    memmove(a1->MCastAddressBuf, a1->OldMCastAddressBuf, v16 * 12);
    memmove(a1->MCastAddressBuf[v16].MCastAddress, v4, 6uLL);
    a1->MCastAddressBuf[v16].RefCount = 1;
    if ( v9 > 0 )
      memmove(&a1->MCastAddressBuf[v13 + 1], &a1->OldMCastAddressBuf[v16], 12LL * (a1->OldNumAddresses - v13));
    *a3 = 0;
  }
  else
  {
    v7 = -1073676279;
  }
LABEL_24:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xEu,
      (struct _GUID *)&WPP_e414b6904fca3a214ba3367950cb0e83_Traceguids,
      *a3,
      v7);
  return v7;
}
