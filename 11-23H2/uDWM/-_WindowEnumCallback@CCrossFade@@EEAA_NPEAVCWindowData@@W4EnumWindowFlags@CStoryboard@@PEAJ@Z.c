/*
 * XREFs of ?_WindowEnumCallback@CCrossFade@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E0A90
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180055EE4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180058514 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x1800D5E78 (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 */

char __fastcall CCrossFade::_WindowEnumCallback(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  int v4; // edi
  char v8; // si
  int v9; // ebx
  float v10; // xmm7_4
  struct tagRECT v11; // xmm6
  struct tagPOINT *v12; // rcx
  __int64 v13; // rcx
  int v14; // eax
  CVisual *v15; // rcx
  char result; // al
  int v17; // eax
  __int64 v18; // r8
  int v19; // eax
  struct tagRECT v20; // [rsp+30h] [rbp-48h] BYREF
  CBaseObject *v21; // [rsp+98h] [rbp+20h] BYREF

  v4 = 0;
  v21 = 0LL;
  if ( (a3 & 1) == 0 )
    goto LABEL_19;
  v8 = 0;
  v9 = *(_DWORD *)(a2 + 680) & 0xFFF;
  if ( v9 != 18 )
  {
    switch ( *(_DWORD *)(a2 + 680) & 0xFFF )
    {
      case 19:
        goto LABEL_22;
      case 61:
        LOBYTE(a3) = 1;
        v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, CBaseObject **))(*(_QWORD *)a1 + 144LL))(
                a1,
                a2,
                a3,
                &v21);
        v4 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v17, 0x64Fu);
          goto LABEL_17;
        }
LABEL_9:
        if ( *(_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1) == 75 )
        {
          if ( ((v9 - 62) & 0xFFFFFFFD) != 0 )
          {
LABEL_11:
            v10 = FLOAT_1_0;
LABEL_12:
            if ( !v21 )
              goto LABEL_19;
            v12 = (struct tagPOINT *)*((_QWORD *)v21 + 5);
            v20 = *(struct tagRECT *)((char *)v21 + 88);
            v11 = v20;
            CAnimatedTransitionVisual::SetBeginRect(v12, &v20);
            v13 = *((_QWORD *)v21 + 5);
            *(struct tagRECT *)(v13 + 872) = v11;
            v14 = *(_DWORD *)(v13 + 96);
            v15 = (CVisual *)(v13 + 8);
            if ( (v14 & 0x1000) == 0 )
            {
              *((_DWORD *)v15 + 22) = v14 | 0x1000;
              CVisual::PropagateDirtyChildren(v15);
            }
            CAnimatedTransitionVisual::SetBeginAlpha(*((CAnimatedTransitionVisual **)v21 + 5), v10);
            if ( *((_DWORD *)v21 + 17) != 2 )
              *((_DWORD *)v21 + 17) = 1;
            goto LABEL_17;
          }
        }
        else if ( !v8 )
        {
          goto LABEL_11;
        }
        v10 = 0.0;
        goto LABEL_12;
      case 62:
        goto LABEL_22;
      case 63:
        goto LABEL_23;
      case 64:
LABEL_22:
        v8 = 1;
        goto LABEL_23;
    }
    if ( (*(_DWORD *)(a2 + 680) & 0xFFF) != 0x41 )
      goto LABEL_9;
  }
LABEL_23:
  if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
          (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) + 48LL),
          *(HWND *)(a2 + 40),
          v8 ^ 1) )
    goto LABEL_9;
  LOBYTE(v18) = v8;
  v19 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, CBaseObject **))(*(_QWORD *)a1 + 144LL))(
          a1,
          a2,
          v18,
          &v21);
  v4 = v19;
  if ( v19 >= 0 )
    goto LABEL_9;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v19, 0x647u);
LABEL_17:
  if ( v21 )
    CBaseObject::Release(v21);
LABEL_19:
  result = 1;
  *a4 = v4;
  return result;
}
