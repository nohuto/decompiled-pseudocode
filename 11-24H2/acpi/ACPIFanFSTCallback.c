/*
 * XREFs of ACPIFanFSTCallback @ 0x14002C010
 * Callers:
 *     ACPIFanLoop @ 0x14002C64C (ACPIFanLoop.c)
 * Callees:
 *     FreeDataBuffs @ 0x14000E530 (FreeDataBuffs.c)
 *     WPP_RECORDER_SF_Dqss @ 0x14002AD3C (WPP_RECORDER_SF_Dqss.c)
 *     ACPIFanLoop @ 0x14002C64C (ACPIFanLoop.c)
 *     AcpiDiagTraceFanStatusChange @ 0x14002CB84 (AcpiDiagTraceFanStatusChange.c)
 *     AMLIEvalPkgDataElement @ 0x14002CC08 (AMLIEvalPkgDataElement.c)
 *     WPP_RECORDER_SF_dqss @ 0x140033790 (WPP_RECORDER_SF_dqss.c)
 *     ACPISetDeviceWorker @ 0x140038938 (ACPISetDeviceWorker.c)
 *     WPP_RECORDER_SF_qss @ 0x14003E0C4 (WPP_RECORDER_SF_qss.c)
 *     WPP_RECORDER_SF_DDqss @ 0x140047364 (WPP_RECORDER_SF_DDqss.c)
 */

