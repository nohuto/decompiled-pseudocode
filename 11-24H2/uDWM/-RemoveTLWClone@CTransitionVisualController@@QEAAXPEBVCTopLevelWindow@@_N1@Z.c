/*
 * XREFs of ?RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z @ 0x18001C2F4
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001BC68 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z @ 0x18008CE74 (-OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z.c)
 *     ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800D88F0 (-_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001DE40 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveAt@?$DynArray@UCFlickTextFeedback@@$0A@@@QEAAJI@Z @ 0x180083770 (-RemoveAt@-$DynArray@UCFlickTextFeedback@@$0A@@@QEAAJI@Z.c)
 */

void __fastcall CTransitionVisualController::RemoveTLWClone(
        CTransitionVisualController *this,
        const struct CTopLevelWindow *a2,
        char a3,
        char a4)
{
  int v5; // edi
  __int64 *v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rsi
  struct CVisual *v11; // rdx
  CContainerVisual *v12; // rcx
  CBaseObject *v13; // rcx
  CBaseObject *v14; // rcx

  if ( a2 )
  {
    v5 = *((_DWORD *)this + 12) - 1;
    if ( v5 >= 0 )
    {
      v8 = (__int64 *)((char *)this + 24);
      v9 = 24LL * v5;
      do
      {
        v10 = *v8;
        if ( *(const struct CTopLevelWindow **)(v9 + *v8) == a2 )
        {
          v11 = *(struct CVisual **)(v9 + v10 + 8);
          v12 = (CContainerVisual *)*((_QWORD *)v11 + 3);
          if ( v12 && (*(_BYTE *)(v9 + v10 + 16) || a3) )
            CContainerVisual::RemoveChild(v12, v11);
          if ( a4 )
          {
            v13 = *(CBaseObject **)(v9 + v10);
            if ( v13 )
              CBaseObject::Release(v13);
            v14 = *(CBaseObject **)(v9 + v10 + 8);
            if ( v14 )
              CBaseObject::Release(v14);
            DynArray<CFlickTextFeedback,0>::RemoveAt(v8, (unsigned int)v5);
          }
        }
        v9 -= 24LL;
        --v5;
      }
      while ( v5 >= 0 );
    }
  }
}
