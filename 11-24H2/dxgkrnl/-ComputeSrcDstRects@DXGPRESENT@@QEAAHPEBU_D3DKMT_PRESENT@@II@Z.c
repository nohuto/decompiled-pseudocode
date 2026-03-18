/*
 * XREFs of ?ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z @ 0x14030AA60
 * Callers:
 *     ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x140309304 (-CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3.c)
 * Callees:
 *     ?ClipRects@DXGPRESENT@@SAHPEAUtagRECT@@0PEBU2@1@Z @ 0x14030AC10 (-ClipRects@DXGPRESENT@@SAHPEAUtagRECT@@0PEBU2@1@Z.c)
 *     ?IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z @ 0x14030B6AC (-IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z.c)
 */

__int64 __fastcall DXGPRESENT::ComputeSrcDstRects(
        struct tagRECT *this,
        const struct _D3DKMT_PRESENT *a2,
        LONG a3,
        LONG a4)
{
  LONG *p_top; // r12
  struct tagRECT *v6; // rdi
  struct tagRECT *v8; // rsi
  LONG *v9; // r14
  LONG *p_right; // r15
  LONG *p_bottom; // rbp
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // eax
  LONG right; // edx
  LONG v14; // r9d
  LONG v15; // r10d
  LONG v16; // r11d
  LONG bottom; // ecx
  LONG v18; // r10d
  LONG v19; // r8d
  int bottom_low; // eax

  p_top = &this[8].top;
  v6 = this + 8;
  this[8].top = 0;
  this[8].left = 0;
  this[8].right = this[2].left - this[1].right;
  v8 = this + 8;
  v9 = &this[8].top;
  p_right = &this[8].right;
  this[8].bottom = this[2].top - this[1].bottom;
  p_bottom = &this[8].bottom;
  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  if ( (*(_BYTE *)&Value & 2) != 0 )
  {
    if ( (*(_BYTE *)&Value & 0x40) != 0 )
    {
      if ( !DXGPRESENT::IntersectRect(v6, &a2->DstRect, v6) )
        return 0LL;
      v8 = this + 8;
      v9 = &this[8].top;
      p_right = &this[8].right;
      p_bottom = &this[8].bottom;
    }
    this[9] = *v6;
    goto LABEL_3;
  }
  this[9].right = a3;
  this[9].left = 0;
  this[9].top = 0;
  this[9].bottom = a4;
  if ( !(unsigned int)DXGPRESENT::ClipRects(
                        this + 9,
                        v6,
                        (const struct tagRECT *)((unsigned __int64)&a2->SrcRect & -(__int64)((*(_DWORD *)&a2->Flags.0 & 0x80u) != 0)),
                        (const struct tagRECT *)((unsigned __int64)&a2->DstRect & -(__int64)((a2->Flags.Value & 0x40) != 0))) )
    return 0LL;
LABEL_3:
  right = this[1].right;
  v14 = right + v6->left;
  v15 = *p_top;
  v16 = right + this[8].right;
  bottom = this[1].bottom;
  this[8].right = v16;
  v18 = bottom + v15;
  v19 = bottom + this[8].bottom;
  v6->left = v14;
  this[8].bottom = v19;
  *p_top = v18;
  if ( (a2->Flags.Value & 0x10000) != 0 )
  {
    bottom_low = LOWORD(this[26].bottom);
    if ( (unsigned __int16)bottom_low > 1u )
    {
      v8->left = v14 * bottom_low;
      *v9 = v18 * bottom_low;
      *p_right = v16 * bottom_low;
      *p_bottom = v19 * bottom_low;
    }
  }
  return 1LL;
}
