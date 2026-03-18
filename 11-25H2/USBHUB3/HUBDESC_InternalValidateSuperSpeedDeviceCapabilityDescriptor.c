/*
 * XREFs of HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor @ 0x14003A2F0
 * Callers:
 *     HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x140036ED4 (HUBDESC_InternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x14001D540 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x14002E284 (WPP_RECORDER_SF_DDDD.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

char __fastcall HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        _WORD *a5,
        unsigned __int16 *a6,
        _BYTE *a7,
        __int64 a8)
{
  int *v9; // rsi
  _BYTE *v11; // r15
  int v12; // r13d
  void *v13; // r8
  __int64 v14; // r12
  int v15; // r14d
  int v16; // edx
  unsigned int v17; // r13d
  __int64 v18; // r8
  unsigned int *v19; // rax
  __int64 v20; // r9
  __int64 v21; // rdx
  char v22; // bl
  __int64 v23; // rdx
  int v24; // eax
  __int16 v25; // ax
  unsigned __int16 v26; // ax
  __int64 v28; // [rsp+28h] [rbp-60h]
  __int64 v29; // [rsp+30h] [rbp-58h]
  __int64 v30; // [rsp+38h] [rbp-50h]
  int v31; // [rsp+90h] [rbp+8h] BYREF
  unsigned int *v32; // [rsp+A0h] [rbp+18h]

  v32 = a3;
  v9 = a4;
  v31 = 0;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v9 = &v31;
  }
  if ( a5 )
    *a5 = 0;
  if ( a6 )
    *a6 = 0;
  v11 = a7;
  if ( *a7 )
    *a7 = 0;
  v12 = *(_DWORD *)(a2 + 72);
  v13 = &WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids;
  v14 = a8;
  v15 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v16 = 10;
  v17 = v12 - v15;
  if ( *a1 >= 0xAu )
  {
LABEL_16:
    v20 = 768LL;
    if ( *a1 > 0xAu )
    {
      if ( *(_BYTE *)(a2 + 12) || (unsigned __int16)(*(_WORD *)a2 - 768) <= 0x10u )
        *v9 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v30) = 10;
        LODWORD(v29) = *a1;
        LODWORD(v28) = v15;
        WPP_RECORDER_SF_DDD(
          v14,
          2u,
          (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
          0xC4u,
          (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
          v28,
          v29,
          v30);
      }
      (*(void (__fastcall **)(_QWORD, __int64, void *, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 135LL, v13, v20);
    }
    if ( *v32 > v17 )
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
        *v9 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v28) = v15;
        WPP_RECORDER_SF_d(v14, 2u, 5u, 0xC5u, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v28);
      }
      v21 = 140LL;
      goto LABEL_30;
    }
    if ( (a1[3] & 0xFD) != 0 )
    {
      if ( *(_BYTE *)(a2 + 15) )
        *v9 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v28) = a1[3];
        WPP_RECORDER_SF_d(v14, 2u, 5u, 0xC6u, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v28);
      }
      (*(void (__fastcall **)(_QWORD, __int64, void *, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 137LL, v13, v20);
    }
    if ( (a1[3] & 2) != 0 && *v11 )
      *v11 = 1;
    if ( (*((_WORD *)a1 + 2) & 0xFFF0) != 0 )
    {
      if ( *(_BYTE *)(a2 + 15) )
        *v9 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v28) = *((unsigned __int16 *)a1 + 2);
        WPP_RECORDER_SF_d(v14, 2u, 5u, 0xC7u, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v28);
      }
      (*(void (__fastcall **)(_QWORD, __int64, void *, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 143LL, v13, v20);
    }
    if ( !*((_WORD *)a1 + 2) )
    {
      *v9 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = 2;
        WPP_RECORDER_SF_(v14, v16, 5, 200, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids);
      }
      (*(void (__fastcall **)(_QWORD, __int64, void *, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 144LL, v13, v20);
    }
    if ( a1[6] <= 3u )
    {
      v24 = *((unsigned __int16 *)a1 + 2);
      if ( _bittest(&v24, a1[6]) )
      {
LABEL_63:
        v25 = a1[7];
        if ( (unsigned __int8)v25 < 0xBu )
        {
          if ( a5 )
          {
            *a5 = v25;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v28) = a1[7];
              WPP_RECORDER_SF_d(v14, 4u, 5u, 0xCCu, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v28);
            }
          }
        }
        else
        {
          if ( *(_BYTE *)(a2 + 12) || (unsigned __int16)(*(_WORD *)a2 - 768) <= 0x10u )
            *v9 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v28) = a1[7];
            WPP_RECORDER_SF_d(v14, 2u, 5u, 0xCBu, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v28);
          }
          (*(void (__fastcall **)(_QWORD, __int64, void *, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 138LL, v13, v20);
        }
        v26 = *((_WORD *)a1 + 4);
        if ( v26 < 0x800u )
        {
          if ( a6 )
          {
            *a6 = v26;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v28) = *((unsigned __int16 *)a1 + 4);
              WPP_RECORDER_SF_d(v14, 4u, 5u, 0xCEu, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v28);
            }
          }
          goto LABEL_83;
        }
        if ( *(_BYTE *)(a2 + 12) || (unsigned __int16)(*(_WORD *)a2 - 768) <= 0x10u )
          *v9 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v28) = *((unsigned __int16 *)a1 + 4);
          WPP_RECORDER_SF_d(v14, 2u, 5u, 0xCDu, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v28);
        }
        v21 = 139LL;
LABEL_30:
        (*(void (__fastcall **)(_QWORD, __int64, void *, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v21, v13, v20);
LABEL_83:
        v22 = 1;
LABEL_84:
        if ( !*v9 )
          return v22;
        goto LABEL_85;
      }
      *v9 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v29) = *((unsigned __int16 *)a1 + 2);
        LODWORD(v28) = a1[6];
        WPP_RECORDER_SF_dD(v14, 2u, 5u, 0xCAu, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v28, v29);
      }
      v23 = 141LL;
    }
    else
    {
      if ( *(_BYTE *)(a2 + 15) )
        *v9 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v28) = a1[6];
        WPP_RECORDER_SF_d(v14, 2u, 5u, 0xC9u, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v28);
      }
      v23 = 142LL;
    }
    (*(void (__fastcall **)(_QWORD, __int64, void *, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v23, v13, v20);
    goto LABEL_63;
  }
  (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(
    *(_QWORD *)(a2 + 40),
    136LL,
    &WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids);
  v16 = 10;
  if ( v17 >= 0xA )
  {
    v19 = v32;
    *v9 = 2;
    *v19 = 10;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_DDDD(
        v14,
        2u,
        5u,
        0xC2u,
        (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
        v15,
        *a1,
        10,
        10);
      v16 = 10;
    }
    v13 = &WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids;
    goto LABEL_16;
  }
  v22 = 1;
  *v9 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_DDD(v14, 2u, v18, 0xC3u, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v15, *a1, 10);
    goto LABEL_84;
  }
LABEL_85:
  v22 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = 2;
    WPP_RECORDER_SF_(v14, v16, 5, 207, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids);
  }
  return v22;
}
