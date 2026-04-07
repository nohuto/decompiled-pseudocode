/*
 * XREFs of ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x18003ABE0
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18003D8E0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800182E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?GetCaptionColor@CTopLevelWindow@@AEBAKXZ @ 0x18001AB94 (-GetCaptionColor@CTopLevelWindow@@AEBAKXZ.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x1800354B0 (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     ?Create@CButton@@SAJPEAPEAV1@@Z @ 0x1800367D4 (-Create@CButton@@SAJPEAPEAV1@@Z.c)
 *     ?SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0M@Z @ 0x18003A2D0 (-SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0M@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x180051268 (-IsPPIEdition@@YA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetReverseRTLMirror@CButton@@QEAAX_N@Z @ 0x1800ACC30 (-SetReverseRTLMirror@CButton@@QEAAX_N@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateButtonVisuals(
        struct CButton **this,
        const struct CTopLevelWindow::WindowFrame *a2)
{
  int v2; // esi
  unsigned __int64 *v3; // rbp
  unsigned int v6; // edi
  int v7; // esi
  unsigned __int64 *v8; // r14
  int v9; // esi
  unsigned __int64 *v10; // r15
  int v11; // esi
  unsigned __int64 *v12; // r12
  struct CVisual *v13; // rdx
  struct CButton *v15; // rdx
  int v16; // eax
  int v17; // esi
  int SystemMetricsForDpi; // r9d
  unsigned int CaptionColor; // eax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  bool v24; // r8
  int v25; // edx
  float v26; // xmm6_4
  char *v27; // rsi
  CButton *v28; // rcx
  const struct CBitmapSourceArray *v29; // r8
  __int64 v30; // rax
  int v31; // eax
  const struct CBitmapSourceArray *v32; // r8
  int v33; // eax
  __int64 v34; // rax
  int v35; // eax
  unsigned __int64 v36; // rdx
  bool v37; // cl
  char v38; // r8
  unsigned __int64 v39; // rcx
  bool v40; // dl
  char v41; // r8
  int v42; // eax
  unsigned __int64 v43; // rdx
  bool v44; // cl
  char v45; // r8
  int v46; // eax
  int inserted; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int v57; // eax
  int v58; // eax
  unsigned __int64 v59; // rcx
  bool v60; // dl
  char v61; // r8
  int v62; // eax
  int v63; // eax
  unsigned int i; // edx
  unsigned __int64 v65; // rcx
  int v66; // eax
  int v67; // eax
  const struct CBitmapSourceArray *v68; // r8
  const struct CBitmapSourceArray *v69; // rbp
  int v70; // eax
  int v71; // eax
  __int64 v72; // rdx
  int v73; // eax
  unsigned __int64 v74; // rcx
  int v75; // eax
  int v76; // eax
  unsigned int v77; // [rsp+20h] [rbp-48h]
  __int64 v78; // [rsp+70h] [rbp+8h]

  v2 = 0;
  v3 = (unsigned __int64 *)(this + 67);
  if ( ((_DWORD)this[78] & 0x100) != 0 )
  {
    if ( !*v3 )
    {
      v46 = CButton::Create(this + 67);
      v2 = v46;
      if ( v46 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v46, 0xAB0u, 0LL);
        v6 = v2;
        goto LABEL_76;
      }
      inserted = VisualCollection::InsertRelative((struct CButton *)((char *)this[38] + 32), *v3, 0LL, 0, v77);
      v2 = inserted;
      v6 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0xAB2u, 0LL);
        goto LABEL_76;
      }
      *(_DWORD *)(*v3 + 200) = 8;
    }
    v36 = *v3;
    v37 = ((_DWORD)this[78] & 0x1000) != 0;
    v38 = *(_BYTE *)(*v3 + 288);
    if ( (v38 & 1) != v37 )
    {
      v55 = *(_DWORD *)(v36 + 88);
      *(_BYTE *)(v36 + 288) = v37 | v38 & 0xFE;
      if ( (v55 & 0x8000) == 0 )
      {
        *(_DWORD *)(v36 + 88) = v55 | 0x8000;
        CVisual::PropagateDirtyChildren((CVisual *)v36);
      }
    }
LABEL_3:
    v6 = v2;
    if ( v2 >= 0 )
      goto LABEL_4;
LABEL_76:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x9DDu, 0LL);
    return v6;
  }
  if ( !*v3 )
    goto LABEL_3;
  v52 = VisualCollection::Remove((struct CButton *)((char *)this[38] + 32), (struct CVisual *)*v3);
  v2 = v52;
  v6 = v52;
  if ( v52 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v52, 0xABDu, 0LL);
    goto LABEL_76;
  }
  if ( !*v3 )
    goto LABEL_3;
  CBaseObject::Release((CBaseObject *)*v3);
  *v3 = 0LL;
LABEL_4:
  v7 = 0;
  v8 = (unsigned __int64 *)(this + 68);
  if ( ((_DWORD)this[78] & 0x200) != 0 )
  {
    if ( !*v8 )
    {
      v48 = CButton::Create(this + 68);
      v7 = v48;
      v6 = v48;
      if ( v48 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v48, 0xAB0u, 0LL);
        goto LABEL_82;
      }
      v49 = VisualCollection::InsertRelative((struct CButton *)((char *)this[38] + 32), *v8, 0LL, 0, v77);
      v7 = v49;
      v6 = v49;
      if ( v49 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v49, 0xAB2u, 0LL);
        goto LABEL_82;
      }
      *(_DWORD *)(*v8 + 200) = 9;
    }
    v39 = *v8;
    v40 = ((_DWORD)this[78] & 0x2000) != 0;
    v41 = *(_BYTE *)(*v8 + 288);
    if ( (v41 & 1) != v40 )
    {
      v42 = *(_DWORD *)(v39 + 88);
      *(_BYTE *)(v39 + 288) = v40 | v41 & 0xFE;
      if ( (v42 & 0x8000) == 0 )
      {
        *(_DWORD *)(v39 + 88) = v42 | 0x8000;
        CVisual::PropagateDirtyChildren((CVisual *)v39);
      }
    }
LABEL_6:
    v6 = v7;
    if ( v7 >= 0 )
      goto LABEL_7;
LABEL_82:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x9DEu, 0LL);
    return v6;
  }
  if ( !*v8 )
    goto LABEL_6;
  v53 = VisualCollection::Remove((struct CButton *)((char *)this[38] + 32), (struct CVisual *)*v8);
  v7 = v53;
  v6 = v53;
  if ( v53 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v53, 0xABDu, 0LL);
    goto LABEL_82;
  }
  if ( !*v8 )
    goto LABEL_6;
  CBaseObject::Release((CBaseObject *)*v8);
  *v8 = 0LL;
LABEL_7:
  v9 = 0;
  v10 = (unsigned __int64 *)(this + 69);
  if ( ((_DWORD)this[78] & 0x400) != 0 )
  {
    if ( !*v10 )
    {
      v50 = CButton::Create(this + 69);
      v9 = v50;
      v6 = v50;
      if ( v50 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v50, 0xAB0u, 0LL);
        goto LABEL_87;
      }
      v51 = VisualCollection::InsertRelative((struct CButton *)((char *)this[38] + 32), *v10, 0LL, 0, v77);
      v9 = v51;
      v6 = v51;
      if ( v51 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v51, 0xAB2u, 0LL);
        goto LABEL_87;
      }
      *(_DWORD *)(*v10 + 200) = 20;
    }
    v43 = *v10;
    v44 = ((_DWORD)this[78] & 0x4000) != 0;
    v45 = *(_BYTE *)(*v10 + 288);
    if ( (v45 & 1) != v44 )
    {
      v56 = *(_DWORD *)(v43 + 88);
      *(_BYTE *)(v43 + 288) = v44 | v45 & 0xFE;
      if ( (v56 & 0x8000) == 0 )
      {
        *(_DWORD *)(v43 + 88) = v56 | 0x8000;
        CVisual::PropagateDirtyChildren((CVisual *)v43);
      }
    }
LABEL_9:
    v6 = v9;
    if ( v9 >= 0 )
      goto LABEL_10;
LABEL_87:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x9DFu, 0LL);
    return v6;
  }
  if ( !*v10 )
    goto LABEL_9;
  v54 = VisualCollection::Remove((struct CButton *)((char *)this[38] + 32), (struct CVisual *)*v10);
  v9 = v54;
  v6 = v54;
  if ( v54 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v54, 0xABDu, 0LL);
    goto LABEL_87;
  }
  if ( !*v10 )
    goto LABEL_9;
  CBaseObject::Release((CBaseObject *)*v10);
  *v10 = 0LL;
LABEL_10:
  v11 = 0;
  v12 = (unsigned __int64 *)(this + 66);
  v13 = this[66];
  if ( ((_DWORD)this[78] & 0x800) != 0 )
  {
    if ( !v13 )
    {
      v57 = CButton::Create(this + 66);
      v11 = v57;
      v6 = v57;
      if ( v57 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v57, 0xAB0u, 0LL);
        goto LABEL_95;
      }
      v58 = VisualCollection::InsertRelative((struct CButton *)((char *)this[38] + 32), *v12, 0LL, 0, v77);
      v11 = v58;
      v6 = v58;
      if ( v58 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v58, 0xAB2u, 0LL);
        goto LABEL_95;
      }
      *(_DWORD *)(*v12 + 200) = 21;
    }
    v59 = *v12;
    v60 = ((_DWORD)this[78] & 0x8000) != 0;
    v61 = *(_BYTE *)(*v12 + 288);
    if ( (v61 & 1) != v60 )
    {
      v62 = *(_DWORD *)(v59 + 88);
      *(_BYTE *)(v59 + 288) = v60 | v61 & 0xFE;
      if ( (v62 & 0x8000) == 0 )
      {
        *(_DWORD *)(v59 + 88) = v62 | 0x8000;
        CVisual::PropagateDirtyChildren((CVisual *)v59);
      }
    }
  }
  else if ( v13 )
  {
    v63 = VisualCollection::Remove((struct CButton *)((char *)this[38] + 32), v13);
    v11 = v63;
    v6 = v63;
    if ( v63 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v63, 0xABDu, 0LL);
      goto LABEL_95;
    }
    if ( *v12 )
    {
      CBaseObject::Release((CBaseObject *)*v12);
      *v12 = 0LL;
      goto LABEL_13;
    }
  }
  v6 = v11;
  if ( v11 < 0 )
  {
LABEL_95:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x9E0u, 0LL);
    return v6;
  }
LABEL_13:
  if ( *((_DWORD *)this + 182) == -1 )
  {
    v15 = this[94];
    v16 = *((_DWORD *)v15 + 87);
    if ( v16 >= 192 )
    {
      *((_DWORD *)this + 182) = 3;
    }
    else if ( v16 >= 144 )
    {
      *((_DWORD *)this + 182) = 2;
    }
    else
    {
      *((_DWORD *)this + 182) = v16 >= 120;
    }
    v78 = *(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames;
    v17 = *(_DWORD *)(**(_QWORD **)(*(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames + 136LL) + 72LL)
        + *(_DWORD *)(**(_QWORD **)(*(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames + 136LL) + 76LL);
    SystemMetricsForDpi = GetSystemMetricsForDpi(31LL, *((unsigned int *)v15 + 87));
    if ( v17 + *(_DWORD *)(**(_QWORD **)(320LL * *((int *)this + 182) + v78 + 200) + 28LL) > SystemMetricsForDpi )
    {
      *((_DWORD *)this + 182) = 0;
      for ( i = 0; i < 3; *((_DWORD *)this + 182) = i )
      {
        if ( v17 + *(_DWORD *)(**(_QWORD **)(320LL * (int)i + v78 + 520) + 28LL) > SystemMetricsForDpi )
          break;
        ++i;
      }
    }
  }
  if ( a2 )
  {
    CaptionColor = CTopLevelWindow::GetCaptionColor((CTopLevelWindow *)this);
    v22 = BYTE2(CaptionColor) + 5 * BYTE1(CaptionColor);
    v23 = (unsigned int)v22 + 2 * (unsigned __int8)CaptionColor;
    v24 = (unsigned int)v23 > 0x400
       || (unsigned __int8)CDesktopManager::IsHighContrastMode(v23, v22, v20, v21)
       || IsPPIEdition();
    v25 = *((_DWORD *)this + 156);
    v26 = FLOAT_1_0;
    if ( (v25 & 0x40) == 0 && (*((_BYTE *)this[94] + 675) & 0x10) == 0 )
      v26 = FLOAT_0_40000001;
    v27 = (char *)a2 + 320 * *((int *)this + 182) + 200;
    v28 = (CButton *)*v3;
    if ( v24 )
    {
      if ( v28 )
      {
        if ( (v25 & 0x40000) != 0 )
          v29 = (const struct CBitmapSourceArray *)(v27 + 128);
        else
          v29 = (const struct CBitmapSourceArray *)(v27 + 96);
        v30 = 40LL;
        if ( (v25 & 0x800) != 0 )
          v30 = 8LL;
        v31 = CButton::SetVisualStates(v28, (const struct CTopLevelWindow::WindowFrame *)((char *)a2 + v30), v29, v26);
        v6 = v31;
        if ( v31 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0xA31u, 0LL);
          return v6;
        }
      }
      if ( *v8 )
      {
        v32 = (const struct CBitmapSourceArray *)(((_BYTE)this[78] & 0x20) != 0 ? v27 + 128 : v27 + 64);
        v33 = CButton::SetVisualStates(
                (CButton *)*v8,
                (const struct CTopLevelWindow::WindowFrame *)((char *)a2 + 8),
                v32,
                v26);
        v6 = v33;
        if ( v33 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, 0xA3Cu, 0LL);
          return v6;
        }
      }
      if ( *v10 )
      {
        v34 = 136LL;
        if ( ((_DWORD)this[78] & 0xB00) == 0 )
          v34 = 168LL;
        v35 = CButton::SetVisualStates(
                (CButton *)*v10,
                (const struct CTopLevelWindow::WindowFrame *)((char *)a2 + v34),
                (const struct CBitmapSourceArray *)v27,
                v26);
        v6 = v35;
        if ( v35 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0xA48u, 0LL);
          return v6;
        }
        if ( (*((_BYTE *)this[94] + 672) & 0x40) != 0 )
        {
          v65 = *v10;
          *(_BYTE *)(v65 + 288) |= 0x10u;
          v66 = *(_DWORD *)(v65 + 88);
          if ( (v66 & 0x8000) == 0 )
          {
            *(_DWORD *)(v65 + 88) = v66 | 0x8000;
            CVisual::PropagateDirtyChildren((CVisual *)v65);
          }
        }
      }
      if ( !*v12 )
        return v6;
      v67 = CButton::SetVisualStates(
              (CButton *)*v12,
              (const struct CTopLevelWindow::WindowFrame *)((char *)a2 + 40),
              (const struct CBitmapSourceArray *)(v27 + 32),
              v26);
      v6 = v67;
      if ( v67 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v67, 0xA56u, 0LL);
        return v6;
      }
    }
    else
    {
      if ( v28 )
      {
        if ( (v25 & 0x40000) != 0 )
          v68 = (const struct CBitmapSourceArray *)(v27 + 288);
        else
          v68 = (const struct CBitmapSourceArray *)(v27 + 256);
        v69 = (const struct CBitmapSourceArray *)(v27 + 288);
        v70 = CButton::SetVisualStates(
                v28,
                (const struct CTopLevelWindow::WindowFrame *)((char *)a2 + ((~(_WORD)v25 & 0x800 | 0x1200uLL) >> 6)),
                v68,
                v26);
        v6 = v70;
        if ( v70 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v70, 0xA67u, 0LL);
          return v6;
        }
      }
      else
      {
        v69 = (const struct CBitmapSourceArray *)(v27 + 288);
      }
      if ( *v8 )
      {
        if ( ((_BYTE)this[78] & 0x20) == 0 )
          v69 = (const struct CBitmapSourceArray *)(v27 + 224);
        v71 = CButton::SetVisualStates(
                (CButton *)*v8,
                (const struct CTopLevelWindow::WindowFrame *)((char *)a2 + 72),
                v69,
                v26);
        v6 = v71;
        if ( v71 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v71, 0xA72u, 0LL);
          return v6;
        }
      }
      if ( *v10 )
      {
        v72 = 168LL;
        if ( ((_DWORD)this[78] & 0xB00) != 0 )
          v72 = 136LL;
        v73 = CButton::SetVisualStates(
                (CButton *)*v10,
                (const struct CTopLevelWindow::WindowFrame *)((char *)a2 + v72),
                (const struct CBitmapSourceArray *)(v27 + 160),
                v26);
        v6 = v73;
        if ( v73 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v73, 0xA7Eu, 0LL);
          return v6;
        }
        if ( (*((_BYTE *)this[94] + 672) & 0x40) != 0 )
        {
          v74 = *v10;
          *(_BYTE *)(v74 + 288) |= 0x10u;
          v75 = *(_DWORD *)(v74 + 88);
          if ( (v75 & 0x8000) == 0 )
          {
            *(_DWORD *)(v74 + 88) = v75 | 0x8000;
            CVisual::PropagateDirtyChildren((CVisual *)v74);
          }
        }
      }
      if ( !*v12 )
        return v6;
      v76 = CButton::SetVisualStates(
              (CButton *)*v12,
              (const struct CTopLevelWindow::WindowFrame *)((char *)a2 + 104),
              (const struct CBitmapSourceArray *)(v27 + 192),
              v26);
      v6 = v76;
      if ( v76 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v76, 0xA8Cu, 0LL);
        return v6;
      }
    }
    CButton::SetReverseRTLMirror((CButton *)*v12, (*((_DWORD *)this[94] + 103) & 8) != 0);
  }
  return v6;
}
