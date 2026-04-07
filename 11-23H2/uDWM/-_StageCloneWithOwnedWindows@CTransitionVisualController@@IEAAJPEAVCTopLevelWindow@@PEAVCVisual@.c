/*
 * XREFs of ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@HW4StagedBackgroundPolicy@1@@Z @ 0x1800EC420
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180015CF0 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x18001671C (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N122PEA_N@Z @ 0x18000A3F8 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N122PE.c)
 *     ?RemoveAt@?$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z @ 0x18000B694 (-RemoveAt@-$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x1800123B8 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x1800177D0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_7924ac7615675ed6f4f46acaa8a90be9___ @ 0x1800E9B94 (CTransitionVisualController--ForEachOwnedWindow__lambda_7924ac7615675ed6f4f46acaa8a90be9___.c)
 *     ?CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z @ 0x1800EA3E4 (-CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::_StageCloneWithOwnedWindows(
        __int64 a1,
        struct CTopLevelWindow *a2,
        struct CVisual *a3,
        int a4,
        int a5)
{
  unsigned int v5; // r15d
  struct CVisual *v6; // rsi
  bool v7; // zf
  struct tagRECT *v9; // rdi
  unsigned int v11; // ebx
  int v12; // r9d
  int inserted; // eax
  int v14; // edx
  int bottom; // r11d
  int v16; // eax
  int v17; // r10d
  int left; // r8d
  int v19; // eax
  int v20; // edx
  int v21; // eax
  int v22; // edx
  int v23; // eax
  int v24; // eax
  unsigned int v26; // [rsp+20h] [rbp-41h]
  int v27; // [rsp+20h] [rbp-41h]
  bool v28; // [rsp+40h] [rbp-21h] BYREF
  struct CVisual *v29; // [rsp+48h] [rbp-19h] BYREF
  struct CVisual *v30; // [rsp+50h] [rbp-11h] BYREF
  struct tagRECT rc; // [rsp+58h] [rbp-9h] BYREF
  struct CVisual **v32; // [rsp+68h] [rbp+7h]
  bool *v33; // [rsp+70h] [rbp+Fh]
  int v34; // [rsp+D8h] [rbp+77h] BYREF

  v34 = a4;
  v5 = *(_DWORD *)(a1 + 48);
  v6 = 0LL;
  v7 = *(_QWORD *)(a1 + 96) == -1LL;
  v9 = (struct tagRECT *)*((_QWORD *)a2 + 94);
  v29 = a3;
  v30 = 0LL;
  v28 = 1;
  if ( !v7 )
  {
    *(_QWORD *)&rc.right = a1;
    *(_QWORD *)&rc.left = &v34;
    v32 = &v29;
    v33 = &v28;
    CTransitionVisualController::ForEachOwnedWindow__lambda_7924ac7615675ed6f4f46acaa8a90be9___(
      (__int64)v9,
      (__int64)&rc,
      1);
    inserted = CTransitionVisualController::_StageCloneRelative(
                 (CTransitionVisualController *)a1,
                 a2,
                 v29,
                 0,
                 0LL,
                 1,
                 1,
                 &v28);
    v11 = inserted;
    if ( inserted >= 0 )
    {
      if ( !*((_DWORD *)v29 + 18) )
      {
        v11 = -2003304447;
        v26 = 248;
        goto LABEL_3;
      }
      if ( a5 != 1 )
        goto LABEL_45;
      v7 = (v9[42].right & 0x1000000) == 0;
      rc = v9[3];
      if ( !v7 )
      {
        v14 = 0;
        bottom = v9[42].bottom;
        if ( v9[43].top - bottom >= 0 )
          v14 = v9[43].top - bottom;
        v16 = 0;
        if ( rc.right - rc.left >= 0 )
          v16 = rc.right - rc.left;
        if ( v14 > v16 )
          rc.right = v14 + rc.left;
        v17 = 0;
        left = v9[43].left;
        if ( v9[43].right - left >= 0 )
          v17 = v9[43].right - left;
        v19 = 0;
        if ( rc.bottom - rc.top >= 0 )
          v19 = rc.bottom - rc.top;
        if ( v17 > v19 )
          rc.bottom = rc.top + v17;
        OffsetRect(&rc, bottom, left);
      }
      if ( (v9[42].right & 0x800000) != 0 )
      {
        v20 = 0;
        if ( v9[45].top - v9[44].bottom >= 0 )
          v20 = v9[45].top - v9[44].bottom;
        v21 = 0;
        if ( rc.right - rc.left >= 0 )
          v21 = rc.right - rc.left;
        if ( v20 > v21 )
          rc.right = v20 + rc.left;
        v22 = 0;
        if ( v9[45].right - v9[45].left >= 0 )
          v22 = v9[45].right - v9[45].left;
        v23 = 0;
        if ( rc.bottom - rc.top >= 0 )
          v23 = rc.bottom - rc.top;
        if ( v22 > v23 )
          rc.bottom = v22 + rc.top;
      }
      v24 = CTransitionVisualController::CreateBackground(&rc, &v30);
      v11 = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2LL,
          v24,
          0x119u);
        v6 = v30;
        goto LABEL_42;
      }
      v6 = v30;
      inserted = VisualCollection::InsertRelative(
                   (struct CVisual *)((char *)v29 + 32),
                   (unsigned __int64)v30,
                   0LL,
                   1u,
                   v27);
      v11 = inserted;
      if ( inserted >= 0 )
        goto LABEL_45;
      v26 = 282;
    }
    else
    {
      v26 = 243;
    }
    v12 = inserted;
    goto LABEL_41;
  }
  v11 = -2147467259;
  v26 = 222;
LABEL_3:
  v12 = v11;
LABEL_41:
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
    2LL,
    v12,
    v26);
LABEL_42:
  VisualCollection::RemoveAll((struct CVisual *)((char *)v29 + 32));
  while ( *(_DWORD *)(a1 + 48) > v5 )
  {
    CTransitionVisualController::_MoveWindowOffscreen(
      *(struct CTopLevelWindow **)(*(_QWORD *)(a1 + 24) + 24LL * (unsigned int)(*(_DWORD *)(a1 + 48) - 1)),
      0);
    DynArray<CTransitionVisualController::TlwPair,0>::RemoveAt((__int64 *)(a1 + 24), *(_DWORD *)(a1 + 48) - 1);
  }
LABEL_45:
  if ( v6 )
    CBaseObject::Release(v6);
  return v11;
}
