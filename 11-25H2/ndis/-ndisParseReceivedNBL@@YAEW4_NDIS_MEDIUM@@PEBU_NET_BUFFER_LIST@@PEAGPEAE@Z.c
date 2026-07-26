/*
 * XREFs of ?ndisParseReceivedNBL@@YAEW4_NDIS_MEDIUM@@PEBU_NET_BUFFER_LIST@@PEAGPEAE@Z @ 0x140038EA0
 * Callers:
 *     ?ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@@@Z @ 0x140035040 (-ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@.c)
 *     ?ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x140038170 (-ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisParseReceivedNBL(
        enum _NDIS_MEDIUM a1,
        const struct _NET_BUFFER_LIST *a2,
        unsigned __int16 *a3,
        unsigned __int8 *a4)
{
  unsigned __int8 v4; // r10
  unsigned __int16 v7; // ax
  char v8; // cl
  _NET_BUFFER *FirstNetBuffer; // rax
  _MDL *CurrentMdl; // rcx
  unsigned int ByteCount; // edi
  __int64 CurrentMdlOffset; // rbp
  unsigned int v13; // ebx
  char *MappedSystemVa; // rdx
  char *v15; // rdx
  unsigned __int16 v17; // [rsp+20h] [rbp-28h]
  unsigned __int16 v18; // [rsp+50h] [rbp+8h]

  v4 = 0;
  if ( a1 )
  {
    v7 = (unsigned __int16)a2->NetBufferListInfo[7];
    v4 = 1;
    v8 = 1;
LABEL_24:
    *a3 = v7;
    goto LABEL_25;
  }
  FirstNetBuffer = a2->FirstNetBuffer;
  CurrentMdl = FirstNetBuffer->CurrentMdl;
  if ( CurrentMdl
    && (ByteCount = CurrentMdl->ByteCount, ByteCount >= 0xE)
    && (CurrentMdlOffset = FirstNetBuffer->CurrentMdlOffset, ByteCount > (unsigned int)CurrentMdlOffset)
    && (v13 = ByteCount - CurrentMdlOffset, ByteCount - (unsigned int)CurrentMdlOffset >= 0xE) )
  {
    if ( (CurrentMdl->MdlFlags & 5) != 0 )
      MappedSystemVa = (char *)CurrentMdl->MappedSystemVa;
    else
      MappedSystemVa = (char *)MmMapLockedPages(CurrentMdl, 0);
    v15 = &MappedSystemVa[CurrentMdlOffset];
    HIBYTE(v17) = v15[12];
    LOBYTE(v17) = v15[13];
    v18 = *((_WORD *)v15 + 6);
    if ( v17 <= 0x600u )
    {
      if ( v13 < 0x16 )
      {
        *a4 = 0;
        return 0;
      }
      v4 = 0;
      v8 = 1;
      if ( v15[14] == -86 && v15[15] == -86 && v15[16] == 3 )
      {
        v7 = *((_WORD *)v15 + 10);
        v4 = 1;
        goto LABEL_24;
      }
    }
    else
    {
      if ( v17 != 0x8100 )
      {
LABEL_17:
        v7 = v18;
        v4 = 1;
        v8 = 1;
        goto LABEL_24;
      }
      if ( ByteCount >= 0x12 && v13 >= 0x12 )
      {
        v18 = *((_WORD *)v15 + 8);
        goto LABEL_17;
      }
      v8 = 0;
      v4 = 0;
    }
  }
  else
  {
    v8 = 0;
  }
LABEL_25:
  *a4 = v4;
  return v8;
}
