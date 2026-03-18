/*
 * XREFs of HUBDESC_InternalValidateEndpointDescriptor @ 0x140037404
 * Callers:
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x14003D35C (HUBDESC_ValidateConfigurationDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x14001D540 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x14002E284 (WPP_RECORDER_SF_DDDD.c)
 *     HUBDESC_InternalValidateLastEndpoint @ 0x140039424 (HUBDESC_InternalValidateLastEndpoint.c)
 *     HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x14003C58C (HUBDESC_ShouldEnforceWin8ValidationMutable.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

char __fastcall HUBDESC_InternalValidateEndpointDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v5; // r14
  int v9; // ebp
  unsigned int v10; // r12d
  char v11; // r13
  void *v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // ecx
  __int64 v15; // rdx
  void (__fastcall **v16)(_QWORD, __int64); // r12
  _QWORD *v17; // r13
  int v18; // edx
  __int64 v19; // r9
  unsigned __int16 v20; // bx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  __int64 v24; // rdx
  int v25; // eax
  _QWORD *v27; // rbx
  _QWORD *v28; // r13
  void (__fastcall **v29)(_QWORD, __int64); // r13
  _QWORD *v30; // rbx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  unsigned __int16 v34; // r9
  unsigned __int64 v35; // rax
  __int64 v36; // rcx
  __int16 v37; // r9
  int v38; // ecx
  int v39; // ecx
  int v40; // ecx
  __int64 v41; // rdx
  void (__fastcall **v42)(_QWORD, __int64); // rbx
  int v43; // ecx
  int v44; // ecx
  int v45; // ecx
  unsigned __int16 v46; // r9
  unsigned __int64 v47; // rax
  __int64 v48; // rcx
  __int16 v49; // r9
  __int64 v50; // [rsp+28h] [rbp-70h]
  __int64 v51; // [rsp+30h] [rbp-68h]
  __int64 v52; // [rsp+38h] [rbp-60h]
  __int64 v53; // [rsp+40h] [rbp-58h]
  int v54; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int8 v55; // [rsp+A0h] [rbp+8h]
  _QWORD *v56; // [rsp+A8h] [rbp+10h]
  _QWORD *v57; // [rsp+A8h] [rbp+10h]
  void (__fastcall **v58)(_QWORD, __int64); // [rsp+B0h] [rbp+18h]

  v5 = a4;
  v54 = 0;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v5 = &v54;
  }
  v9 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v10 = *(_DWORD *)(a2 + 72) - v9;
  *a3 = *a1;
  HUBDESC_InternalValidateLastEndpoint(a2, v5, a5);
  v11 = 1;
  v12 = &WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids;
  if ( *v5 == 1 )
  {
LABEL_85:
    if ( !*v5 )
      return v11;
    goto LABEL_86;
  }
  v13 = 7LL;
  if ( *a1 >= 7u )
  {
LABEL_19:
    if ( *a1 > 7u )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v52) = 7;
        LODWORD(v51) = v9;
        LODWORD(v50) = *a1;
        WPP_RECORDER_SF_DDD(
          a5,
          3u,
          7LL,
          0x21u,
          (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
          v50,
          v51,
          v52);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 32))(*(_QWORD *)(a2 + 40), 80LL);
    }
    if ( *a3 > v10 )
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v50) = v9;
        WPP_RECORDER_SF_d(a5, 2u, 5u, 0x22u, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v50);
      }
      v15 = 83LL;
LABEL_31:
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v15);
      goto LABEL_85;
    }
    v55 = a1[2];
    if ( (*(_DWORD *)(a2 + 256) & 1) == 0 )
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v50) = v9;
        WPP_RECORDER_SF_d(a5, 2u, 5u, 0x23u, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v50);
      }
      v15 = 85LL;
      goto LABEL_31;
    }
    if ( (a1[2] & 0xF) != 0 )
    {
      v16 = (void (__fastcall **)(_QWORD, __int64))(a2 + 24);
      v17 = (_QWORD *)(a2 + 40);
    }
    else
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v50) = v9;
        WPP_RECORDER_SF_d(a5, 2u, 5u, 0x24u, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v50);
      }
      v16 = (void (__fastcall **)(_QWORD, __int64))(a2 + 24);
      v17 = (_QWORD *)(a2 + 40);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 86LL);
    }
    if ( (a1[2] & 0x70) != 0 )
    {
      if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v51) = a1[2];
        LODWORD(v50) = v9;
        WPP_RECORDER_SF_dD(a5, 2u, 5u, 0x25u, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v50, v51);
      }
      (*v16)(*v17, 84LL);
      v16 = (void (__fastcall **)(_QWORD, __int64))(a2 + 24);
      v17 = (_QWORD *)(a2 + 40);
    }
    if ( (a1[3] & 0xC0) != 0 )
    {
      if ( *(_BYTE *)(a2 + 15) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v51) = v9;
        LODWORD(v50) = a1[3];
        WPP_RECORDER_SF_dD(a5, 2u, 5u, 0x26u, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v50, v51);
      }
      v16 = (void (__fastcall **)(_QWORD, __int64))(a2 + 24);
      v17 = (_QWORD *)(a2 + 40);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 82LL);
    }
    v18 = a1[3];
    v19 = 0LL;
    v20 = *((_WORD *)a1 + 2);
    if ( (a1[3] & 3) != 0 )
    {
      if ( (a1[3] & 3) != 1 )
      {
        if ( (a1[3] & 3) != 2 )
        {
          if ( (a1[3] & 3) != 3 )
          {
LABEL_75:
            v11 = 1;
LABEL_76:
            if ( _bittest64(*(const signed __int64 **)(a2 + 144), v55) )
            {
              if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
                *v5 = 2;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v53) = *(unsigned __int8 *)(a2 + 81);
                LODWORD(v52) = *(unsigned __int8 *)(a2 + 80);
                LODWORD(v51) = v9;
                LODWORD(v50) = v55;
                WPP_RECORDER_SF_DDDD(
                  a5,
                  2u,
                  5u,
                  0x47u,
                  (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
                  v50,
                  v51,
                  v52,
                  v53);
              }
              (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(a2 + 24))(
                *(_QWORD *)(a2 + 40),
                102LL,
                v13,
                v19);
            }
            RtlSetBit((PRTL_BITMAP)(a2 + 136), v55);
            v25 = *(_DWORD *)(a2 + 256);
            ++*(_BYTE *)(a2 + 185);
            *(_QWORD *)(a2 + 192) = a1;
            *(_DWORD *)(a2 + 256) = v25 & 0xFFFFFFEB | 4;
            goto LABEL_85;
          }
          v21 = *(_DWORD *)(a2 + 4);
          if ( v21 )
          {
            v22 = v21 - 1;
            if ( v22 )
            {
              v23 = v22 - 1;
              if ( v23 )
              {
                if ( v23 != 1 || v20 <= 0x400u )
                  goto LABEL_75;
                if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
                  *v5 = 2;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LODWORD(v51) = v9;
                  LODWORD(v50) = *((unsigned __int16 *)a1 + 2);
                  WPP_RECORDER_SF_dD(
                    a5,
                    2u,
                    5u,
                    0x37u,
                    (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
                    v50,
                    v51);
                }
                v24 = 110LL;
              }
              else
              {
                if ( (v18 & 0xFFFFFFFC) != 0 )
                {
                  if ( *(_BYTE *)(a2 + 15) )
                    *v5 = 2;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LODWORD(v51) = v9;
                    LODWORD(v50) = a1[3];
                    WPP_RECORDER_SF_dD(
                      a5,
                      2u,
                      5u,
                      0x33u,
                      (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
                      v50,
                      v51);
                  }
                  (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(a2 + 24))(
                    *(_QWORD *)(a2 + 40),
                    108LL,
                    v13,
                    v19);
                }
                if ( (v20 & 0x7FFu) > 0x400 )
                {
                  if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
                    *v5 = 2;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LODWORD(v51) = v9;
                    LODWORD(v50) = *((unsigned __int16 *)a1 + 2);
                    WPP_RECORDER_SF_dD(
                      a5,
                      2u,
                      5u,
                      0x34u,
                      (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
                      v50,
                      v51);
                  }
                  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 110LL);
                }
                if ( v20 >= 0x2000u )
                {
                  if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
                    *v5 = 2;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LODWORD(v51) = v9;
                    LODWORD(v50) = *((unsigned __int16 *)a1 + 2);
                    WPP_RECORDER_SF_dD(
                      a5,
                      2u,
                      5u,
                      0x35u,
                      (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
                      v50,
                      v51);
                  }
                  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 110LL);
                }
                if ( (v20 & 0x1800) != 0x1800 )
                  goto LABEL_75;
                if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
                  *v5 = 2;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LODWORD(v51) = v9;
                  LODWORD(v50) = *((unsigned __int16 *)a1 + 2);
                  WPP_RECORDER_SF_dD(
                    a5,
                    2u,
                    5u,
                    0x36u,
                    (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
                    v50,
                    v51);
                }
                v24 = 110LL;
              }
              goto LABEL_74;
            }
            if ( (v18 & 0xFFFFFFFC) != 0 )
            {
              if ( *(_BYTE *)(a2 + 15) )
                *v5 = 2;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v51) = v9;
                LODWORD(v50) = a1[3];
                WPP_RECORDER_SF_dD(
                  a5,
                  2u,
                  5u,
                  0x30u,
                  (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
                  v50,
                  v51);
              }
              v27 = (_QWORD *)(a2 + 40);
              (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(a2 + 24))(
                *(_QWORD *)(a2 + 40),
                108LL,
                v13,
                v19);
            }
            else
            {
              v27 = (_QWORD *)(a2 + 40);
            }
            if ( *((_WORD *)a1 + 2) > 0x40u )
            {
              *v5 = 2;
              v28 = v27;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v51) = v9;
                LODWORD(v50) = *((unsigned __int16 *)a1 + 2);
                WPP_RECORDER_SF_dD(
                  a5,
                  2u,
                  5u,
                  0x31u,
                  (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
                  v50,
                  v51);
                v28 = (_QWORD *)(a2 + 40);
              }
              (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*v27, 110LL);
              v27 = v28;
            }
            if ( !a1[6] )
            {
              if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
                *v5 = 2;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v51) = v9;
                LODWORD(v50) = a1[6];
                WPP_RECORDER_SF_dD(
                  a5,
                  2u,
                  5u,
                  0x32u,
                  (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
                  v50,
                  v51);
              }
              (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*v27, 109LL);
            }
          }
          else
          {
            if ( (v18 & 0xFFFFFFFC) != 0 )
            {
              if ( *(_BYTE *)(a2 + 15) )
                *v5 = 2;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v51) = v9;
                LODWORD(v50) = a1[3];
                WPP_RECORDER_SF_dD(
                  a5,
                  2u,
                  5u,
                  0x2Cu,
                  (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
                  v50,
                  v51);
              }
              v29 = (void (__fastcall **)(_QWORD, __int64))(a2 + 24);
              v30 = (_QWORD *)(a2 + 40);
              (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(a2 + 24))(
                *(_QWORD *)(a2 + 40),
                108LL,
                v13,
                v19);
            }
            else
            {
              v29 = (void (__fastcall **)(_QWORD, __int64))(a2 + 24);
              v30 = (_QWORD *)(a2 + 40);
            }
            v56 = v30;
            if ( *((_WORD *)a1 + 2) > 8u )
            {
              *v5 = 2;
              v56 = v30;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v51) = v9;
                LODWORD(v50) = *((unsigned __int16 *)a1 + 2);
                WPP_RECORDER_SF_dD(
                  a5,
                  2u,
                  5u,
                  0x2Du,
                  (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
                  v50,
                  v51);
                v56 = (_QWORD *)(a2 + 40);
              }
              v29 = (void (__fastcall **)(_QWORD, __int64))(a2 + 24);
              (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*v30, 110LL);
            }
            if ( *((_WORD *)a1 + 2) )
            {
              v30 = v56;
            }
            else
            {
              *v5 = 2;
              v58 = v29;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v51) = v9;
                LODWORD(v50) = *((unsigned __int16 *)a1 + 2);
                WPP_RECORDER_SF_dD(
                  a5,
                  2u,
                  5u,
                  0x2Eu,
                  (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
                  v50,
                  v51);
                v30 = v56;
                v58 = (void (__fastcall **)(_QWORD, __int64))(a2 + 24);
              }
              (*v29)(*v30, 110LL);
              v29 = v58;
            }
            if ( !a1[6] )
            {
              if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
                *v5 = 2;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v51) = v9;
                LODWORD(v50) = a1[6];
                WPP_RECORDER_SF_dD(
                  a5,
                  2u,
                  5u,
                  0x2Fu,
                  (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
                  v50,
                  v51);
              }
              (*v29)(*v30, 109LL);
            }
          }
          v11 = 1;
          goto LABEL_76;
        }
        if ( (v18 & 0xFFFFFFFC) != 0 )
        {
          if ( *(_BYTE *)(a2 + 15) )
            *v5 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v51) = v9;
            LODWORD(v50) = a1[3];
            WPP_RECORDER_SF_dD(a5, 2u, 5u, 0x38u, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v50, v51);
          }
          (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 31LL, v13, v19);
          v19 = 0LL;
        }
        v31 = *(_DWORD *)(a2 + 4);
        if ( !v31 )
        {
          *v5 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v50) = v9;
            WPP_RECORDER_SF_d(a5, 2u, 5u, 0x39u, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v50);
          }
          v24 = 30LL;
          goto LABEL_74;
        }
        v32 = v31 - 1;
        if ( !v32 )
        {
          v35 = *((unsigned __int16 *)a1 + 2);
          LOWORD(v35) = v35 - 8;
          if ( (unsigned __int16)v35 <= 0x38u )
          {
            v36 = 0x100000001000101LL;
            if ( _bittest64(&v36, v35) )
              goto LABEL_75;
          }
          if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v5 = 2;
          if ( *((_WORD *)a1 + 2) == v37 )
            *v5 = 2;
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_169;
          v34 = 58;
          goto LABEL_168;
        }
        v33 = v32 - 1;
        if ( v33 )
        {
          if ( v33 != 1 || *((_WORD *)a1 + 2) == 1024 )
            goto LABEL_75;
          if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v5 = 2;
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_169;
          v34 = 60;
          goto LABEL_168;
        }
        if ( *((_WORD *)a1 + 2) != 512 )
        {
          if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v5 = 2;
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_169;
          v34 = 59;
LABEL_168:
          LODWORD(v51) = v9;
          LODWORD(v50) = *((unsigned __int16 *)a1 + 2);
          WPP_RECORDER_SF_dD(a5, 2u, 5u, v34, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v50, v51);
LABEL_169:
          v24 = 32LL;
LABEL_74:
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v24);
          goto LABEL_75;
        }
LABEL_284:
        v11 = 1;
        goto LABEL_76;
      }
      if ( !*(_BYTE *)(a2 + 81) && v20 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v51) = *((unsigned __int16 *)a1 + 2);
          LODWORD(v50) = v9;
          WPP_RECORDER_SF_dD(a5, 3u, 5u, 0x3Du, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v50, v51);
        }
        ((void (__fastcall *)(_QWORD, __int64, __int64, __int64))*v16)(*v17, 233LL, v13, v19);
        v16 = (void (__fastcall **)(_QWORD, __int64))(a2 + 24);
        v17 = (_QWORD *)(a2 + 40);
      }
      v38 = *(_DWORD *)(a2 + 4);
      if ( v38 )
      {
        v39 = v38 - 1;
        if ( v39 )
        {
          v40 = v39 - 1;
          if ( v40 )
          {
            if ( v40 != 1 )
              goto LABEL_75;
            if ( *((_WORD *)a1 + 2) > 0x400u )
            {
              if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
                *v5 = 2;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v51) = v9;
                LODWORD(v50) = *((unsigned __int16 *)a1 + 2);
                WPP_RECORDER_SF_dD(
                  a5,
                  2u,
                  5u,
                  0x45u,
                  (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
                  v50,
                  v51);
              }
              (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 113LL);
            }
            v11 = 1;
            if ( (unsigned __int8)(a1[6] - 1) <= 0xFu )
              goto LABEL_76;
            if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
              *v5 = 2;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v51) = v9;
              LODWORD(v50) = a1[6];
              WPP_RECORDER_SF_dD(a5, 2u, 5u, 0x46u, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v50, v51);
            }
          }
          else
          {
            if ( (v20 & 0x7FFu) > 0x400 )
            {
              if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
                *v5 = 2;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v51) = v9;
                LODWORD(v50) = *((unsigned __int16 *)a1 + 2);
                WPP_RECORDER_SF_dD(
                  a5,
                  2u,
                  5u,
                  0x41u,
                  (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
                  v50,
                  v51);
              }
              (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 113LL);
            }
            if ( v20 >= 0x2000u )
            {
              if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
                *v5 = 2;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v51) = v9;
                LODWORD(v50) = *((unsigned __int16 *)a1 + 2);
                WPP_RECORDER_SF_dD(
                  a5,
                  2u,
                  5u,
                  0x42u,
                  (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
                  v50,
                  v51);
              }
              (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 113LL);
            }
            if ( (v20 & 0x1800) == 0x1800 )
            {
              if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
                *v5 = 2;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v51) = v9;
                LODWORD(v50) = *((unsigned __int16 *)a1 + 2);
                WPP_RECORDER_SF_dD(
                  a5,
                  2u,
                  5u,
                  0x43u,
                  (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
                  v50,
                  v51);
              }
              (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 113LL);
            }
            v11 = 1;
            if ( (unsigned __int8)(a1[6] - 1) <= 0xFu )
              goto LABEL_76;
            if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
              *v5 = 2;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v51) = v9;
              LODWORD(v50) = a1[6];
              WPP_RECORDER_SF_dD(a5, 2u, 5u, 0x44u, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v50, v51);
            }
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 112LL);
          goto LABEL_76;
        }
        if ( *((_WORD *)a1 + 2) > 0x3FFu )
        {
          *v5 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v51) = v9;
            LODWORD(v50) = *((unsigned __int16 *)a1 + 2);
            WPP_RECORDER_SF_dD(a5, 2u, 5u, 0x3Fu, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v50, v51);
          }
          v16 = (void (__fastcall **)(_QWORD, __int64))(a2 + 24);
          v17 = (_QWORD *)(a2 + 40);
          (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 113LL, v13, v19);
        }
        if ( (unsigned __int8)(a1[6] - 1) <= 0xFu )
          goto LABEL_75;
        if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
          *v5 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v51) = v9;
          LODWORD(v50) = a1[6];
          WPP_RECORDER_SF_dD(a5, 2u, 5u, 0x40u, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v50, v51);
        }
        v41 = 112LL;
      }
      else
      {
        *v5 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v50) = v9;
          WPP_RECORDER_SF_d(a5, 2u, 5u, 0x3Eu, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v50);
        }
        v41 = 111LL;
      }
LABEL_241:
      (*v16)(*v17, v41);
      goto LABEL_75;
    }
    if ( (v18 & 0xFFFFFFFC) != 0 )
    {
      if ( *(_BYTE *)(a2 + 15) )
      {
        *v5 = 2;
        v57 = (_QWORD *)(a2 + 40);
        v42 = (void (__fastcall **)(_QWORD, __int64))(a2 + 24);
      }
      else
      {
        v42 = v16;
        v57 = v17;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v51) = v9;
        LODWORD(v50) = a1[3];
        WPP_RECORDER_SF_dD(a5, 2u, 5u, 0x27u, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v50, v51);
        v17 = v57;
        v16 = v42;
      }
      ((void (__fastcall *)(_QWORD, __int64, __int64, __int64))*v16)(*v17, 67LL, v13, v19);
      v19 = 0LL;
    }
    v43 = *(_DWORD *)(a2 + 4);
    if ( v43 )
    {
      v44 = v43 - 1;
      if ( !v44 )
      {
        v47 = *((unsigned __int16 *)a1 + 2);
        LOWORD(v47) = v47 - 8;
        if ( (unsigned __int16)v47 <= 0x38u )
        {
          v48 = 0x100000001000101LL;
          if ( _bittest64(&v48, v47) )
            goto LABEL_75;
        }
        if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
          *v5 = 2;
        if ( *((_WORD *)a1 + 2) == v49 )
          *v5 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v51) = v9;
          LODWORD(v50) = *((unsigned __int16 *)a1 + 2);
          WPP_RECORDER_SF_dD(a5, 2u, 5u, 0x29u, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v50, v51);
        }
        v24 = 68LL;
        goto LABEL_74;
      }
      v45 = v44 - 1;
      if ( v45 )
      {
        if ( v45 != 1 || *((_WORD *)a1 + 2) == 512 )
          goto LABEL_284;
        if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
          *v5 = 2;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_262;
        v46 = 43;
      }
      else
      {
        if ( *((_WORD *)a1 + 2) == 64 )
          goto LABEL_75;
        if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
          *v5 = 2;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_262;
        v46 = 42;
      }
    }
    else
    {
      if ( *((_WORD *)a1 + 2) == 8 )
        goto LABEL_75;
      if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
      {
        *v5 = 2;
        v16 = (void (__fastcall **)(_QWORD, __int64))(a2 + 24);
        v17 = (_QWORD *)(a2 + 40);
      }
      if ( (unsigned __int16)(*((_WORD *)a1 + 2) - 1) > 7u )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_262;
      v46 = 40;
    }
    LODWORD(v51) = v9;
    LODWORD(v50) = *((unsigned __int16 *)a1 + 2);
    WPP_RECORDER_SF_dD(a5, 2u, 5u, v46, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v50, v51);
LABEL_262:
    v41 = 68LL;
    goto LABEL_241;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 81LL);
  v13 = 7LL;
  if ( v10 < 7 )
  {
    v14 = *a3;
  }
  else
  {
    *a3 = 7;
    v14 = 7;
  }
  if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
    *v5 = 2;
  if ( v14 >= 7 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_DDDD(
        a5,
        2u,
        5u,
        0x20u,
        (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
        *a1,
        v9,
        7,
        v14);
      v13 = 7LL;
    }
    goto LABEL_19;
  }
  *v5 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_DDD(a5, 2u, 7LL, 0x1Fu, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, *a1, v9, 7);
    goto LABEL_85;
  }
LABEL_86:
  v11 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 2;
    WPP_RECORDER_SF_(a5, (_DWORD)v12, 5, 72, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids);
  }
  return v11;
}
