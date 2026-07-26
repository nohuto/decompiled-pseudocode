/*
 * XREFs of ?ndisCsResiliencyChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140065030
 * Callers:
 *     ndisCsResiliencyCallback @ 0x140064F10 (ndisCsResiliencyCallback.c)
 * Callees:
 *     ?ndisAoAcPauseRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x140064C20 (-ndisAoAcPauseRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisAoAcStartRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x140065980 (-ndisAoAcStartRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisCloseTimeInterval@@YAXPEA_K0@Z @ 0x140065B40 (-ndisCloseTimeInterval@@YAXPEA_K0@Z.c)
 */

void __fastcall ndisCsResiliencyChange(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned __int8 v1; // di
  struct _NDIS_MINIPORT_AOAC *AoAc; // rbx
  KIRQL v3; // al
  KIRQL v4; // r11
  int v5; // ecx

  v1 = ndisCsResiliency;
  AoAc = a1->AoAc;
  if ( (a1->Flags & 0x80u) == 0 )
  {
    v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1->AoAc);
    *((_BYTE *)AoAc + 1081) = v1;
    v4 = v3;
    if ( v1 )
    {
      v5 = *((_DWORD *)AoAc + 94);
      if ( (v5 & 0xFFFFFFFC) == 0 && v5 != 2 )
      {
        *((_QWORD *)AoAc + 105) = MEMORY[0xFFFFF78000000008];
        ndisAoAcStartRefTimeStats(AoAc);
      }
    }
    else
    {
      ndisAoAcPauseRefTimeStats(AoAc);
      ndisCloseTimeInterval((unsigned __int64 *)AoAc + 105, (unsigned __int64 *)AoAc + 103);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v4);
  }
}
