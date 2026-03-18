/*
 * XREFs of ?dwSetLayout@DC@@QEAAKJK@Z @ 0x14000F240
 * Callers:
 *     GreSetLayout @ 0x14000DFB0 (GreSetLayout.c)
 *     ?GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z @ 0x14000E350 (-GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z.c)
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140036B00 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 *     _GetDCEx @ 0x140099850 (_GetDCEx.c)
 * Callees:
 *     ?MirrorWindowOrg@DC@@QEAAXXZ @ 0x14000F358 (-MirrorWindowOrg@DC@@QEAAXXZ.c)
 */

__int64 __fastcall DC::dwSetLayout(DC *this, int a2, int a3)
{
  __int64 v3; // r9
  DC *v4; // r10
  unsigned int v5; // r11d
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // edx
  int v9; // eax
  unsigned int v10; // edx
  __int64 v12; // rcx
  __int64 v13; // [rsp+30h] [rbp+8h]
  __int64 v14; // [rsp+30h] [rbp+8h]
  __int64 v15; // [rsp+48h] [rbp+20h]

  v3 = *((_QWORD *)this + 122);
  v4 = this;
  v5 = *(_DWORD *)(v3 + 108);
  *(_DWORD *)(v3 + 108) = a3;
  if ( (((unsigned __int8)a3 ^ (unsigned __int8)v5) & 7) != 0 )
  {
    v6 = *((_QWORD *)this + 122);
    v13 = *(_QWORD *)(v6 + 316);
    v15 = *(_QWORD *)(v6 + 324);
    if ( (a3 & 1) != 0 )
      *(_DWORD *)(v6 + 104) = 8;
    LODWORD(v13) = -(int)v13;
    LODWORD(v15) = -(int)v15;
    *(_QWORD *)(*((_QWORD *)v4 + 122) + 316LL) = v13;
    *(_QWORD *)(*((_QWORD *)v4 + 122) + 324LL) = v15;
    if ( a2 == -1 )
    {
      DC::MirrorWindowOrg(v4);
    }
    else
    {
      v12 = *((_QWORD *)v4 + 122);
      HIDWORD(v14) = HIDWORD(*(_QWORD *)(v12 + 308));
      LODWORD(v14) = a2 - *(_QWORD *)(v12 + 308);
      *(_QWORD *)(v12 + 308) = v14;
    }
    v7 = *((_QWORD *)v4 + 122);
    if ( (*(_BYTE *)(v7 + 272) & 6) != 6 )
    {
      *(_DWORD *)(v7 + 272) ^= 2u;
      v7 = *((_QWORD *)v4 + 122);
    }
    v8 = *((_DWORD *)v4 + 62);
    v9 = v8 | 4;
    v10 = v8 & 0xFFFFFFFB;
    if ( (*((_DWORD *)v4 + 62) & 4) == 0 )
      v10 = v9;
    *((_DWORD *)v4 + 62) = v10;
    *(_DWORD *)(v7 + 340) |= 0x4090u;
  }
  return v5;
}
