/*
 * XREFs of ?vStrMirror16@stretch@@YAXPEAVSURFACE@@@Z @ 0x140313320
 * Callers:
 *     GreAlphaBlend @ 0x140010F88 (GreAlphaBlend.c)
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x140136784 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z @ 0x1401A37F4 (-GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1402252C4 (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     <none>
 */

void __fastcall stretch::vStrMirror16(stretch *this, struct SURFACE *a2)
{
  int v2; // r8d
  __int16 *v3; // r11
  int v4; // ebx
  __int64 i; // rdi
  __int16 *v7; // rdx
  __int16 *v8; // r10
  __int64 v9; // r8
  __int16 v10; // cx

  v2 = *((_DWORD *)this + 14);
  v3 = (__int16 *)*((_QWORD *)this + 10);
  v4 = 0;
  for ( i = (unsigned int)(v2 / 2); v4 < *((_DWORD *)this + 15); v3 = (__int16 *)((char *)v3 + *((int *)this + 22)) )
  {
    v7 = v3;
    v8 = &v3[v2 - 1];
    if ( (int)i > 0 )
    {
      v9 = i;
      do
      {
        v10 = *v7;
        *v7++ = *v8;
        *v8-- = v10;
        --v9;
      }
      while ( v9 );
      v2 = *((_DWORD *)this + 14);
    }
    ++v4;
  }
}
