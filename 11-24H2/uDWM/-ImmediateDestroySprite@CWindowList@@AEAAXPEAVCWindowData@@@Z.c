/*
 * XREFs of ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001A304
 * Callers:
 *     ?DestroyPendingSprites@CWindowList@@QEAAXXZ @ 0x18001A2A0 (-DestroyPendingSprites@CWindowList@@QEAAXXZ.c)
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180082D10 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800935E0 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ??1CWindowList@@UEAA@XZ @ 0x1800ED848 (--1CWindowList@@UEAA@XZ.c)
 * Callees:
 *     ?ForceShowWindow@CTopLevelWindow@@QEAAX_N@Z @ 0x180019B64 (-ForceShowWindow@CTopLevelWindow@@QEAAX_N@Z.c)
 *     ?CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001A530 (-CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnGDISurfaceChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001A8C0 (-OnGDISurfaceChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001B770 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x18001BB58 (-OnVisibilityUpdated@CWindowData@@QEAAJXZ.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001BC68 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?RemoveSelfFromParent@CVisual@@QEAAJXZ @ 0x18001D834 (-RemoveSelfFromParent@CVisual@@QEAAJXZ.c)
 *     ?UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z @ 0x180098294 (-UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z.c)
 */

void __fastcall CWindowList::ImmediateDestroySprite(CWindowList *this, struct CWindowData *a2)
{
  __int64 v2; // r9
  unsigned int v4; // ecx
  __int64 i; // r8
  struct CWindowData *v7; // rax
  struct CWindowData **v8; // rcx
  char v9; // si
  char v10; // si
  CTopLevelWindow *v11; // rcx
  char v12; // bp
  CVisual *v13; // rcx
  CVisual *v14; // rcx
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rcx
  _QWORD v18[2]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v19; // [rsp+30h] [rbp-58h]
  __int128 v20; // [rsp+40h] [rbp-48h]
  __int128 v21; // [rsp+50h] [rbp-38h]
  __int64 v22; // [rsp+60h] [rbp-28h]
  char v23; // [rsp+68h] [rbp-20h]
  __int128 v24; // [rsp+70h] [rbp-18h]
  struct CWindowData *Buffer; // [rsp+90h] [rbp+8h] BYREF

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
      v17 = (unsigned int)i;
      LODWORD(i) = i + 1;
      *(_QWORD *)(v2 + 8 * v17) = *(_QWORD *)(v2 + 8LL * (unsigned int)i);
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
  v9 = *((_BYTE *)a2 + 736);
  *((_QWORD *)a2 + 1) = a2;
  *(_QWORD *)a2 = a2;
  v10 = v9 & 4;
  if ( v10 )
  {
    Buffer = a2;
    RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 312), &Buffer);
    *((_BYTE *)a2 + 736) &= ~4u;
  }
  v11 = (CTopLevelWindow *)*((_QWORD *)a2 + 55);
  if ( v11 )
    CTopLevelWindow::ForceShowWindow(v11, 0);
  v12 = *((_BYTE *)a2 + 736);
  *((_QWORD *)a2 + 4) = 0LL;
  *((_BYTE *)a2 + 736) = v12 & 0xFE;
  if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 20) )
  {
    CWindowList::CheckForMaximizedChange(this, a2);
    if ( (v12 & 1) != 0 )
    {
      if ( *((_DWORD *)a2 + 32) == 1 || !v10 )
        CWindowList::ShowHide(this, a2, 1);
    }
    else
    {
      CWindowData::OnVisibilityUpdated(a2);
    }
  }
  v13 = (CVisual *)*((_QWORD *)a2 + 56);
  if ( v13 )
    CVisual::RemoveSelfFromParent(v13);
  v14 = (CVisual *)*((_QWORD *)a2 + 55);
  if ( v14 )
    CVisual::RemoveSelfFromParent(v14);
  *((_BYTE *)a2 + 737) &= ~0x20u;
  CWindowList::OnGDISurfaceChange(v14, a2);
  v15 = *((_QWORD *)a2 + 17);
  v18[1] = 0LL;
  v22 = -1LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v24 = 0LL;
  v18[0] = v15;
  v23 = 0;
  v16 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), v18);
  if ( v16 )
    v16 = (_QWORD *)v16[8];
  if ( *((_QWORD **)a2 + 5) == v16 )
    CWindowList::UpdateDesktopWindowReplacement(this, *((_QWORD *)a2 + 17));
  if ( !*((_QWORD *)a2 + 3) )
    CWindowList::ImmediateDestroyWindow(this, a2);
}
