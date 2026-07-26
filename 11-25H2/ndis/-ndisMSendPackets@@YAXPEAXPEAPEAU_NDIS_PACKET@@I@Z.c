/*
 * XREFs of ?ndisMSendPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400DF710
 * Callers:
 *     ?ndisMSend@@YAHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1400DF640 (-ndisMSend@@YAHPEAXPEAU_NDIS_PACKET@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140025750 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x14005AF00 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x14006D530 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMSendPackets(_QWORD *a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  unsigned int v3; // r14d
  __int64 v4; // rbp
  unsigned int v5; // edi
  struct _NDIS_PACKET **v6; // r12
  struct _NDIS_PACKET **v8; // r15
  struct _NDIS_PACKET *v9; // rsi
  _MDL *Head; // rbx
  PVOID MappedSystemVa; // rax
  __int64 v12; // rbx
  struct _NDIS_STACK_RESERVED *v13; // [rsp+70h] [rbp+8h] BYREF
  __int64 v14; // [rsp+78h] [rbp+10h]
  KIRQL NewIrql; // [rsp+80h] [rbp+18h]

  if ( a3 )
  {
    v13 = 0LL;
    v3 = 0;
    v4 = a1[2];
    v5 = 0;
    v6 = a2;
    v14 = a3;
    v8 = a2;
    do
    {
      v9 = *v8;
      ++*(_DWORD *)&v9[-1].ProtocolReserved[4];
      NDIS_STACK_RESERVED_FROM_PACKET(v9, &v13);
      *(_QWORD *)v13 = a1;
      Head = v9->Private.Head;
      if ( Head )
      {
        if ( (*(_BYTE *)(v4 + 928) & 2) == 0 )
        {
          v3 = 0;
          while ( Head )
          {
            if ( (Head->MdlFlags & 5) != 0 )
              MappedSystemVa = Head->MappedSystemVa;
            else
              MappedSystemVa = MmMapLockedPagesSpecifyCache(Head, 0, MmCached, 0LL, 0, 0x40000020u);
            if ( !MappedSystemVa )
            {
              v3 = -1073741670;
              break;
            }
            Head = Head->Next;
          }
        }
      }
      else
      {
        v3 = -1073741823;
      }
      v9->Private.NdisPacketFlags &= ~4u;
      ndisMReferenceOpen((__int64)a1, 9u);
      if ( v3 )
      {
        NewIrql = KfRaiseIrql(2u);
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC((struct _NDIS_MINIPORT_BLOCK *)v4);
        v12 = *(_QWORD *)v13;
        *(_QWORD *)v13 = 1297040184LL;
        *(_QWORD *)(v4 + 520) = 0LL;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v4 + 96));
        *((_DWORD *)v13 + 2) = 0;
        v9->Private.NdisPacketFlags &= 0xC0u;
        (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *, _QWORD))(v12 + 112))(v12, v9, v3);
        if ( NewIrql != 2 )
          KeLowerIrql(NewIrql);
        if ( v5 )
        {
          (*(void (__fastcall **)(__int64, struct _NDIS_PACKET **, _QWORD))(v4 + 2024))(v4, v6, v5);
          v5 = 0;
          v6 = v8 + 1;
        }
      }
      else
      {
        ++v5;
      }
      ++v8;
      --v14;
    }
    while ( v14 );
    if ( v5 )
      (*(void (__fastcall **)(__int64, struct _NDIS_PACKET **, _QWORD))(v4 + 2024))(v4, v6, v5);
  }
}
