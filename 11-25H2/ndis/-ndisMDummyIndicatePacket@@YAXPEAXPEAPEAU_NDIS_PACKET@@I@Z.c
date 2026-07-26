/*
 * XREFs of ?ndisMDummyIndicatePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400B8E00
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x14006C3F0 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x14006D530 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMDummyIndicatePacket(_QWORD *a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  __int64 v5; // rsi
  struct _NDIS_PACKET *v6; // rcx
  struct _NDIS_PACKET *v7; // r10
  __int64 v8; // r11
  _MDL *Head; // rcx
  unsigned int ByteCount; // r8d
  struct _MDL *i; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  void (__fastcall *v16)(_QWORD, struct _NDIS_PACKET *); // r8
  struct _NDIS_STACK_RESERVED *v17; // rax
  int v18; // ecx
  struct _NDIS_STACK_RESERVED *v19; // [rsp+30h] [rbp+8h] BYREF

  if ( a3 )
  {
    v19 = 0LL;
    v5 = a3;
    do
    {
      v6 = *a2;
      ++*(_DWORD *)&v6[-1].ProtocolReserved[4];
      NDIS_STACK_RESERVED_FROM_PACKET(v6, &v19);
      Head = v7->Private.Head;
      ByteCount = Head->ByteCount;
      for ( i = Head->Next; i; i = i->Next )
        ByteCount += i->ByteCount;
      if ( (v7->Private.NdisPacketFlags & 2) == 0 )
      {
        v12 = a1[394];
        if ( v12 )
        {
          v13 = 112LL * KeGetPcr()->Prcb.Number;
          ++*(_QWORD *)(v12 + v13 + 32);
        }
        v14 = a1[394];
        if ( v14 )
        {
          v15 = 112LL * KeGetPcr()->Prcb.Number;
          *(__m128i *)(v15 + v14) = _mm_add_epi64(
                                      _mm_unpacklo_epi32(
                                        _mm_unpacklo_epi64(
                                          _mm_unpacklo_epi32(_mm_cvtsi32_si128(ByteCount), _mm_cvtsi32_si128(ByteCount)),
                                          (__m128i)_xmm),
                                        (__m128i)0LL),
                                      _mm_loadu_si128((const __m128i *)(v15 + v14)));
        }
      }
      if ( *(_DWORD *)(v8 + 32) == -1073741670 )
      {
        --*(_DWORD *)&v7[-1].ProtocolReserved[4];
      }
      else if ( (a1[15] & 0x40000) != 0 )
      {
        v16 = *(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(a1[470] + 224LL);
        v17 = v19;
        *(_DWORD *)(v8 + 32) = 259;
        *(_QWORD *)v17 = 0LL;
        LODWORD(v17) = v7[-1].Reserved[1];
        v18 = *(_DWORD *)&v7[-1].ProtocolReserved[4] - 1;
        *(_DWORD *)&v7[-1].ProtocolReserved[4] = v18;
        if ( ((unsigned __int8)v17 & 1) != 0 && v18 == -1 )
          NDIS_FREE_XFER_DATA_PACKET(v7);
        else
          v16(a1[3], v7);
      }
      else
      {
        --*(_DWORD *)&v7[-1].ProtocolReserved[4];
        *(_DWORD *)(v8 + 32) = 0;
      }
      ++a2;
      --v5;
    }
    while ( v5 );
  }
}
