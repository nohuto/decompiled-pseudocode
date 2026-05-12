/*
 * XREFs of StorAllocateStorMQSrb @ 0x14007AF98
 * Callers:
 *     NvmeAdapterMiniportPassthroughRequestIoctl @ 0x1400D42D8 (NvmeAdapterMiniportPassthroughRequestIoctl.c)
 *     NvmePnPPassToStorMQMiniPort @ 0x1400DC604 (NvmePnPPassToStorMQMiniPort.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 */

__int64 __fastcall StorAllocateStorMQSrb(__int64 a1, int a2)
{
  __int64 v2; // r8
  int v3; // ebp
  int v4; // edi
  int v5; // esi
  unsigned int v7; // ebx
  __int64 Pool; // rax

  v2 = 0LL;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  switch ( a2 )
  {
    case 2:
      goto LABEL_13;
    case 23:
      v4 = 96;
      break;
    case 37:
      v4 = 98;
      break;
    case 38:
    case 39:
    case 42:
    case 43:
LABEL_13:
      v7 = 152;
      goto LABEL_14;
    case 45:
      v4 = 69;
      break;
    default:
      return v2;
  }
  v3 = 1;
  v7 = 176;
  v5 = 16;
LABEL_14:
  Pool = RaidAllocatePool(64LL, v7, 1918067026LL, a1);
  v2 = Pool;
  if ( Pool )
  {
    *(_WORD *)Pool = 8;
    *(_BYTE *)(Pool + 2) = 40;
    *(_DWORD *)(Pool + 8) = 1397899864;
    *(_DWORD *)(Pool + 12) = 1;
    *(_DWORD *)(Pool + 16) = v7;
    *(_DWORD *)(Pool + 20) = a2;
    *(_WORD *)(Pool + 36) = 2;
    *(_DWORD *)(Pool + 52) = 128;
    *(_DWORD *)(Pool + 56) = v3;
    *(_WORD *)(Pool + 128) = 2;
    *(_DWORD *)(Pool + 132) = 16;
    if ( v3 )
    {
      *(_DWORD *)(Pool + 120) = 152;
      *(_DWORD *)(Pool + 152) = v4;
      *(_DWORD *)(Pool + 156) = v5;
    }
  }
  return v2;
}
