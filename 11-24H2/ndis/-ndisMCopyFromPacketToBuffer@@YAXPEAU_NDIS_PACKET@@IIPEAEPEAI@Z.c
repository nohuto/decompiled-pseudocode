/*
 * XREFs of ?ndisMCopyFromPacketToBuffer@@YAXPEAU_NDIS_PACKET@@IIPEAEPEAI@Z @ 0x1400573F0
 * Callers:
 *     ndisMIsLoopbackPacket @ 0x14008A600 (ndisMIsLoopbackPacket.c)
 *     ?ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400DA074 (-ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400DA414 (-ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 * Callees:
 *     memmove @ 0x1400E7200 (memmove.c)
 */

void __fastcall ndisMCopyFromPacketToBuffer(
        struct _NDIS_PACKET *a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int8 *a4,
        unsigned int *a5)
{
  unsigned int v5; // edi
  unsigned int v6; // ebx
  _MDL *Head; // r14
  char *v10; // r15
  unsigned int v11; // esi
  unsigned int v12; // eax
  __int64 v13; // rdi
  unsigned int v14; // r9d
  unsigned int v15; // r10d
  unsigned int v16; // r11d
  _MDL *v17; // r8
  __int64 ByteCount; // rax
  unsigned __int64 v19; // rax
  unsigned int v20; // [rsp+68h] [rbp+10h]

  v5 = 0;
  v6 = 0;
  v20 = 0;
  *a5 = 0;
  if ( a3 )
  {
    Head = a1->Private.Head;
    if ( !a1->Private.ValidCounts )
    {
      v14 = 0;
      v15 = 0;
      v16 = 0;
      v17 = a1->Private.Head;
      if ( Head )
      {
        do
        {
          ByteCount = v17->ByteCount;
          v14 += ByteCount;
          if ( (_DWORD)ByteCount )
            v19 = ((unsigned __int64)((LODWORD(v17->StartVa) + v17->ByteOffset) & 0xFFF) + ByteCount + 4095) >> 12;
          else
            LODWORD(v19) = 1;
          v17 = v17->Next;
          v15 += v19;
          ++v16;
        }
        while ( v17 );
      }
      a1->Private.Count = v16;
      a1->Private.TotalLength = v14;
      a1->Private.PhysicalCount = v15;
      a1->Private.ValidCounts = 1;
    }
    if ( a1->Private.Count )
    {
      v10 = (char *)((Head->MdlFlags & 5) != 0
                   ? Head->MappedSystemVa
                   : MmMapLockedPagesSpecifyCache(Head, 0, MmCached, 0LL, 0, 0x40000010u));
      v11 = Head->ByteCount;
      if ( v10 )
      {
        if ( a3 )
        {
          do
          {
            if ( v11 )
            {
              if ( !v5 )
                goto LABEL_10;
              if ( v5 <= v11 )
              {
                v10 += v5;
                v20 = 0;
                v11 -= v5;
LABEL_10:
                v12 = v11;
                if ( v11 > a3 - v6 )
                  v12 = a3 - v6;
                v13 = v12;
                memmove(a4, v10, v12);
                a4 += v13;
                v10 += v13;
                v6 += v13;
                v11 -= v13;
                v5 = v20;
                continue;
              }
              v5 -= v11;
              v20 = v5;
              v11 = 0;
            }
            else
            {
              Head = Head->Next;
              if ( !Head )
                break;
              v10 = (char *)((Head->MdlFlags & 5) != 0
                           ? Head->MappedSystemVa
                           : MmMapLockedPagesSpecifyCache(Head, 0, MmCached, 0LL, 0, 0x40000010u));
              if ( !v10 )
                break;
              v11 = Head->ByteCount;
            }
          }
          while ( v6 < a3 );
        }
        *a5 = v6;
      }
    }
  }
}
