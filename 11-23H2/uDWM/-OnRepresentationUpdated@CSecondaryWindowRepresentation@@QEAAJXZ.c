/*
 * XREFs of ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180036300
 * Callers:
 *     ?Initialize@CSecondaryWindowRepresentation@@IEAAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x180033C68 (-Initialize@CSecondaryWindowRepresentation@@IEAAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUIS.c)
 *     ?OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x180047970 (-OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800482A0 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18004E40C (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     ?GetIdealWindowRepresentationType@CWindowData@@QEBA?AW4WindowRepresentationType@@XZ @ 0x18000FC7C (-GetIdealWindowRepresentationType@CWindowData@@QEBA-AW4WindowRepresentationType@@XZ.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18001C934 (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVCWindowRepresentation@@@Z @ 0x180034198 (-ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVC.c)
 *     ?OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18003423C (-OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180035620 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?HasNonTrivialRepresentation@CWindowData@@QEBA_NXZ @ 0x1800360A4 (-HasNonTrivialRepresentation@CWindowData@@QEBA_NXZ.c)
 *     ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x180036690 (-OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z @ 0x1800C4658 (-Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::OnRepresentationUpdated(
        CSecondaryWindowRepresentation *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rdi
  unsigned int v5; // ebp
  unsigned int v7; // r13d
  __int128 v8; // xmm0
  int v9; // r12d
  int *v10; // rsi
  int v11; // r12d
  int v12; // ecx
  int v13; // eax
  int *v14; // r15
  char v15; // r12
  unsigned int v16; // esi
  char *v17; // rdi
  CBaseObject *v18; // rcx
  CBaseObject *v19; // rcx
  int v20; // eax
  int v21; // eax
  __int64 v22; // rdi
  char v23; // bp
  __int64 v24; // rsi
  CWindowData *v25; // rdx
  CWindowData *v26; // rdi
  char v27; // al
  int v28; // eax
  void (__fastcall ***v29)(_QWORD, CSecondaryWindowRepresentation *); // rcx
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rdi
  CBaseObject *v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rcx
  __int64 v38; // rdx
  CWindowData *v39; // r15
  int IdealWindowRepresentationType; // eax
  CBaseObject *v41; // rcx
  int v42; // eax
  __int128 v43; // [rsp+30h] [rbp-28h] BYREF

  v4 = *((_QWORD *)this + 4);
  v5 = 0;
  v7 = 0;
  if ( !v4 || *((_BYTE *)this + 161) )
    return v7;
  v8 = *((_OWORD *)this + 4);
  v9 = *((_DWORD *)this + 10);
  *((_QWORD *)this + 8) = v4;
  v43 = v8;
  if ( (v9 & 0x800) != 0 )
  {
    *((_DWORD *)this + 18) = 3;
    v14 = (int *)((char *)this + 72);
  }
  else
  {
    v10 = (int *)((char *)this + 72);
    v11 = v9 & 0x20;
    *((_DWORD *)this + 18) = 0;
    if ( (*(_BYTE *)(v4 + 673) & 1) == 0 || v11 )
    {
      if ( *(_QWORD *)(v4 + 480) )
        v12 = 2;
      else
        v12 = CWindowData::HasNonTrivialRepresentation((CWindowData *)v4) != 0;
      *v10 = v12;
      if ( !v12
        && !v11
        && (*(_BYTE *)(v4 + 676) & 8) == 0
        && !CWindowData::IsImmersiveWindow((CWindowData *)v4)
        && *(_DWORD *)(v4 + 632) )
      {
        while ( 1 )
        {
          v39 = *(CWindowData **)(*(_QWORD *)(v4 + 608) + 8LL * v5);
          IdealWindowRepresentationType = CWindowData::GetIdealWindowRepresentationType(v39);
          *v10 = IdealWindowRepresentationType;
          if ( IdealWindowRepresentationType )
            break;
          if ( ++v5 >= *(_DWORD *)(v4 + 632) )
            goto LABEL_8;
        }
        *((_QWORD *)this + 8) = v39;
      }
    }
    else
    {
      *v10 = 3;
    }
LABEL_8:
    v13 = *v10;
    if ( !*v10 )
    {
      *v10 = 3;
      v13 = 3;
    }
    v14 = v10;
    if ( v11 && v13 == 3 )
      *v10 = 1;
  }
  v15 = 0;
  if ( (_QWORD)v43 != *((_QWORD *)this + 8) || DWORD2(v43) != *v14 )
  {
    v16 = 0;
    v17 = (char *)this + 184;
    do
    {
      v18 = (CBaseObject *)*((_QWORD *)v17 - 1);
      if ( v18 )
      {
        CBaseObject::Release(v18);
        *((_QWORD *)v17 - 1) = 0LL;
      }
      if ( *(_QWORD *)v17 )
      {
        CBaseObject::Release(*(CBaseObject **)v17);
        *(_QWORD *)v17 = 0LL;
      }
      v19 = (CBaseObject *)*((_QWORD *)v17 + 1);
      if ( v19 )
      {
        CBaseObject::Release(v19);
        *((_QWORD *)v17 + 1) = 0LL;
      }
      v17[16] = 0;
      ++v16;
      v17 += 32;
    }
    while ( v16 < 5 );
    v15 = 1;
    if ( *((_DWORD *)this + 18) == 3 && CWindowData::IsImmersiveWindow(*((CWindowData **)this + 4)) )
    {
      v41 = (CBaseObject *)*((_QWORD *)this + 47);
      if ( v41 )
      {
        CBaseObject::Release(v41);
        *((_QWORD *)this + 47) = 0LL;
      }
      v42 = CImmersiveWindowIconic::Create(
              *((struct CWindowData **)this + 4),
              *((_DWORD *)this + 41),
              (enum DEVICE_SCALE_FACTOR)*((_DWORD *)this + 30),
              (*((_DWORD *)this + 10) & 0x1000) != 0,
              (struct CImmersiveWindowIconic **)this + 47);
      v7 = v42;
      if ( v42 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v42, 0x1C6u, 0LL);
        return v7;
      }
    }
    v20 = CWindowData::ChangeSecondaryWindowRepresentation(*((CWindowData **)this + 4), this, (CWindowData **)&v43, a4);
    v7 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x1C9u, 0LL);
      return v7;
    }
    v21 = CSecondaryWindowRepresentation::OnSourceConstantAlphaUpdated(this);
    v7 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x1CAu, 0LL);
      return v7;
    }
  }
  v22 = 0LL;
  v23 = *((_BYTE *)this + 336);
  v24 = *((_QWORD *)this + 8);
  switch ( *v14 )
  {
    case 1:
      goto LABEL_27;
    case 2:
      v36 = *(_QWORD *)(v24 + 480);
      if ( v36 )
      {
        v22 = *(_QWORD *)(v36 + 32);
        break;
      }
LABEL_27:
      v22 = v24;
      break;
    case 3:
      if ( CWindowData::IsImmersiveWindow(*((CWindowData **)this + 8)) )
        goto LABEL_27;
      v22 = *(_QWORD *)(*(_QWORD *)(v24 + 488) + 80LL);
      break;
  }
  if ( (*(_BYTE *)(v22 + 673) & 0x10) != 0
    || (*(_BYTE *)(v22 + 675) & 0x20) != 0
    || *(_DWORD *)(v22 + 560)
    || *(_QWORD *)(v22 + 424)
    && *(HWND *)(v22 + 40) != CWindowList::GetShellWindowForDesktop(
                                *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                                *(_QWORD *)(v22 + 136))
    || *((_QWORD *)this + 6) )
  {
    goto LABEL_52;
  }
  v25 = 0LL;
  v26 = (CWindowData *)*((_QWORD *)this + 8);
  switch ( *v14 )
  {
    case 1:
      goto LABEL_34;
    case 2:
      v38 = *((_QWORD *)v26 + 60);
      if ( v38 )
      {
        v25 = *(CWindowData **)(v38 + 32);
        break;
      }
LABEL_34:
      v25 = v26;
      break;
    case 3:
      if ( CWindowData::IsImmersiveWindow(*((CWindowData **)this + 8)) )
        goto LABEL_34;
      v25 = *(CWindowData **)(*((_QWORD *)v26 + 61) + 80LL);
      break;
  }
  if ( !CWindowData::IsImmersiveWindow(v25) )
  {
    v27 = 1;
    goto LABEL_37;
  }
LABEL_52:
  v27 = 0;
LABEL_37:
  *((_BYTE *)this + 336) = v27;
  if ( !v15 )
  {
    if ( !v23 && !v27 )
      return v7;
    v35 = (CBaseObject *)*((_QWORD *)this + 38);
    if ( v35 )
    {
      CBaseObject::Release(v35);
      *((_QWORD *)this + 38) = 0LL;
    }
  }
  if ( (*((_BYTE *)this + 40) & 2) != 0 )
    (*(void (__fastcall **)(_QWORD, CSecondaryWindowRepresentation *))(**((_QWORD **)this + 21) + 16LL))(
      *((_QWORD *)this + 21),
      this);
  v28 = *((_DWORD *)this + 6);
  if ( (v28 & 4) == 0 )
  {
    v29 = (void (__fastcall ***)(_QWORD, CSecondaryWindowRepresentation *))*((_QWORD *)this + 21);
    *((_DWORD *)this + 6) = v28 | 4;
    (**v29)(v29, this);
  }
  v30 = 0LL;
  v31 = *((_QWORD *)this + 8);
  v32 = (unsigned int)(*v14 - 1);
  if ( *v14 != 1 )
  {
    v32 = (unsigned int)(*v14 - 2);
    if ( *v14 == 2 )
    {
      v37 = *(_QWORD *)(v31 + 480);
      if ( v37 )
      {
        v30 = *(_QWORD *)(v37 + 32);
        goto LABEL_44;
      }
    }
    else
    {
      if ( *v14 != 3 )
        goto LABEL_44;
      if ( !CWindowData::IsImmersiveWindow(*((CWindowData **)this + 8)) )
      {
        v30 = *(_QWORD *)(*(_QWORD *)(v31 + 488) + 80LL);
        goto LABEL_44;
      }
    }
  }
  v30 = v31;
LABEL_44:
  v33 = *(_QWORD *)(v30 + 440);
  if ( v33 )
  {
    while ( 1 )
    {
      v33 = *(_QWORD *)(v33 + 24);
      if ( !v33 || (*(_BYTE *)(v33 + 88) & 1) != 0 )
        break;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 32LL))(v33, v32);
    }
  }
  CSecondaryWindowRepresentation::OnMarginsOrSizeUpdated(this);
  return v7;
}
