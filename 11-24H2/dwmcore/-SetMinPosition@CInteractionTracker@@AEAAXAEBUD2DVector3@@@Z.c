/*
 * XREFs of ?SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1800E37B8
 * Callers:
 *     ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800E3350 (-SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1800E36A8 (-SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?ProcessSetMinPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETMINPOSITION@@@Z @ 0x18029DA74 (-ProcessSetMinPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTR.c)
 * Callees:
 *     ?EnsurePositionIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z @ 0x1800148F0 (-EnsurePositionIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x18007F9F0 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1800E36A8 (-SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ @ 0x1800E38C8 (-ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

void __fastcall CInteractionTracker::SetMinPosition(CInteractionTracker *this, const struct D2DVector3 *a2)
{
  unsigned __int64 v4; // rcx
  float v5; // xmm0_4
  bool v6; // cf
  bool v7; // zf
  float v8; // xmm0_4
  char v9; // dl
  float v10; // xmm1_4
  float v11; // xmm0_4
  _DWORD v12[4]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)((char *)this + 100) - *(_QWORD *)a2;
  if ( !v4 )
    v4 = *((unsigned int *)this + 27) - (unsigned __int64)*((unsigned int *)a2 + 2);
  if ( v4 )
  {
    LODWORD(v5) = COERCE_UNSIGNED_INT(*((float *)this + 25) - *(float *)a2) & _xmm;
    v6 = v5 > 0.0000011920929;
    v7 = 0.0000011920929 == v5;
    v8 = *((float *)this + 26) - *((float *)a2 + 1);
    v9 = (v6 || v7) + 4;
    if ( COERCE_FLOAT(LODWORD(v8) & _xmm) >= 0.0000011920929 )
      v9 |= 2u;
    v7 = (*((_BYTE *)this + 541) & 8) == 0;
    *(_QWORD *)((char *)this + 100) = *(_QWORD *)a2;
    *((_DWORD *)this + 27) = *((_DWORD *)a2 + 2);
    if ( v7 )
      CInteractionTracker::EnsurePositionIsGreaterThanOrEqualToMin((__int64)this, v9);
    v10 = fmaxf(*((float *)this + 26), *((float *)this + 29));
    v12[0] = fmaxf(*((float *)this + 25), *((float *)this + 28));
    v11 = fmaxf(*((float *)this + 27), *((float *)this + 30));
    *(float *)&v12[1] = v10;
    *(float *)&v12[2] = v11;
    CInteractionTracker::SetMaxPosition(this, (const struct D2DVector3 *)v12);
    if ( !*((_DWORD *)this + 46) )
      InteractionSourceManager::ReconfigureAllManipulations((CInteractionTracker *)((char *)this + 208));
    CResource::InvalidateAnimationSources(this, 23);
  }
}
