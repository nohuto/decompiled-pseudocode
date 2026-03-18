/*
 * XREFs of ?UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180068430
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800279C0 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_N.c)
 *     ??9@YA_NAEBUtagRECT@@0@Z @ 0x180068578 (--9@YA_NAEBUtagRECT@@0@Z.c)
 *     ?CalcDisplayRestriction@CBitmapRealization@@KA?AVDisplayId@@_NPEAUHMONITOR__@@@Z @ 0x1800685A4 (-CalcDisplayRestriction@CBitmapRealization@@KA-AVDisplayId@@_NPEAUHMONITOR__@@@Z.c)
 */

void __fastcall CDxHandleYUVBitmapRealization::UpdateAttributes(
        CDxHandleYUVBitmapRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2)
{
  const struct CSM_BUFFER_ATTRIBUTES *v2; // r9
  char v3; // bl
  __int64 v4; // rdx
  int v5; // eax
  CDxHandleYUVBitmapRealization *v6; // r11
  _OWORD *v7; // rax
  __int64 v8; // r11
  int *v9; // rax
  int v10; // ecx
  int v11; // r10d
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF
  char v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = a2;
  v3 = 0;
  v4 = *((_DWORD *)a2 + 34) & 1;
  v5 = *((_DWORD *)this - 22) & 1;
  v6 = this;
  v12 = *(_OWORD *)((char *)this - 172);
  if ( ((_DWORD)v4 != v5 || *((_QWORD *)v2 + 1) != *((_QWORD *)this - 27))
    && (v9 = (int *)CBitmapRealization::CalcDisplayRestriction(&v13, v4, *((_QWORD *)v2 + 1), v2, v12),
        v10 = *v9,
        *((_DWORD *)v6 - 8) = *v9,
        v11 != v10)
    || *((_DWORD *)v2 + 17) != *((_DWORD *)v6 - 39)
    || *((_DWORD *)v2 + 28) != *((_DWORD *)v6 - 28)
    || *((_DWORD *)v2 + 29) != *((_DWORD *)v6 - 27)
    || (unsigned __int8)operator!=((char *)v2 + 120, (char *)v6 - 104) )
  {
    v3 = 1;
  }
  v7 = (_OWORD *)((char *)v6 - 224);
  *v7 = *(_OWORD *)v2;
  v7[1] = *((_OWORD *)v2 + 1);
  v7[2] = *((_OWORD *)v2 + 2);
  v7[3] = *((_OWORD *)v2 + 3);
  v7[4] = *((_OWORD *)v2 + 4);
  v7[5] = *((_OWORD *)v2 + 5);
  v7[6] = *((_OWORD *)v2 + 6);
  v7[7] = *((_OWORD *)v2 + 7);
  v7[8] = *((_OWORD *)v2 + 8);
  if ( !TMilRect<int,tagRECT,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::IsEquivalentTo(&v12, (_DWORD *)v6 - 43) )
  {
    *(_BYTE *)(v8 - 8) = 0;
    goto LABEL_13;
  }
  if ( v3 )
LABEL_13:
    CBitmapRealization::InvalidateDecodeBitmap((CBitmapRealization *)(v8 - 328), 0);
}
