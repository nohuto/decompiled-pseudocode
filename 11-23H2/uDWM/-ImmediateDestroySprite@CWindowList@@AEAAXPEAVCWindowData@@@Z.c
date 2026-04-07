/*
 * XREFs of ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18004D89C
 * Callers:
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x180016C00 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180043580 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18004D160 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ??1CWindowList@@UEAA@XZ @ 0x180108658 (--1CWindowList@@UEAA@XZ.c)
 * Callees:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800182E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z @ 0x18001C89C (-UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800482A0 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180049060 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18004DB60 (-CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x18004E308 (-OnVisibilityUpdated@CWindowData@@QEAAJXZ.c)
 */

void __fastcall CWindowList::ImmediateDestroySprite(CWindowList *this, struct CWindowData *a2)
{
  __int64 v2; // r9
  unsigned int v4; // ecx
  __int64 i; // r8
  struct CWindowData *v7; // rax
  struct CWindowData **v8; // rcx
  char v9; // bp
  char v10; // bp
  __int64 v11; // rax
  char v12; // si
  struct CVisual *v13; // rdx
  __int64 v14; // rcx
  struct CVisual *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rcx
  _QWORD Buffer[2]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v22; // [rsp+30h] [rbp-58h]
  __int128 v23; // [rsp+40h] [rbp-48h]
  __int128 v24; // [rsp+50h] [rbp-38h]
  __int64 v25; // [rsp+60h] [rbp-28h]
  char v26; // [rsp+68h] [rbp-20h]
  struct CWindowData *v27; // [rsp+90h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 35);
  v4 = *((_DWORD *)this + 76);
  for ( i = 0LL; (unsigned int)i < v4; i = (unsigned int)(i + 1) )
  {
    if ( a2 == *(struct CWindowData **)(v2 + 8 * i) )
      break;
  }
  if ( (unsigned int)i < v4 )
  {
    for ( ; (unsigned int)i < v4 - 1; v4 = *((_DWORD *)this + 76) )
    {
      v20 = (unsigned int)i;
      LODWORD(i) = i + 1;
      *(_QWORD *)(v2 + 8 * v20) = *(_QWORD *)(v2 + 8LL * (unsigned int)i);
    }
    *((_DWORD *)this + 76) = v4 - 1;
  }
  v7 = *(struct CWindowData **)a2;
  if ( *(struct CWindowData **)(*(_QWORD *)a2 + 8LL) != a2
    || (v8 = (struct CWindowData **)*((_QWORD *)a2 + 1), *v8 != a2) )
  {
    __fastfail(3u);
  }
  *v8 = v7;
  *((_QWORD *)v7 + 1) = v8;
  v9 = *((_BYTE *)a2 + 672);
  *((_QWORD *)a2 + 1) = a2;
  *(_QWORD *)a2 = a2;
  v10 = v9 & 4;
  if ( v10 )
  {
    v27 = a2;
    RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 312), &v27);
    *((_BYTE *)a2 + 672) &= ~4u;
  }
  v11 = *((_QWORD *)a2 + 55);
  if ( v11 )
    *(_BYTE *)(v11 + 248) &= ~0x80u;
  v12 = *((_BYTE *)a2 + 672);
  *((_QWORD *)a2 + 4) = 0LL;
  *((_BYTE *)a2 + 672) = v12 & 0xFE;
  if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 20) )
  {
    CWindowList::CheckForMaximizedChange(this, a2);
    if ( (v12 & 1) != 0 )
    {
      if ( *((_DWORD *)a2 + 33) == 1 || !v10 )
        CWindowList::ShowHide(this, a2, 1);
    }
    else
    {
      CWindowData::OnVisibilityUpdated(a2);
    }
  }
  v13 = (struct CVisual *)*((_QWORD *)a2 + 56);
  if ( v13 )
  {
    v14 = *((_QWORD *)v13 + 3);
    if ( v14 )
      VisualCollection::Remove((VisualCollection *)(v14 + 32), v13);
  }
  v15 = (struct CVisual *)*((_QWORD *)a2 + 55);
  if ( v15 )
  {
    v16 = *((_QWORD *)v15 + 3);
    if ( v16 )
      VisualCollection::Remove((VisualCollection *)(v16 + 32), v15);
  }
  *((_BYTE *)a2 + 673) &= ~0x20u;
  v17 = *((_QWORD *)a2 + 55);
  if ( v17 )
    *(_DWORD *)(v17 + 88) &= ~0x2000000u;
  v18 = *((_QWORD *)a2 + 17);
  Buffer[1] = 0LL;
  v25 = -1LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  Buffer[0] = v18;
  v26 = 0;
  v19 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
  if ( v19 )
    v19 = (_QWORD *)v19[8];
  if ( *((_QWORD **)a2 + 5) == v19 )
    CWindowList::UpdateDesktopWindowReplacement(this, *((_QWORD *)a2 + 17));
  if ( !*((_QWORD *)a2 + 3) )
    CWindowList::ImmediateDestroyWindow(this, a2);
}
