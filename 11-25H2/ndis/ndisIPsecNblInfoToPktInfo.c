/*
 * XREFs of ndisIPsecNblInfoToPktInfo @ 0x1400AABD4
 * Callers:
 *     ?ndisCopyNBLInfoToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@W4_NDIS_XLATE_TYPE@@@Z @ 0x140030150 (-ndisCopyNBLInfoToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@W4_NDIS_XLATE_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisIPsecNblInfoToPktInfo(__int64 *a1, int a2, __int64 a3, _QWORD *a4)
{
  __int64 result; // rax
  int v6; // ecx
  int v7; // edx

  result = *a1;
  if ( *a1 )
  {
    if ( a2 )
    {
      if ( a2 != 2 )
        return result;
      v6 = *(_DWORD *)a3 ^ ((unsigned __int8)*(_DWORD *)a3 ^ (unsigned __int8)*(_WORD *)a1) & 1;
      *(_DWORD *)a3 = v6;
      v7 = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)*(_WORD *)a1) & 2;
      *(_DWORD *)a3 = v7;
      *(_DWORD *)a3 = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)*(_WORD *)a1) & 4;
      result = *((unsigned __int16 *)a1 + 1);
      *(_DWORD *)(a3 + 4) = result;
    }
    else
    {
      *(_QWORD *)(a3 + 8) = 0LL;
      *(_QWORD *)a3 = result;
    }
    *a4 = a3;
  }
  return result;
}
