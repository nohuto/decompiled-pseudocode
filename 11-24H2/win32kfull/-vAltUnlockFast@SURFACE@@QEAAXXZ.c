/*
 * XREFs of ?vAltUnlockFast@SURFACE@@QEAAXXZ @ 0x1401DD2B8
 * Callers:
 *     ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x140305B58 (-bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x140305FC8 (-bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SURFACE::vAltUnlockFast(SURFACE *this)
{
  if ( this )
    DEC_SHARE_REF_CNT(this);
}
