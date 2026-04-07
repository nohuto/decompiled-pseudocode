/*
 * XREFs of ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x18000C56C
 * Callers:
 *     ?EnsureImages@CTopLevelWindow@@SAJXZ @ 0x18000A684 (-EnsureImages@CTopLevelWindow@@SAJXZ.c)
 * Callees:
 *     ?GetThemePercentage@@YAJPEAXHHHPEAM@Z @ 0x18000CE4C (-GetThemePercentage@@YAJPEAXHHHPEAM@Z.c)
 *     ?GetNCAreaHorizontalStripHelper@CTopLevelWindow@@CAJPEAXHHW4NCAreaPart@1@11PEAUWindowFrame@1@2@Z @ 0x18000CEC8 (-GetNCAreaHorizontalStripHelper@CTopLevelWindow@@CAJPEAXHHW4NCAreaPart@1@11PEAUWindowFrame@1@2@Z.c)
 *     ?CreateNCButtons@CTopLevelWindow@@CAJQEAXPEAUWindowFrame@1@1@Z @ 0x18000D118 (-CreateNCButtons@CTopLevelWindow@@CAJQEAXPEAUWindowFrame@1@1@Z.c)
 *     ?SetSizingMargins@CTopLevelWindow@@CAXPEAUWindowFrame@1@0IU_MARGINS@@@Z @ 0x18000D38C (-SetSizingMargins@CTopLevelWindow@@CAXPEAUWindowFrame@1@0IU_MARGINS@@@Z.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x18000D3F8 (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180025354 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

__int64 __fastcall CTopLevelWindow::GetNCAreaHelper(
        void *a1,
        const int *a2,
        int *a3,
        struct CTopLevelWindow::WindowFrame *a4,
        struct CTopLevelWindow::WindowFrame *a5)
{
  int v6; // r8d
  HRESULT ThemeMargins; // eax
  unsigned int v11; // ebx
  int v12; // edx
  int v13; // edx
  __int64 v14; // r8
  __int64 v15; // rdx
  int v16; // r9d
  int v17; // r9d
  __int64 v18; // rdx
  int v19; // ebx
  int v20; // edi
  unsigned int v21; // edi
  int v22; // edx
  __int64 v23; // rdx
  __int64 v24; // rdx
  int v25; // edx
  int v26; // edi
  CMILRefCountBase *v27; // rcx
  int *v28; // rcx
  int v29; // eax
  CMILRefCountBase **i; // rdi
  CBaseObject **v32; // rbx
  __int64 v33; // rdi
  __int64 j; // rcx
  unsigned int iPropId; // [rsp+20h] [rbp-91h]
  struct _MARGINS v36; // [rsp+40h] [rbp-71h] BYREF
  int cxRightWidth; // [rsp+50h] [rbp-61h]
  unsigned int cxLeftWidth; // [rsp+54h] [rbp-5Dh]
  int cyTopHeight; // [rsp+58h] [rbp-59h]
  int cyBottomHeight; // [rsp+5Ch] [rbp-55h]
  __int64 v41; // [rsp+60h] [rbp-51h]
  int *v42; // [rsp+68h] [rbp-49h]
  CMILRefCountBase *v43[2]; // [rsp+70h] [rbp-41h] BYREF
  __int64 v44; // [rsp+80h] [rbp-31h]
  MARGINS pMargins; // [rsp+90h] [rbp-21h] BYREF
  struct _MARGINS v46; // [rsp+A0h] [rbp-11h] BYREF

  v6 = a2[1];
  pMargins = 0LL;
  ThemeMargins = GetThemeMargins(a1, 0LL, v6, 0, 3602, 0LL, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1139;
    goto LABEL_28;
  }
  v12 = a2[3];
  cxLeftWidth = pMargins.cxLeftWidth;
  *(_OWORD *)v43 = 0LL;
  ThemeMargins = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(a1, v12, 2u, &pMargins, v43);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1151;
    goto LABEL_28;
  }
  *((CMILRefCountBase **)a4 + 191) = v43[0];
  *((CMILRefCountBase **)a5 + 191) = v43[1];
  v13 = a2[4];
  LODWORD(v44) = pMargins.cxLeftWidth;
  LODWORD(v42) = pMargins.cxRightWidth;
  ThemeMargins = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(a1, v13, 2u, &pMargins, v43);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1160;
    goto LABEL_28;
  }
  v14 = cxLeftWidth;
  *((CMILRefCountBase **)a4 + 193) = v43[0];
  *((CMILRefCountBase **)a5 + 193) = v43[1];
  v15 = *((unsigned int *)a2 + 1);
  LODWORD(v41) = pMargins.cxLeftWidth;
  cxRightWidth = pMargins.cxRightWidth;
  ThemeMargins = CTopLevelWindow::GetNCAreaHorizontalStripHelper(a1, v15, v14, 0LL, 1, 2, a4, a5);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1178;
    goto LABEL_28;
  }
  ThemeMargins = GetThemePercentage(a1, a2[1], *a3, v16, (float *)a4 + 465);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1181;
    goto LABEL_28;
  }
  ThemeMargins = GetThemePercentage(a1, a2[1], a3[1], v17, (float *)a5 + 465);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1182;
    goto LABEL_28;
  }
  ThemeMargins = GetThemeMargins(a1, 0LL, a2[1], 0, 3601, 0LL, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1184;
    goto LABEL_28;
  }
  v36 = pMargins;
  CTopLevelWindow::SetSizingMargins(a4, a5, 1u, &v36);
  v18 = *((unsigned int *)a2 + 6);
  cyTopHeight = pMargins.cyTopHeight;
  cyBottomHeight = pMargins.cyBottomHeight;
  ThemeMargins = CTopLevelWindow::GetNCAreaHorizontalStripHelper(a1, v18, cxLeftWidth, 5LL, 6, 7, a4, a5);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1201;
    goto LABEL_28;
  }
  ThemeMargins = GetThemeMargins(a1, 0LL, a2[6], 0, 3601, 0LL, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1203;
LABEL_28:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180105630, 1u, ThemeMargins, iPropId, 0LL);
    return v11;
  }
  v36 = pMargins;
  CTopLevelWindow::SetSizingMargins(a4, a5, 6u, &v36);
  v19 = pMargins.cyTopHeight;
  v20 = pMargins.cyBottomHeight;
  v36.cxLeftWidth = v44;
  v36.cxRightWidth = (int)v42;
  v36.cyTopHeight = cyTopHeight;
  v36.cyBottomHeight = cyBottomHeight;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0, &v36);
  v36.cxRightWidth = cxRightWidth;
  v36.cyTopHeight = cyTopHeight;
  v36.cxLeftWidth = v41;
  v36.cyBottomHeight = cyBottomHeight;
  CTopLevelWindow::SetSizingMargins(a4, a5, 2u, &v36);
  v36.cxLeftWidth = v44;
  v36.cxRightWidth = (int)v42;
  v36.cyTopHeight = v19;
  v36.cyBottomHeight = v20;
  CTopLevelWindow::SetSizingMargins(a4, a5, 5u, &v36);
  v36.cxLeftWidth = v41;
  v36.cxRightWidth = cxRightWidth;
  v36.cyTopHeight = v19;
  v36.cyBottomHeight = v20;
  CTopLevelWindow::SetSizingMargins(a4, a5, 7u, &v36);
  ThemeMargins = GetThemeMargins(a1, 0LL, a2[10], 0, 3602, 0LL, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1217;
    goto LABEL_28;
  }
  v21 = pMargins.cxLeftWidth;
  ThemeMargins = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(a1, a2[12], 2u, &pMargins, v43);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1223;
    goto LABEL_28;
  }
  *((CMILRefCountBase **)a4 + 209) = v43[0];
  *((CMILRefCountBase **)a5 + 209) = v43[1];
  v22 = a2[13];
  LODWORD(v42) = pMargins.cxLeftWidth;
  LODWORD(v44) = pMargins.cxRightWidth;
  ThemeMargins = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(a1, v22, 2u, &pMargins, v43);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1232;
    goto LABEL_28;
  }
  *((CMILRefCountBase **)a4 + 211) = v43[0];
  *((CMILRefCountBase **)a5 + 211) = v43[1];
  v23 = *((unsigned int *)a2 + 10);
  cyBottomHeight = pMargins.cxLeftWidth;
  cyTopHeight = pMargins.cxRightWidth;
  ThemeMargins = CTopLevelWindow::GetNCAreaHorizontalStripHelper(a1, v23, v21, 9LL, 10, 11, a4, a5);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1250;
    goto LABEL_28;
  }
  ThemeMargins = GetThemeMargins(a1, 0LL, a2[10], 0, 3601, 0LL, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1252;
    goto LABEL_28;
  }
  v36 = pMargins;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0xAu, &v36);
  v24 = *((unsigned int *)a2 + 15);
  cxRightWidth = pMargins.cyTopHeight;
  LODWORD(v41) = pMargins.cyBottomHeight;
  ThemeMargins = CTopLevelWindow::GetNCAreaHorizontalStripHelper(a1, v24, v21, 14LL, 15, 16, a4, a5);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1269;
    goto LABEL_28;
  }
  ThemeMargins = GetThemeMargins(a1, 0LL, a2[15], 0, 3601, 0LL, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1271;
    goto LABEL_28;
  }
  v36 = pMargins;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0xFu, &v36);
  v25 = a2[17];
  v26 = pMargins.cyTopHeight;
  cxLeftWidth = pMargins.cyBottomHeight;
  v46 = 0LL;
  ThemeMargins = CTopLevelWindow::CreateBitmapFromAtlas(a1, v25, &v46, v43);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1279;
    goto LABEL_28;
  }
  v27 = v43[0];
  *((CMILRefCountBase **)a4 + 219) = v43[0];
  *((_QWORD *)a5 + 219) = v27;
  CMILRefCountBase::AddRef(v27);
  v36 = v46;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0x11u, &v36);
  v36.cxRightWidth = v44;
  v36.cyTopHeight = cxRightWidth;
  v36.cxLeftWidth = (int)v42;
  v36.cyBottomHeight = v41;
  CTopLevelWindow::SetSizingMargins(a4, a5, 9u, &v36);
  v36.cxRightWidth = cyTopHeight;
  v36.cyTopHeight = cxRightWidth;
  v36.cxLeftWidth = cyBottomHeight;
  v36.cyBottomHeight = v41;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0xBu, &v36);
  v36.cxLeftWidth = (int)v42;
  v36.cxRightWidth = v44;
  v36.cyBottomHeight = cxLeftWidth;
  v36.cyTopHeight = v26;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0xEu, &v36);
  v36.cxLeftWidth = cyBottomHeight;
  v36.cxRightWidth = cyTopHeight;
  v36.cyBottomHeight = cxLeftWidth;
  v36.cyTopHeight = v26;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0x10u, &v36);
  v41 = 18LL;
  v44 = a4 - a5;
  v28 = (int *)(a2 + 18);
  v29 = 18;
  for ( i = (CMILRefCountBase **)((char *)a5 + 1768); ; i += 2 )
  {
    v42 = v28;
    cxRightWidth = v29;
    if ( v29 > 21 )
      break;
    if ( *v28 )
    {
      LOWORD(v11) = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(a1, *v28, 2u, &pMargins, v43);
      if ( (unsigned __int16)v11 == 1168 )
        break;
      *(CMILRefCountBase **)((char *)i + v44) = v43[0];
      v28 = v42;
      *i = v43[1];
      v29 = cxRightWidth;
    }
    ++v29;
    ++v28;
  }
  if ( (_WORD)v11 == 1168 )
  {
    v32 = (CBaseObject **)((char *)a5 + 1768);
    v33 = a4 - a5;
    for ( j = 18LL; j <= 21; v41 = j )
    {
      if ( a2[j] )
      {
        if ( *(CBaseObject **)((char *)v32 + v33) )
        {
          CBaseObject::Release(*(CBaseObject **)((char *)v32 + v33));
          *(CBaseObject **)((char *)v32 + v33) = 0LL;
          j = v41;
        }
        if ( *v32 )
        {
          CBaseObject::Release(*v32);
          *v32 = 0LL;
          j = v41;
        }
      }
      ++j;
      v32 += 2;
    }
  }
  ThemeMargins = CTopLevelWindow::CreateNCButtons(a1, a4, a5);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1327;
    goto LABEL_28;
  }
  return v11;
}
