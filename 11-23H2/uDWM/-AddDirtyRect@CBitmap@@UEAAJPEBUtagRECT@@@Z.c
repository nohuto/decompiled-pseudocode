/*
 * XREFs of ?AddDirtyRect@CBitmap@@UEAAJPEBUtagRECT@@@Z @ 0x18010F040
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800BF46C (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

__int64 __fastcall CBitmap::AddDirtyRect(CBitmap *this, struct tagRECT *a2)
{
  int v4; // ebp
  LONG right; // eax
  LONG bottom; // eax
  __int64 *v7; // rsi
  __int64 v8; // rcx
  _DWORD *v9; // rdx
  unsigned int v10; // r8d
  _DWORD *v11; // rcx
  _DWORD *v12; // rcx
  _DWORD *v13; // r8
  bool IsEmpty; // al
  __int64 v15; // rdx
  __int64 v16; // r8
  char v17; // r9
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  _DWORD *v21; // rdx
  __int64 v22; // rdx
  char v23; // r8
  unsigned int top; // eax
  unsigned int v25; // eax
  unsigned int v26; // eax
  int v27; // eax
  bool v28; // zf
  int v29; // eax

  v4 = 0;
  if ( a2 )
  {
    if ( a2->left < 0
      || a2->top < 0
      || (right = a2->right, right <= a2->left)
      || (unsigned int)right > *((_DWORD *)this + 40)
      || (bottom = a2->bottom, bottom <= a2->top)
      || (unsigned int)bottom > *((_DWORD *)this + 41) )
    {
      v4 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x1C3u);
      goto LABEL_56;
    }
  }
  if ( *((_DWORD *)this + 14) )
  {
    if ( *((_BYTE *)this + 212) || *((_DWORD *)this + 52) != *((_DWORD *)this + 36) )
    {
      *((_DWORD *)this + 50) = 0;
      *((_BYTE *)this + 212) = 0;
    }
    if ( !a2 || a2->right - a2->left == *((_DWORD *)this + 40) && a2->bottom - a2->top == *((_DWORD *)this + 41) )
    {
      *((_DWORD *)this + 50) = 0;
      goto LABEL_56;
    }
    if ( !*((_DWORD *)this + 50) )
    {
      v7 = (__int64 *)((char *)this + 192);
      *((_DWORD *)this + 51) = *((_DWORD *)this + 36);
LABEL_18:
      v8 = *v7;
      if ( *v7
        || (v8 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                   WPF::g_pProcessHeap,
                   80LL),
            (*v7 = v8) != 0) )
      {
        *(struct tagRECT *)(v8 + 16LL * (unsigned int)(*((_DWORD *)this + 50))++) = *a2;
      }
      else
      {
        v4 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x205u);
      }
      goto LABEL_56;
    }
    if ( TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(a2) )
      goto LABEL_56;
    v7 = (__int64 *)((char *)this + 192);
    v11 = (_DWORD *)*((_QWORD *)this + 24);
    if ( *v9 >= *v11 && v9[1] >= v11[1] && v9[2] <= v11[2] && v9[3] <= v11[3] )
      goto LABEL_56;
    if ( v10 < 5 )
      goto LABEL_18;
    do
    {
      v12 = (_DWORD *)*v7;
      *((_DWORD *)this + 50) = v10 - 1;
      TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(v12);
      IsEmpty = TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(v13);
      if ( v17 )
      {
        if ( IsEmpty )
        {
          *(_QWORD *)(v15 + 8) = 0LL;
          *(_QWORD *)v15 = 0LL;
        }
        else
        {
          *(_OWORD *)v15 = *(_OWORD *)v16;
        }
      }
      else if ( !IsEmpty )
      {
        if ( *(_DWORD *)v16 < *(_DWORD *)v15 )
          *(_DWORD *)v15 = *(_DWORD *)v16;
        v18 = *(_DWORD *)(v16 + 4);
        if ( v18 < *(_DWORD *)(v15 + 4) )
          *(_DWORD *)(v15 + 4) = v18;
        v19 = *(_DWORD *)(v16 + 8);
        if ( v19 > *(_DWORD *)(v15 + 8) )
          *(_DWORD *)(v15 + 8) = v19;
        v20 = *(_DWORD *)(v16 + 12);
        if ( v20 > *(_DWORD *)(v15 + 12) )
          *(_DWORD *)(v15 + 12) = v20;
      }
      v10 = *((_DWORD *)this + 50);
    }
    while ( v10 > 1 );
    TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(a2);
    if ( TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(v21) )
    {
      if ( v23 )
      {
        *(_QWORD *)(v22 + 8) = 0LL;
        *(_QWORD *)v22 = 0LL;
      }
      else
      {
        *(struct tagRECT *)v22 = *a2;
      }
    }
    else if ( !v23 )
    {
      if ( a2->left < *(_DWORD *)v22 )
        *(_DWORD *)v22 = a2->left;
      top = a2->top;
      if ( top < *(_DWORD *)(v22 + 4) )
        *(_DWORD *)(v22 + 4) = top;
      v25 = a2->right;
      if ( v25 > *(_DWORD *)(v22 + 8) )
        *(_DWORD *)(v22 + 8) = v25;
      v26 = a2->bottom;
      if ( v26 > *(_DWORD *)(v22 + 12) )
        *(_DWORD *)(v22 + 12) = v26;
    }
  }
LABEL_56:
  v27 = *((_DWORD *)this + 36);
  v28 = v27 == -1;
  v29 = v27 + 1;
  *((_DWORD *)this + 36) = v29;
  if ( v28 )
  {
    *((_DWORD *)this + 36) = 1;
    v29 = 1;
  }
  if ( v4 < 0 )
    *((_DWORD *)this + 50) = 0;
  else
    *((_DWORD *)this + 52) = v29;
  return (unsigned int)v4;
}
