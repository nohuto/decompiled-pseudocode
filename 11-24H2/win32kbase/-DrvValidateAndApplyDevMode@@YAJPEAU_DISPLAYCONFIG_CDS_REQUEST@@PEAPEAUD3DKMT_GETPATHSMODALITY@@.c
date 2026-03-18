/*
 * XREFs of ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1401C88C4
 * Callers:
 *     DrvSetDisplayConfig @ 0x140137640 (DrvSetDisplayConfig.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     DrvDxgkLogCodePointPacket @ 0x1400E5480 (DrvDxgkLogCodePointPacket.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1401170F8 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvValidateAndApplyDevMode(
        struct _DISPLAYCONFIG_CDS_REQUEST *a1,
        struct D3DKMT_GETPATHSMODALITY **a2)
{
  __int64 v4; // rdi
  int v5; // eax
  __int64 DxgkWin32kInterface; // rax
  int v7; // eax
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // rcx
  struct _devicemodeW *v11; // r14
  unsigned int i; // r8d
  __int64 v13; // rdx
  __int64 *v14; // rsi
  char *v15; // rcx
  int v16; // eax
  __int64 v17; // r14
  __int64 v18; // rcx
  bool v19; // al
  int v20; // r8d
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // eax
  unsigned int v25; // edi
  __int64 v26; // rax
  int v27; // eax
  unsigned int v28; // [rsp+50h] [rbp-30h] BYREF
  __int64 v29; // [rsp+54h] [rbp-2Ch]
  int v30; // [rsp+5Ch] [rbp-24h]
  int v31; // [rsp+60h] [rbp-20h]
  int v32; // [rsp+64h] [rbp-1Ch]
  int v33; // [rsp+68h] [rbp-18h]
  int v34; // [rsp+6Ch] [rbp-14h]
  __int64 v35; // [rsp+70h] [rbp-10h]
  int v36; // [rsp+B0h] [rbp+30h] BYREF
  int v37; // [rsp+B8h] [rbp+38h] BYREF

  v34 = 0;
  v36 = 0;
  v37 = 0;
  if ( !a2 || !a1 || !*((_QWORD *)a1 + 2) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 15205;
  }
  v4 = *(_QWORD *)a1;
  if ( ((*(_QWORD *)a1 + 4LL) & 0xFFFFFFFFFFFFFFFBuLL) == 0 || (*(_DWORD *)(v4 + 160) & 0x800000) == 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 15210;
  }
  v28 = (*((_DWORD *)a1 + 3) & 4 | 8u) >> 1;
  v29 = *(_QWORD *)(v4 + 240);
  v5 = *(_DWORD *)(v4 + 248);
  v31 = -1;
  v30 = v5;
  v35 = *((_QWORD *)a1 + 2);
  v32 = -2;
  v33 = -2;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1);
  v7 = (*(__int64 (__fastcall **)(unsigned int *))(DxgkWin32kInterface + 192))(&v28);
  v8 = v7;
  if ( v7 == -1073741266 )
  {
    *((_DWORD *)a1 + 9) = 2;
    *((_DWORD *)a1 + 8) = -2;
    WdLogSingleEntry4(3LL, -1073741266LL, *((_QWORD *)a1 + 2));
    result = 3221226030LL;
    WdLogGlobalForLineNumber = 15236;
    return result;
  }
  result = 3221225485LL;
  if ( (_DWORD)v8 == -1073741811 )
  {
    *((_DWORD *)a1 + 9) = 3;
    *((_DWORD *)a1 + 8) = -2;
    return result;
  }
  if ( (int)v8 < 0 )
  {
    *((_DWORD *)a1 + 9) = 4;
    *((_DWORD *)a1 + 8) = -2;
    WdLogSingleEntry4(2LL, v8, *((_QWORD *)a1 + 2));
    result = (unsigned int)v8;
    WdLogGlobalForLineNumber = 15253;
    return result;
  }
  v10 = (__int64)*a2;
  v11 = 0LL;
  if ( *a2 )
  {
    for ( i = 0; i < *(unsigned __int16 *)(v10 + 20); ++i )
    {
      v13 = 296LL * i;
      if ( *(_DWORD *)(v13 + v10 + 80) == *(_DWORD *)(v4 + 248)
        && *(_DWORD *)(v13 + v10 + 72) == *(_DWORD *)(v4 + 240)
        && *(_DWORD *)(v13 + v10 + 76) == *(_DWORD *)(v4 + 244) )
      {
        if ( (*((_DWORD *)a1 + 3) & 0x20) != 0 && (*(_BYTE *)(v13 + v10 + 185) & 1) == 0 )
        {
          *((_DWORD *)a1 + 9) = 4;
          *((_DWORD *)a1 + 8) = -1;
          WdLogSingleEntry4(2LL, -1073741637LL, *((_QWORD *)a1 + 2));
          result = 3221225659LL;
          WdLogGlobalForLineNumber = 15291;
          return result;
        }
        v11 = *(struct _devicemodeW **)(v13 + v10 + 304);
        break;
      }
    }
  }
  v14 = (__int64 *)((char *)a1 + 24);
  v15 = (char *)*((_QWORD *)a1 + 3);
  if ( v15 )
  {
    GreDeleteFastMutex(v15);
    *v14 = 0LL;
  }
  v16 = DrvProbeAndCaptureDevmode(
          (struct tagGRAPHICS_DEVICE *)v4,
          (struct _devicemodeW **)a1 + 3,
          &v37,
          &v36,
          *((struct _devicemodeW **)a1 + 2),
          0,
          *((_DWORD *)a1 + 2),
          -__CFSHR__(*((_DWORD *)a1 + 3), 3),
          -__CFSHR__(*((_DWORD *)a1 + 3), 8),
          v11);
  v17 = v16;
  if ( v16 < 0 )
  {
    *((_DWORD *)a1 + 9) = 4;
    *((_DWORD *)a1 + 8) = -2;
    DrvDxgkLogCodePointPacket(58LL, 0, 0, 0);
    WdLogSingleEntry4(2LL, v17, *((_QWORD *)a1 + 2));
    result = (unsigned int)v17;
    WdLogGlobalForLineNumber = 15334;
    return result;
  }
  v18 = *((unsigned int *)a1 + 3);
  v19 = !v36 || (v18 & 0x20) != 0;
  if ( (v18 & 0x10) == 0 || v19 )
    v20 = 0;
  else
    v20 = 8;
  v28 = v20 | ((*((_DWORD *)a1 + 3) & 4u) >> 1) | (16 * v19);
  v29 = *(_QWORD *)(v4 + 240);
  v21 = *(_DWORD *)(v4 + 248);
  v31 = -1;
  v30 = v21;
  v22 = *v14;
  v32 = -2;
  v33 = -2;
  if ( !v22 )
    v22 = *((_QWORD *)a1 + 2);
  v35 = v22;
  if ( (v18 & 1) == 0 || (v18 & 2) != 0 )
  {
    v26 = DxDdGetDxgkWin32kInterface(v18);
    v27 = (*(__int64 (__fastcall **)(struct D3DKMT_GETPATHSMODALITY **, unsigned int *))(v26 + 600))(a2, &v28);
    v25 = v27;
    if ( v27 < 0 )
    {
      *((_DWORD *)a1 + 9) = 8;
      *((_DWORD *)a1 + 8) = -1;
      WdLogSingleEntry4(2LL, v27, v35);
      WdLogGlobalForLineNumber = 15402;
      return v25;
    }
  }
  else
  {
    v23 = DxDdGetDxgkWin32kInterface(v18);
    v24 = (*(__int64 (__fastcall **)(unsigned int *))(v23 + 192))(&v28);
    v25 = v24;
    if ( v24 < 0 )
    {
      *((_DWORD *)a1 + 9) = 8;
      *((_DWORD *)a1 + 8) = -1;
      WdLogSingleEntry4(2LL, v24, v35);
      WdLogGlobalForLineNumber = 15382;
      return v25;
    }
  }
  return 0LL;
}