__int64 __fastcall ACPIFanFSTCallback(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r9
  const char *v6; // rdi
  char v7; // r8
  const char *v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // edi
  const char *v12; // rdi
  int v13; // edx
  const char *v14; // rcx
  __int64 v15; // rax
  int v16; // r9d
  __int64 v17; // rax
  int v18; // eax
  char v19; // dl
  int v20; // ecx
  __int64 v21; // rax
  const char *v22; // rdi
  const char *v23; // r8
  const char *v24; // rdx
  int v25; // edx
  const char *v26; // r8
  const char *v27; // rcx
  __int64 v28; // rax
  char v29; // r8
  const char *v30; // r10
  const char *v31; // rcx
  __int64 v32; // rax
  int v33; // eax
  char v34; // r8
  int v35; // edx
  __int64 v36; // rax
  const char *v37; // r8
  int v38; // edx
  const char *v39; // rcx
  __int64 v40; // rax
  char v41; // dl
  const char *v42; // rcx
  __int64 v43; // rax
  char v44; // [rsp+28h] [rbp-58h]
  char v45; // [rsp+28h] [rbp-58h]
  char v46; // [rsp+28h] [rbp-58h]
  char v47; // [rsp+28h] [rbp-58h]
  __int64 v48; // [rsp+48h] [rbp-38h]
  __int128 v49; // [rsp+50h] [rbp-30h] BYREF
  __int128 v50; // [rsp+60h] [rbp-20h]
  __int64 v51; // [rsp+70h] [rbp-10h]
  int v52; // [rsp+C8h] [rbp+48h]
  unsigned int v54; // [rsp+D8h] [rbp+58h]

  v52 = 0x40000000;
  v51 = 0LL;
  v54 = (unsigned int)a2 >> 31;
  v5 = a3;
  v49 = 0LL;
  v50 = 0LL;
  if ( a2 < 0 )
  {
    v6 = byte_1400753E8;
    v7 = 0;
    v8 = byte_1400753E8;
    if ( a4 )
    {
      v9 = *(_QWORD *)(a4 + 8);
      v7 = a4;
      if ( (v9 & 0x200000000000LL) != 0 )
      {
        v6 = *(const char **)(a4 + 608);
        if ( (v9 & 0x400000000000LL) != 0 )
          v8 = *(const char **)(a4 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_9;
    WPP_RECORDER_SF_Dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x10u,
      0xFu,
      (__int64)&WPP_667aea33661b3b69513e94c68b16346f_Traceguids,
      a2,
      v7,
      v6,
      v8);
LABEL_8:
    v5 = a3;
LABEL_9:
    v10 = 0x40000000;
    goto LABEL_10;
  }
  if ( *(_WORD *)(a3 + 2) != 4 )
  {
    v12 = byte_1400753E8;
    v13 = 0;
    v14 = byte_1400753E8;
    if ( a4 )
    {
      v15 = *(_QWORD *)(a4 + 8);
      v13 = a4;
      if ( (v15 & 0x200000000000LL) != 0 )
      {
        v12 = *(const char **)(a4 + 608);
        if ( (v15 & 0x400000000000LL) != 0 )
          v14 = *(const char **)(a4 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_9;
    v16 = 16;
    goto LABEL_20;
  }
  if ( **(_DWORD **)(a3 + 32) < 3u )
  {
    v12 = byte_1400753E8;
    v13 = 0;
    v14 = byte_1400753E8;
    if ( a4 )
    {
      v17 = *(_QWORD *)(a4 + 8);
      v13 = a4;
      if ( (v17 & 0x200000000000LL) != 0 )
      {
        v12 = *(const char **)(a4 + 608);
        if ( (v17 & 0x400000000000LL) != 0 )
          v14 = *(const char **)(a4 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_9;
    v16 = 17;
LABEL_20:
    v44 = v13;
    LOBYTE(v13) = 4;
    WPP_RECORDER_SF_qss(
      WPP_GLOBAL_Control->DeviceExtension,
      v13,
      16,
      v16,
      (__int64)&WPP_667aea33661b3b69513e94c68b16346f_Traceguids,
      v44,
      (__int64)v12,
      (__int64)v14);
    goto LABEL_8;
  }
  v18 = AMLIEvalPkgDataElement(a3, 1LL, &v49);
  v19 = v18;
  if ( v18 < 0 )
  {
    v22 = byte_1400753E8;
    v29 = 0;
    v30 = byte_1400753E8;
    v31 = byte_1400753E8;
    if ( a4 )
    {
      v32 = *(_QWORD *)(a4 + 8);
      v29 = a4;
      if ( (v32 & 0x200000000000LL) != 0 )
      {
        v30 = *(const char **)(a4 + 608);
        if ( (v32 & 0x400000000000LL) != 0 )
          v31 = *(const char **)(a4 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x10u,
        0x14u,
        (__int64)&WPP_667aea33661b3b69513e94c68b16346f_Traceguids,
        v19,
        v29,
        v30,
        v31);
  }
  else
  {
    if ( WORD1(v49) == 1 )
    {
      v20 = v50;
      if ( (_DWORD)v50 == *(_DWORD *)(a4 + 296) )
      {
        LOBYTE(v20) = *(_DWORD *)(a4 + 296);
      }
      else
      {
        *(_DWORD *)(a4 + 296) = v50;
        v52 = 1073741826;
        *(_BYTE *)(a4 + 300) = v20 != 0;
      }
      v21 = *(_QWORD *)(a4 + 8);
      v22 = byte_1400753E8;
      v23 = byte_1400753E8;
      v24 = byte_1400753E8;
      if ( (v21 & 0x200000000000LL) != 0 )
      {
        v23 = *(const char **)(a4 + 608);
        if ( (v21 & 0x400000000000LL) != 0 )
          v24 = *(const char **)(a4 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v48 = (__int64)v24;
        LOBYTE(v24) = 5;
        WPP_RECORDER_SF_DDqss(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v24,
          16,
          18,
          (__int64)&WPP_667aea33661b3b69513e94c68b16346f_Traceguids,
          v20,
          *(_BYTE *)(a4 + 300),
          a4,
          (__int64)v23,
          v48);
      }
    }
    else
    {
      v22 = byte_1400753E8;
      v25 = 0;
      v26 = byte_1400753E8;
      v27 = byte_1400753E8;
      if ( a4 )
      {
        v28 = *(_QWORD *)(a4 + 8);
        v25 = a4;
        if ( (v28 & 0x200000000000LL) != 0 )
        {
          v26 = *(const char **)(a4 + 608);
          if ( (v28 & 0x400000000000LL) != 0 )
            v27 = *(const char **)(a4 + 616);
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v45 = v25;
        LOBYTE(v25) = 4;
        WPP_RECORDER_SF_qss(
          WPP_GLOBAL_Control->DeviceExtension,
          v25,
          16,
          19,
          (__int64)&WPP_667aea33661b3b69513e94c68b16346f_Traceguids,
          v45,
          (__int64)v26,
          (__int64)v27);
      }
    }
    dword_1400890B8 = 0;
    pszDest = 0;
    FreeDataBuffs((__int64)&v49, 1u);
  }
  v49 = 0LL;
  v51 = 0LL;
  v50 = 0LL;
  v33 = AMLIEvalPkgDataElement(a3, 2LL, &v49);
  v34 = v33;
  if ( v33 < 0 )
  {
    v41 = 0;
    v42 = byte_1400753E8;
    if ( a4 )
    {
      v43 = *(_QWORD *)(a4 + 8);
      v41 = a4;
      if ( (v43 & 0x200000000000LL) != 0 )
      {
        v22 = *(const char **)(a4 + 608);
        if ( (v43 & 0x400000000000LL) != 0 )
          v42 = *(const char **)(a4 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x10u,
        0x17u,
        (__int64)&WPP_667aea33661b3b69513e94c68b16346f_Traceguids,
        v34,
        v41,
        v22,
        v42);
  }
  else
  {
    if ( WORD1(v49) == 1 )
    {
      v35 = *(_DWORD *)(a4 + 304);
      if ( (_DWORD)v50 != v35 )
      {
        v52 |= 2u;
        v35 = v50;
        *(_DWORD *)(a4 + 304) = v50;
      }
      v36 = *(_QWORD *)(a4 + 8);
      v37 = byte_1400753E8;
      if ( (v36 & 0x200000000000LL) != 0 )
      {
        v22 = *(const char **)(a4 + 608);
        if ( (v36 & 0x400000000000LL) != 0 )
          v37 = *(const char **)(a4 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v46 = v35;
        LOBYTE(v35) = 5;
        WPP_RECORDER_SF_dqss(
          WPP_GLOBAL_Control->DeviceExtension,
          v35,
          16,
          21,
          (__int64)&WPP_667aea33661b3b69513e94c68b16346f_Traceguids,
          v46,
          a4,
          (__int64)v22,
          (__int64)v37);
      }
    }
    else
    {
      v38 = 0;
      v39 = byte_1400753E8;
      if ( a4 )
      {
        v40 = *(_QWORD *)(a4 + 8);
        v38 = a4;
        if ( (v40 & 0x200000000000LL) != 0 )
        {
          v22 = *(const char **)(a4 + 608);
          if ( (v40 & 0x400000000000LL) != 0 )
            v39 = *(const char **)(a4 + 616);
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v47 = v38;
        LOBYTE(v38) = 4;
        WPP_RECORDER_SF_qss(
          WPP_GLOBAL_Control->DeviceExtension,
          v38,
          16,
          22,
          (__int64)&WPP_667aea33661b3b69513e94c68b16346f_Traceguids,
          v47,
          (__int64)v22,
          (__int64)v39);
      }
    }
    dword_1400890B8 = 0;
    pszDest = 0;
    FreeDataBuffs((__int64)&v49, 1u);
  }
  v10 = v52;
  if ( (v52 & 2) != 0 )
  {
    AcpiDiagTraceFanStatusChange(a4);
  }
  else if ( (*(_BYTE *)(a4 + 320) & 0xF) == 0xF )
  {
    ACPISetDeviceWorker(a4, 1024LL);
  }
  v5 = a3;
LABEL_10:
  if ( !(_BYTE)v54 )
  {
    dword_1400890B8 = 0;
    pszDest = 0;
    FreeDataBuffs(v5, 1u);
  }
  return ACPIFanLoop(a4, v10, 0LL);
}
