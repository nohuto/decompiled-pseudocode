/*
 * XREFs of ?ndisMProcessSGList@@YAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z @ 0x1400DADE0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1400529B0 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ?ndisMSendCompleteX@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x140089F90 (-ndisMSendCompleteX@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMProcessSGList(
        struct _DEVICE_OBJECT *a1,
        struct _IRP *a2,
        struct _SCATTER_GATHER_LIST *a3,
        struct _NDIS_PACKET *a4)
{
  __int64 v4; // r10
  _BYTE *v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned int v8; // eax
  struct _NDIS_PACKET *v9; // [rsp+40h] [rbp+18h] BYREF
  struct _NDIS_STACK_RESERVED *v10; // [rsp+48h] [rbp+20h] BYREF

  v10 = 0LL;
  v9 = a4;
  *(unsigned __int64 *)((char *)a4->Reserved + a4->Private.NdisPacketOobOffset) = (unsigned __int64)a3;
  NDIS_STACK_RESERVED_FROM_PACKET(v9, &v10);
  v5 = *(_BYTE **)v10;
  if ( **(_BYTE **)v10 == 5 )
    v6 = *((_QWORD *)v5 + 4);
  else
    v6 = *((_QWORD *)v5 + 2);
  *(_BYTE *)(v4 + 41) |= 0x10u;
  if ( (*(_DWORD *)(v6 + 120) & 0x20000) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET **, __int64))(*((_QWORD *)v10 + 1) + 208LL))(
      *(_QWORD *)(*((_QWORD *)v10 + 1) + 200LL),
      &v9,
      1LL);
  }
  else
  {
    v7 = *(_QWORD *)(v6 + 24);
    if ( (*(_BYTE *)(v6 + 928) & 1) != 0 )
    {
      (*(void (__fastcall **)(__int64, struct _NDIS_PACKET **, __int64))(v6 + 1808))(v7, &v9, 1LL);
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(__int64, struct _NDIS_PACKET *, _QWORD))(*(_QWORD *)(v6 + 3760) + 200LL))(
             v7,
             v9,
             v9->Private.Flags);
      if ( v8 != 259 )
        ndisMSendCompleteX((struct _NDIS_MINIPORT_BLOCK *)v6, v9, v8);
    }
  }
}
