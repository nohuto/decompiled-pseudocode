/*
 * XREFs of GreExtGetObjectW @ 0x14001442C
 * Callers:
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x140013840 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     NtGdiExtGetObjectW @ 0x140014310 (NtGdiExtGetObjectW.c)
 *     RecreateRedirectionBitmap @ 0x140039394 (RecreateRedirectionBitmap.c)
 *     xxxDrawState @ 0x14003A7F0 (xxxDrawState.c)
 *     xxxRealDrawMenuItem @ 0x14003B17C (xxxRealDrawMenuItem.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x14006AC70 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     GetWindowNCMetrics @ 0x14007901C (GetWindowNCMetrics.c)
 *     GetScaledLogFontForDpi @ 0x14007915C (GetScaledLogFontForDpi.c)
 *     xxxCreateCaret @ 0x140091710 (xxxCreateCaret.c)
 *     xxxSetNCFonts @ 0x140112490 (xxxSetNCFonts.c)
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x14012C9E4 (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x14018F9C8 (xxxSystemParametersInfoWorker.c)
 *     CreateScaledFont @ 0x1401CD670 (CreateScaledFont.c)
 *     CreateFontFromUserProfile @ 0x1401CD854 (CreateFontFromUserProfile.c)
 *     CreateCompatiblePublicDC @ 0x1401EE788 (CreateCompatiblePublicDC.c)
 *     UserSetAltScaleFont @ 0x1401F345C (UserSetAltScaleFont.c)
 *     EraseBitmap @ 0x140207758 (EraseBitmap.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x14021D99C (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x14028FA28 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 *     ?GetTelemetryInfo@CursorApiRouter@@QEAAXPEAUCursorTelemetryInfo@@@Z @ 0x1402DA178 (-GetTelemetryInfo@CursorApiRouter@@QEAAXPEAUCursorTelemetryInfo@@@Z.c)
 *     ?PatchArgbCursorWithMask@CursorApiRouter@@CA_NPEAUHBITMAP__@@IPEAKUtagSIZE@@_N@Z @ 0x1402DA618 (-PatchArgbCursorWithMask@CursorApiRouter@@CA_NPEAUHBITMAP__@@IPEAKUtagSIZE@@_N@Z.c)
 *     ?SendMITCursorShape@CursorApiRouter@@AEAA_NPEAU_CURSINFO@@W4_MIT_CURSOR_SHAPEINFO_TRAITS@@I@Z @ 0x1402DA830 (-SendMITCursorShape@CursorApiRouter@@AEAA_NPEAU_CURSINFO@@W4_MIT_CURSOR_SHAPEINFO_TRAITS@@I@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1402E8A4C (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14001487C (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140018F7C (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x14001980C (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x14001EB5C (-GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV-$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x14001F1E8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?cjGetLogicalColorSpace@@YAHPEAXH0@Z @ 0x1400C1408 (-cjGetLogicalColorSpace@@YAHPEAXH0@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0N@@@QEAAXXZ @ 0x1400D2138 (-vUnlock@-$SEMOBJ@$0N@@@QEAAXXZ.c)
 *     ?cjGetBrushOrPen@@YAJPEAXH0@Z @ 0x1400E358C (-cjGetBrushOrPen@@YAJPEAXH0@Z.c)
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14010E354 (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall GreExtGetObjectW(Gre::Base *a1, __int64 a2, _WORD *a3)
{
  unsigned __int64 v4; // r13
  int v5; // edi
  unsigned int v7; // r14d
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  int *v16; // rbx
  struct LFONT *v17; // r15
  unsigned int v18; // ecx
  unsigned __int64 v19; // rdx
  int DIBits; // ebx
  __int64 v21; // r8
  __int64 v22; // rax
  int v23; // ecx
  int v24; // r12d
  _QWORD *HDEV; // rax
  __int64 v26; // rdx
  int v27; // r12d
  int v28; // r12d
  __int64 v29; // rcx
  struct Gre::Base::SESSION_GLOBALS *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33[3]; // [rsp+58h] [rbp-B0h] BYREF
  __int16 v34; // [rsp+70h] [rbp-98h]
  _BYTE v35[32]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v36; // [rsp+98h] [rbp-70h]
  _BYTE v37[128]; // [rsp+A8h] [rbp-60h] BYREF
  char v38; // [rsp+158h] [rbp+50h] BYREF

  v4 = (int)a2;
  v5 = 0;
  v7 = 0;
  if ( (((unsigned int)a1 >> 16) & 0x1F) != 5 )
  {
    if ( (((unsigned int)a1 >> 16) & 0x1F) == 8 )
    {
      v7 = 2;
      if ( a3 )
      {
        if ( (int)a2 < 2 )
        {
          return 0;
        }
        else
        {
          v30 = Gre::Base::Globals(a1);
          SEMOBJ<13>::SEMOBJ<13>(&v38, v30);
          LOBYTE(v31) = 8;
          v32 = HmgShareLockCheck(a1, v31);
          if ( v32 )
          {
            *a3 = *(_WORD *)(v32 + 28);
            DEC_SHARE_REF_CNT(v32);
          }
          else
          {
            v7 = 0;
          }
          SEMOBJ<13>::vUnlock(&v38);
        }
      }
      return v7;
    }
    if ( (((unsigned int)a1 >> 16) & 0x1F) == 9 )
      return (unsigned int)cjGetLogicalColorSpace((HCOLORSPACE)a1, a2, a3);
    if ( (((unsigned int)a1 >> 16) & 0x1F) != 0xA )
    {
      if ( (((unsigned int)a1 >> 16) & 0x1F) != 0x10 )
        return v7;
      return (unsigned int)cjGetBrushOrPen((HBRUSH)a1, a2, a3);
    }
    LOBYTE(a2) = 10;
    v13 = HmgShareLock(a1, a2);
    v14 = v13 + 24;
    v15 = -v13;
    v16 = (int *)(v14 & -(__int64)(v15 != 0));
    if ( !v16 )
    {
      v17 = 0LL;
LABEL_21:
      if ( v16 )
      {
        if ( a3 )
        {
          v18 = v4;
          if ( v4 >= (unsigned int)v16[62] )
            v18 = v16[62];
          v7 = v18;
          memmove(a3, v16 + 63, v18);
        }
        else
        {
          v7 = v16[62];
        }
      }
      if ( v17 )
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v17);
      return v7;
    }
    v17 = (struct LFONT *)(v16 - 6);
    if ( (*(_BYTE *)((v14 & -(__int64)(v15 != 0)) + 4) & 1) == 0 )
      goto LABEL_21;
    v24 = *v16;
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)(v16 - 6));
    v17 = 0LL;
    HDEV = (_QWORD *)UserGetHDEV();
    if ( !HDEV )
      goto LABEL_21;
    v27 = v24 - 4;
    if ( v27 )
    {
      v28 = v27 - 1;
      if ( v28 )
      {
        if ( v28 != 1 )
        {
LABEL_48:
          v16 = (int *)(((unsigned __int64)v17 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)v17 >> 64));
          goto LABEL_21;
        }
        v29 = HDEV[181];
      }
      else
      {
        v29 = HDEV[180];
      }
    }
    else
    {
      v29 = HDEV[179];
    }
    if ( v29 )
    {
      LOBYTE(v26) = 10;
      v17 = (struct LFONT *)HmgShareLock(v29, v26);
    }
    goto LABEL_48;
  }
  if ( !a3 )
    return 32;
  if ( (int)a2 >= 32 )
  {
    SURFREF::SURFREF((SURFREF *)v35, (HSURF)a1);
    v8 = v36;
    if ( !v36 || (*(_DWORD *)(v36 + 112) & 0x4100000) == 0 )
      goto LABEL_11;
    *(_DWORD *)a3 = 0;
    *((_DWORD *)a3 + 1) = *(_DWORD *)(v8 + 56);
    *((_DWORD *)a3 + 2) = *(_DWORD *)(v8 + 60);
    if ( (*(_DWORD *)(v8 + 116) & 0x800) != 0 )
    {
      *((_DWORD *)a3 + 1) = *(_DWORD *)(v8 + 668);
      *((_DWORD *)a3 + 2) = *(_DWORD *)(v8 + 672);
    }
    v7 = 32;
    v9 = (unsigned __int16)gaulConvert[2 * *(unsigned int *)(v8 + 96)];
    a3[9] = v9;
    v10 = v9 * *(int *)(v8 + 56);
    a3[8] = 1;
    *((_QWORD *)a3 + 3) = 0LL;
    *((_DWORD *)a3 + 3) = ((unsigned __int64)(v10 + 15) >> 3) & 0xFFFFFFFE;
    if ( (*(_WORD *)(v8 + 100) || !*(_QWORD *)(v8 + 192)) && (*(_DWORD *)(v8 + 112) & 0x100000) == 0 )
      goto LABEL_11;
    v19 = *(_QWORD *)(v8 + 72);
    if ( v19 < 0x10000 || v19 > (unsigned __int64)MmHighestUserAddress )
      v19 = 0LL;
    *((_QWORD *)a3 + 3) = v19;
    *((_DWORD *)a3 + 3) = ((unsigned __int64)(v9 * *(int *)(v8 + 56) + 31) >> 3) & 0xFFFFFFFC;
    if ( (unsigned int)v4 < 0x68 )
      goto LABEL_11;
    v33[0] = 0LL;
    v34 = 0;
    *((_DWORD *)a3 + 8) = 40;
    a3[23] = 0;
    v33[1] = 0LL;
    v33[2] = 0LL;
    OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v37, 0LL);
    DIBits = GrepGetDIBits((OPTAPIDCOBJ *)v37, (HSURF)a1, (__int64)v33, a3 + 16, 0, 0, 104);
    OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v37);
    v21 = v36;
    if ( DIBits )
    {
      v7 = 104;
      if ( (*(_DWORD *)(v36 + 112) & 0x100000) != 0 )
        *((_DWORD *)a3 + 13) = 0;
    }
    v22 = *(_QWORD *)(v21 + 128);
    if ( v22 )
    {
      v23 = *(_DWORD *)(v22 + 24);
      if ( (v23 & 2) != 0 )
      {
        *((_DWORD *)a3 + 18) = **(_DWORD **)(v22 + 112);
        *((_DWORD *)a3 + 19) = *(_DWORD *)(*(_QWORD *)(v22 + 112) + 4LL);
        v5 = *(_DWORD *)(*(_QWORD *)(v22 + 112) + 8LL);
LABEL_41:
        *((_DWORD *)a3 + 20) = v5;
        *((_QWORD *)a3 + 11) = *(_QWORD *)(v21 + 184);
        *((_DWORD *)a3 + 24) = *(_DWORD *)(v21 + 212);
LABEL_11:
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v35);
        return v7;
      }
      if ( (v23 & 8) != 0 )
        *((_DWORD *)a3 + 12) = 0;
    }
    *((_QWORD *)a3 + 9) = 0LL;
    goto LABEL_41;
  }
  return v7;
}
