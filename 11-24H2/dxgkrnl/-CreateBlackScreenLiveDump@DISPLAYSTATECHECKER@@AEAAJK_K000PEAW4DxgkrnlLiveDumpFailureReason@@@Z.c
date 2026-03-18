/*
 * XREFs of ?CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@@@Z @ 0x1401BFD24
 * Callers:
 *     ?LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401C0F90 (-LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140023358 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     ?GetBlackScreenDiagDataSize@DISPLAYSTATECHECKER@@QEAAIXZ @ 0x14006D130 (-GetBlackScreenDiagDataSize@DISPLAYSTATECHECKER@@QEAAIXZ.c)
 *     ?GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z @ 0x14006D18C (-GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z.c)
 *     ?GetDriverWhiteboxDiagDataSize@DISPLAYSTATECHECKER@@AEAAIXZ @ 0x14006D204 (-GetDriverWhiteboxDiagDataSize@DISPLAYSTATECHECKER@@AEAAIXZ.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z @ 0x140072248 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?GetBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@I@Z @ 0x1401C0378 (-GetBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@I@Z.c)
 *     ?GetDriverWhiteboxDiagData@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_DRIVER_WHITEBOX_INFO@@I@Z @ 0x1401C0768 (-GetDriverWhiteboxDiagData@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_DRIVER_WHITEBOX.c)
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
  __int64 v21; // rbp
  _DWORD *v22; // rax
  _DWORD *v23; // rbx
  unsigned int v24; // eax
  unsigned __int64 v25; // rbp
  unsigned __int64 v26; // r8
  DISPLAYSTATECHECKER *v27; // rcx
  _DWORD *v28; // r14
  unsigned int v29; // r13d
  struct DISPLAYDIAGNOSTICADAPTERDATA *DisplayAdapterDiagData; // rax
  const void *v31; // rdx
  unsigned __int64 v32; // r13
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rsi
  unsigned int v36; // [rsp+50h] [rbp-68h]
  unsigned int v37; // [rsp+54h] [rbp-64h]
  int v38; // [rsp+58h] [rbp-60h]
  DXGDIAGNOSTICS *v39; // [rsp+60h] [rbp-58h]
  void *v40; // [rsp+68h] [rbp-50h] BYREF
  unsigned int v42; // [rsp+C8h] [rbp+10h] BYREF
  __int64 v43; // [rsp+D0h] [rbp+18h]
  __int64 v44; // [rsp+D8h] [rbp+20h]

  v44 = a4;
  v43 = a3;
  v42 = a2;
  v7 = a7;
  BlackScreenDiagPacket = 0;
  *(_DWORD *)a7 = 0;
  Global = DXGGLOBAL::GetGlobal();
  if ( !Global )
  {
    *(_DWORD *)v7 = 1;
    return 3221225473LL;
  }
  v12 = (unsigned int *)*((_QWORD *)Global + 120);
  if ( !v12 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 881;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
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
  v13 = (DXGDIAGNOSTICS *)*((_QWORD *)Global + 121);
  v39 = v13;
  if ( !v13 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 889;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
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
  v36 = v12[4];
  v16 = *((_DWORD *)this + 3522) << 13;
  LODWORD(v44) = *((_DWORD *)v13 + 4);
  v15 = v44;
  LODWORD(a6) = DISPLAYSTATECHECKER::GetBlackScreenDiagDataSize(this);
  DriverWhiteboxDiagDataSize = DISPLAYSTATECHECKER::GetDriverWhiteboxDiagDataSize(this);
  v18 = *((_DWORD *)this + 3522);
  v37 = DriverWhiteboxDiagDataSize;
  v19 = (unsigned int)(8 * v18 + 48);
  v38 = v16 + a6 + v19 + DriverWhiteboxDiagDataSize;
  LODWORD(a5) = v14 + v15 + v38;
  v20 = (a5 + 4095) & 0xFFFFF000;
  if ( (unsigned int)WdDbgGetSecondaryDataMaxSize(424LL) < v20 )
  {
    *(_DWORD *)v7 = 8;
    return 3221225473LL;
  }
  v21 = v20;
  v22 = (_DWORD *)operator new[](v20, 0x4B677844u, 256LL);
  v40 = v22;
  v23 = v22;
  if ( v22 )
  {
    v22[1] = 0;
    *v22 = v18 + 5;
    v42 = v14;
    v22[2] = v19;
    v22[3] = 160;
    if ( v19 + v14 < v14 )
    {
      v24 = a5;
    }
    else
    {
      v24 = a5;
      v25 = (unsigned int)a5;
      if ( v19 + v14 <= (unsigned int)a5 )
      {
        BlackScreenDiagPacket = DXGDIAGNOSTICS::ReadDiagnostics(
                                  (DXGDIAGNOSTICS *)v12,
                                  (unsigned __int8 *)v23 + (unsigned int)v19,
                                  &v42,
                                  -1);
        if ( BlackScreenDiagPacket >= 0 )
        {
          v19 = v42 + (unsigned int)v19;
          v36 = v42;
        }
        else
        {
          *(_DWORD *)v7 = 32;
        }
        goto LABEL_20;
      }
    }
    v25 = v24;
LABEL_20:
    v26 = (unsigned int)v44;
    v23[4] = v19;
    v23[5] = 176;
    v42 = v26;
    if ( v19 + v26 >= v26 && v19 + v26 <= v25 )
    {
      BlackScreenDiagPacket = DXGDIAGNOSTICS::ReadDiagnostics(v39, (unsigned __int8 *)v23 + (unsigned int)v19, &v42, -1);
      if ( BlackScreenDiagPacket >= 0 )
      {
        v19 = v42 + (unsigned int)v19;
        LODWORD(v44) = v42;
      }
      else
      {
        *(_DWORD *)v7 = 64;
      }
    }
    v27 = this;
    v28 = v23 + 6;
    v29 = 0;
    if ( *((_DWORD *)this + 3522) )
    {
      do
      {
        *v28 = v19;
        v28[1] = 5;
        DisplayAdapterDiagData = DISPLAYSTATECHECKER::GetDisplayAdapterDiagData(this, v29);
        if ( *((_BYTE *)DisplayAdapterDiagData + 56) )
        {
          v31 = (const void *)*((_QWORD *)DisplayAdapterDiagData + 6);
          if ( v31 )
          {
            memmove((char *)v23 + (unsigned int)v19, v31, 0x2000uLL);
            v28 += 2;
            v19 = (unsigned int)(v19 + 0x2000);
          }
        }
        ++v29;
      }
      while ( v29 < *((_DWORD *)this + 3522) );
      v7 = a7;
      v27 = this;
    }
    v32 = (unsigned int)a6;
    *v28 = v19;
    v28[1] = 194;
    if ( v19 + v32 >= v32 && v19 + v32 <= v25 )
    {
      BlackScreenDiagPacket = DISPLAYSTATECHECKER::GetBlackScreenDiagPacket(
                                v27,
                                (struct _DXGK_DIAG_BLACK_SCREEN_PACKET2 *)((char *)v23 + v19),
                                v32);
      if ( BlackScreenDiagPacket >= 0 )
        v19 = (unsigned int)(v32 + v19);
      else
        *(_DWORD *)v7 = 1024;
    }
    v28[2] = v19;
    v28[3] = 208;
    v42 = v37;
    if ( v19 + (unsigned __int64)v37 >= v37 && v19 + (unsigned __int64)v37 <= v25 )
    {
      BlackScreenDiagPacket = DISPLAYSTATECHECKER::GetDriverWhiteboxDiagData(
                                this,
                                (struct _DXGK_DIAG_BLACK_SCREEN_DRIVER_WHITEBOX_INFO *)((char *)v23 + (unsigned int)v19),
                                v37);
      if ( BlackScreenDiagPacket >= 0 )
        LODWORD(v19) = v37 + v19;
      else
        *(_DWORD *)v7 = 2048;
    }
    v33 = v43;
    v28[4] = v19;
    v28[5] = 0;
    v34 = WdDbgReportCreate(0LL, 424LL, v33, 0LL, 0LL, 0LL, 0);
    v35 = v34;
    if ( v34 )
    {
      if ( !(unsigned __int8)WdDbgReportSecondaryData(v34, v23, v36 + (_DWORD)v44 + v38) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 1089;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
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
      WdDbgReportComplete(v35);
    }
    else
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 1082;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"WdDbgReportCreate failed", 1082LL, 0LL, 0LL, 0LL, 0LL);
      *(_DWORD *)v7 = 128;
      BlackScreenDiagPacket = -1073741823;
    }
    goto LABEL_46;
  }
  WdLogSingleEntry1(6LL, (unsigned int)v21);
  WdLogGlobalForLineNumber = 928;
  DxgkLogInternalTriageEvent(
    0LL,
    262145LL,
    0xFFFFFFFFLL,
    L"Out of memory allocating black screen live dump data (size 0x%I64x)",
    v21,
    0LL,
    0LL,
    0LL,
    0LL);
  *(_DWORD *)v7 = 16;
  BlackScreenDiagPacket = -1073741801;
LABEL_46:
  wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&v40);
  return (unsigned int)BlackScreenDiagPacket;
}
