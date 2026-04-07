/*
 * XREFs of ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x1800B1050
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180049B90 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18002D838 (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180036F9C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180053BD8 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z @ 0x180053DF8 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$CreateTouchVisual@VCTetherVisual@@@@YAJ_KPEAPEAVCTetherVisual@@@Z @ 0x1800AEB1C (--$CreateTouchVisual@VCTetherVisual@@@@YAJ_KPEAPEAVCTetherVisual@@@Z.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800B68E8 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?SnapToAnchor@CTetherVisual@@QEAAJXZ @ 0x1800E39C0 (-SnapToAnchor@CTetherVisual@@QEAAJXZ.c)
 *     ?Start@CTetherVisual@@QEAAJAEBUtagPOINT@@0@Z @ 0x1800E3AC8 (-Start@CTetherVisual@@QEAAJAEBUtagPOINT@@0@Z.c)
 *     ?UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z @ 0x1800E3F40 (-UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CContactManager::OnTether(
        CContactManager *this,
        const struct MILCMD_DWM_REDIRECTION_TETHERCONTACT *a2)
{
  CBaseObject *v4; // r14
  unsigned int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // ebx
  __int64 v10; // rdi
  CTetherVisual *v11; // r9
  int v12; // eax
  CContactManager *v13; // rcx
  int v14; // eax
  int v15; // eax
  CContactManager *v16; // rcx
  __int64 v17; // rax
  CBaseObject *v18; // r14
  __int64 v19; // rax
  CDirectTouchVisual **v20; // rdx
  int Touch; // eax
  CContactManager *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r9
  unsigned int v25; // eax
  unsigned int v26; // edx
  int v27; // ebx
  CContactManager *v28; // rcx
  int v29; // eax
  __int64 v30; // rdx
  CBaseObject *v31; // rcx
  struct _RTL_CRITICAL_SECTION *v32; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v33; // [rsp+80h] [rbp+40h] BYREF
  CBaseObject *v34; // [rsp+90h] [rbp+50h] BYREF
  __int64 v35; // [rsp+98h] [rbp+58h] BYREF

  v32 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0LL;
  v34 = 0LL;
  GetDesktopID(1LL, &v33);
  v5 = 0;
  if ( !*((_DWORD *)this + 20) )
    goto LABEL_5;
  v6 = *((_QWORD *)this + 7);
  while ( 1 )
  {
    v7 = 104LL * v5;
    if ( *(_DWORD *)(v7 + v6) == *((_DWORD *)a2 + 1) )
      break;
    if ( ++v5 >= *((_DWORD *)this + 20) )
      goto LABEL_5;
  }
  if ( (v5 & 0x80000000) != 0 || *(_DWORD *)(v7 + v6 + 4) != 1 )
  {
LABEL_5:
    v8 = -2147024809;
    goto LABEL_6;
  }
  v10 = 104LL * v5;
  v11 = *(CTetherVisual **)(v10 + v6 + 72);
  if ( *((_DWORD *)a2 + 2) )
  {
    if ( v11 )
    {
      CTetherVisual::UpdatePosition(v11, (const struct tagPOINT *)((char *)a2 + 12), 0LL);
      v8 = 0;
      goto LABEL_6;
    }
    v12 = CreateTouchVisual<CTetherVisual>(v33, &v34);
    v8 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x3CEu);
      v4 = v34;
      goto LABEL_43;
    }
    v4 = v34;
    v14 = CContactManager::AddToTouchNode(v13, v33, v34);
    v8 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x3CFu);
LABEL_43:
      if ( v4 )
        CBaseObject::Release(v4);
      goto LABEL_6;
    }
    v15 = CTetherVisual::Start(
            v4,
            (const struct tagPOINT *)((char *)a2 + 12),
            (const struct tagPOINT *)(v10 + *((_QWORD *)this + 7) + 8LL));
    v8 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x3D0u);
      goto LABEL_43;
    }
    *(_QWORD *)(v10 + *((_QWORD *)this + 7) + 72) = v4;
    v17 = *((_QWORD *)this + 7);
    v18 = *(CBaseObject **)(v10 + v17 + 80);
    if ( v18 )
    {
      CContactManager::StopAndRemoveFromRootNode(v16, *(struct CTouchVisual **)(v10 + v17 + 80));
      CBaseObject::Release(v18);
      *(_QWORD *)(v10 + *((_QWORD *)this + 7) + 80) = 0LL;
      *(_BYTE *)(v10 + *((_QWORD *)this + 7) + 96) = 0;
      if ( *((_BYTE *)this + 324) || *(_DWORD *)(v10 + *((_QWORD *)this + 7) + 40) )
      {
        v19 = *((_QWORD *)this + 7);
        v20 = (CDirectTouchVisual **)(v10 + v19 + 48);
        if ( !*v20 && !*(_QWORD *)(v10 + v19 + 88) )
        {
          Touch = CreateTouchVisual<CDirectTouchVisual>(v33, v20);
          v8 = Touch;
          if ( Touch < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Touch, 0x3E2u);
            goto LABEL_6;
          }
          CContactManager::AddToTouchNode(v22, v33, *(struct CVisual **)(v10 + *((_QWORD *)this + 7) + 48));
        }
        v23 = *((_QWORD *)this + 7);
        v24 = 4294967291LL;
        if ( !*((_BYTE *)this + 324) )
          v24 = *(unsigned int *)(v10 + v23 + 40);
        CDirectTouchVisual::StartDown(*(_QWORD *)(v10 + v23 + 48), v10 + v23 + 8, v10 + v23 + 24, v24);
      }
    }
  }
  else
  {
    if ( !v11 )
    {
      v8 = -2147024809;
      goto LABEL_43;
    }
    v35 = *(_QWORD *)(104LL * v5 + v6 + 72);
    v25 = *((_DWORD *)this + 44);
    v26 = v25 + 1;
    if ( v25 + 1 >= v25 )
    {
      v27 = 0;
      if ( v26 > *((_DWORD *)this + 43) )
      {
        v29 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 152, 8, 1, &v35);
        v27 = v29;
        if ( v29 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v29, 0xC0u);
      }
      else
      {
        v28 = (CContactManager *)*((unsigned int *)this + 44);
        *(_QWORD *)(*((_QWORD *)this + 19) + 8LL * (_QWORD)v28) = v11;
        *((_DWORD *)this + 44) = v26;
      }
    }
    else
    {
      v27 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    }
    v30 = *((_QWORD *)this + 7);
    if ( v27 < 0 )
    {
      CContactManager::StopAndRemoveFromRootNode(v28, *(struct CTouchVisual **)(v10 + v30 + 72));
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v10 + v30 + 72) + 8LL));
      CTetherVisual::SnapToAnchor(*(CTetherVisual **)(v10 + *((_QWORD *)this + 7) + 72));
    }
    v31 = *(CBaseObject **)(v10 + *((_QWORD *)this + 7) + 72);
    v8 = 0;
    if ( v31 )
    {
      CBaseObject::Release(v31);
      *(_QWORD *)(v10 + *((_QWORD *)this + 7) + 72) = 0LL;
    }
  }
LABEL_6:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v32);
  return v8;
}
