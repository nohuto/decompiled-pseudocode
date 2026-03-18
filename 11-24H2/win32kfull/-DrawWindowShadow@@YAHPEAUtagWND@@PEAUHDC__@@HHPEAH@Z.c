/*
 * XREFs of ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1400E4B00
 * Callers:
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x14009583C (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 * Callees:
 *     ?GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ @ 0x140031010 (-GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GreFillRgn @ 0x1400E2680 (GreFillRgn.c)
 *     GreFrameRgn @ 0x1400E2CD4 (GreFrameRgn.c)
 *     GreScaleRgnToDestLogPixel @ 0x14026BAB4 (GreScaleRgnToDestLogPixel.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall DrawWindowShadow(struct tagWND *this, HDC a2, int a3, int a4, int *a5)
{
  unsigned int v7; // r14d
  __int64 RectRgn; // rdi
  __int64 v9; // rax
  HRGN v10; // rsi
  HRGN ExplicitClipRgn; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // rdx
  unsigned __int8 *i; // r15
  HBRUSH SolidBrush; // rax
  HBRUSH v21; // r12
  HBRUSH StockObject; // rax
  HRGN v23; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // ecx
  int v30; // eax
  __int128 v33; // [rsp+38h] [rbp-18h] BYREF

  v7 = 0;
  v33 = *(_OWORD *)(*((_QWORD *)this + 5) + 88LL);
  RectRgn = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
  v9 = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
  v10 = (HRGN)v9;
  if ( RectRgn && v9 )
  {
    ExplicitClipRgn = tagWND::GetExplicitClipRgn(this);
    if ( ExplicitClipRgn )
    {
      SetRectRgnIndirect(RectRgn, &v33);
      GreCombineRgn(RectRgn, RectRgn, ExplicitClipRgn, 1LL);
      GreOffsetRgn(RectRgn, (unsigned int)-(int)v33, (unsigned int)-DWORD1(v33));
      v14 = 0;
    }
    else
    {
      v29 = -(int)v33;
      LODWORD(v33) = 0;
      v30 = HIDWORD(v33) - DWORD1(v33);
      DWORD1(v33) = 0;
      HIDWORD(v33) = v30;
      DWORD2(v33) += v29;
      GreSetRectRgn(RectRgn, 0LL, 0LL, DWORD2(v33), v30);
      v14 = 1;
    }
    *a5 = v14;
    if ( PtiCurrent(v13, v12)
      && *((_QWORD *)PtiCurrent(v16, v15) + 62)
      && (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent(v26, v25) + 62) + 8LL) + 64LL) & 1) != 0
      && (v27 = *((_QWORD *)this + 5), (*(_DWORD *)(v27 + 288) & 0x4000000F) == 0x40000000)
      && (v28 = *(unsigned __int16 *)(v27 + 284), (_WORD)v28 != 96) )
    {
      v7 = GreScaleRgnToDestLogPixel(v28, RectRgn);
      if ( !v7 )
        goto LABEL_16;
    }
    else
    {
      v7 = 1;
    }
    v17 = 5;
    GreCombineRgn(v10, RectRgn, 0LL, 5LL);
    v18 = 5LL;
    if ( a3 )
    {
      GreOffsetRgn(RectRgn, 5LL, 0LL);
      v18 = 0LL;
    }
    GreOffsetRgn(v10, v18, 5LL);
    if ( !*a5 || a4 )
    {
      for ( i = (unsigned __int8 *)&unk_14034F3DC; ; --i )
      {
        if ( v17 <= 0 )
        {
          StockObject = (HBRUSH)GreGetStockObject(4LL);
          v23 = (HRGN)RectRgn;
          goto LABEL_15;
        }
        SolidBrush = (HBRUSH)GreCreateSolidBrush(*i | (*i << 8) | _byteswap_ulong(*i << 8));
        v21 = SolidBrush;
        if ( !SolidBrush )
          break;
        GreFrameRgn(a2, v10, SolidBrush, v17, v17);
        GreDeleteObject(v21);
        --v17;
      }
      v7 = 0;
    }
    else
    {
      GreCombineRgn(v10, v10, RectRgn, 4LL);
      StockObject = (HBRUSH)GreGetStockObject(0LL);
      v23 = v10;
LABEL_15:
      GreFillRgn(a2, v23, StockObject);
    }
  }
LABEL_16:
  GreDeleteObject(RectRgn);
  GreDeleteObject(v10);
  return v7;
}
