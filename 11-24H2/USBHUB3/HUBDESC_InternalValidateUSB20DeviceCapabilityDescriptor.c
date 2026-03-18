/*
 * XREFs of HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor @ 0x14003C644
 * Callers:
 *     HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x1400371A8 (HUBDESC_InternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x14001D580 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x14002E3F4 (WPP_RECORDER_SF_DDDD.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

char __fastcall HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        int *a5,
        __int64 a6)
{
  int *v6; // rdi
  int v10; // r15d
  void *v11; // r8
  __int64 v12; // r12
  int v13; // r14d
  int v14; // edx
  unsigned int v15; // r15d
  __int64 v16; // r8
  __int64 v17; // rdx
  char v18; // bl
  int v19; // eax
  int *v20; // r14
  int v21; // eax
  int v22; // ecx
  int v23; // ecx
  unsigned int v24; // eax
  unsigned int v25; // eax
  int v26; // ecx
  __int64 v28; // [rsp+28h] [rbp-50h]
  __int64 v29; // [rsp+30h] [rbp-48h]
  __int64 v30; // [rsp+38h] [rbp-40h]
  int v31; // [rsp+80h] [rbp+8h] BYREF

  v31 = 0;
  v6 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v6 = &v31;
  }
  v10 = *(_DWORD *)(a2 + 72);
  v11 = &WPP_a44667569f5231a010562af7f2d218c1_Traceguids;
  v12 = a6;
  v13 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v14 = 7;
  v15 = v10 - v13;
  if ( *a1 >= 7u )
  {
LABEL_10:
    if ( *a1 > 7u )
    {
      if ( *(_BYTE *)(a2 + 12) || (unsigned __int16)(*(_WORD *)a2 - 513) <= 0xEu )
        *v6 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v30) = 7;
        LODWORD(v29) = *a1;
        LODWORD(v28) = v13;
        WPP_RECORDER_SF_DDD(
          v12,
          2u,
          (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids,
          0xDCu,
          (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids,
          v28,
          v29,
          v30);
      }
      (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(*(_QWORD *)(a2 + 40), 145LL, v11);
    }
    if ( *a3 <= v15 )
    {
      if ( (*(_DWORD *)(a1 + 3) & 0xFFFF00E1) != 0 )
      {
        if ( *(_BYTE *)(a2 + 15) )
          *v6 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v28) = *(_DWORD *)(a1 + 3);
          WPP_RECORDER_SF_d(v12, 2u, 5u, 0xDEu, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids, v28);
        }
        (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(*(_QWORD *)(a2 + 40), 147LL, v11);
      }
      v19 = *(_DWORD *)(a1 + 3);
      if ( (v19 & 2) != 0 )
      {
        v20 = a5;
        v21 = *a5 | 1;
        *a5 = v21;
        v22 = v21 ^ ((unsigned __int8)v21 ^ (unsigned __int8)(*(_DWORD *)(a1 + 3) >> 1)) & 2;
        *v20 = v22;
        if ( (a1[3] & 8) != 0 )
        {
          v23 = v22 | 4;
          *v20 = v23;
          *v20 = v23 ^ ((unsigned __int8)v23 ^ (unsigned __int8)(*(_DWORD *)(a1 + 3) >> 4)) & 0xF0;
        }
        v24 = *(_DWORD *)(a1 + 3);
        if ( (v24 & 0x10) != 0 )
        {
          if ( (v24 & 8) != 0 )
          {
            v25 = (v24 >> 8) & 0xF;
            if ( (unsigned __int16)*(_DWORD *)(a1 + 3) >> 12 <= v25 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v29) = v25;
                LODWORD(v28) = (unsigned __int16)*(_DWORD *)(a1 + 3) >> 12;
                WPP_RECORDER_SF_dD(
                  v12,
                  2u,
                  5u,
                  0xDFu,
                  (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids,
                  v28,
                  v29);
              }
              (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(*(_QWORD *)(a2 + 40), 151LL, v11);
            }
          }
          v26 = *v20 | 8;
          *v20 = v26;
          *v20 = v26 ^ ((unsigned __int16)v26 ^ (unsigned __int16)(*(_DWORD *)(a1 + 3) >> 4)) & 0xF00;
        }
        goto LABEL_50;
      }
      if ( (v19 & 4) == 0 )
      {
LABEL_50:
        v18 = 1;
LABEL_51:
        if ( !*v6 )
          return v18;
        goto LABEL_52;
      }
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
        *v6 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v28) = *(_DWORD *)(a1 + 3);
        WPP_RECORDER_SF_d(v12, 2u, 5u, 0xE0u, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids, v28);
      }
      v17 = 150LL;
    }
    else
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
        *v6 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v28) = v13;
        WPP_RECORDER_SF_d(v12, 2u, 5u, 0xDDu, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids, v28);
      }
      v17 = 148LL;
    }
    (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(*(_QWORD *)(a2 + 40), v17, v11);
    goto LABEL_50;
  }
  (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(
    *(_QWORD *)(a2 + 40),
    146LL,
    &WPP_a44667569f5231a010562af7f2d218c1_Traceguids);
  v14 = 7;
  if ( v15 >= 7 )
  {
    *v6 = 2;
    *a3 = 7;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_DDDD(
        v12,
        2u,
        5u,
        0xDAu,
        (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids,
        v13,
        *a1,
        7,
        7);
      v14 = 7;
    }
    v11 = &WPP_a44667569f5231a010562af7f2d218c1_Traceguids;
    goto LABEL_10;
  }
  v18 = 1;
  *v6 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_DDD(v12, 2u, v16, 0xDBu, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids, v13, *a1, 7);
    goto LABEL_51;
  }
LABEL_52:
  v18 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 2;
    WPP_RECORDER_SF_(v12, v14, 5, 225, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids);
  }
  return v18;
}
