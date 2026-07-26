/*
 * XREFs of ?ndisAoAcCompleteQueuedIrps@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x140064460
 * Callers:
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x140017F50 (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 *     ?ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1400642C0 (-ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1400647B0 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisAoAcCompleteQueuedIrps(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  struct _NDIS_MINIPORT_AOAC *AoAc; // rbx
  KIRQL v4; // al
  __int128 *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  _IRP *v8; // rcx
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  AoAc = a1->AoAc;
  v9 = 0LL;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  v5 = (__int128 *)((char *)AoAc + 32);
  if ( *(__int128 **)v5 == v5 )
  {
    *((_QWORD *)&v9 + 1) = &v9;
    *(_QWORD *)&v9 = &v9;
  }
  else
  {
    v9 = *v5;
    *((_QWORD *)AoAc + 5) = (char *)AoAc + 32;
    *(_QWORD *)v5 = v5;
    *(_QWORD *)(v9 + 8) = &v9;
    **((_QWORD **)&v9 + 1) = &v9;
  }
  *((_DWORD *)AoAc + 12) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v4);
  while ( 1 )
  {
    v6 = v9;
    if ( (__int128 *)v9 == &v9 )
      break;
    if ( *(__int128 **)(v9 + 8) != &v9 || (v7 = *(_QWORD *)v9, *(_QWORD *)(*(_QWORD *)v9 + 8LL) != (_QWORD)v9) )
      __fastfail(3u);
    *(_QWORD *)&v9 = *(_QWORD *)v9;
    *(_QWORD *)(v7 + 8) = &v9;
    v8 = (_IRP *)(v6 - 168);
    v8->IoStatus.Status = a2;
    IofCompleteRequest(v8, 0);
  }
}
