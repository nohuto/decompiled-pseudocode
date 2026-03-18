/*
 * XREFs of HUBDESC_InternalValidateInterfaceDescriptor @ 0x140038E9C
 * Callers:
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x14003D35C (HUBDESC_ValidateConfigurationDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x14001D540 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x14002E284 (WPP_RECORDER_SF_DDDD.c)
 *     HUBDESC_InternalValidateLastInterface @ 0x140039558 (HUBDESC_InternalValidateLastInterface.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

char __fastcall HUBDESC_InternalValidateInterfaceDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v5; // rdi
  unsigned int v9; // eax
  int v10; // ebp
  char v11; // r12
  int v12; // r13d
  void *v13; // r8
  unsigned int v14; // ebp
  __int64 v15; // r8
  int v16; // edx
  unsigned int v17; // ecx
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // r12
  bool v20; // bp
  bool v21; // r14
  __int64 v22; // r8
  unsigned __int8 v23; // al
  __int64 v25; // [rsp+28h] [rbp-60h]
  __int64 v26; // [rsp+30h] [rbp-58h]
  __int64 v27; // [rsp+38h] [rbp-50h]
  int v28; // [rsp+50h] [rbp-38h] BYREF

  v28 = 0;
  v5 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v5 = &v28;
  }
  v9 = *a1;
  v10 = *(_DWORD *)(a2 + 72);
  v11 = 1;
  *a3 = v9;
  v12 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v13 = &WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids;
  v14 = v10 - v12;
  if ( (unsigned __int8)v9 >= 9u )
    goto LABEL_19;
  (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(
    *(_QWORD *)(a2 + 40),
    99LL,
    &WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids);
  v16 = 9;
  if ( v14 < 9 )
  {
    v17 = *a3;
  }
  else
  {
    *a3 = 9;
    v17 = 9;
  }
  if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
    *v5 = 2;
  if ( v17 >= 9 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDD(
        a5,
        2u,
        5u,
        0x6Bu,
        (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
        *a1,
        v12,
        9,
        v17);
    v13 = &WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids;
LABEL_19:
    if ( *a1 > 9u )
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v27) = 9;
        LODWORD(v26) = v12;
        LODWORD(v25) = *a1;
        WPP_RECORDER_SF_DDD(
          a5,
          2u,
          (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
          0x6Cu,
          (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
          v25,
          v26,
          v27);
      }
      (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(*(_QWORD *)(a2 + 40), 98LL, v13);
    }
    if ( *a3 <= v14 )
    {
      v18 = a1[2];
      v19 = a1[3];
      v20 = (*(_DWORD *)(a2 + 256) & 1) == 0 || (_BYTE)v18 != *(_BYTE *)(a2 + 80);
      v21 = !(*(_BYTE *)(a2 + 256) & 1);
      HUBDESC_InternalValidateLastInterface(a2, v5, a5);
      if ( *v5 != 1 )
      {
        if ( v20 )
        {
          if ( _bittest64(*(const signed __int64 **)(a2 + 216), v18) )
          {
            if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
              *v5 = 2;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v26) = v18;
              LODWORD(v25) = v12;
              WPP_RECORDER_SF_dD(a5, 2u, 5u, 0x6Eu, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v25, v26);
            }
            (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 103LL);
          }
          if ( !v21 && *(_BYTE *)(a2 + 80) > (unsigned __int8)v18 )
          {
            if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
              *v5 = 2;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v27) = *(unsigned __int8 *)(a2 + 80);
              LODWORD(v26) = v18;
              LODWORD(v25) = v12;
              WPP_RECORDER_SF_DDD(
                a5,
                2u,
                v22,
                0x6Fu,
                (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
                v25,
                v26,
                v27);
            }
            (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 106LL);
          }
          if ( (_BYTE)v19 )
          {
            if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
              *v5 = 2;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v27) = v19;
              LODWORD(v26) = v18;
              LODWORD(v25) = v12;
              WPP_RECORDER_SF_DDD(
                a5,
                2u,
                v22,
                0x70u,
                (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
                v25,
                v26,
                v27);
            }
            (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 104LL);
          }
          RtlClearAllBits((PRTL_BITMAP)(a2 + 88));
          RtlSetBit((PRTL_BITMAP)(a2 + 208), v18);
          *(_BYTE *)(a2 + 80) = v18;
          ++*(_WORD *)(a2 + 202);
        }
        else
        {
          if ( _bittest64(*(const signed __int64 **)(a2 + 96), v19) )
          {
            if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
              *v5 = 2;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v27) = v18;
              LODWORD(v26) = v12;
              LODWORD(v25) = v19;
              WPP_RECORDER_SF_DDD(
                a5,
                2u,
                v22,
                0x71u,
                (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
                v25,
                v26,
                v27);
            }
            (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 101LL);
          }
          if ( *(_BYTE *)(a2 + 81) >= (unsigned __int8)v19 )
          {
            if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
              *v5 = 2;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v27) = *(unsigned __int8 *)(a2 + 81);
              LODWORD(v26) = v19;
              LODWORD(v25) = v12;
              WPP_RECORDER_SF_DDD(
                a5,
                2u,
                v22,
                0x72u,
                (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
                v25,
                v26,
                v27);
            }
            (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 105LL);
          }
        }
        RtlClearAllBits((PRTL_BITMAP)(a2 + 136));
        *(_BYTE *)(a2 + 185) = 0;
        v23 = a1[4];
        *(_DWORD *)(a2 + 256) &= ~2u;
        *(_BYTE *)(a2 + 184) = v23;
        RtlSetBit((PRTL_BITMAP)(a2 + 88), v19);
        *(_BYTE *)(a2 + 81) = v19;
      }
      v11 = 1;
    }
    else
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v25) = v12;
        WPP_RECORDER_SF_d(a5, 2u, 5u, 0x6Du, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v25);
      }
      (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(*(_QWORD *)(a2 + 40), 100LL, v13);
    }
LABEL_85:
    if ( !*v5 )
      return v11;
    goto LABEL_86;
  }
  *v5 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_DDD(a5, 2u, v15, 0x6Au, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, *a1, v12, 9);
    goto LABEL_85;
  }
LABEL_86:
  v11 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = 2;
    WPP_RECORDER_SF_(a5, v16, 5, 115, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids);
  }
  return v11;
}
