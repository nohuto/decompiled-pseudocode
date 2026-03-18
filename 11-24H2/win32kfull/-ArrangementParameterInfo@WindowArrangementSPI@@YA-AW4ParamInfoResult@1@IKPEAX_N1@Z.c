/*
 * XREFs of ?ArrangementParameterInfo@WindowArrangementSPI@@YA?AW4ParamInfoResult@1@IKPEAX_N1@Z @ 0x140149014
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x14018F9C8 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     _anonymous_namespace_::TestFeature @ 0x1401494EC (_anonymous_namespace_--TestFeature.c)
 *     _lambda_2b89108f8e380a56e0b1b303a75ceab9_::operator() @ 0x140149520 (_lambda_2b89108f8e380a56e0b1b303a75ceab9_--operator().c)
 *     _lambda_fcb4a4e7e214dab34917ad6111ff8639_::operator() @ 0x1401495BC (_lambda_fcb4a4e7e214dab34917ad6111ff8639_--operator().c)
 *     _lambda_315ad92e5be98155a16179dc024b8a3c_::operator() @ 0x140149630 (_lambda_315ad92e5be98155a16179dc024b8a3c_--operator().c)
 *     _anonymous_namespace_::SetMonitorDockThresholds @ 0x140149D44 (_anonymous_namespace_--SetMonitorDockThresholds.c)
 *     UpdateWinIniInt @ 0x1401CA854 (UpdateWinIniInt.c)
 *     _anonymous_namespace_::UpdateThresholdFromMetric @ 0x1401F7944 (_anonymous_namespace_--UpdateThresholdFromMetric.c)
 *     _lambda_28f03d232961592d9fdef10e21370bce_::operator() @ 0x140213E1C (_lambda_28f03d232961592d9fdef10e21370bce_--operator().c)
 *     _lambda_23cd897c47050bff0d2fbbbc5d471d8f_::operator() @ 0x140217428 (_lambda_23cd897c47050bff0d2fbbbc5d471d8f_--operator().c)
 *     _lambda_9c8951c187b4be4d23fed8f94aee3ae8_::operator() @ 0x14021D064 (_lambda_9c8951c187b4be4d23fed8f94aee3ae8_--operator().c)
 */

