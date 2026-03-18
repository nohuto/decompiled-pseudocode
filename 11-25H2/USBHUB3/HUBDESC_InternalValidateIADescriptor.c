/*
 * XREFs of HUBDESC_InternalValidateIADescriptor @ 0x140038A60
 * Callers:
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x14003D35C (HUBDESC_ValidateConfigurationDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x14001D540 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x14002E284 (WPP_RECORDER_SF_DDDD.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

char __fastcall HUBDESC_InternalValidateIADescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v5; // rdi
  __int64 v9; // rax
  int v10; // r15d
  int v11; // r12d
  int v12; // edx
  __int64 v13; // r13
  unsigned int v14; // r15d
  void *v15; // r8
  __int64 v16; // r8
  __int64 v17; // rdx
  char v18; // bl
  __int64 v19; // r14
  __int64 v21; // [rsp+28h] [rbp-60h]
  __int64 v22; // [rsp+30h] [rbp-58h]
  __int64 v23; // [rsp+38h] [rbp-50h]
  __int64 v24; // [rsp+40h] [rbp-48h]
  int v25; // [rsp+90h] [rbp+8h] BYREF
  __int64 v26; // [rsp+98h] [rbp+10h]

  v25 = 0;
  v5 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v5 = &v25;
  }
  v9 = *(_QWORD *)(a2 + 56);
  v10 = *(_DWORD *)(a2 + 72);
  v11 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v12 = 512;
  v13 = a5;
  v14 = v10 - v11;
  v26 = v9;
  LODWORD(v9) = *a1;
  *a3 = v9;
  v15 = &WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids;
  if ( (unsigned __int8)v9 >= 8u )
  {
LABEL_14:
    if ( *a1 > 8u )
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v23) = 8;
        LODWORD(v22) = *a1;
        LODWORD(v21) = v11;
        WPP_RECORDER_SF_DDD(
          v13,
          2u,
          (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
          0x76u,
          (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
          v21,
          v22,
          v23);
      }
      (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(*(_QWORD *)(a2 + 40), 92LL, v15);
    }
    if ( *a3 <= v14 )
    {
      if ( 256 - a1[2] < a1[3] )
      {
        if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
          *v5 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v23) = a1[3];
          LODWORD(v22) = a1[2];
          LODWORD(v21) = v11;
          WPP_RECORDER_SF_DDD(
            v13,
            2u,
            (__int64)v15,
            0x78u,
            (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
            v21,
            v22,
            v23);
        }
        (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(*(_QWORD *)(a2 + 40), 97LL, v15);
      }
      v19 = v26;
      if ( a1[3] > *(_BYTE *)(v26 + 4) )
      {
        if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
          *v5 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v23) = *(unsigned __int8 *)(v19 + 4);
          LODWORD(v22) = a1[3];
          LODWORD(v21) = v11;
          WPP_RECORDER_SF_DDD(
            v13,
            2u,
            (__int64)v15,
            0x79u,
            (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
            v21,
            v22,
            v23);
        }
        (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(*(_QWORD *)(a2 + 40), 95LL, v15);
      }
      if ( *(unsigned __int16 *)(a2 + 202) + (unsigned int)a1[3] > *(unsigned __int8 *)(v19 + 4) )
      {
        if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
          *v5 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v24) = *(unsigned __int8 *)(v19 + 4);
          LODWORD(v23) = *(unsigned __int16 *)(a2 + 202);
          LODWORD(v22) = a1[3];
          LODWORD(v21) = v11;
          WPP_RECORDER_SF_DDDD(
            v13,
            2u,
            5u,
            0x7Au,
            (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
            v21,
            v22,
            v23,
            v24);
        }
        (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(*(_QWORD *)(a2 + 40), 95LL, v15);
      }
      if ( a1[3] )
        goto LABEL_64;
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v21) = v11;
        WPP_RECORDER_SF_d(v13, 2u, 5u, 0x7Bu, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v21);
      }
      v17 = 96LL;
    }
    else
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v21) = v11;
        WPP_RECORDER_SF_d(v13, 2u, 5u, 0x77u, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v21);
      }
      v17 = 94LL;
    }
    (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(*(_QWORD *)(a2 + 40), v17, v15);
LABEL_64:
    v18 = 1;
LABEL_65:
    if ( !*v5 )
      return v18;
    goto LABEL_66;
  }
  (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(
    *(_QWORD *)(a2 + 40),
    93LL,
    &WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids);
  v12 = 512;
  if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
    *v5 = 2;
  if ( v14 >= 8 )
  {
    *a3 = 8;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_DDDD(
        v13,
        2u,
        5u,
        0x74u,
        (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
        v11,
        *a1,
        8,
        8);
      v12 = 512;
    }
    v15 = &WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids;
    goto LABEL_14;
  }
  v18 = 1;
  *v5 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_DDD(v13, 2u, v16, 0x75u, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v11, *a1, 8);
    goto LABEL_65;
  }
LABEL_66:
  v18 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 2;
    WPP_RECORDER_SF_(v13, v12, 5, 124, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids);
  }
  return v18;
}
