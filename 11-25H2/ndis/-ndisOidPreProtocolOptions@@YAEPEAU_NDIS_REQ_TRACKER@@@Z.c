/*
 * XREFs of ?ndisOidPreProtocolOptions@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400C2A20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMiniportFromReqTracker@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z @ 0x14005CA10 (-GetMiniportFromReqTracker@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z.c)
 */

bool __fastcall ndisOidPreProtocolOptions(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  char v3; // bl
  struct _NDIS_MINIPORT_BLOCK *MiniportFromReqTracker; // rax
  int v5; // ecx
  struct _NDIS_MINIPORT_BLOCK *v6; // r15
  __int64 v8; // rbp
  _DWORD *v9; // r14
  KIRQL v10; // cl

  v1 = *((_QWORD *)a1 + 4);
  v3 = 0;
  MiniportFromReqTracker = GetMiniportFromReqTracker(a1);
  v5 = *(_DWORD *)(v1 + 4);
  v6 = MiniportFromReqTracker;
  if ( v5 != 1 || *(_QWORD *)(v1 + 40) && *(_DWORD *)(v1 + 48) >= 4u )
  {
    v8 = *((_QWORD *)a1 + 3);
    if ( v8 && v5 == 1 && *(_DWORD *)(v1 + 32) == 65810 )
    {
      v9 = *(_DWORD **)(v1 + 40);
      v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 232));
      if ( (*v9 & 4) != 0 )
      {
        *v9 &= ~4u;
        *(_DWORD *)(v8 + 224) |= 8u;
      }
      if ( (*v9 & 2) != 0 && (v6->MacOptions & 8) != 0 )
      {
        *v9 &= ~2u;
        *(_DWORD *)(v8 + 224) |= 2u;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 232), v10);
      *(_DWORD *)(v1 + 52) = 4;
    }
    if ( *(_QWORD *)a1 )
      return v6->MajorNdisVersion >= 6u;
    return v3;
  }
  else
  {
    *((_DWORD *)a1 + 10) = -1073741811;
    return 1;
  }
}
