/*
 * XREFs of ACPIFanPrepareImpactZoneSupport @ 0x14009DCC8
 * Callers:
 *     ACPIFanStartDevice @ 0x140096820 (ACPIFanStartDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_Dqss @ 0x14002AD3C (WPP_RECORDER_SF_Dqss.c)
 *     AMLIEvalPkgDataElement @ 0x14002CC08 (AMLIEvalPkgDataElement.c)
 *     WPP_RECORDER_SF_dqss @ 0x140033790 (WPP_RECORDER_SF_dqss.c)
 *     AMLIFreeDataBuffs @ 0x140040074 (AMLIFreeDataBuffs.c)
 *     WPP_RECORDER_SF_ddqss @ 0x1400456DC (WPP_RECORDER_SF_ddqss.c)
 *     WPP_RECORDER_SF_dDqss @ 0x140060490 (WPP_RECORDER_SF_dDqss.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     ACPIFanValidateImpactZoneSupport @ 0x14009E418 (ACPIFanValidateImpactZoneSupport.c)
 *     ACPIAmliEvaluateDsm @ 0x1400B9FBC (ACPIAmliEvaluateDsm.c)
 */

void __fastcall ACPIFanPrepareImpactZoneSupport(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rcx
  const char *v5; // rdi
  const char *v6; // rdx
  unsigned __int16 v7; // r9
  unsigned __int8 v8; // dl
  PVOID v9; // r13
  const char *v10; // rdi
  __int64 *v11; // r12
  const char *v12; // r8
  const char *v13; // rdx
  unsigned __int8 v14; // r10
  __int64 v15; // rax
  const char *v16; // r10
  __int64 v17; // rcx
  const char *v18; // r8
  __int64 v19; // rcx
  int v20; // eax
  const char *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  int v24; // r8d
  const char *v25; // rdx
  const char *v26; // r8
  __int64 v27; // rcx
  int v28; // eax
  const char *v29; // rcx
  PVOID v30; // r13
  __int64 v31; // rdx
  const char *v32; // rax
  int v33; // edx
  const char *v34; // rax
  __int64 i; // r13
  int v36; // eax
  __int64 v37; // r8
  __int64 v38; // rdx
  const char *v39; // rcx
  const char *v40; // rax
  char v41; // al
  int v42; // [rsp+28h] [rbp-79h]
  int v43; // [rsp+28h] [rbp-79h]
  int v44; // [rsp+28h] [rbp-79h]
  char v45; // [rsp+30h] [rbp-71h]
  char v46; // [rsp+38h] [rbp-69h]
  const char *v47; // [rsp+40h] [rbp-61h]
  const char *v48; // [rsp+48h] [rbp-59h]
  PVOID P; // [rsp+58h] [rbp-49h] BYREF
  int v50; // [rsp+60h] [rbp-41h]
  __int128 v51; // [rsp+68h] [rbp-39h] BYREF
  __int128 v52; // [rsp+78h] [rbp-29h] BYREF
  __int128 v53; // [rsp+88h] [rbp-19h]
  __int64 v54; // [rsp+98h] [rbp-9h]
  __int128 v55; // [rsp+A0h] [rbp-1h] BYREF
  __int128 v56; // [rsp+B0h] [rbp+Fh]
  __int128 v57; // [rsp+C0h] [rbp+1Fh]

  v54 = 0LL;
  *(_DWORD *)(a1 + 320) = 0;
  v2 = *(_QWORD *)(a1 + 760);
  v52 = 0LL;
  v50 = 0;
  v53 = 0LL;
  v55 = 0LL;
  P = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v51 = FAN_EXTENSIONS_DSM_UUID;
  v3 = ACPIAmliEvaluateDsm(v2, (unsigned int)&v51, 0, 0, (__int64)&v55, (__int64)&P);
  if ( v3 >= 0 )
  {
    v9 = P;
    if ( *((_WORD *)P + 1) == 3 && *((_DWORD *)P + 6) )
    {
      v10 = byte_1400753E8;
      v11 = (__int64 *)(a1 + 8);
      v12 = byte_1400753E8;
      v13 = byte_1400753E8;
      v14 = **((_BYTE **)P + 4);
      v15 = *(_QWORD *)(a1 + 8);
      v50 = v14;
      if ( (v15 & 0x200000000000LL) != 0 )
      {
        v12 = *(const char **)(a1 + 608);
        if ( (v15 & 0x400000000000LL) != 0 )
          v13 = *(const char **)(a1 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Dqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0x10u,
          0x23u,
          (__int64)&WPP_667aea33661b3b69513e94c68b16346f_Traceguids,
          v14,
          a1,
          v12,
          v13);
    }
    else
    {
      v10 = byte_1400753E8;
      v11 = (__int64 *)(a1 + 8);
      v16 = byte_1400753E8;
      v17 = *(_QWORD *)(a1 + 8);
      v18 = byte_1400753E8;
      if ( (v17 & 0x200000000000LL) != 0 )
      {
        v16 = *(const char **)(a1 + 608);
        if ( (v17 & 0x400000000000LL) != 0 )
          v18 = *(const char **)(a1 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dDqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          *((unsigned __int16 *)P + 1),
          (__int64)v18,
          0x24u,
          v42,
          *((_WORD *)P + 1),
          *((_DWORD *)P + 6),
          a1,
          v16,
          v18);
    }
    AMLIFreeDataBuffs((__int64)v9);
    ExFreePoolWithTag(v9, 0x52706341u);
    if ( (v50 & 0xF) != 0xF )
      return;
    v19 = *(_QWORD *)(a1 + 760);
    P = 0LL;
    v55 = 0LL;
    v56 = 0LL;
    v57 = 0LL;
    v51 = FAN_EXTENSIONS_DSM_UUID;
    v20 = ACPIAmliEvaluateDsm(v19, (unsigned int)&v51, 0, 1, (__int64)&v55, (__int64)&P);
    v21 = byte_1400753E8;
    if ( v20 >= 0 )
    {
      v22 = *((unsigned __int16 *)P + 1);
      v23 = *v11;
      if ( (_WORD)v22 == 1 )
      {
        v24 = *((_DWORD *)P + 4);
        v25 = byte_1400753E8;
        *(_DWORD *)(a1 + 324) = v24;
        if ( (v23 & 0x200000000000LL) != 0 )
        {
          v25 = *(const char **)(a1 + 608);
          if ( (v23 & 0x400000000000LL) != 0 )
            v21 = *(const char **)(a1 + 616);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            0x10u,
            0x26u,
            (__int64)&WPP_667aea33661b3b69513e94c68b16346f_Traceguids,
            v24,
            a1,
            v25,
            v21);
      }
      else
      {
        v26 = byte_1400753E8;
        if ( (v23 & 0x200000000000LL) != 0 )
        {
          v26 = *(const char **)(a1 + 608);
          if ( (v23 & 0x400000000000LL) != 0 )
            v21 = *(const char **)(a1 + 616);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dDqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v22,
            (__int64)v26,
            0x27u,
            v43,
            v22,
            *((_DWORD *)P + 6),
            a1,
            v26,
            v21);
      }
      AMLIFreeDataBuffs((__int64)P);
      ExFreePoolWithTag(P, 0x52706341u);
      v27 = *(_QWORD *)(a1 + 760);
      P = 0LL;
      v55 = 0LL;
      v56 = 0LL;
      v57 = 0LL;
      v51 = FAN_EXTENSIONS_DSM_UUID;
      v28 = ACPIAmliEvaluateDsm(v27, (unsigned int)&v51, 0, 3, (__int64)&v55, (__int64)&P);
      if ( v28 >= 0 )
      {
        v30 = P;
        v31 = *((unsigned __int16 *)P + 1);
        if ( (_WORD)v31 == 4 )
        {
          v33 = **((_DWORD **)P + 4);
          if ( v33 == 4 )
          {
            for ( i = 0LL; (unsigned int)i < 4; i = (unsigned int)(i + 1) )
            {
              v36 = AMLIEvalPkgDataElement((__int64)P, i, (__int64)&v52);
              v38 = (unsigned int)v36;
              if ( v36 < 0 )
              {
                v40 = byte_1400753E8;
                if ( (*v11 & 0x200000000000LL) != 0 )
                {
                  v10 = *(const char **)(a1 + 608);
                  if ( (*v11 & 0x400000000000LL) != 0 )
                    v40 = *(const char **)(a1 + 616);
                }
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_dDqss(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    v38,
                    v37,
                    0x2Bu,
                    v44,
                    i,
                    v38,
                    a1,
                    v10,
                    v40);
                goto LABEL_68;
              }
              if ( WORD1(v52) != 1 )
              {
                v39 = byte_1400753E8;
                if ( (*v11 & 0x200000000000LL) != 0 )
                {
                  v10 = *(const char **)(a1 + 608);
                  if ( (*v11 & 0x400000000000LL) != 0 )
                    v39 = *(const char **)(a1 + 616);
                }
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_dDqss(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    (unsigned int)v36,
                    v37,
                    0x2Cu,
                    v44,
                    i,
                    SBYTE2(v52),
                    a1,
                    v10,
                    v39);
                AMLIFreeDataBuffs((__int64)&v52);
LABEL_68:
                v30 = P;
                goto LABEL_69;
              }
              *(_DWORD *)(a1 + 4 * i + 328) = v53;
              AMLIFreeDataBuffs((__int64)&v52);
            }
            v41 = ACPIFanValidateImpactZoneSupport(a1);
            v30 = P;
            if ( v41 )
              *(_DWORD *)(a1 + 320) = v50;
          }
          else
          {
            v34 = byte_1400753E8;
            if ( (*v11 & 0x200000000000LL) != 0 )
            {
              v10 = *(const char **)(a1 + 608);
              if ( (*v11 & 0x400000000000LL) != 0 )
                v34 = *(const char **)(a1 + 616);
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_ddqss(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                2u,
                0x10u,
                0x2Au,
                (__int64)&WPP_667aea33661b3b69513e94c68b16346f_Traceguids,
                4,
                v33,
                a1,
                v10,
                v34);
          }
        }
        else
        {
          v32 = byte_1400753E8;
          if ( (*v11 & 0x200000000000LL) != 0 )
          {
            v10 = *(const char **)(a1 + 608);
            if ( (*v11 & 0x400000000000LL) != 0 )
              v32 = *(const char **)(a1 + 616);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dDqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v31,
              4LL,
              0x29u,
              v44,
              v31,
              *((_DWORD *)P + 6),
              a1,
              v10,
              v32);
        }
LABEL_69:
        AMLIFreeDataBuffs((__int64)v30);
        ExFreePoolWithTag(P, 0x52706341u);
        return;
      }
      v29 = byte_1400753E8;
      if ( (*v11 & 0x200000000000LL) != 0 )
      {
        v10 = *(const char **)(a1 + 608);
        if ( (*v11 & 0x400000000000LL) != 0 )
          v29 = *(const char **)(a1 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return;
      v48 = v29;
      v7 = 40;
      v47 = v10;
      v46 = a1;
      v45 = v28;
    }
    else
    {
      if ( (*v11 & 0x200000000000LL) != 0 )
      {
        v10 = *(const char **)(a1 + 608);
        if ( (*v11 & 0x400000000000LL) != 0 )
          v21 = *(const char **)(a1 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return;
      v48 = v21;
      v7 = 37;
      v47 = v10;
      v46 = a1;
      v45 = v20;
    }
    v8 = 2;
    goto LABEL_7;
  }
  v4 = *(_QWORD *)(a1 + 8);
  v5 = byte_1400753E8;
  v6 = byte_1400753E8;
  if ( (v4 & 0x200000000000LL) != 0 )
  {
    v5 = *(const char **)(a1 + 608);
    if ( (v4 & 0x400000000000LL) != 0 )
      v6 = *(const char **)(a1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v48 = v6;
    v7 = 34;
    v47 = v5;
    v46 = a1;
    v45 = v3;
    v8 = 3;
LABEL_7:
    WPP_RECORDER_SF_Dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v8,
      0x10u,
      v7,
      (__int64)&WPP_667aea33661b3b69513e94c68b16346f_Traceguids,
      v45,
      v46,
      v47,
      v48);
  }
}
