/*
 * XREFs of ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N1@Z @ 0x140071260
 * Callers:
 *     _DxgDbgBugcheckCallback @ 0x140079C80 (_DxgDbgBugcheckCallback.c)
 *     ?DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z @ 0x140185340 (-DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z.c)
 *     ?DxgkAddDiagnosticInfoIntoReport@@YAJPEAU_WD_DEBUG_REPORT@@PEAU_DEVICE_OBJECT@@PEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1401C99C8 (-DxgkAddDiagnosticInfoIntoReport@@YAJPEAU_WD_DEBUG_REPORT@@PEAU_DEVICE_OBJECT@@PEAU_DXGKARG_COLL.c)
 *     ?DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z @ 0x1403DA558 (-DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiGetDbgInfoAdapters @ 0x140064774 (DpiGetDbgInfoAdapters.c)
 *     ?TdrGatherPowerTriage@@YA?AU_DPI_DBG_POWER_ACTIVITY@@XZ @ 0x1400715E8 (-TdrGatherPowerTriage@@YA-AU_DPI_DBG_POWER_ACTIVITY@@XZ.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z @ 0x1400718C8 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

__int64 __fastcall TdrCollectBugcheckSecondaryDumpData(char *a1, unsigned int a2, char a3, unsigned __int8 a4)
{
  char v5; // r12
  unsigned __int64 v7; // r13
  unsigned int v8; // esi
  unsigned __int16 v10; // dx
  int v11; // eax
  __int64 v12; // rsi
  int v13; // edx
  int v14; // r14d
  __int64 v15; // rsi
  unsigned __int16 i; // r8
  int v17; // edx
  int v18; // ecx
  int v19; // eax
  int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int16 v23; // bx
  __int64 v24; // rdx
  unsigned __int64 RecentEvents; // rdx
  unsigned int v26; // eax
  __int64 v27; // rcx
  struct DXGGLOBAL *Global; // rax
  unsigned int v29; // ebx
  DXGDIAGNOSTICS **v30; // r15
  __int64 v31; // r14
  DXGDIAGNOSTICS *v32; // rcx
  unsigned __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned int v37; // [rsp+28h] [rbp-A1h] BYREF
  int v38; // [rsp+2Ch] [rbp-9Dh]
  _QWORD v39[2]; // [rsp+30h] [rbp-99h] BYREF
  _DWORD v40[9]; // [rsp+40h] [rbp-89h]
  __int64 v41; // [rsp+64h] [rbp-65h]
  _DWORD v42[28]; // [rsp+70h] [rbp-59h] BYREF

  v5 = a3;
  v7 = a2;
  v8 = a4 + 21;
  if ( a2 <= 4 * (unsigned __int64)(2 * v8) )
    return 0LL;
  if ( a1 )
  {
    v10 = 0;
    v11 = 0;
    do
    {
      ++v10;
      *(_QWORD *)&a1[8 * v11] = 0LL;
      v11 = v10;
    }
    while ( v10 < v8 );
    *(_DWORD *)a1 = v8;
  }
  v12 = 8 * v8;
  v13 = 8;
  v14 = 0;
  if ( v12 + 8 > v7 )
  {
    v13 = 0;
  }
  else if ( a1 )
  {
    *(_DWORD *)&a1[v12] = 2;
    v14 = 1;
    a1[v12 + 4] = word_14015DD5C;
    a1[v12 + 5] = 0;
    *((_DWORD *)a1 + 2) = v12;
    *((_DWORD *)a1 + 3) = 9;
  }
  v15 = (unsigned int)(v13 + v12);
  memset(v42, 0, sizeof(v42));
  if ( (int)DpiGetDbgInfoAdapters((__int64)v42) >= 0 )
  {
    for ( i = 0; i < 7u; ++i )
    {
      if ( (unsigned int)v15 >= a2 )
        break;
      v17 = v42[4 * i];
      if ( !v17 )
        break;
      if ( v15 + 16 <= v7 )
      {
        LOWORD(v14) = v14 + 1;
        if ( a1 )
        {
          *(_DWORD *)&a1[v15 + 4] = v42[4 * i + 1];
          v18 = v42[4 * i + 3];
          *(_DWORD *)&a1[v15 + 8] = v42[4 * i + 2];
          v19 = *(_DWORD *)&a1[v15 + 12];
          *(_DWORD *)&a1[v15] = v17;
          v20 = v19 ^ ((unsigned __int8)v18 ^ (unsigned __int8)v19) & 1;
          LOBYTE(v19) = v18 ^ v19 ^ (v18 ^ v19) & 1;
          v21 = 2LL * (unsigned __int16)v14;
          *(_DWORD *)&a1[v15 + 12] = v20 ^ v19 & 2;
          *(_DWORD *)&a1[4 * v21] = v15;
          *(_DWORD *)&a1[4 * v21 + 4] = i + 32;
        }
        v15 = (unsigned int)(v15 + 16);
      }
    }
  }
  LOWORD(v14) = v14 + 1;
  v38 = v14;
  if ( a1 )
  {
    a1[v15] = a1[v15] & 0xFC | TdrGatherPowerTriage() & 3;
    v22 = 2LL * (unsigned __int16)v14;
    *(_DWORD *)&a1[4 * v22] = v15;
    v15 = (unsigned int)(v15 + 8);
    *(_DWORD *)&a1[4 * v22 + 4] = 48;
  }
  v40[0] = 1;
  v40[1] = 32;
  v23 = 0;
  v40[2] = 32;
  v40[6] = 32;
  v40[8] = 32;
  v40[3] = 64;
  v40[4] = 64;
  v40[5] = 64;
  v40[7] = 64;
  v41 = 64LL;
  do
  {
    if ( (unsigned int)v15 >= a2 )
      break;
    if ( v5 )
      v24 = 0xFFFFFFFFLL;
    else
      v24 = (unsigned int)v40[v23];
    RecentEvents = (unsigned int)WdLogGetRecentEvents(v23, v24, 0LL, 0LL);
    if ( v15 + RecentEvents < RecentEvents || v15 + RecentEvents > v7 )
      LODWORD(RecentEvents) = a2 - v15;
    if ( (_DWORD)RecentEvents )
    {
      LOWORD(v14) = v14 + 1;
      if ( a1 )
      {
        if ( a3 )
          v26 = -1;
        else
          v26 = v40[v23];
        LODWORD(RecentEvents) = WdLogGetRecentEvents(v23, v26, &a1[(unsigned int)v15], (unsigned int)RecentEvents);
        v27 = 2LL * (unsigned __int16)v14;
        *(_DWORD *)&a1[4 * v27] = v15;
        *(_DWORD *)&a1[4 * v27 + 4] = v23 + 16;
      }
      v15 = (unsigned int)(RecentEvents + v15);
    }
    v5 = a3;
    ++v23;
  }
  while ( v23 < 0xBu );
  v38 = v14;
  if ( a4 )
  {
    Global = DXGGLOBAL::GetGlobal();
    v29 = 0;
    v30 = (DXGDIAGNOSTICS **)v39;
    v39[0] = *((_QWORD *)Global + 116);
    v39[1] = *((_QWORD *)Global + 117);
    v31 = 2LL;
    do
    {
      v32 = *v30;
      v33 = *((unsigned int *)*v30 + 4);
      if ( (unsigned int)v15 + v33 >= v33 && (unsigned int)v15 + v33 <= v7 )
      {
        if ( a1 )
        {
          v37 = *((_DWORD *)*v30 + 4);
          if ( (int)DXGDIAGNOSTICS::ReadDiagnostics(
                      v32,
                      (unsigned __int8 *)&a1[(unsigned int)v15 + (unsigned __int64)v29],
                      &v37,
                      0xFFFFFFFF) >= 0 )
            v29 += v37;
        }
        else
        {
          v29 += v33;
        }
      }
      ++v30;
      --v31;
    }
    while ( v31 );
    if ( a1 )
    {
      if ( v29 )
      {
        v34 = 2LL * (unsigned __int16)(v38 + 1);
        *(_DWORD *)&a1[4 * v34] = v15;
        *(_DWORD *)&a1[4 * v34 + 4] = 177;
      }
    }
    LODWORD(v15) = v29 + v15;
  }
  return (unsigned int)v15;
}
