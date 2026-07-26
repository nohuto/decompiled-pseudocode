/*
 * XREFs of ?ndisAoAcPauseRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x14003B150
 * Callers:
 *     ?ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z @ 0x14003B070 (-ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z.c)
 *     ?ndisCsResiliencyChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x14005AA50 (-ndisCsResiliencyChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     ?ndisCloseTimeInterval@@YAXPEA_K0@Z @ 0x14003C010 (-ndisCloseTimeInterval@@YAXPEA_K0@Z.c)
 */

void __fastcall ndisAoAcPauseRefTimeStats(struct _NDIS_MINIPORT_AOAC *a1)
{
  struct _NDIS_MINIPORT_AOAC *v1; // r10
  _QWORD *v2; // r8
  unsigned int i; // r9d

  v1 = a1;
  v2 = (_QWORD *)((char *)a1 + 544);
  for ( i = 0; i < 0x11; ++i )
  {
    if ( *v2 )
      ndisCloseTimeInterval((unsigned __int64 *)v1 + 2 * i + 68, (unsigned __int64 *)v1 + 2 * i + 67);
    v2 += 2;
  }
}
