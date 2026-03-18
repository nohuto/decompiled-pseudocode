/*
 * XREFs of ?vStrMirror04@stretch@@YAXPEAVSURFACE@@@Z @ 0x140313080
 * Callers:
 *     GreAlphaBlend @ 0x140010F88 (GreAlphaBlend.c)
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x140136784 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z @ 0x1401A37F4 (-GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1402252C4 (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     <none>
 */

void __fastcall stretch::vStrMirror04(stretch *this, struct SURFACE *a2)
{
  unsigned int *v2; // r8
  stretch *v3; // rsi
  int v4; // ecx
  int v5; // edx
  int v6; // r9d
  unsigned int v7; // r12d
  int v8; // ebx
  __int64 v9; // r10
  int v10; // ebp
  int v11; // edi
  unsigned int *v12; // r15
  int *v13; // r14
  int v14; // r13d
  __int64 v15; // rsi
  int v16; // r9d
  unsigned int v17; // r11d
  __int64 v18; // [rsp+0h] [rbp-68h]
  __int64 v19; // [rsp+8h] [rbp-60h]
  unsigned int *v20; // [rsp+10h] [rbp-58h]
  int v22; // [rsp+78h] [rbp+10h]
  int i; // [rsp+80h] [rbp+18h]
  int v24; // [rsp+88h] [rbp+20h]

  v2 = (unsigned int *)*((_QWORD *)this + 10);
  v3 = this;
  v4 = *((_DWORD *)this + 14);
  v20 = v2;
  v5 = 0;
  v6 = v4 / 2;
  v24 = v4 / 2;
  for ( i = 0; v5 < *((_DWORD *)v3 + 15); v20 = v2 )
  {
    v7 = *v2;
    v8 = (v4 - 1) >> 3;
    v9 = 0LL;
    v22 = 0;
    v10 = 0;
    v11 = (v4 - 1) & 7;
    v18 = 0LL;
    v12 = v2;
    v13 = (int *)&v2[v8];
    v14 = *v13;
    if ( v6 > 0 )
    {
      v19 = (unsigned int)v6;
      v15 = (unsigned int)v11;
      do
      {
        if ( v10 == v8 )
        {
          v7 = ((v7 & dword_140361A58[v9]) >> dword_140361A38[v9] << dword_140361A38[v15]) | ~dword_140361A58[v15] & (v7 & ~dword_140361A58[v9] | ((v7 & dword_140361A58[v15]) >> dword_140361A38[v15] << dword_140361A38[v9]));
        }
        else
        {
          v16 = dword_140361A58[v9];
          v17 = (v7 & v16) >> dword_140361A38[v9];
          v7 = v7 & ~v16 | ((v14 & (unsigned int)dword_140361A58[v15]) >> dword_140361A38[v15] << dword_140361A38[v9]);
          v14 = (v17 << dword_140361A38[v15]) | ~dword_140361A58[v15] & v14;
        }
        --v11;
        v9 = v18 + 1;
        ++v22;
        --v15;
        ++v18;
        if ( (v22 & 8) != 0 )
        {
          *v12 = v7;
          ++v10;
          ++v12;
          if ( v10 == v8 )
            *v13 = v14;
          v7 = *v12;
          v9 = 0LL;
          v22 = 0;
          v18 = 0LL;
        }
        if ( v11 < 0 )
        {
          *v13 = v14;
          --v8;
          --v13;
          if ( v8 != v10 )
            v14 = *v13;
          v11 = 7;
          v15 = 7LL;
        }
        *v12 = v7;
        if ( v10 != v8 )
          *v13 = v14;
        --v19;
      }
      while ( v19 );
      v3 = this;
      v2 = v20;
      v5 = i;
      v6 = v24;
      v4 = *((_DWORD *)this + 14);
    }
    ++v5;
    v2 = (unsigned int *)((char *)v2 + *((int *)v3 + 22));
    i = v5;
  }
}
