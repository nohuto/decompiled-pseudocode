/*
 * XREFs of ?_WindowEnumCallback@CWindowClose@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x18000A1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x180013CEC (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180055EE4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180058514 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CWindowClose::_WindowEnumCallback(CStoryboard *a1, struct CWindowData *a2, char a3, int *a4)
{
  int v4; // edi
  int v8; // eax
  int v9; // eax
  CBaseObject *v10; // rbx
  _DWORD *v11; // rax
  CVisual *v12; // rcx
  int v13; // eax
  struct tagRECT v14; // xmm6
  CAnimatedTransitionVisual *v15; // rcx
  __int64 v16; // rax
  CVisual *v17; // rcx
  int v18; // eax
  char result; // al
  struct tagRECT v20; // [rsp+50h] [rbp-28h] BYREF
  CBaseObject *v21; // [rsp+98h] [rbp+20h] BYREF

  v4 = 0;
  v21 = 0LL;
  if ( (a3 & 1) != 0 && (*((_DWORD *)a2 + 170) & 0xFFF) == 0x55 )
  {
    v8 = (*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)a1 + 112LL))(a1);
    v9 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(a1, a2, 1, v8, 0LL, 0LL, -1, 1, &v21);
    v10 = v21;
    v4 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v9, 0x1316u, 0LL);
    }
    else
    {
      CAnimatedTransitionVisual::SetBeginAlpha(*((CAnimatedTransitionVisual **)v21 + 5), 1.0);
      v11 = (_DWORD *)*((_QWORD *)v10 + 5);
      v11[233] = 0;
      v12 = (CVisual *)(v11 + 2);
      v13 = v11[24];
      if ( (v13 & 0x1000) == 0 )
      {
        *((_DWORD *)v12 + 22) = v13 | 0x1000;
        CVisual::PropagateDirtyChildren(v12);
      }
      v15 = (CAnimatedTransitionVisual *)*((_QWORD *)v10 + 5);
      v20 = *(struct tagRECT *)((char *)v10 + 88);
      v14 = v20;
      CAnimatedTransitionVisual::SetBeginRect(v15, &v20);
      v16 = *((_QWORD *)v10 + 5);
      v17 = (CVisual *)(v16 + 8);
      *(struct tagRECT *)(v16 + 872) = v14;
      v18 = *(_DWORD *)(v16 + 96);
      if ( (v18 & 0x1000) == 0 )
      {
        *((_DWORD *)v17 + 22) = v18 | 0x1000;
        CVisual::PropagateDirtyChildren(v17);
      }
      if ( *((_DWORD *)v10 + 17) != 2 )
        *((_DWORD *)v10 + 17) = 1;
    }
    if ( v10 )
      CBaseObject::Release(v10);
  }
  result = 1;
  *a4 = v4;
  return result;
}
