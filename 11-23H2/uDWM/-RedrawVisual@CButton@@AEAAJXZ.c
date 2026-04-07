/*
 * XREFs of ?RedrawVisual@CButton@@AEAAJXZ @ 0x180043880
 * Callers:
 *     ?ValidateVisual@CButton@@UEAAJXZ @ 0x180045C30 (-ValidateVisual@CButton@@UEAAJXZ.c)
 * Callees:
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x18000BC44 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18003A9B0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18005007C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     floor @ 0x18005D4A8 (floor.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z @ 0x1800AC248 (-SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z.c)
 *     ?SetOpacity@CAtlasedImage@@QEAAXM@Z @ 0x1800AC280 (-SetOpacity@CAtlasedImage@@QEAAXM@Z.c)
 *     ?ActivateTimeline@CButton@@AEAAJPEAPEAV?$CTimeline@M@@NMMW4InterpolationMode@@@Z @ 0x1800AC7C4 (-ActivateTimeline@CButton@@AEAAJPEAPEAV-$CTimeline@M@@NMMW4InterpolationMode@@@Z.c)
 *     ?ComputeFadeValues@CButton@@AEAAXPEAM0@Z @ 0x1800AC8E8 (-ComputeFadeValues@CButton@@AEAAXPEAM0@Z.c)
 *     ?DrawStateW@CButton@@AEAAXPEAVCAtlasButton@@W4ButtonStates@1@@Z @ 0x1800AC9C4 (-DrawStateW@CButton@@AEAAXPEAVCAtlasButton@@W4ButtonStates@1@@Z.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x1800ACC7C (McTemplateU0qp_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CButton::RedrawVisual(CButton *this)
{
  char v1; // al
  int v2; // r13d
  unsigned int v3; // r12d
  int v5; // ecx
  int *v6; // r14
  float v7; // xmm1_4
  float v8; // xmm0_4
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // rdi
  volatile signed __int32 *v12; // rsi
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rcx
  volatile signed __int32 *v16; // rcx
  char v17; // al
  int v18; // eax
  CButton *v19; // rsi
  char v20; // bp
  __int64 v21; // r8
  __int64 v22; // rdi
  __int64 v23; // rdi
  CBaseObject *v24; // rcx
  CBaseObject *v25; // rcx
  __int64 v26; // rcx
  char v27; // al
  __int64 v28; // rsi
  int v29; // eax
  unsigned __int8 v30; // di
  unsigned __int8 v31; // cl
  int v32; // ebp
  __int64 v33; // rcx
  __int64 v34; // rbx
  int v35; // eax
  __int64 result; // rax
  unsigned int v37; // edx
  __int64 v38; // rcx
  __int64 i; // r9
  __int64 v40; // r15
  __int64 v41; // rdx
  __int64 v42; // r9
  __int64 *v43; // rdx
  __int64 *v44; // r8
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rcx
  int v49; // ecx
  __int64 v50; // rcx
  unsigned int v51; // eax
  unsigned int v52; // ebx
  __int64 v53; // r8
  __int64 v54; // rax
  float v55; // xmm5_4
  __int64 v56; // rax
  bool v57; // zf
  char v58; // al
  __int64 v59; // rcx
  __int64 v60; // [rsp+30h] [rbp-68h] BYREF
  struct tagPOINT v61; // [rsp+38h] [rbp-60h] BYREF
  float v62; // [rsp+A0h] [rbp+8h] BYREF
  float v63; // [rsp+A8h] [rbp+10h] BYREF
  __int64 *v64; // [rsp+B8h] [rbp+20h] BYREF

  v1 = *((_BYTE *)this + 288);
  v2 = 0;
  v3 = *((_DWORD *)this + 94);
  if ( (v1 & 1) != 0 )
  {
    if ( (v1 & 2) != 0 )
      v5 = ((v1 & 4) != 0) + 1;
    else
      v5 = 0;
    *((_DWORD *)this + 94) = v5;
    v6 = (int *)((char *)this + 400);
    v7 = *((float *)this + 100);
    if ( v5 == 1 )
    {
      v8 = FLOAT_1_0;
      goto LABEL_6;
    }
  }
  else
  {
    v6 = (int *)((char *)this + 400);
    *((_DWORD *)this + 94) = 3;
    v7 = *((float *)this + 100);
  }
  v8 = *((float *)this + 101);
LABEL_6:
  *(float *)v6 = v8;
  if ( v7 != v8 )
  {
    v49 = *((_DWORD *)this + 22);
    if ( (v49 & 0x8000) == 0 )
    {
      *((_DWORD *)this + 22) = v49 | 0x8000;
      CVisual::PropagateDirtyChildren(this);
      v1 = *((_BYTE *)this + 288);
    }
  }
  v9 = *((unsigned int *)this + 94);
  v10 = 0LL;
  v11 = *((_QWORD *)this + 37);
  v12 = 0LL;
  v13 = 1LL;
  if ( (_DWORD)v9 != 4 && *((_DWORD *)this + 84) >= 4u )
  {
    if ( (v1 & 0x10) != 0 )
      v9 = 1LL;
    v10 = *(_QWORD *)(*((_QWORD *)this + 39) + 8 * v9);
    if ( *((_DWORD *)this + 92) >= 4u )
      v12 = *(volatile signed __int32 **)(*((_QWORD *)this + 43) + 8 * v9);
  }
  v14 = *(_QWORD *)(v11 + 72);
  if ( v14 != v10 )
  {
    if ( v14 && _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 8), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(__int64, __int64))v14)(v14, 1LL);
      v13 = 1LL;
    }
    *(_QWORD *)(v11 + 72) = v10;
    if ( v10 )
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    *(_DWORD *)(v11 + 96) |= 1u;
    v15 = *(_QWORD *)(v11 + 80);
    if ( v15 )
    {
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v15 + 24LL))(v15, 0x2000LL, 1LL);
      v13 = 1LL;
    }
  }
  v16 = *(volatile signed __int32 **)(v11 + 128);
  if ( v16 != v12
    || *(_DWORD *)(v11 + 136) != 1
    || (int)((double)*((int *)this + 102) * *((double *)CDesktopManager::s_pDesktopManagerInstance + 53)) != *(_DWORD *)(v11 + 140) )
  {
    *(_DWORD *)(v11 + 136) = 1;
    if ( v16 && _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v16)(v16, 1LL);
    *(_QWORD *)(v11 + 128) = v12;
    if ( v12 )
      _InterlockedIncrement(v12 + 2);
    *(_DWORD *)(v11 + 96) |= 1u;
    v16 = *(volatile signed __int32 **)(v11 + 80);
    if ( v16 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64))(*(_QWORD *)v16 + 24LL))(v16, 0x2000LL, v13);
  }
  v17 = (*((_BYTE *)this + 288) & 0x20) != 0;
  if ( *(_BYTE *)(v11 + 144) != v17 )
  {
    v50 = *(_QWORD *)(v11 + 80);
    *(_BYTE *)(v11 + 144) = v17;
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v50 + 24LL))(v50, 0x2000LL, v13);
  }
  v18 = *((_DWORD *)this + 94);
  if ( v18 )
  {
    if ( v18 != 1 || v3 )
      goto LABEL_33;
  }
  else if ( v3 != 1 )
  {
LABEL_33:
    v19 = (CButton *)*((_QWORD *)this + 3);
    v20 = 0;
    goto LABEL_34;
  }
  v20 = 1;
  v19 = this;
LABEL_34:
  v21 = *((_QWORD *)this + 37);
  v22 = *(_QWORD *)(v21 + 80);
  if ( v19 == (CButton *)v22 )
    goto LABEL_35;
  if ( v22 )
  {
    v37 = *(_DWORD *)(v22 + 272);
    v38 = 0LL;
    for ( i = *(_QWORD *)(v22 + 248); (unsigned int)v38 < v37; v38 = (unsigned int)(v38 + 1) )
    {
      if ( v21 == *(_QWORD *)(i + 8 * v38) )
        break;
    }
    if ( (unsigned int)v38 < v37 )
    {
      for ( ; (unsigned int)v38 < v37 - 1; v37 = *(_DWORD *)(v22 + 272) )
      {
        *(_QWORD *)(i + 8 * v38) = *(_QWORD *)(i + 8LL * (unsigned int)(v38 + 1));
        v38 = (unsigned int)(v38 + 1);
      }
      *(_DWORD *)(v22 + 272) = v37 - 1;
    }
    *(_QWORD *)(v21 + 80) = 0LL;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v21 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v21)(v21, 1LL);
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v22 + 24LL))(v22, 0x2000LL, v21, i);
  }
  v40 = *((unsigned int *)v19 + 68);
  v60 = *((_QWORD *)this + 37);
  if ( (unsigned int)v40 > *((_DWORD *)v19 + 68) )
  {
    v2 = -2147024809;
    v51 = 451;
LABEL_103:
    v52 = v2;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, v51, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x4Cu, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x149u, 0LL);
    return v52;
  }
  v64 = &v60;
  v2 = DynArrayImpl<0>::Grow((char **)v19 + 31, 8u, 1, 0, (unsigned __int64 *)&v64);
  if ( v2 < 0 )
  {
    v51 = 461;
    goto LABEL_103;
  }
  v41 = *((unsigned int *)v19 + 68);
  v42 = *((_QWORD *)v19 + 31);
  *((_DWORD *)v19 + 68) = v41 + 1;
  if ( (unsigned int)v41 > (unsigned int)v40 )
  {
    v53 = v42 + 8 * v41;
    do
    {
      v41 = (unsigned int)(v41 - 1);
      v53 -= 8LL;
      *(_QWORD *)(v53 + 8) = *(_QWORD *)(v42 + 8 * v41);
    }
    while ( (unsigned int)v41 > (unsigned int)v40 );
  }
  v43 = v64;
  v44 = (__int64 *)(v42 + 8 * v40);
  if ( v64 >= v44 && (unsigned __int64)v64 < v42 + 8 * ((unsigned __int64)*((unsigned int *)v19 + 68) - 1) )
    v43 = ++v64;
  *v44 = *v43;
  _InterlockedIncrement((volatile signed __int32 *)(v60 + 8));
  *(_QWORD *)(v60 + 80) = v19;
  (*(void (__fastcall **)(CButton *, __int64))(*(_QWORD *)v19 + 24LL))(v19, 0x2000LL);
  v45 = *((_QWORD *)this + 37);
  if ( *(_DWORD *)(v45 + 24) != *((_DWORD *)this + 32) || *(_DWORD *)(v45 + 28) != *((_DWORD *)this + 33) )
  {
    v46 = *((_QWORD *)this + 16);
    *(_DWORD *)(v45 + 96) |= 1u;
    *(_QWORD *)(v45 + 24) = v46;
    v47 = *(_QWORD *)(v45 + 80);
    if ( v47 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v47 + 24LL))(v47, 0x2000LL);
  }
  v16 = (volatile signed __int32 *)*((_QWORD *)this + 37);
  if ( *((CButton **)v16 + 10) == this )
  {
    v61 = 0LL;
    CAtlasedImage::SetOffset((CAtlasedImage *)v16, &v61);
  }
  else if ( *((_DWORD *)this + 30) != *((_DWORD *)v16 + 4) || *((_DWORD *)this + 31) != *((_DWORD *)v16 + 5) )
  {
    *((_QWORD *)v16 + 2) = *((_QWORD *)this + 15);
    CAtlasedImage::SetDirtyFlags((CAtlasedImage *)v16, 1, 0x2000u);
  }
LABEL_35:
  if ( v20 )
  {
    v54 = *((_QWORD *)this + 49);
    if ( !v54 || *(_BYTE *)(v54 + 72) )
    {
      *((_DWORD *)this + 96) = *v6;
    }
    else
    {
      CButton::ComputeFadeValues(this, &v62, &v63);
      v55 = v62;
      *((float *)this + 95) = v63;
      *((float *)this + 96) = v55;
    }
    CAtlasedImage::SetOpacity(*((CAtlasedImage **)this + 37), *((float *)this + 95));
    CAtlasedImage::SetOpacity(*((CAtlasedImage **)this + 38), *((float *)this + 96));
    CButton::DrawStateW(this, *((_QWORD *)this + 38), v3);
    result = CButton::ActivateTimeline(this, *v6);
    v52 = result;
    if ( (int)result >= 0 )
      return result;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, result, 0x161u, 0LL);
    return v52;
  }
  if ( *((_QWORD *)this + 49) )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0qp_EtwEventWriteTransfer(v16, &UdwmAnimation_Stop, 7LL);
    CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
    v56 = *((_QWORD *)this + 49);
    if ( v56 )
    {
      v57 = (*(_DWORD *)(v56 + 8))-- == 1;
      v58 = CDesktopManager::s_fTimelineDirty;
      if ( v57 )
        v58 = 1;
      *((_QWORD *)this + 49) = 0LL;
      CDesktopManager::s_fTimelineDirty = v58;
    }
  }
  v23 = *((_QWORD *)this + 38);
  v24 = *(CBaseObject **)(v23 + 72);
  if ( v24 )
  {
    CBaseObject::Release(v24);
    *(_QWORD *)(v23 + 72) = 0LL;
    CAtlasedImage::SetDirtyFlags((CAtlasedImage *)v23, 1, 0x2000u);
  }
  v25 = *(CBaseObject **)(v23 + 128);
  if ( v25
    || *(_DWORD *)(v23 + 136) != 1
    || (int)((double)*((int *)this + 102) * *((double *)CDesktopManager::s_pDesktopManagerInstance + 53)) != *(_DWORD *)(v23 + 140) )
  {
    *(_DWORD *)(v23 + 136) = 1;
    if ( v25 )
      CBaseObject::Release(v25);
    *(_DWORD *)(v23 + 96) |= 1u;
    v26 = *(_QWORD *)(v23 + 80);
    *(_QWORD *)(v23 + 128) = 0LL;
    if ( v26 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 24LL))(v26, 0x2000LL);
  }
  v27 = (*((_BYTE *)this + 288) & 0x20) != 0;
  if ( *(_BYTE *)(v23 + 144) != v27 )
  {
    v59 = *(_QWORD *)(v23 + 80);
    *(_BYTE *)(v23 + 144) = v27;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v59 + 24LL))(v59, 0x2000LL);
  }
  v28 = *((_QWORD *)this + 37);
  v29 = (int)floor((float)(*(float *)v6 * 255.0) + 0.5);
  v30 = -1;
  if ( v29 <= 255 )
  {
    v31 = 0;
    if ( v29 >= 0 )
      v31 = v29;
  }
  else
  {
    v31 = -1;
  }
  v32 = v31;
  if ( v31 != *(_DWORD *)(v28 + 68) )
  {
    *(_DWORD *)(v28 + 96) |= 2u;
    v33 = *(_QWORD *)(v28 + 80);
    if ( v33 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 24LL))(v33, 0x2000LL);
    *(_DWORD *)(v28 + 68) = v32;
  }
  v34 = *((_QWORD *)this + 38);
  v35 = (int)floor(0.5);
  if ( v35 <= 255 )
  {
    v30 = 0;
    if ( v35 >= 0 )
      v30 = v35;
  }
  if ( v30 != *(_DWORD *)(v34 + 68) )
  {
    *(_DWORD *)(v34 + 96) |= 2u;
    v48 = *(_QWORD *)(v34 + 80);
    if ( v48 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v48 + 24LL))(v48, 0x2000LL);
    *(_DWORD *)(v34 + 68) = v30;
  }
  return (unsigned int)v2;
}
