/*
 * XREFs of HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor @ 0x14003C298
 * Callers:
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x14003DA10 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x14001D580 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x14002E3F4 (WPP_RECORDER_SF_DDDD.c)
 *     HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x14003CC40 (HUBDESC_ShouldEnforceWin8ValidationMutable.c)
 *     WPP_RECORDER_SF_Dddd @ 0x140040068 (WPP_RECORDER_SF_Dddd.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int v7; // r9d
  __int64 v8; // rbx
  __int64 v10; // r12
  int v11; // r15d
  bool v12; // zf
  unsigned int v13; // eax
  __int64 result; // rax
  unsigned int v15; // ecx
  __int64 v16; // r8
  __int64 v17; // r10
  int v18; // eax
  __int64 v19; // rdx
  int v20; // [rsp+20h] [rbp-68h]
  int v21; // [rsp+28h] [rbp-60h]
  int v22; // [rsp+28h] [rbp-60h]
  int v23; // [rsp+28h] [rbp-60h]
  int v24; // [rsp+28h] [rbp-60h]
  int v25; // [rsp+30h] [rbp-58h]
  int v26; // [rsp+38h] [rbp-50h]
  unsigned int v27; // [rsp+90h] [rbp+8h]
  int v28; // [rsp+98h] [rbp+10h] BYREF

  v7 = 0;
  v8 = a2;
  v28 = 0;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    a4 = &v28;
  }
  v10 = a5;
  v11 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v12 = *(_DWORD *)(a2 + 4) == 3;
  v27 = *(_DWORD *)(a2 + 72) - v11;
  v13 = *a1;
  *a3 = v13;
  if ( !v12 || !*(_DWORD *)(a2 + 16) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v24 = v11;
      WPP_RECORDER_SF_d(v10, 2u, 5u, 0x62u, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids, v24);
    }
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(v8 + 24))(*(_QWORD *)(v8 + 40), 205LL);
    *a4 = 2;
    goto LABEL_48;
  }
  if ( (unsigned __int8)v13 < 8u )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 208LL);
    if ( v27 >= 8 )
      *a3 = 8;
    v15 = *a3;
    *a4 = 2;
    if ( v15 < 8 )
    {
      *a4 = 1;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return result;
      v26 = 8;
      v25 = v11;
      v21 = *a1;
      result = WPP_RECORDER_SF_DDD(
                 v10,
                 2u,
                 (__int64)a3,
                 0x63u,
                 (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids,
                 v21,
                 v25,
                 v26);
LABEL_48:
      if ( !*a4 )
        return result;
      goto LABEL_49;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDD(v10, 2u, 5u, 0x64u, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids);
  }
  if ( *a1 > 8u )
  {
    if ( (unsigned __int8)HUBDESC_ShouldEnforceWin8ValidationMutable(v8) )
      *a4 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDD(v10, 2u, v16, 0x65u, v17);
    (*(void (__fastcall **)(_QWORD, __int64))(v8 + 24))(*(_QWORD *)(v8 + 40), 207LL);
  }
  v18 = *(_DWORD *)(v8 + 256);
  if ( (v18 & 8) != 0 )
  {
    *(_DWORD *)(v8 + 256) = v18 & 0xFFFFFFB7 | 0x40;
    if ( *a3 <= v27 )
    {
      if ( *((_WORD *)a1 + 1) )
      {
        if ( *(_BYTE *)(v8 + 15) )
          *a4 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x68u, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids);
        (*(void (__fastcall **)(_QWORD, __int64))(v8 + 24))(*(_QWORD *)(v8 + 40), 210LL);
      }
      result = (unsigned int)(*((_DWORD *)a1 + 1) - 49153);
      if ( (unsigned int)result <= 0xFF3FFE )
        goto LABEL_48;
      if ( *(_BYTE *)(v8 + 15) )
        *a4 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Dddd(v10, a2, (_DWORD)a3, v7, v20, v11, *((_DWORD *)a1 + 1));
      v19 = 211LL;
    }
    else
    {
      if ( *(_WORD *)v8 > 0x200u || *(_BYTE *)(v8 + 12) )
        *a4 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v23 = v11;
        WPP_RECORDER_SF_d(v10, 2u, 5u, 0x67u, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids, v23);
      }
      v19 = 209LL;
    }
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(v8 + 24))(*(_QWORD *)(v8 + 40), v19);
    goto LABEL_48;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v22 = v11;
    WPP_RECORDER_SF_d(v10, 2u, 5u, 0x66u, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids, v22);
  }
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(v8 + 24))(*(_QWORD *)(v8 + 40), 206LL);
  *a4 = 2;
LABEL_49:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 2;
    return WPP_RECORDER_SF_(v10, a2, 5, 106, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids);
  }
  return result;
}
