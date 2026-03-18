/*
 * XREFs of ?ResetDAM@DripsBlockerTrackingHelper@@IEAAXXZ @ 0x1402ECC70
 * Callers:
 *     ?EngageDFx@DripsBlockerTrackingHelper@@QEAAX_N@Z @ 0x1401C6440 (-EngageDFx@DripsBlockerTrackingHelper@@QEAAX_N@Z.c)
 *     ?SetPDCIdleResiliencyEngaged@DXGGLOBAL@@QEAAXH@Z @ 0x1402EC03C (-SetPDCIdleResiliencyEngaged@DXGGLOBAL@@QEAAXH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DripsBlockerTrackingHelper::ResetDAM(DripsBlockerTrackingHelper *this)
{
  _DWORD *v1; // rcx
  __int64 v2; // rax

  v1 = (_DWORD *)((char *)this + 108);
  v2 = 64LL;
  do
  {
    if ( *((_BYTE *)v1 - 4) )
      *v1 = 0;
    v1 += 1180;
    --v2;
  }
  while ( v2 );
}
