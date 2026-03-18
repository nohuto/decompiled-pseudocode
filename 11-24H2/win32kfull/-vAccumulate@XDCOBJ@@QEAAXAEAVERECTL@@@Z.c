/*
 * XREFs of ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1400D245C
 * Callers:
 *     GreAlphaBlend @ 0x140010F88 (GreAlphaBlend.c)
 *     ?GrepMaskBltDevLocked@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKAEAVDEVLOCKBLTOBJ@@AEAVBLTRECORD@@PEAVSURFACE@@@Z @ 0x1400C2F30 (-GrepMaskBltDevLocked@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKAEAVDEVLOCKBLTOBJ@@AEAVBLTRECOR.c)
 *     ?GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z @ 0x1400C3880 (-GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z.c)
 *     ?GrepSetDIBitsToDeviceInternalImpl@@YAHAEAVXDCOBJ@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x1400C5BA4 (-GrepSetDIBitsToDeviceInternalImpl@@YAHAEAVXDCOBJ@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@K.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1400C95C8 (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     ?GrepRectBlt@@YAHAEAVXDCOBJ@@PEAVERECTL@@@Z @ 0x1400D0464 (-GrepRectBlt@@YAHAEAVXDCOBJ@@PEAVERECTL@@@Z.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400D0DEC (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z @ 0x1400D2508 (-bStretch@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z.c)
 *     ?EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1400D3F84 (-EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     GreFillRgn @ 0x1400E2680 (GreFillRgn.c)
 *     GreFrameRgn @ 0x1400E2CD4 (GreFrameRgn.c)
 *     ?GrepRectangle@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1400E69C0 (-GrepRectangle@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     NtGdiExtFloodFill @ 0x14015AE80 (NtGdiExtFloodFill.c)
 *     ?GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z @ 0x1401A37F4 (-GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z.c)
 *     DxgkEngAccumD3DPresentBounds @ 0x1401D3410 (DxgkEngAccumD3DPresentBounds.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0KE@Z @ 0x1401EFD2C (-bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0KE@Z.c)
 *     ?GrepInvertRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z @ 0x140202788 (-GrepInvertRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z.c)
 *     GreDrawStream @ 0x14025D364 (GreDrawStream.c)
 *     ?GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z @ 0x1403050D8 (-GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z.c)
 *     NtGdiUpdateColors @ 0x14030F8B0 (NtGdiUpdateColors.c)
 * Callees:
 *     <none>
 */

void __fastcall XDCOBJ::vAccumulate(XDCOBJ *this, struct ERECTL *a2)
{
  _DWORD *v2; // r8
  int v3; // eax
  int v4; // eax
  int v5; // eax
  _DWORD *v6; // rcx
  int v7; // eax
  int v8; // eax
  int v9; // eax

  v2 = *(_DWORD **)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 36LL) & 0x20) != 0 )
  {
    if ( *(_DWORD *)a2 < v2[266] )
      v2[266] = *(_DWORD *)a2;
    v3 = *((_DWORD *)a2 + 1);
    if ( v3 < v2[267] )
      v2[267] = v3;
    v4 = *((_DWORD *)a2 + 2);
    if ( v4 > v2[268] )
      v2[268] = v4;
    v5 = *((_DWORD *)a2 + 3);
    if ( v5 > v2[269] )
      v2[269] = v5;
  }
  v6 = *(_DWORD **)this;
  if ( (v6[9] & 0x80u) != 0 )
  {
    if ( *(_DWORD *)a2 < v6[274] )
      v6[274] = *(_DWORD *)a2;
    v7 = *((_DWORD *)a2 + 1);
    if ( v7 < v6[275] )
      v6[275] = v7;
    v8 = *((_DWORD *)a2 + 2);
    if ( v8 > v6[276] )
      v6[276] = v8;
    v9 = *((_DWORD *)a2 + 3);
    if ( v9 > v6[277] )
      v6[277] = v9;
  }
}
