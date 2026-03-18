/*
 * XREFs of ?vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z @ 0x14026A020
 * Callers:
 *     ?bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0KE@Z @ 0x1401EFD2C (-bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0KE@Z.c)
 *     ?bCreateRegion@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@PEAU_POINTFIX@@@Z @ 0x1403057E0 (-bCreateRegion@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@PEAU_POINTFIX@@@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@AEAVSURFMEM@@1KK@Z @ 0x1403058F8 (-bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@AEAVSURFMEM@@1KK@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x140305B58 (-bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall BLTRECORD::vMirror(BLTRECORD *this, struct _POINTFIX *a2)
{
  FIX *p_y; // r8
  struct _POINTFIX *v3; // r9
  FIX *v5; // r11
  struct _POINTFIX *v6; // r10
  FIX *v7; // rbx
  FIX x; // ecx
  FIX v9; // eax
  FIX v10; // ecx
  FIX v11; // eax
  FIX v12; // ecx
  FIX y; // eax
  FIX v14; // ecx
  FIX v15; // ecx
  FIX v16; // eax
  FIX v17; // ecx
  FIX v18; // eax
  FIX v19; // ecx
  FIX v20; // eax
  FIX v21; // ecx

  p_y = &a2->y;
  v3 = a2 + 3;
  v5 = &a2[3].y;
  v6 = a2 + 1;
  v7 = &a2[1].y;
  if ( (*((_DWORD *)this + 49) & 8) != 0 )
  {
    x = v6->x;
    v6->x = a2->x;
    v9 = *p_y;
    a2->x = x;
    v10 = *v7;
    *v7 = v9;
    v11 = a2[2].x;
    *p_y = v10;
    v12 = v3->x;
    v3->x = v11;
    y = a2[2].y;
    a2[2].x = v12;
    v14 = *v5;
    *v5 = y;
    a2[2].y = v14;
  }
  if ( (*((_DWORD *)this + 49) & 0x10) != 0 )
  {
    v15 = a2[2].x;
    a2[2].x = a2->x;
    v16 = *p_y;
    a2->x = v15;
    v17 = a2[2].y;
    a2[2].y = v16;
    v18 = v6->x;
    *p_y = v17;
    v19 = v3->x;
    v3->x = v18;
    v20 = *v7;
    v6->x = v19;
    v21 = *v5;
    *v5 = v20;
    *v7 = v21;
  }
}
