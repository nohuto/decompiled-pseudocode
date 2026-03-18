/*
 * XREFs of ?CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@@@Z @ 0x1401BD374
 * Callers:
 *     ?LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401BE5E0 (-LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140058B34 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     ?GetBlackScreenDiagDataSize@DISPLAYSTATECHECKER@@QEAAIXZ @ 0x14006D370 (-GetBlackScreenDiagDataSize@DISPLAYSTATECHECKER@@QEAAIXZ.c)
 *     ?GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z @ 0x14006D3CC (-GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z.c)
 *     ?GetDriverWhiteboxDiagDataSize@DISPLAYSTATECHECKER@@AEAAIXZ @ 0x14006D444 (-GetDriverWhiteboxDiagDataSize@DISPLAYSTATECHECKER@@AEAAIXZ.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z @ 0x1400718C8 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?GetBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@I@Z @ 0x1401BD9C8 (-GetBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@I@Z.c)
 *     ?GetDriverWhiteboxDiagData@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_DRIVER_WHITEBOX_INFO@@I@Z @ 0x1401BDDB8 (-GetDriverWhiteboxDiagData@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_DRIVER_WHITEBOX.c)
 */

__int64 __fastcall DISPLAYSTATECHECKER::CreateBlackScreenLiveDump(
        DISPLAYSTATECHECKER *this,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        enum DxgkrnlLiveDumpFailureReason *a7)
{
  enum DxgkrnlLiveDumpFailureReason *v7; // r15
  int BlackScreenDiagPacket; // edi
  struct DXGGLOBAL *Global; // rax
  unsigned int *v12; // r13
  DXGDIAGNOSTICS *v13; // rax
  unsigned __int64 v14; // r12
  int v15; // ebp
  int v16; // ebx
  unsigned int DriverWhiteboxDiagDataSize; // eax
  int v18; // r14d
  __int64 v19; // rsi
  unsigned int v20; // ebx
  __int64 v21; // r9
  __int64 v22; // rbp
  _DWORD *v23; // rax
  _DWORD *v24; // rbx
  unsigned int v25; // eax
  unsigned __int64 v26; // rbp
  unsigned __int64 v27; // r8
  DISPLAYSTATECHECKER *v28; // rcx
  _DWORD *v29; // r14
  unsigned int v30; // r13d
  struct DISPLAYDIAGNOSTICADAPTERDATA *DisplayAdapterDiagData; // rax
  const void *v32; // rdx
  unsigned __int64 v33; // r13
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rsi
  unsigned int v37; // [rsp+50h] [rbp-68h]
  unsigned int v38; // [rsp+54h] [rbp-64h]
  int v39; // [rsp+58h] [rbp-60h]
  DXGDIAGNOSTICS *v40; // [rsp+60h] [rbp-58h]
  void *v41; // [rsp+68h] [rbp-50h] BYREF
  unsigned int v43; // [rsp+C8h] [rbp+10h] BYREF
  __int64 v44; // [rsp+D0h] [rbp+18h]
  __int64 v45; // [rsp+D8h] [rbp+20h]

  v45 = a4;
  v44 = a3;
  v43 = a2;
  v7 = a7;
  BlackScreenDiagPacket = 0;
  *(_DWORD *)a7 = 0;
  Global = DXGGLOBAL::GetGlobal();
  if ( !Global )
  {
    *(_DWORD *)v7 = 1;
    return 3221225473LL;
  }
  v12 = (unsigned int *)*((_QWORD *)Global + 116);
  if ( !v12 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 881;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Unable to obtain DXGGLOBAL Diagnosibility object; pDiagnostics = 0x%I64x",
      0LL,
      0LL,
      0LL,
      0LL,
      0LL);
    *(_DWORD *)v7 = 2;
    return 3221225860LL;
  }
  v13 = (DXGDIAGNOSTICS *)*((_QWORD *)Global + 117);
  v40 = v13;
  if ( !v13 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 889;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Unable to obtain DXGGLOBAL Diagnosibility object; pDiagnostics = 0x%I64x",
      0LL,
      0LL,
      0LL,
      0LL,
      0LL);
    *(_DWORD *)v7 = 4;
    return 3221225860LL;
  }
  v14 = v12[4];
  v37 = v12[4];
  v16 = *((_DWORD *)this + 3522) << 13;
  LODWORD(v45) = *((_DWORD *)v13 + 4);
  v15 = v45;
  LODWORD(a6) = DISPLAYSTATECHECKER::GetBlackScreenDiagDataSize(this);
  DriverWhiteboxDiagDataSize = DISPLAYSTATECHECKER::GetDriverWhiteboxDiagDataSize(this);
  v18 = *((_DWORD *)this + 3522);
  v38 = DriverWhiteboxDiagDataSize;
  v19 = (unsigned int)(8 * v18 + 48);
  v39 = v16 + a6 + v19 + DriverWhiteboxDiagDataSize;
  LODWORD(a5) = v14 + v15 + v39;
  v20 = (a5 + 4095) & 0xFFFFF000;
  if ( (unsigned int)WdDbgGetSecondaryDataMaxSize(424LL) < v20 )
  {
    *(_DWORD *)v7 = 8;
    return 3221225473LL;
  }
  v22 = v20;
  v23 = (_DWORD *)operator new[](v20, 0x4B677844u, 256LL, v21);
  v41 = v23;
  v24 = v23;
  if ( v23 )
  {
    v23[1] = 0;
    *v23 = v18 + 5;
    v43 = v14;
    v23[2] = v19;
    v23[3] = 160;
    if ( v19 + v14 < v14 )
    {
      v25 = a5;
    }
    else
    {
      v25 = a5;
      v26 = (unsigned int)a5;
      if ( v19 + v14 <= (unsigned int)a5 )
      {
        BlackScreenDiagPacket = DXGDIAGNOSTICS::ReadDiagnostics(
                                  (DXGDIAGNOSTICS *)v12,
                                  (unsigned __int8 *)v24 + (unsigned int)v19,
                                  &v43,
                                  -1);
        if ( BlackScreenDiagPacket >= 0 )
        {
          v19 = v43 + (unsigned int)v19;
          v37 = v43;
        }
        else
        {
          *(_DWORD *)v7 = 32;
        }
        goto LABEL_20;
      }
    }
    v26 = v25;
LABEL_20:
    v27 = (unsigned int)v45;
    v24[4] = v19;
    v24[5] = 176;
    v43 = v27;
    if ( v19 + v27 >= v27 && v19 + v27 <= v26 )
    {
      BlackScreenDiagPacket = DXGDIAGNOSTICS::ReadDiagnostics(v40, (unsigned __int8 *)v24 + (unsigned int)v19, &v43, -1);
      if ( BlackScreenDiagPacket >= 0 )
      {
        v19 = v43 + (unsigned int)v19;
        LODWORD(v45) = v43;
      }
      else
      {
        *(_DWORD *)v7 = 64;
      }
    }
    v28 = this;
    v29 = v24 + 6;
    v30 = 0;
    if ( *((_DWORD *)this + 3522) )
    {
      do
      {
        *v29 = v19;
        v29[1] = 5;
        DisplayAdapterDiagData = DISPLAYSTATECHECKER::GetDisplayAdapterDiagData(this, v30);
        if ( *((_BYTE *)DisplayAdapterDiagData + 56) )
        {
          v32 = (const void *)*((_QWORD *)DisplayAdapterDiagData + 6);
          if ( v32 )
          {
            memmove((char *)v24 + (unsigned int)v19, v32, 0x2000uLL);
            v29 += 2;
            v19 = (unsigned int)(v19 + 0x2000);
          }
        }
        ++v30;
      }
      while ( v30 < *((_DWORD *)this + 3522) );
      v7 = a7;
      v28 = this;
    }
    v33 = (unsigned int)a6;
    *v29 = v19;
    v29[1] = 194;
    if ( v19 + v33 >= v33 && v19 + v33 <= v26 )
    {
      BlackScreenDiagPacket = DISPLAYSTATECHECKER::GetBlackScreenDiagPacket(
                                v28,
                                (struct _DXGK_DIAG_BLACK_SCREEN_PACKET2 *)((char *)v24 + v19),
                                v33);
      if ( BlackScreenDiagPacket >= 0 )
        v19 = (unsigned int)(v33 + v19);
      else
        *(_DWORD *)v7 = 1024;
    }
    v29[2] = v19;
    v29[3] = 208;
    v43 = v38;
    if ( v19 + (unsigned __int64)v38 >= v38 && v19 + (unsigned __int64)v38 <= v26 )
    {
      BlackScreenDiagPacket = DISPLAYSTATECHECKER::GetDriverWhiteboxDiagData(
                                this,
                                (struct _DXGK_DIAG_BLACK_SCREEN_DRIVER_WHITEBOX_INFO *)((char *)v24 + (unsigned int)v19),
                                v38);
      if ( BlackScreenDiagPacket >= 0 )
        LODWORD(v19) = v38 + v19;
      else
        *(_DWORD *)v7 = 2048;
    }
    v34 = v44;
    v29[4] = v19;
    v29[5] = 0;
    v35 = WdDbgReportCreate(0LL, 424LL, v34, 0LL, 0LL, 0LL, 0);
    v36 = v35;
    if ( v35 )
    {
      if ( !(unsigned __int8)WdDbgReportSecondaryData(v35, v24, v37 + (_DWORD)v45 + v39) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 1089;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"WdDbgReportSecondaryData returned FALSE while building live dump.",
          1089LL,
          0LL,
          0LL,
          0LL,
          0LL);
        *(_DWORD *)v7 = 256;
        BlackScreenDiagPacket = -1073741823;
      }
      WdDbgReportComplete(v36);
    }
    else
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 1082;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"WdDbgReportCreate failed", 1082LL, 0LL, 0LL, 0LL, 0LL);
      *(_DWORD *)v7 = 128;
      BlackScreenDiagPacket = -1073741823;
    }
    goto LABEL_46;
  }
  WdLogSingleEntry1(6LL, (unsigned int)v22);
  WdLogGlobalForLineNumber = 928;
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    0xFFFFFFFFLL,
    L"Out of memory allocating black screen live dump data (size 0x%I64x)",
    v22,
    0LL,
    0LL,
    0LL,
    0LL);
  *(_DWORD *)v7 = 16;
  BlackScreenDiagPacket = -1073741801;
LABEL_46:
  wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&v41);
  return (unsigned int)BlackScreenDiagPacket;
}
