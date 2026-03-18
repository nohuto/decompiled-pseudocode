/*
 * XREFs of HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor @ 0x14003AF50
 * Callers:
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x14003DA10 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x14001D580 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x14002E3F4 (WPP_RECORDER_SF_DDDD.c)
 *     HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x14003CC40 (HUBDESC_ShouldEnforceWin8ValidationMutable.c)
 *     WPP_RECORDER_SF_Ddd @ 0x14003FF78 (WPP_RECORDER_SF_Ddd.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

char __fastcall HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5,
        _BYTE *a6)
{
  int *v6; // r14
  __int64 v10; // r12
  int v11; // r15d
  bool v12; // zf
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // edx
  char v17; // r13
  unsigned int v18; // ecx
  __int64 v19; // r8
  int v20; // r10d
  __int64 v21; // r11
  int v22; // edx
  __int64 v24; // r13
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned int v31; // edx
  __int64 v32; // r8
  _BYTE *v33; // r13
  __int64 v34; // [rsp+28h] [rbp-60h]
  __int64 v35; // [rsp+30h] [rbp-58h]
  __int64 v36; // [rsp+38h] [rbp-50h]
  unsigned int v37; // [rsp+90h] [rbp+8h]
  int v38; // [rsp+98h] [rbp+10h] BYREF

  v6 = a4;
  v38 = 0;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v6 = &v38;
  }
  if ( a6 )
    *a6 = 0;
  v10 = a5;
  v11 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v12 = *(_DWORD *)(a2 + 4) == 3;
  v37 = *(_DWORD *)(a2 + 72) - v11;
  v13 = *a1;
  *a3 = v13;
  if ( !v12 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(v10, 2u, 5u, 0x4Au, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids, v11);
    v14 = 40LL;
LABEL_11:
    v15 = *(_QWORD *)(a2 + 40);
LABEL_12:
    (*(void (__fastcall **)(__int64, __int64))(a2 + 24))(v15, v14);
LABEL_13:
    v17 = 1;
    goto LABEL_14;
  }
  if ( (unsigned __int8)v13 >= 6u )
  {
LABEL_24:
    if ( *a1 > 6u )
    {
      if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
        *v6 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v36) = v20;
        LODWORD(v35) = v11;
        LODWORD(v34) = *a1;
        WPP_RECORDER_SF_DDD(v10, 2u, v19, 0x4Du, v21, v34, v35, v36);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 42LL);
    }
    v22 = *(_DWORD *)(a2 + 256);
    if ( (v22 & 4) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v34) = v11;
        WPP_RECORDER_SF_d(v10, 2u, 5u, 0x4Eu, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids, v34);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 41LL);
      *v6 = 2;
      goto LABEL_34;
    }
    v16 = v22 & 0xFFFFFFDB | 0x20;
    *(_DWORD *)(a2 + 256) = v16;
    if ( *a3 > v37 )
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
        *v6 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v34) = v11;
        WPP_RECORDER_SF_d(v10, 2u, 5u, 0x4Fu, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids, v34);
      }
      v14 = 44LL;
      goto LABEL_11;
    }
    v24 = a2 + 192;
    v25 = 0LL;
    v26 = *(_QWORD *)(a2 + 192);
    switch ( *(_BYTE *)(v26 + 3) & 3 )
    {
      case 0:
        if ( a1[2] )
        {
          if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v35) = a1[2];
            LODWORD(v34) = v11;
            WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x50u, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids, v34, v35);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 38LL);
          v25 = 0LL;
        }
        if ( a1[3] )
        {
          if ( *(_BYTE *)(a2 + 15) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v35) = a1[3];
            LODWORD(v34) = v11;
            WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x51u, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids, v34, v35);
          }
          (*(void (__fastcall **)(_QWORD, __int64, unsigned int *, __int64))(a2 + 24))(
            *(_QWORD *)(a2 + 40),
            37LL,
            a3,
            v25);
        }
        if ( !*((_WORD *)a1 + 2) )
          goto LABEL_13;
        if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
          *v6 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v35) = *((unsigned __int16 *)a1 + 2);
          LODWORD(v34) = v11;
          WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x52u, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids, v34, v35);
        }
        v14 = 39LL;
        goto LABEL_11;
      case 1:
        v31 = v16 & 0xFFFFFFBF;
        *(_DWORD *)(a2 + 256) = v31;
        v16 = v31 & 0xFFFFFFF7;
        *(_DWORD *)(a2 + 256) = v16 | (a1[3] >> 4) & 0xFFFFFF8;
        if ( a1[2] > 0xFu )
        {
          if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
          {
            *v6 = 2;
            v24 = a2 + 192;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v35) = a1[2];
            LODWORD(v34) = v11;
            WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x5Bu, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids, v34, v35);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 50LL);
          v25 = 0LL;
        }
        if ( a1[2] && *(_WORD *)(*(_QWORD *)v24 + 4LL) != 1024 )
        {
          if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v36) = *(unsigned __int16 *)(*(_QWORD *)v24 + 4LL);
            LODWORD(v35) = a1[2];
            LODWORD(v34) = v11;
            WPP_RECORDER_SF_DDD(
              v10,
              2u,
              v32,
              0x5Cu,
              (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids,
              v34,
              v35,
              v36);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 51LL);
        }
        if ( (*(_DWORD *)(a2 + 256) & 8) == 0 && (a1[3] & 3) == 3 )
        {
          if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v35) = a1[3] & 3;
            LODWORD(v34) = v11;
            WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x5Du, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids, v34, v35);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 52LL);
        }
        if ( (a1[3] & 0x7C) != 0 )
        {
          if ( *(_BYTE *)(a2 + 15) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v35) = a1[3];
            LODWORD(v34) = v11;
            WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x5Eu, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids, v34, v35);
          }
          v33 = (_BYTE *)(a2 + 40);
          (*(void (__fastcall **)(_QWORD, __int64, unsigned int *, __int64))(a2 + 24))(
            *(_QWORD *)(a2 + 40),
            49LL,
            a3,
            v25);
        }
        else
        {
          v33 = (_BYTE *)(a2 + 40);
        }
        if ( (*(_DWORD *)(a2 + 256) & 8) != 0 )
        {
          if ( *((_WORD *)a1 + 2) == 1 )
            goto LABEL_13;
          if ( *(_BYTE *)(a2 + 15) )
          {
            *v6 = 2;
            a6 = (_BYTE *)(a2 + 40);
          }
          else
          {
            a6 = v33;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v35) = *((unsigned __int16 *)a1 + 2);
            LODWORD(v34) = v11;
            WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x60u, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids, v34, v35);
            v33 = a6;
          }
          v15 = *(_QWORD *)v33;
          v14 = 204LL;
          goto LABEL_12;
        }
        v17 = 1;
        v16 = (a1[2] + 1) * *(unsigned __int16 *)(*(_QWORD *)(a2 + 192) + 4LL) * ((a1[3] & 3) + 1);
        if ( *((unsigned __int16 *)a1 + 2) > v16 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Ddd(v10, v16, (_DWORD)a3, 95);
          v28 = 53LL;
          goto LABEL_71;
        }
        break;
      case 2:
        if ( a1[2] > 0xFu )
        {
          if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v35) = a1[2];
            LODWORD(v34) = v11;
            WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x53u, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids, v34, v35);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 34LL);
        }
        v17 = 1;
        if ( (a1[3] & 0x1F) != 0 && a6 )
          *a6 = 1;
        if ( (a1[3] & 0x1Fu) > 0x10 )
        {
          if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v35) = a1[3] & 0x1F;
            LODWORD(v34) = v11;
            WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x54u, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids, v34, v35);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 35LL);
        }
        if ( a1[3] >= 0x20u )
        {
          if ( *(_BYTE *)(a2 + 15) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v35) = a1[3];
            LODWORD(v34) = v11;
            WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x55u, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids, v34, v35);
          }
          (*(void (__fastcall **)(_QWORD, __int64, unsigned int *, __int64))(a2 + 24))(
            *(_QWORD *)(a2 + 40),
            33LL,
            a3,
            v25);
        }
        if ( *((_WORD *)a1 + 2) )
        {
          if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v35) = *((unsigned __int16 *)a1 + 2);
            LODWORD(v34) = v11;
            WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x56u, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids, v34, v35);
          }
          (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 36LL, v29, v30);
        }
        break;
      case 3:
        if ( a1[2] > 0xFu )
        {
          if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
          {
            *v6 = 2;
            v24 = a2 + 192;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v35) = a1[2];
            LODWORD(v34) = v11;
            WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x57u, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids, v34, v35);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 45LL);
          v25 = 0LL;
        }
        if ( a1[2] && *(_WORD *)(*(_QWORD *)v24 + 4LL) != 1024 )
        {
          if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v36) = *(unsigned __int16 *)(*(_QWORD *)v24 + 4LL);
            LODWORD(v35) = a1[2];
            LODWORD(v34) = v11;
            WPP_RECORDER_SF_DDD(
              v10,
              2u,
              v27,
              0x58u,
              (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids,
              v34,
              v35,
              v36);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 46LL);
          v25 = 0LL;
        }
        if ( a1[3] )
        {
          if ( *(_BYTE *)(a2 + 15) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v35) = a1[3];
            LODWORD(v34) = v11;
            WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x59u, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids, v34, v35);
          }
          (*(void (__fastcall **)(_QWORD, __int64, unsigned int *, __int64))(a2 + 24))(
            *(_QWORD *)(a2 + 40),
            47LL,
            a3,
            v25);
        }
        v17 = 1;
        v16 = (a1[2] + 1) * *(unsigned __int16 *)(*(_QWORD *)(a2 + 192) + 4LL) * ((a1[3] & 3) + 1);
        if ( *((unsigned __int16 *)a1 + 2) > v16 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Ddd(v10, v16, (_DWORD)a3, 90);
          v28 = 48LL;
LABEL_71:
          (*(void (__fastcall **)(_QWORD, __int64, unsigned int *, __int64))(a2 + 32))(
            *(_QWORD *)(a2 + 40),
            v28,
            a3,
            v25);
        }
        break;
      default:
        goto LABEL_13;
    }
LABEL_14:
    if ( !*v6 )
      return v17;
    goto LABEL_34;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 43LL);
  if ( v37 >= 6 )
    *a3 = 6;
  v18 = *a3;
  *v6 = 2;
  if ( v18 >= 6 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDD(
        v10,
        2u,
        5u,
        0x4Cu,
        (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids,
        *a1,
        v11,
        6,
        v18);
    goto LABEL_24;
  }
  v17 = 1;
  *v6 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_DDD(
      v10,
      2u,
      (__int64)a3,
      0x4Bu,
      (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids,
      *a1,
      v11,
      6);
    goto LABEL_14;
  }
LABEL_34:
  v17 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = 2;
    WPP_RECORDER_SF_(v10, v16, 5, 97, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids);
  }
  return v17;
}
