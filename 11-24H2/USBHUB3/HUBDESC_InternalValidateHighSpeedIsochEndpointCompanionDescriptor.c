/*
 * XREFs of HUBDESC_InternalValidateHighSpeedIsochEndpointCompanionDescriptor @ 0x140038D5C
 * Callers:
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x14003DA10 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x14001D580 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x14002E3F4 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_DDdd @ 0x14003FE5C (WPP_RECORDER_SF_DDdd.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int16 __fastcall HUBDESC_InternalValidateHighSpeedIsochEndpointCompanionDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v5; // rsi
  unsigned int v9; // eax
  __int64 v10; // r12
  int v11; // ebp
  unsigned int v12; // r14d
  void *v13; // rdx
  __int64 v14; // r8
  bool v15; // zf
  unsigned int v16; // eax
  _DWORD *v17; // r14
  __int64 v18; // rdx
  _DWORD *v19; // r13
  int v21; // [rsp+20h] [rbp-68h]
  int v22; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v23; // [rsp+98h] [rbp+10h]

  v5 = a4;
  v22 = 0;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v5 = &v22;
  }
  LOWORD(v9) = *(_WORD *)a2 - 544;
  v10 = a5;
  v11 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v12 = *(_DWORD *)(a2 + 72) - v11;
  v13 = &WPP_a44667569f5231a010562af7f2d218c1_Traceguids;
  v23 = v12;
  v14 = 5LL;
  if ( (unsigned __int16)v9 > 0xDFu )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      LOWORD(v9) = WPP_RECORDER_SF_d(a5, 3u, 5u, 0x6Bu, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids, v11);
    goto LABEL_39;
  }
  v15 = *(_DWORD *)(a2 + 4) == 2;
  v16 = *a1;
  *a3 = v16;
  if ( !v15 )
  {
    *v5 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(v10, 2u, 5u, 0x6Cu, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids, v11);
    LOWORD(v9) = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 266LL, v14);
    goto LABEL_39;
  }
  if ( (unsigned __int8)v16 >= 8u )
  {
LABEL_17:
    if ( *a1 > 8u )
    {
      *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDD(v10, 2u, v14, 0x6Fu, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids);
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 268LL, v14);
    }
    v17 = (_DWORD *)(a2 + 256);
    if ( (*(_DWORD *)(a2 + 256) & 0x10) == 0 )
    {
      *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(v10, 2u, 5u, 0x70u, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids, v11);
      v18 = 267LL;
LABEL_25:
      LOWORD(v9) = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v18, v14);
      goto LABEL_39;
    }
    if ( *a3 > v23 )
    {
      *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(v10, 2u, 5u, 0x71u, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids, v11);
      v18 = 270LL;
      goto LABEL_25;
    }
    v9 = *((_DWORD *)a1 + 1);
    v19 = (_DWORD *)(a2 + 256);
    if ( v9 >= 0xC01 )
    {
      if ( v9 <= 0x1800 )
      {
LABEL_38:
        *v17 |= 0x80u;
        goto LABEL_39;
      }
      v19 = (_DWORD *)(a2 + 256);
    }
    *v5 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_DDdd(v10, (_DWORD)v13, v14, (_DWORD)a4, v21, v11, *((_DWORD *)a1 + 1));
      v17 = v19;
    }
    LOWORD(v9) = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 272LL, v14);
    goto LABEL_38;
  }
  *v5 = 2;
  LOWORD(v9) = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 269LL, 5LL);
  if ( v12 >= 8 )
  {
    *a3 = 8;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDD(v10, 2u, 5u, 0x6Eu, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids);
    v13 = &WPP_a44667569f5231a010562af7f2d218c1_Traceguids;
    goto LABEL_17;
  }
  *v5 = 1;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return v9;
  LOWORD(v9) = WPP_RECORDER_SF_DDD(
                 v10,
                 2u,
                 v14,
                 0x6Du,
                 (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids,
                 *a1,
                 v11,
                 8);
LABEL_39:
  if ( *v5 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = 2;
    LOWORD(v9) = WPP_RECORDER_SF_(v10, (_DWORD)v13, 5, 115, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids);
  }
  return v9;
}
