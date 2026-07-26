/*
 * XREFs of ndisIPsecPktInfoToNBLInfo @ 0x1400AAC34
 * Callers:
 *     ?ndisCopyPacketInfoToNBL@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@W4_NDIS_XLATE_TYPE@@@Z @ 0x140032400 (-ndisCopyPacketInfoToNBL@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@W4_NDIS_XLATE_TYPE@@@Z.c)
 *     ?ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x14006BAC0 (-ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisIPsecPktInfoToNBLInfo(_WORD *a1, int a2, _WORD *a3)
{
  __int64 result; // rax
  __int16 v5; // cx
  __int16 v6; // dx

  if ( a1 )
  {
    if ( a2 )
    {
      if ( a2 == 2 )
      {
        v5 = *a3 ^ (*a1 ^ *a3) & 1;
        *a3 = v5;
        v6 = v5 ^ (v5 ^ (2 * (*(_DWORD *)a1 >> 1))) & 2;
        *a3 = v6;
        *a3 = v6 ^ ((unsigned __int8)v6 ^ *(_DWORD *)a1 & 0xFC) & 4;
        result = (unsigned __int16)a1[2];
        a3[1] = result;
      }
    }
    else
    {
      result = *(_QWORD *)a1;
      *(_QWORD *)a3 = *(_QWORD *)a1;
    }
  }
  return result;
}
