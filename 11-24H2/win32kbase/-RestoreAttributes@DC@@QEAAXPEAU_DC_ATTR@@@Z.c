/*
 * XREFs of ?RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z @ 0x140034A80
 * Callers:
 *     ?SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z @ 0x1400346B8 (-SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x140034798 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1400349F0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DC::RestoreAttributes(DC *this, struct _DC_ATTR *a2)
{
  _OWORD *v4; // rbx
  _OWORD *v5; // rax
  _OWORD *v6; // rbx

  ProbeForWrite(a2, 0x90uLL, 1u);
  this = (DC *)((char *)this + 544);
  *(_OWORD *)a2 = *(_OWORD *)this;
  *((_OWORD *)a2 + 1) = *((_OWORD *)this + 1);
  *((_OWORD *)a2 + 2) = *((_OWORD *)this + 2);
  *((_OWORD *)a2 + 3) = *((_OWORD *)this + 3);
  *((_OWORD *)a2 + 4) = *((_OWORD *)this + 4);
  *((_OWORD *)a2 + 5) = *((_OWORD *)this + 5);
  *((_OWORD *)a2 + 6) = *((_OWORD *)this + 6);
  *((_OWORD *)a2 + 7) = *((_OWORD *)this + 7);
  *((_OWORD *)a2 + 8) = *((_OWORD *)this + 8);
  v4 = (_OWORD *)((char *)a2 + 144);
  ProbeForWrite(v4, 0xD0uLL, 1u);
  v5 = (_OWORD *)((char *)this + 144);
  if ( !this )
    v5 = 0LL;
  *v4 = *v5;
  v4[1] = v5[1];
  v4[2] = v5[2];
  v4[3] = v5[3];
  v4[4] = v5[4];
  v4[5] = v5[5];
  v4[6] = v5[6];
  v6 = v4 + 8;
  *(v6 - 1) = v5[7];
  *v6 = v5[8];
  v6[1] = v5[9];
  v6[2] = v5[10];
  v6[3] = v5[11];
  v6[4] = v5[12];
}
