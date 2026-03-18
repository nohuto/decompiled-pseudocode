/*
 * XREFs of ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801E05CC
 * Callers:
 *     ?UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x18007BFB8 (-UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x1800E5684 (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z @ 0x1800E685C (-ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z.c)
 *     ?AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z @ 0x18029D0C0 (-AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z.c)
 *     ?ApplyPositionImpulse@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z @ 0x18029D22C (-ApplyPositionImpulse@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z.c)
 *     ?ApplyScaleImpulse@CInteractionTracker@@AEAA_NMAEBUD2DVector2@@@Z @ 0x18029D388 (-ApplyScaleImpulse@CInteractionTracker@@AEAA_NMAEBUD2DVector2@@@Z.c)
 * Callees:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800129B0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?StartInertia@CScrollAnimation@@QEAAXM_N@Z @ 0x1800DE200 (-StartInertia@CScrollAnimation@@QEAAXM_N@Z.c)
 *     ?HasImpulse@CInteractionTracker@@QEBA_NXZ @ 0x1800DF65C (-HasImpulse@CInteractionTracker@@QEBA_NXZ.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x1800E1E6C (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1800E3A18 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x1800E3F48 (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1800E59E8 (-StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x1800E5B6C (-DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?StopCustomAndDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1800E5BE8 (-StopCustomAndDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?IsOutOfBounds@CInteractionTracker@@QEAA_NXZ @ 0x1800E712C (-IsOutOfBounds@CInteractionTracker@@QEAA_NXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180134248 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x1801E0A00 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 *     ?LogBoostCompositorClock@CInteractionTracker@@AEAAX_N@Z @ 0x1801E1598 (-LogBoostCompositorClock@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18022AA04 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ??1CExpressionValueStack@@QEAA@XZ @ 0x1802AA5B4 (--1CExpressionValueStack@@QEAA@XZ.c)
 */

bool __fastcall CInteractionTracker::TransitionToInertia(__int64 a1, int a2)
{
  unsigned int v2; // esi
  int v4; // ecx
  bool v6; // r14
  char v7; // r12
  unsigned __int64 v8; // rcx
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  CBaseExpression **v12; // r15
  int v13; // eax
  __int64 v14; // rax
  CBaseExpression *v15; // rcx
  int v16; // eax
  CBaseExpression *v17; // rbx
  double CurrentValue; // xmm0_8
  int v20; // [rsp+20h] [rbp-39h] BYREF
  __int64 v21; // [rsp+28h] [rbp-31h] BYREF
  int v22; // [rsp+30h] [rbp-29h]
  __int128 v23; // [rsp+38h] [rbp-21h]
  __int64 v24; // [rsp+48h] [rbp-11h]
  int v25; // [rsp+50h] [rbp-9h]
  _QWORD v26[3]; // [rsp+58h] [rbp-1h] BYREF
  _QWORD v27[3]; // [rsp+70h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v2 = 0;
  v4 = *(_DWORD *)(a1 + 184);
  v6 = 0;
  v7 = 0;
  if ( !v4 )
    goto LABEL_5;
  v8 = (unsigned int)(v4 - 1);
  if ( !(_DWORD)v8 )
  {
    v6 = a2 == 0;
    if ( a2 )
      return v6;
    goto LABEL_9;
  }
  v8 = (unsigned int)(v8 - 1);
  if ( (_DWORD)v8 )
  {
    if ( (_DWORD)v8 != 1 )
      return v6;
LABEL_5:
    if ( !CInteractionTracker::IsOutOfBounds((CInteractionTracker *)a1)
      && !CInteractionTracker::HasImpulse((CInteractionTracker *)v8)
      && a2 != 1 )
    {
      return v6;
    }
    goto LABEL_8;
  }
  if ( a2 == 1 )
  {
LABEL_8:
    v6 = 1;
    goto LABEL_9;
  }
  if ( !CInteractionTracker::IsOutOfBounds((CInteractionTracker *)a1)
    && !CInteractionTracker::HasImpulse((CInteractionTracker *)v8) )
  {
    return v6;
  }
  v6 = 1;
  v7 = 1;
LABEL_9:
  if ( (*(_BYTE *)(a1 + 541) & 4) == 0 )
  {
    ++*(_DWORD *)(*(_QWORD *)(a1 + 24) + 6380LL);
    *(_BYTE *)(a1 + 541) |= 4u;
    CInteractionTracker::LogBoostCompositorClock((CInteractionTracker *)v8, 1);
  }
  if ( a2 == 1 )
  {
    CInteractionTracker::StopCustomAnimations((CInteractionTracker *)a1, 0);
    CInteractionTracker::DestroyInteractionAnimations((CInteractionTracker *)a1);
  }
  else
  {
    CInteractionTracker::StopCustomAndDefaultAnimations((struct CResource **)a1, 0);
    CInteractionTracker::EnsureInteractionAnimations((CInteractionTracker *)a1);
    if ( *(_QWORD *)(a1 + 464) )
    {
      CResource::UnRegisterNotifierInternal((CResource *)a1, *(struct CResource **)(a1 + 464));
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 464));
    }
    if ( *(_QWORD *)(a1 + 472) )
    {
      CResource::UnRegisterNotifierInternal((CResource *)a1, *(struct CResource **)(a1 + 472));
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 472));
    }
  }
  if ( v7 )
  {
    v9 = v27;
    v27[0] = *(_QWORD *)(a1 + 336);
    v27[1] = *(_QWORD *)(a1 + 344);
    v27[2] = *(_QWORD *)(a1 + 328);
    do
    {
      v10 = *v9;
      ++v2;
      ++v9;
      *(_BYTE *)(v10 + 352) |= 4u;
      *(_BYTE *)(v10 + 380) |= 1u;
    }
    while ( v2 < 3 );
  }
  else if ( !a2 )
  {
    v11 = *(_QWORD *)(a1 + 328);
    v12 = (CBaseExpression **)v26;
    v13 = *(_DWORD *)(a1 + 148);
    *(_DWORD *)(v11 + 500) = *(_DWORD *)(a1 + 152);
    *(_DWORD *)(v11 + 528) = v13;
    v26[0] = *(_QWORD *)(a1 + 328);
    v26[1] = *(_QWORD *)(a1 + 336);
    v26[2] = *(_QWORD *)(a1 + 344);
    v21 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 824LL);
    v22 = 0;
    v23 = 0LL;
    v24 = 0LL;
    v25 = 0;
    do
    {
      if ( *(_DWORD *)(a1 + 184) == 1 )
      {
        if ( InteractionSourceManager::HasActiveManipulation((InteractionSourceManager *)(a1 + 208)) )
        {
          v14 = *(_QWORD *)(a1 + 24);
          v15 = *v12;
          LOBYTE(v20) = 0;
          v16 = CBaseExpression::CalculateValue(
                  v15,
                  (struct CExpressionValueStack *)&v21,
                  *(_QWORD *)(v14 + 888),
                  (bool *)&v20);
          if ( v16 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0xB2F,
              (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker.cpp",
              (const char *)(unsigned int)v16,
              v20);
        }
      }
      v17 = *v12;
      CurrentValue = CInteractionTracker::GetCurrentValue(a1, *((_DWORD *)*v12 + 81));
      CScrollAnimation::StartInertia((CComposition **)v17, *(float *)&CurrentValue, 0);
      *((_BYTE *)v17 + 380) |= 1u;
      ++v12;
    }
    while ( v12 != v27 );
    CExpressionValueStack::~CExpressionValueStack((CExpressionValueStack *)&v21);
  }
  CInteractionTracker::SetState(a1, 2, 0);
  return v6;
}
