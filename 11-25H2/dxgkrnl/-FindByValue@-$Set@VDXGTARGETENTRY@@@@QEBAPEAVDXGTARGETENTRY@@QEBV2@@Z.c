/*
 * XREFs of ?FindByValue@?$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z @ 0x140050A40
 * Callers:
 *     ?Add@?$Set@VDXGTARGETENTRY@@@@QEAAEQEAVDXGTARGETENTRY@@@Z @ 0x140050988 (-Add@-$Set@VDXGTARGETENTRY@@@@QEAAEQEAVDXGTARGETENTRY@@@Z.c)
 *     ?Remove@?$Set@VDXGTARGETENTRY@@@@QEAAPEAVDXGTARGETENTRY@@QEBV2@@Z @ 0x14005F338 (-Remove@-$Set@VDXGTARGETENTRY@@@@QEAAPEAVDXGTARGETENTRY@@QEBV2@@Z.c)
 *     ?TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z @ 0x1401C2F68 (-TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z.c)
 * Callees:
 *     ??9DXGTARGETENTRY@@QEBA_NAEBV0@@Z @ 0x1403CD1F0 (--9DXGTARGETENTRY@@QEBA_NAEBV0@@Z.c)
 */

__int64 __fastcall Set<DXGTARGETENTRY>::FindByValue(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v6; // rcx

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 == a1 + 24 )
    return 0LL;
  v2 = v1 - 8;
  while ( v2 )
  {
    if ( !(unsigned __int8)DXGTARGETENTRY::operator!=(v2) )
      break;
    v6 = *(_QWORD *)(v2 + 8);
    v2 = v6 - 8;
    if ( v6 == v4 )
      v2 = v3;
  }
  return v2;
}
