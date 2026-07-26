/*
 * XREFs of ?ndisSendCompleteWithPause@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x140004E70
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140006B10 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisSendCompleteWithPause(void *a1, struct _NDIS_PACKET *a2, unsigned int a3)
{
  unsigned int v4; // edx
  bool v5; // bp
  __int64 v8; // rcx
  KIRQL v9; // al
  int v10; // edx
  bool v11; // zf
  __int64 v12; // rdx

  v4 = *(_DWORD *)&a2[-1].ProtocolReserved[4];
  v5 = 0;
  if ( v4 >= ndisPacketStackSize )
    v8 = 24LL;
  else
    v8 = (__int64)&(&a2->Private.Head)[6 * (v4 - (unsigned __int64)ndisPacketStackSize)];
  *(_DWORD *)&a2[-1].ProtocolReserved[4] = v4 - 1;
  *(_DWORD *)v8 = 0;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 78);
  v10 = *((_DWORD *)a1 + 161) - 1;
  *((_BYTE *)a1 + 632) = v9;
  v11 = *((_DWORD *)a1 + 160) == 1;
  *((_DWORD *)a1 + 161) = v10;
  if ( v11 )
    v5 = v10 == 0;
  KeReleaseSpinLock((PKSPIN_LOCK)a1 + 78, v9);
  (*((void (__fastcall **)(_QWORD, struct _NDIS_PACKET *, _QWORD))a1 + 85))(*((_QWORD *)a1 + 66), a2, a3);
  if ( v5 )
    KeSetEvent((PRKEVENT)a1 + 27, 0, 0);
  LOBYTE(v12) = 9;
  ndisMDereferenceOpenUnlocked(a1, v12);
}
