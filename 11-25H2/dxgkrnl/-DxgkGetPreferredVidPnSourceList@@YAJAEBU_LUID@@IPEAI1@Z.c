/*
 * XREFs of ?DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z @ 0x1403D6F1C
 * Callers:
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x140372180 (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z @ 0x14005725C (-MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x14028A2B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkGetPreferredVidPnSourceList(const struct _LUID *a1, unsigned int a2, char *a3, char *a4)
{
  unsigned int v6; // ebp
  const struct _LUID *v7; // rdi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v9; // rax
  DXGADAPTER *v10; // rbx
  int v11; // eax
  __int64 v12; // rsi
  ADAPTER_DISPLAY *v13; // r15
  int v14; // esi
  unsigned int i; // edx
  __int64 v16; // rbp
  unsigned int v17; // ecx
  char *v18; // r14
  signed __int64 v19; // rdi
  __int64 v20; // r13
  unsigned int v21; // eax
  unsigned int v22; // ebp
  unsigned int v23; // ecx
  unsigned int j; // edx
  const wchar_t *v26; // r9
  __int64 v27; // [rsp+20h] [rbp-128h]
  __int64 HighPart; // [rsp+20h] [rbp-128h]
  __int64 v29; // [rsp+28h] [rbp-120h]
  __int64 LowPart; // [rsp+28h] [rbp-120h]
  __int64 v31; // [rsp+30h] [rbp-118h]
  __int64 v32; // [rsp+38h] [rbp-110h]
  unsigned __int64 v34[2]; // [rsp+58h] [rbp-F0h] BYREF
  const struct _LUID *v35; // [rsp+68h] [rbp-E0h]
  _BYTE v36[144]; // [rsp+70h] [rbp-D8h] BYREF

  v34[0] = 0LL;
  v35 = a1;
  v6 = a2;
  v7 = a1;
  Global = DXGGLOBAL::GetGlobal();
  v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *v7, v34);
  v10 = v9;
  if ( !v9 )
  {
    LODWORD(v12) = -1073741811;
    WdLogSingleEntry3(2LL, v7->HighPart, v7->LowPart, -1073741811LL);
    LowPart = v7->LowPart;
    HighPart = v7->HighPart;
    WdLogGlobalForLineNumber = 9410;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to find adapter from LUID 0x%I64x%08I64x, returning 0x%I64x.",
      HighPart,
      LowPart,
      -1073741811LL,
      0LL,
      0LL);
    return (unsigned int)v12;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v36, v9, 0LL);
  DXGADAPTER::ReleaseReference(v10);
  v11 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v36, 0LL);
  v12 = v11;
  if ( v11 < 0 )
  {
    WdLogSingleEntry3(2LL, v7->HighPart, v7->LowPart, v11);
    v26 = L"Failed to acquire adapter core access on adapter 0x%I64x%08I64x, Statue = 0x%I64x.";
    v32 = 0LL;
    v31 = v12;
    v29 = v7->LowPart;
    v27 = v7->HighPart;
    WdLogGlobalForLineNumber = 9426;
    goto LABEL_24;
  }
  v13 = (ADAPTER_DISPLAY *)*((_QWORD *)v10 + 390);
  if ( !v13 )
  {
    LODWORD(v12) = -1073741811;
    WdLogSingleEntry3(2LL, v7->HighPart, v7->LowPart, -1073741811LL);
    v26 = L"Caller specified adapter 0x%I64x%08I64x is NOT a display adapter, returning 0x%I64x.";
    v32 = 0LL;
    v31 = -1073741811LL;
    v29 = v7->LowPart;
    v27 = v7->HighPart;
    WdLogGlobalForLineNumber = 9436;
LABEL_24:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v26, v27, v29, v31, v32, 0LL);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v36);
    return (unsigned int)v12;
  }
  v14 = 0;
  for ( i = 0; i < v6; ++i )
  {
    v16 = i;
    v17 = *(_DWORD *)&a4[4 * i];
    if ( v17 != -1 )
    {
      if ( v17 >= *((_DWORD *)v13 + 24) )
      {
        LODWORD(v12) = -1071774972;
        WdLogSingleEntry4(2LL, *(unsigned int *)&a4[4 * i], v7->HighPart, v7->LowPart, -1071774972LL);
        v26 = L"Caller specified VidPn source 0x%I64x exceeds the MAX VidPn source on adapter 0x%I64x%08I64x, returning 0x%I64x.";
        v32 = -1071774972LL;
        v31 = v7->LowPart;
        v29 = v7->HighPart;
        v27 = *(unsigned int *)&a4[4 * v16];
        WdLogGlobalForLineNumber = 9464;
        goto LABEL_24;
      }
      v14 |= 1 << v17;
    }
    v6 = a2;
  }
  if ( v6 )
  {
    v18 = a4;
    v34[1] = a3 - a4;
    v19 = a3 - a4;
    v20 = v6;
    do
    {
      if ( *(_DWORD *)v18 == -1 )
      {
        v21 = ADAPTER_DISPLAY::MapVidPnTargetToVidPnSource(v13, *(_DWORD *)&v18[v19]);
        v22 = v21;
        if ( v21 != -1 )
        {
          if ( v21 >= *((_DWORD *)v13 + 24) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 9487;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              0xFFFFFFFFLL,
              L"VidPnSourceId < pDisplayCore->GetNumVidPnSources()",
              9487LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          if ( ((1 << v22) & v14) == 0 )
          {
            *(_DWORD *)v18 = v22;
            v14 |= 1 << v22;
          }
        }
      }
      v18 += 4;
      --v20;
    }
    while ( v20 );
    v7 = v35;
    v6 = a2;
  }
  v23 = 0;
  for ( j = 0; j < v6; ++j )
  {
    if ( *(_DWORD *)&a4[4 * j] == -1 )
    {
      while ( 1 )
      {
        if ( v23 >= *((_DWORD *)v13 + 24) )
        {
          LODWORD(v12) = -1071774975;
          WdLogSingleEntry3(2LL, v7->HighPart, v7->LowPart, -1071774975LL);
          v26 = L"All the VidPn sources are used on adapter 0x%I64x%08I64x, returning 0x%I64x.";
          v32 = 0LL;
          v31 = -1071774975LL;
          v29 = v7->LowPart;
          v27 = v7->HighPart;
          WdLogGlobalForLineNumber = 9522;
          goto LABEL_24;
        }
        if ( !_bittest(&v14, v23) )
          break;
        ++v23;
      }
      *(_DWORD *)&a4[4 * j] = v23;
      v14 |= 1 << v23++;
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v36);
  return 0LL;
}
