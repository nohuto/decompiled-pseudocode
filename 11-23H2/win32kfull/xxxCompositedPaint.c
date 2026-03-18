/*
 * XREFs of xxxCompositedPaint @ 0x1C0016534
 * Callers:
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C0061DA0 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C0063330 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 * Callees:
 *     ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x1C00165F8 (-xxxCompositedTraverse@@YAHPEAUtagWND@@@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     xxxInternalInvalidate @ 0x1C004FB80 (xxxInternalInvalidate.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C005C068 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UpdateSprite @ 0x1C00B5498 (UpdateSprite.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 *     _GetProp @ 0x1C00B6E24 (_GetProp.c)
 *     NtGdiBitBltInternal @ 0x1C0105030 (NtGdiBitBltInternal.c)
 */

void __fastcall xxxCompositedPaint(struct tagWND *a1)
{
  int v2; // esi
  const struct tagRECT *Prop; // rax
  const struct tagRECT *v4; // rbx
  int *p_left; // r14
  int v6; // eax
  int v7; // edi
  HRGN v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  _DWORD *v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rsi
  HDC DCEx; // rdi
  char v17; // [rsp+98h] [rbp+10h] BYREF
  int v18; // [rsp+A0h] [rbp+18h] BYREF
  int v19; // [rsp+A4h] [rbp+1Ch]
  __int64 v20; // [rsp+A8h] [rbp+20h] BYREF

  SetOrClrWF(1LL, a1, 2832LL, 1LL);
  v2 = xxxCompositedTraverse(a1);
  SetOrClrWF(0LL, a1, 2832LL, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v17);
  Prop = (const struct tagRECT *)GetProp(a1, (unsigned __int16)atomLayer, 1LL);
  v4 = Prop;
  if ( Prop )
  {
    p_left = &Prop[1].left;
    v6 = IsRectEmptyInl(Prop + 1);
    v7 = v6;
    if ( !v2 && !v6 )
    {
      if ( !*(_QWORD *)&v4[2].right )
        *(_QWORD *)&v4[2].right = CreateEmptyRgnPublic();
      v9 = *(_QWORD *)&v4[2].right;
      if ( v9 )
      {
        if ( v9 != 1 )
        {
          SetRectRgnIndirect(ghrgnInv2, p_left);
          GreCombineRgn(*(_QWORD *)&v4[2].right, *(_QWORD *)&v4[2].right, ghrgnInv2, 2LL);
        }
      }
      else
      {
        *(_QWORD *)&v4[2].right = 1LL;
      }
      v7 = 1;
      *(_OWORD *)p_left = 0LL;
    }
    v8 = *(HRGN *)&v4[2].right;
    if ( v8 )
    {
      xxxInternalInvalidate(a1, v8, 0x485u);
      DeleteMaybeSpecialRgn(*(_QWORD *)&v4[2].right);
      *(_QWORD *)&v4[2].right = 0LL;
    }
    if ( !v7 )
    {
      v10 = *(_QWORD *)&v4->left;
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0 )
      {
        v20 = 0LL;
        v11 = GreSelectBitmap(ghdcMem, v10);
        v12 = (_DWORD *)*((_QWORD *)a1 + 5);
        v13 = v11;
        v18 = v12[24] - v12[22];
        v19 = v12[25] - v12[23];
        UpdateSprite(*(_QWORD *)(gpDispInfo + 40LL), a1, v12, 0LL, 0LL, &v18, ghdcMem, &v20, 0, 0LL, 0x40000000, p_left);
        v14 = v13;
      }
      else
      {
        v15 = GreSelectBitmap(ghdcMem, v10);
        SetOrClrWF(0LL, a1, 2848LL, 1LL);
        DCEx = (HDC)_GetDCEx(a1, 0LL, 1073807363LL);
        NtGdiBitBltInternal(
          DCEx,
          *p_left,
          p_left[1],
          p_left[2] - *p_left,
          p_left[3] - p_left[1],
          ghdcMem,
          *p_left,
          p_left[1],
          13369376,
          0,
          0);
        _ReleaseDC(DCEx);
        SetOrClrWF(1LL, a1, 2848LL, 1LL);
        v14 = v15;
      }
      GreSelectBitmap(ghdcMem, v14);
      *(_OWORD *)p_left = 0LL;
    }
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v17);
}
