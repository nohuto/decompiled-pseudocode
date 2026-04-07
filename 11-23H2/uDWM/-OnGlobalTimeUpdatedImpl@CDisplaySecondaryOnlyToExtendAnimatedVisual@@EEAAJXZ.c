/*
 * XREFs of ?OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ @ 0x1800BE960
 * Callers:
 *     <none>
 * Callees:
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800152B0 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18001C934 (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18001DF78 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180055584 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180055AB4 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180055EE4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800B7168 (-CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisu.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x1800B7EA4 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     ??4?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisual@@@Z @ 0x1800BE7DC (--4-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisual@@@Z.c)
 *     ?ScheduleEntranceAnimation@CDisplaySecondaryOnlyToExtendAnimatedVisual@@AEAAJXZ @ 0x1800BEDA0 (-ScheduleEntranceAnimation@CDisplaySecondaryOnlyToExtendAnimatedVisual@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDisplaySecondaryOnlyToExtendAnimatedVisual::OnGlobalTimeUpdatedImpl(
        CDisplaySecondaryOnlyToExtendAnimatedVisual *this)
{
  int v2; // edi
  struct CAnimatedTransitionVisual **v3; // r14
  CBaseObject *v4; // rbx
  HWND ShellWindowForDesktop; // rax
  struct CWindowData *WindowDataByHwnd; // rax
  volatile signed __int32 *v7; // rdx
  int v8; // edx
  int v9; // eax
  _DWORD *v10; // r15
  struct CAnimatedTransitionVisual *v11; // rcx
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // edi
  int v17; // ecx
  int v18; // eax
  int v19; // r12d
  struct CAnimatedTransitionVisual *v20; // rax
  CVisual *v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  int inserted; // eax
  struct tagPOINT **v25; // rbx
  _DWORD *v26; // r14
  int v27; // eax
  int v28; // ecx
  int v29; // eax
  int v30; // r15d
  int v31; // ecx
  int v32; // eax
  int v33; // r12d
  struct tagPOINT *v34; // rax
  CVisual *v35; // rcx
  LONG x; // eax
  __int64 v37; // rcx
  __int64 v38; // rax
  bool v39; // zf
  char v40; // al
  int v41; // eax
  int v43; // [rsp+20h] [rbp-50h]
  unsigned __int64 v44; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v45; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int64 v46; // [rsp+40h] [rbp-30h] BYREF
  CBaseObject *v47; // [rsp+48h] [rbp-28h] BYREF
  struct tagRECT v48; // [rsp+50h] [rbp-20h] BYREF

  v2 = 0;
  v3 = (struct CAnimatedTransitionVisual **)((char *)this + 448);
  if ( !*((_QWORD *)this + 56) || !*((_QWORD *)this + 57) )
  {
    v46 = 0LL;
    GetDesktopID(1LL, &v46);
    if ( !*v3 )
    {
      v4 = 0LL;
      v47 = 0LL;
      ShellWindowForDesktop = CWindowList::GetShellWindowForDesktop(
                                *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                                v46);
      WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                           ShellWindowForDesktop);
      if ( WindowDataByHwnd )
      {
        v7 = (volatile signed __int32 *)*((_QWORD *)WindowDataByHwnd + 55);
        if ( v7 )
        {
          wil::com_ptr_t<CVisual,wil::err_returncode_policy>::operator=(&v47, v7);
          v8 = 0;
          if ( *((_DWORD *)this + 77) - *((_DWORD *)this + 75) >= 0 )
            v8 = *((_DWORD *)this + 77) - *((_DWORD *)this + 75);
          v9 = 0;
          if ( *((_DWORD *)this + 76) - *((_DWORD *)this + 74) >= 0 )
            v9 = *((_DWORD *)this + 76) - *((_DWORD *)this + 74);
          v4 = v47;
          if ( *((_DWORD *)v47 + 32) == v9 && *((_DWORD *)v47 + 33) == v8 )
          {
            v10 = (_DWORD *)((char *)this + 484);
            v48.left = *((_DWORD *)this + 121) - *((_DWORD *)v47 + 30);
            v48.top = *((_DWORD *)this + 122) - *((_DWORD *)v47 + 31);
            v48.right = *((_DWORD *)this + 123) - *((_DWORD *)v47 + 30);
            v48.bottom = *((_DWORD *)this + 124) - *((_DWORD *)v47 + 31);
            v11 = *v3;
            *v3 = 0LL;
            if ( v11 )
              CBaseObject::Release((struct CAnimatedTransitionVisual *)((char *)v11 + 8));
            v12 = CAnimatedTransitionVisual::Create(v3);
            v2 = v12;
            if ( v12 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x115u);
LABEL_16:
              CBaseObject::Release(v4);
LABEL_55:
              CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
              return (unsigned int)v2;
            }
            v13 = CAnimatedTransitionVisual::SetVisual((struct CBaseImageProxy **)*v3, v4, 1, &v48);
            v2 = v13;
            if ( v13 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x116u);
              goto LABEL_16;
            }
            v14 = *((_DWORD *)this + 123) - *v10;
            v15 = v14;
            if ( v14 < 0 )
              v15 = 0;
            LODWORD(v45) = v15;
            v16 = 0;
            if ( v14 >= 0 )
              v16 = v14;
            v17 = *((_DWORD *)this + 124) - *((_DWORD *)this + 122);
            v18 = v17;
            if ( v17 < 0 )
              v18 = 0;
            HIDWORD(v45) = v18;
            v19 = 0;
            if ( v17 >= 0 )
              v19 = v17;
            CAnimatedTransitionVisual::SetBeginRect(
              (struct tagPOINT *)*v3,
              (const struct tagRECT *)((char *)this + 484));
            v20 = *v3;
            *(_OWORD *)((char *)v20 + 872) = *(_OWORD *)v10;
            v21 = (struct CAnimatedTransitionVisual *)((char *)v20 + 8);
            v22 = *((_DWORD *)v20 + 24);
            if ( (v22 & 0x1000) == 0 )
            {
              *((_DWORD *)v21 + 22) = v22 | 0x1000;
              CVisual::PropagateDirtyChildren(v21);
            }
            v23 = (__int64)*v3 + 8;
            v44 = __PAIR64__(v19, v16);
            (*(void (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v23 + 104LL))(v23, &v44);
            *((_QWORD *)*v3 + 119) = v45;
            CVisual::SetInterpolationMode((unsigned int *)*v3 + 2, 1u);
            inserted = VisualCollection::InsertRelative(
                         (CDisplaySecondaryOnlyToExtendAnimatedVisual *)((char *)this + 32),
                         ((unsigned __int64)*v3 + 8) & -(__int64)(*v3 != 0LL),
                         0LL,
                         0,
                         v43);
            v2 = inserted;
            if ( inserted < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x120u);
              goto LABEL_16;
            }
          }
        }
      }
      if ( v4 )
        CBaseObject::Release(v4);
    }
    v25 = (struct tagPOINT **)((char *)this + 456);
    if ( !*((_QWORD *)this + 57) )
    {
      *v25 = 0LL;
      v26 = (_DWORD *)((char *)this + 500);
      v27 = CDisplayAnimatedVisual::CaptureAndAddVisual(
              this,
              v46,
              (const struct tagRECT *)((char *)this + 500),
              (const struct tagRECT *)((char *)this + 500),
              (struct CAnimatedTransitionVisual **)this + 57);
      v2 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0x128u);
        goto LABEL_55;
      }
      v28 = *((_DWORD *)this + 127) - *v26;
      v29 = v28;
      if ( v28 < 0 )
        v29 = 0;
      LODWORD(v44) = v29;
      v30 = 0;
      if ( v28 >= 0 )
        v30 = v28;
      v31 = *((_DWORD *)this + 128) - *((_DWORD *)this + 126);
      v32 = v31;
      if ( v31 < 0 )
        v32 = 0;
      HIDWORD(v44) = v32;
      v33 = 0;
      if ( v31 >= 0 )
        v33 = v31;
      CAnimatedTransitionVisual::SetBeginRect(*v25, (const struct tagRECT *)((char *)this + 500));
      v34 = *v25;
      *(_OWORD *)&v34[109].x = *(_OWORD *)v26;
      v35 = (CVisual *)&v34[1];
      x = v34[12].x;
      if ( (x & 0x1000) == 0 )
      {
        *((_DWORD *)v35 + 22) = x | 0x1000;
        CVisual::PropagateDirtyChildren(v35);
      }
      v37 = (__int64)&(*v25)[1];
      v45 = __PAIR64__(v33, v30);
      (*(void (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v37 + 104LL))(v37, &v45);
      (*v25)[119] = (struct tagPOINT)v44;
    }
  }
  v38 = *((_QWORD *)this + 58);
  if ( v38 && *(_BYTE *)(v38 + 72) )
  {
    *((_QWORD *)this + 58) = 0LL;
    v39 = (*(_DWORD *)(v38 + 8))-- == 1;
    v40 = CDesktopManager::s_fTimelineDirty;
    if ( v39 )
      v40 = 1;
    CDesktopManager::s_fTimelineDirty = v40;
    v41 = CDisplaySecondaryOnlyToExtendAnimatedVisual::ScheduleEntranceAnimation(this);
    v2 = v41;
    if ( v41 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v41, 0x136u);
      goto LABEL_55;
    }
  }
  else if ( v2 < 0 )
  {
    goto LABEL_55;
  }
  return (unsigned int)v2;
}
