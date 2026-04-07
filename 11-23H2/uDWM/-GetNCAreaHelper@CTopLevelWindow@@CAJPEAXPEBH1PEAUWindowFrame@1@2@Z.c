/*
 * XREFs of ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x180052AB0
 * Callers:
 *     ?EnsureImages@CTopLevelWindow@@SAJXZ @ 0x1800532CC (-EnsureImages@CTopLevelWindow@@SAJXZ.c)
 * Callees:
 *     ?GetNCAreaHorizontalStripHelper@CTopLevelWindow@@CAJPEAXHHW4NCAreaPart@1@11PEAUWindowFrame@1@2@Z @ 0x1800392E0 (-GetNCAreaHorizontalStripHelper@CTopLevelWindow@@CAJPEAXHHW4NCAreaPart@1@11PEAUWindowFrame@1@2@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x1800395C0 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x18005296C (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 *     ?SetSizingMargins@CTopLevelWindow@@CAXPEAUWindowFrame@1@0IU_MARGINS@@@Z @ 0x180053200 (-SetSizingMargins@CTopLevelWindow@@CAXPEAUWindowFrame@1@0IU_MARGINS@@@Z.c)
 *     ?GetThemePercentage@@YAJPEAXHHHPEAM@Z @ 0x18005326C (-GetThemePercentage@@YAJPEAXHHHPEAM@Z.c)
 *     ?CreateNCButtons@CTopLevelWindow@@CAJQEAXPEAUWindowFrame@1@1@Z @ 0x1800535B8 (-CreateNCButtons@CTopLevelWindow@@CAJQEAXPEAUWindowFrame@1@1@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTopLevelWindow::GetNCAreaHelper(
        void *a1,
        const int *a2,
        int *a3,
        struct CTopLevelWindow::WindowFrame *a4,
        struct CTopLevelWindow::WindowFrame *a5)
{
  int v6; // r8d
  void *v9; // r14
  int ThemeMargins; // eax
  unsigned int v11; // ebx
  int v12; // r9d
  int v13; // r9d
  int v14; // ebx
  int v15; // edi
  int v16; // edi
  int v17; // edi
  struct CBitmapSource *v18; // rax
  CBaseObject **v19; // rdi
  int v20; // r8d
  int *v21; // rdx
  char *v22; // rcx
  __int64 i; // rbx
  CBaseObject *v25; // rcx
  unsigned int iPropId; // [rsp+20h] [rbp-E0h]
  int v27; // [rsp+40h] [rbp-C0h]
  int v28; // [rsp+40h] [rbp-C0h]
  int v29; // [rsp+40h] [rbp-C0h]
  int cxLeftWidth; // [rsp+44h] [rbp-BCh]
  int v31; // [rsp+44h] [rbp-BCh]
  int cyTopHeight; // [rsp+48h] [rbp-B8h]
  int v33; // [rsp+48h] [rbp-B8h]
  int cyBottomHeight; // [rsp+4Ch] [rbp-B4h]
  int v35; // [rsp+4Ch] [rbp-B4h]
  int v36; // [rsp+50h] [rbp-B0h]
  int v37; // [rsp+50h] [rbp-B0h]
  __int64 v38; // [rsp+50h] [rbp-B0h]
  int cxRightWidth; // [rsp+58h] [rbp-A8h]
  int v40; // [rsp+58h] [rbp-A8h]
  char *v41; // [rsp+58h] [rbp-A8h]
  int v42; // [rsp+60h] [rbp-A0h]
  int v43; // [rsp+60h] [rbp-A0h]
  const int *v44; // [rsp+60h] [rbp-A0h]
  struct CBitmapSource *v45; // [rsp+68h] [rbp-98h] BYREF
  __int64 v46; // [rsp+70h] [rbp-90h]
  struct _MARGINS v47; // [rsp+80h] [rbp-80h] BYREF
  struct _MARGINS v48; // [rsp+90h] [rbp-70h] BYREF
  struct _MARGINS v49; // [rsp+A0h] [rbp-60h] BYREF
  struct _MARGINS v50; // [rsp+B0h] [rbp-50h] BYREF
  void *v51; // [rsp+C0h] [rbp-40h]
  struct _MARGINS v52; // [rsp+D0h] [rbp-30h] BYREF
  struct _MARGINS v53; // [rsp+E0h] [rbp-20h] BYREF
  struct _MARGINS v54; // [rsp+F0h] [rbp-10h] BYREF
  struct _MARGINS v55; // [rsp+100h] [rbp+0h] BYREF
  MARGINS pMargins; // [rsp+110h] [rbp+10h] BYREF
  struct _MARGINS v57; // [rsp+120h] [rbp+20h] BYREF

  v6 = a2[1];
  v51 = a1;
  v9 = a1;
  ThemeMargins = GetThemeMargins(a1, 0LL, v6, 0, 3602, 0LL, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1111;
LABEL_52:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011F9D0, 1u, ThemeMargins, iPropId, 0LL);
    return v11;
  }
  cxLeftWidth = pMargins.cxLeftWidth;
  ThemeMargins = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(v9, a2[3], 2u, &pMargins, &v45);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1123;
    goto LABEL_52;
  }
  *((_QWORD *)a4 + 191) = v45;
  *((_QWORD *)a5 + 191) = v46;
  v36 = pMargins.cxLeftWidth;
  cxRightWidth = pMargins.cxRightWidth;
  ThemeMargins = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(v9, a2[4], 2u, &pMargins, &v45);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1132;
    goto LABEL_52;
  }
  *((_QWORD *)a4 + 193) = v45;
  *((_QWORD *)a5 + 193) = v46;
  v42 = pMargins.cxLeftWidth;
  v27 = pMargins.cxRightWidth;
  ThemeMargins = CTopLevelWindow::GetNCAreaHorizontalStripHelper(
                   v9,
                   a2[1],
                   cxLeftWidth,
                   0,
                   1,
                   2,
                   (__int64)a4,
                   (__int64)a5);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1150;
    goto LABEL_52;
  }
  ThemeMargins = GetThemePercentage(v9, a2[1], *a3, v12, (float *)a4 + 465);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1153;
    goto LABEL_52;
  }
  ThemeMargins = GetThemePercentage(v9, a2[1], a3[1], v13, (float *)a5 + 465);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1154;
    goto LABEL_52;
  }
  ThemeMargins = GetThemeMargins(v9, 0LL, a2[1], 0, 3601, 0LL, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1156;
    goto LABEL_52;
  }
  v53 = pMargins;
  CTopLevelWindow::SetSizingMargins(a4, a5, 1u, &v53);
  cyTopHeight = pMargins.cyTopHeight;
  cyBottomHeight = pMargins.cyBottomHeight;
  ThemeMargins = CTopLevelWindow::GetNCAreaHorizontalStripHelper(
                   v9,
                   a2[6],
                   cxLeftWidth,
                   5,
                   6,
                   7,
                   (__int64)a4,
                   (__int64)a5);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1173;
    goto LABEL_52;
  }
  ThemeMargins = GetThemeMargins(v9, 0LL, a2[6], 0, 3601, 0LL, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1175;
    goto LABEL_52;
  }
  v54 = pMargins;
  CTopLevelWindow::SetSizingMargins(a4, a5, 6u, &v54);
  v14 = pMargins.cyTopHeight;
  v15 = pMargins.cyBottomHeight;
  v47.cxLeftWidth = v36;
  v47.cxRightWidth = cxRightWidth;
  v47.cyTopHeight = cyTopHeight;
  v47.cyBottomHeight = cyBottomHeight;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0, &v47);
  v48.cxRightWidth = v27;
  v48.cyTopHeight = cyTopHeight;
  v48.cxLeftWidth = v42;
  v48.cyBottomHeight = cyBottomHeight;
  CTopLevelWindow::SetSizingMargins(a4, a5, 2u, &v48);
  v49.cxLeftWidth = v36;
  v49.cxRightWidth = cxRightWidth;
  v49.cyTopHeight = v14;
  v49.cyBottomHeight = v15;
  CTopLevelWindow::SetSizingMargins(a4, a5, 5u, &v49);
  v50.cxLeftWidth = v42;
  v50.cxRightWidth = v27;
  v50.cyTopHeight = v14;
  v50.cyBottomHeight = v15;
  CTopLevelWindow::SetSizingMargins(a4, a5, 7u, &v50);
  ThemeMargins = GetThemeMargins(v9, 0LL, a2[10], 0, 3602, 0LL, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1189;
    goto LABEL_52;
  }
  v16 = pMargins.cxLeftWidth;
  ThemeMargins = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(v9, a2[12], 2u, &pMargins, &v45);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1195;
    goto LABEL_52;
  }
  *((_QWORD *)a4 + 209) = v45;
  *((_QWORD *)a5 + 209) = v46;
  v40 = pMargins.cxLeftWidth;
  v37 = pMargins.cxRightWidth;
  ThemeMargins = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(v9, a2[13], 2u, &pMargins, &v45);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1204;
    goto LABEL_52;
  }
  *((_QWORD *)a4 + 211) = v45;
  *((_QWORD *)a5 + 211) = v46;
  v35 = pMargins.cxLeftWidth;
  v33 = pMargins.cxRightWidth;
  ThemeMargins = CTopLevelWindow::GetNCAreaHorizontalStripHelper(v9, a2[10], v16, 9, 10, 11, (__int64)a4, (__int64)a5);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1222;
    goto LABEL_52;
  }
  ThemeMargins = GetThemeMargins(v9, 0LL, a2[10], 0, 3601, 0LL, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1224;
    goto LABEL_52;
  }
  v55 = pMargins;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0xAu, &v55);
  v28 = pMargins.cyTopHeight;
  v43 = pMargins.cyBottomHeight;
  ThemeMargins = CTopLevelWindow::GetNCAreaHorizontalStripHelper(v9, a2[15], v16, 14, 15, 16, (__int64)a4, (__int64)a5);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1241;
    goto LABEL_52;
  }
  ThemeMargins = GetThemeMargins(v9, 0LL, a2[15], 0, 3601, 0LL, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1243;
    goto LABEL_52;
  }
  v52 = pMargins;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0xFu, &v52);
  v17 = pMargins.cyTopHeight;
  v31 = pMargins.cyBottomHeight;
  ThemeMargins = CTopLevelWindow::CreateBitmapFromAtlas(v9, a2[17], &v57, &v45);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1251;
    goto LABEL_52;
  }
  v18 = v45;
  *((_QWORD *)a4 + 219) = v45;
  *((_QWORD *)a5 + 219) = v18;
  _InterlockedAdd((volatile signed __int32 *)v18 + 2, 1u);
  v52 = v57;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0x11u, &v52);
  v50.cxRightWidth = v37;
  v50.cyTopHeight = v28;
  v50.cxLeftWidth = v40;
  v50.cyBottomHeight = v43;
  CTopLevelWindow::SetSizingMargins(a4, a5, 9u, &v50);
  v49.cxRightWidth = v33;
  v49.cyTopHeight = v28;
  v49.cxLeftWidth = v35;
  v49.cyBottomHeight = v43;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0xBu, &v49);
  v48.cxLeftWidth = v40;
  v48.cxRightWidth = v37;
  v48.cyBottomHeight = v31;
  v48.cyTopHeight = v17;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0xEu, &v48);
  v47.cxLeftWidth = v35;
  v47.cxRightWidth = v33;
  v47.cyBottomHeight = v31;
  v47.cyTopHeight = v17;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0x10u, &v47);
  v19 = (CBaseObject **)((char *)a5 + 1768);
  v20 = 18;
  v21 = (int *)(a2 + 18);
  v38 = a4 - a5;
  v22 = (char *)a5 + 1768;
  v29 = 18;
  v44 = a2 + 18;
  v41 = (char *)a5 + 1768;
  do
  {
    if ( *v21 )
    {
      LOWORD(v11) = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(v9, *v21, 2u, &pMargins, &v45);
      if ( (unsigned __int16)v11 == 1168 )
        break;
      v22 = v41;
      v20 = v29;
      *(_QWORD *)&v41[v38] = v45;
      v21 = (int *)v44;
      *(_QWORD *)v41 = v46;
    }
    ++v20;
    ++v21;
    v22 += 16;
    v29 = v20;
    v44 = v21;
    v41 = v22;
  }
  while ( v20 <= 21 );
  if ( (_WORD)v11 == 1168 )
  {
    for ( i = 18LL; i <= 21; ++i )
    {
      if ( a2[i] )
      {
        v25 = *(CBaseObject **)((char *)v19 + v38);
        if ( v25 )
        {
          CBaseObject::Release(v25);
          *(CBaseObject **)((char *)v19 + v38) = 0LL;
        }
        if ( *v19 )
        {
          CBaseObject::Release(*v19);
          *v19 = 0LL;
        }
      }
      v19 += 2;
    }
    v9 = v51;
  }
  ThemeMargins = CTopLevelWindow::CreateNCButtons(v9, a4, a5);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1299;
    goto LABEL_52;
  }
  return v11;
}