__int64 __fastcall WindowArrangementSPI::ArrangementParameterInfo(
        __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        char a4,
        bool a5)
{
  bool v5; // r15
  unsigned int v9; // esi
  int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // ecx
  __int64 v14; // rcx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  __int64 v21; // rcx
  int v22; // ecx
  __int64 v23; // rcx
  int v24; // ecx
  __int64 v25; // rcx
  __int64 result; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // ecx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  _BYTE *v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  _BYTE *v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  _BYTE *v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  int v48; // ecx
  int v49; // r9d
  __int64 v50; // rdx
  __int64 v51; // rcx
  char v52; // al
  __int64 v53; // rdx
  __int64 v54; // rcx
  int v55; // [rsp+28h] [rbp-8h]
  bool v56; // [rsp+60h] [rbp+30h] BYREF

  v5 = 0;
  v56 = 0;
  if ( (unsigned int)a1 <= 0x88 )
  {
    if ( (_DWORD)a1 == 136 )
    {
      v52 = *(_BYTE *)(*(_QWORD *)(W32GetUserSessionState(a1, 2LL) + 63488) + 17LL);
      goto LABEL_66;
    }
    if ( (unsigned int)a1 > 0x83 )
    {
      v28 = (unsigned int)(a1 - 132);
      if ( (_DWORD)v28 )
      {
        v29 = v28 - 1;
        if ( !v29 )
        {
          if ( !(unsigned int)anonymous_namespace_::SetMonitorDockThresholds(
                                a2,
                                2LL,
                                lambda_fcb4a4e7e214dab34917ad6111ff8639_::_lambda_invoker_cdecl_) )
          {
            LOBYTE(v36) = a2;
            if ( (unsigned __int8)lambda_fcb4a4e7e214dab34917ad6111ff8639_::operator()(v37, v36, 1LL) )
            {
              if ( a4 )
              {
                v5 = (unsigned int)UpdateWinIniInt(0LL, 12LL, 19LL, (unsigned __int8)a2) != 0;
                a5 = v5;
              }
              if ( a5 )
              {
                v40 = *(_BYTE **)(W32GetUserSessionState(v39, v38) + 63488);
                v40[8] = a2;
                v40[9] = a2;
                v40[10] = a2;
                v40[11] = a2;
              }
            }
          }
          goto LABEL_33;
        }
        v30 = (unsigned int)(v29 - 1);
        if ( (_DWORD)v30 )
        {
          if ( (_DWORD)v30 == 1
            && !(unsigned int)anonymous_namespace_::SetMonitorDockThresholds(
                                a2,
                                3LL,
                                lambda_2b89108f8e380a56e0b1b303a75ceab9_::_lambda_invoker_cdecl_) )
          {
            LOBYTE(v31) = a2;
            if ( (unsigned __int8)lambda_2b89108f8e380a56e0b1b303a75ceab9_::operator()(v32, v31, 1LL) )
            {
              if ( a4 )
              {
                v5 = (unsigned int)UpdateWinIniInt(0LL, 12LL, 20LL, (unsigned __int8)a2) != 0;
                a5 = v5;
              }
              if ( a5 )
              {
                v35 = *(_BYTE **)(W32GetUserSessionState(v34, v33) + 63488);
                v35[12] = a2;
                v35[13] = a2;
                v35[14] = a2;
                v35[15] = a2;
              }
            }
          }
          goto LABEL_33;
        }
        v52 = *(_BYTE *)(*(_QWORD *)(W32GetUserSessionState(v30, 2LL) + 63488) + 13LL);
      }
      else
      {
        v52 = *(_BYTE *)(*(_QWORD *)(W32GetUserSessionState(v28, 2LL) + 63488) + 9LL);
      }
      goto LABEL_66;
    }
    if ( (_DWORD)a1 == 131 )
    {
      v9 = 18;
      v10 = 1;
      goto LABEL_6;
    }
    v21 = (unsigned int)(a1 - 126);
    if ( !(_DWORD)v21 )
    {
      v52 = *(_BYTE *)(*(_QWORD *)(W32GetUserSessionState(v21, 2LL) + 63488) + 1LL);
      goto LABEL_66;
    }
    v22 = v21 - 1;
    if ( v22 )
    {
      v23 = (unsigned int)(v22 - 1);
      if ( (_DWORD)v23 )
      {
        v24 = v23 - 1;
        if ( !v24 )
        {
          if ( !(unsigned int)anonymous_namespace_::SetMonitorDockThresholds(
                                a2,
                                1LL,
                                lambda_315ad92e5be98155a16179dc024b8a3c_::_lambda_invoker_cdecl_) )
          {
            LOBYTE(v41) = a2;
            if ( (unsigned __int8)lambda_315ad92e5be98155a16179dc024b8a3c_::operator()(v42, v41, 1LL) )
            {
              if ( a4 )
              {
                v5 = (unsigned int)UpdateWinIniInt(0LL, 12LL, 17LL, (unsigned __int8)a2) != 0;
                a5 = v5;
              }
              if ( a5 )
              {
                v45 = *(_BYTE **)(W32GetUserSessionState(v44, v43) + 63488);
                v45[4] = a2;
                v45[5] = a2;
                v45[6] = a2;
                v45[7] = a2;
              }
            }
          }
          goto LABEL_33;
        }
        if ( v24 == 1 )
        {
          v25 = 1LL;
LABEL_24:
          *a3 = (unsigned __int8)anonymous_namespace_::TestFeature(v25, 2LL);
LABEL_25:
          result = 0LL;
          goto LABEL_26;
        }
        goto LABEL_33;
      }
      v52 = *(_BYTE *)(*(_QWORD *)(W32GetUserSessionState(v23, 2LL) + 63488) + 5LL);
LABEL_66:
      *(_BYTE *)a3 = v52;
      goto LABEL_25;
    }
    if ( (unsigned int)anonymous_namespace_::SetMonitorDockThresholds(
                         a2,
                         0LL,
                         lambda_23cd897c47050bff0d2fbbbc5d471d8f_::_lambda_invoker_cdecl_) )
      goto LABEL_33;
    LOBYTE(v46) = a2;
    if ( !(unsigned __int8)lambda_23cd897c47050bff0d2fbbbc5d471d8f_::operator()(v47, v46, 1LL) )
      goto LABEL_33;
    v55 = 0;
    v49 = 16;
LABEL_79:
    LOBYTE(v48) = a4;
    anonymous_namespace_::UpdateThresholdFromMetric(v48, (unsigned int)&v56, (unsigned int)&a5, v49, a2, v55);
    v5 = v56;
    goto LABEL_33;
  }
  v13 = a1 - 137;
  if ( !v13 )
  {
    if ( (unsigned int)anonymous_namespace_::SetMonitorDockThresholds(
                         a2,
                         4LL,
                         lambda_9c8951c187b4be4d23fed8f94aee3ae8_::_lambda_invoker_cdecl_) )
      goto LABEL_33;
    LOBYTE(v53) = a2;
    if ( !(unsigned __int8)lambda_9c8951c187b4be4d23fed8f94aee3ae8_::operator()(v54, v53, 1LL) )
      goto LABEL_33;
    v55 = 4;
    v49 = 21;
    goto LABEL_79;
  }
  v14 = (unsigned int)(v13 - 1);
  if ( !(_DWORD)v14 )
  {
    v52 = *(_BYTE *)(*(_QWORD *)(W32GetUserSessionState(v14, 2LL) + 63488) + 21LL);
    goto LABEL_66;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    if ( (unsigned int)anonymous_namespace_::SetMonitorDockThresholds(
                         a2,
                         5LL,
                         lambda_28f03d232961592d9fdef10e21370bce_::_lambda_invoker_cdecl_) )
      goto LABEL_33;
    LOBYTE(v50) = a2;
    if ( !(unsigned __int8)lambda_28f03d232961592d9fdef10e21370bce_::operator()(v51, v50, 1LL) )
      goto LABEL_33;
    v55 = 5;
    v49 = 22;
    goto LABEL_79;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    v25 = 2LL;
    goto LABEL_24;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    v9 = 624;
    v10 = 2;
    goto LABEL_6;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    v25 = 4LL;
    goto LABEL_24;
  }
  v19 = v18 - 1;
  if ( !v19 )
  {
    v9 = 626;
    v10 = 4;
LABEL_6:
    if ( !(unsigned int)CheckDesktopPolicy(0LL, v9) )
    {
      if ( !a4 )
      {
LABEL_30:
        if ( a5 )
        {
          v27 = *(_QWORD *)(W32GetUserSessionState(v12, v11) + 63488);
          if ( a2 )
            *(_DWORD *)(v27 + 28) |= v10;
          else
            *(_DWORD *)(v27 + 28) &= ~v10;
        }
        goto LABEL_33;
      }
      v5 = (unsigned int)UpdateWinIniInt(0LL, 4LL, v9, a2) != 0;
    }
    a5 = v5;
    goto LABEL_30;
  }
  v20 = v19 - 1;
  if ( !v20 )
  {
    v25 = 8LL;
    goto LABEL_24;
  }
  if ( v20 == 1 )
  {
    v9 = 625;
    v10 = 8;
    goto LABEL_6;
  }
LABEL_33:
  result = v5;
LABEL_26:
  if ( a5 )
    return (unsigned int)result | 2;
  return result;
}
