/*
 * XREFs of ?ndisSendPacketsWithPause@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x14005AD70
 * Callers:
 *     ?ndisSendWithPause@@YAHPEAXPEAU_NDIS_PACKET@@@Z @ 0x14005AD40 (-ndisSendWithPause@@YAHPEAXPEAU_NDIS_PACKET@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140025750 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x14005AF00 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall ndisSendPacketsWithPause(void *a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  __int64 v4; // rbx
  struct _NDIS_PACKET **v5; // r14
  KIRQL v6; // al
  int v7; // ecx
  unsigned int v8; // r13d
  unsigned int v9; // ebp
  struct _NDIS_PACKET **v10; // r15
  __int64 v11; // rdx
  __int64 v12; // r12
  struct _NDIS_PACKET *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // r14
  _MDL *Head; // rdi
  bool v17; // bp
  PVOID MappedSystemVa; // rax
  __int64 v19; // rdi
  KIRQL v20; // [rsp+70h] [rbp+8h]
  struct _NDIS_PACKET **v21; // [rsp+78h] [rbp+10h]
  struct _NDIS_MINIPORT_BLOCK *v22; // [rsp+88h] [rbp+20h]

  v21 = a2;
  v22 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)a1 + 2);
  v4 = a3;
  v5 = a2;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 78);
  v7 = *((_DWORD *)a1 + 160);
  *((_BYTE *)a1 + 632) = v6;
  if ( v7 == 2 )
  {
    *((_DWORD *)a1 + 161) += v4;
    KeReleaseSpinLock((PKSPIN_LOCK)a1 + 78, v6);
    v8 = 0;
    v9 = 0;
    v10 = v5;
    if ( !(_DWORD)v4 )
      return;
    v11 = 1LL;
    v12 = (unsigned int)v4;
    while ( 1 )
    {
      v13 = *v10;
      v14 = (unsigned int)++*(_DWORD *)&v13[-1].ProtocolReserved[4];
      v15 = (unsigned int)v14 >= ndisPacketStackSize ? 16LL : (__int64)v13 + 48 * (v14 - ndisPacketStackSize);
      *(_QWORD *)v15 = a1;
      Head = v13->Private.Head;
      if ( !Head )
        break;
      if ( (v22->SendFlags & 2) == 0 )
      {
        v8 = 0;
        while ( Head )
        {
          if ( (Head->MdlFlags & 5) != 0 )
          {
            MappedSystemVa = Head->MappedSystemVa;
          }
          else
          {
            MappedSystemVa = MmMapLockedPagesSpecifyCache(Head, 0, MmCached, 0LL, 0, 0x40000020u);
            v11 = 1LL;
          }
          if ( !MappedSystemVa )
          {
            v13->Private.NdisPacketFlags &= ~4u;
            LOBYTE(v11) = 9;
            v8 = -1073741670;
            ndisMReferenceOpen(a1, v11);
            goto LABEL_27;
          }
          Head = Head->Next;
        }
      }
      v13->Private.NdisPacketFlags &= ~4u;
      LOBYTE(v11) = 9;
      ndisMReferenceOpen(a1, v11);
      if ( v8 )
        goto LABEL_27;
      ++v9;
LABEL_14:
      ++v10;
      v11 = 1LL;
      if ( !--v12 )
      {
        if ( v9 )
          v22->NextSendPacketsHandler(v22, v21, v9);
        return;
      }
    }
    v13->Private.NdisPacketFlags &= ~4u;
    LOBYTE(v11) = 9;
    v8 = -1073741823;
    ndisMReferenceOpen(a1, v11);
LABEL_27:
    v20 = KfRaiseIrql(2u);
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(v22);
    v19 = *(_QWORD *)v15;
    *(_QWORD *)v15 = 1297040183LL;
    v22->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&v22->Lock);
    *(_DWORD *)(v15 + 8) = 0;
    v13->Private.NdisPacketFlags &= 0xC0u;
    (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *, _QWORD))(v19 + 112))(v19, v13, v8);
    if ( v20 != 2 )
      KeLowerIrql(v20);
    if ( v9 )
    {
      v22->NextSendPacketsHandler(v22, v21, v9);
      v9 = 0;
      v21 = v10 + 1;
    }
    goto LABEL_14;
  }
  v17 = 0;
  if ( v7 == 1 )
    v17 = *((_DWORD *)a1 + 161) == 0;
  KeReleaseSpinLock((PKSPIN_LOCK)a1 + 78, v6);
  if ( (_DWORD)v4 )
  {
    do
    {
      (*((void (__fastcall **)(_QWORD, _QWORD, __int64))a1 + 85))(*((_QWORD *)a1 + 66), *v5++, 3223519274LL);
      --v4;
    }
    while ( v4 );
  }
  if ( v17 )
    KeSetEvent((PRKEVENT)a1 + 27, 0, 0);
}
