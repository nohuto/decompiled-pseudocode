/*
 * XREFs of ?CaptureUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAXPEAX@Z @ 0x140125C00
 * Callers:
 *     <none>
 * Callees:
 *     FONTOBJ_bEnsureGlyphCacheBuffer @ 0x140125E04 (FONTOBJ_bEnsureGlyphCacheBuffer.c)
 *     ?CaptureUsermodeFontObj@FontDriverDdiRequest@@KA_NPEAU_FONTOBJ@@0@Z @ 0x140126094 (-CaptureUsermodeFontObj@FontDriverDdiRequest@@KA_NPEAU_FONTOBJ@@0@Z.c)
 *     FONTOBJ_AdvanceGlyphCacheBuffer @ 0x1401260B4 (FONTOBJ_AdvanceGlyphCacheBuffer.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

void __fastcall QueryGlyphMetricsPlusBitsRequest::CaptureUsermodeParameters(struct _FONTOBJ **this, _QWORD *a2)
{
  struct _FONTOBJ *v3; // rax
  struct _FONTOBJ *v4; // r14
  struct _FONTOBJ *v5; // r15
  int v6; // edi
  void **v7; // r13
  void **v8; // r12
  _QWORD *v9; // rsi
  int v10; // ecx
  __int64 v11; // r8
  FLONG flFontType; // edx
  unsigned int v13; // eax
  unsigned __int64 v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // eax
  struct _FONTOBJ *v17; // rcx
  size_t Size; // [rsp+88h] [rbp+10h] BYREF

  v3 = (struct _FONTOBJ *)a2[2];
  v4 = (struct _FONTOBJ *)a2[3];
  v5 = (struct _FONTOBJ *)a2[4];
  v6 = *((_DWORD *)a2 + 11);
  if ( v3 != this[13] )
    return;
  if ( !FontDriverDdiRequest::CaptureUsermodeFontObj(this[7], v3) )
    return;
  if ( v6 < 0 )
    return;
  if ( v4 != this[14] )
    return;
  if ( v5 != this[15] )
    return;
  if ( (unsigned int)v6 > *((_DWORD *)this + 20) )
    return;
  if ( (unsigned int)v6 < 0x10 )
    return;
  *((_DWORD *)this + 20) = v6;
  Size = 0LL;
  v7 = (void **)(this + 9);
  v8 = (void **)(this + 8);
  if ( !(unsigned int)FONTOBJ_bEnsureGlyphCacheBuffer(
                        (int)this[7],
                        v6,
                        ((_DWORD)this + 64) & (unsigned int)-(this[11] != 0LL),
                        (int)&Size,
                        (struct _GLYPHBITS **)this + 9) )
    return;
  v9 = this + 8;
  if ( this[11] )
  {
    memmove(*v8, v4, Size);
    v9 = this + 8;
  }
  if ( *v7 )
  {
    memmove(*v7, v5, *((unsigned int *)this + 20));
    v10 = *((_DWORD *)*v7 + 2);
    v11 = *((unsigned int *)*v7 + 3);
    flFontType = this[7]->flFontType;
    if ( (flFontType & 0x10000) != 0 )
    {
      if ( (flFontType & 0x10000000) != 0 )
        v13 = *((_DWORD *)*v7 + 2);
      else
        v13 = (unsigned int)(v10 + 1) >> 1;
    }
    else
    {
      v13 = (unsigned int)(v10 + 7) >> 3;
    }
    if ( v13 )
    {
      if ( v10 < 0 )
        return;
      if ( (int)v11 < 0 )
        return;
      v14 = v11 * v13;
      if ( v14 > 0xFFFFFFFF )
        return;
      v15 = (v14 + 3) & 0xFFFFFFFC;
      if ( v15 < (unsigned int)v14 )
        return;
      v16 = v15 + 16;
      if ( v16 < 0x10 || v16 > *((_DWORD *)this + 20) )
        return;
    }
    v9 = this + 8;
  }
  if ( *v8 )
    *(_QWORD *)*v8 = *v7;
  FONTOBJ_AdvanceGlyphCacheBuffer(this[7], this[8], this[9], *((unsigned int *)this + 20));
  v17 = this[11];
  if ( v17 )
    *(_QWORD *)&v17->iUniq = *v9;
  *(_QWORD *)&this[12]->iUniq = this[9];
  *((_DWORD *)this + 21) = v6;
}
