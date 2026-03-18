/*
 * XREFs of HUBUCX_CreateEndpointsInUCX @ 0x140026744
 * Callers:
 *     HUBDSM_CreatingNewEndpoints @ 0x1400217A0 (HUBDSM_CreatingNewEndpoints.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     HUBUCX_GetEndpointPriority @ 0x1400275EC (HUBUCX_GetEndpointPriority.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBUCX_CreateEndpointsInUCX(__int64 *a1)
{
  int v1; // edi
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // r14
  _QWORD *v7; // rax
  __int64 v8; // r15
  __int64 *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // r8
  void (__fastcall *v13)(_QWORD, __int64, _QWORD, __int64); // r12
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rbp
  _QWORD *i; // rax
  __int64 j; // rbp
  __int64 v20; // r8
  _QWORD *v21; // rsi
  __int64 v23; // [rsp+28h] [rbp-60h]
  int v24; // [rsp+90h] [rbp+8h] BYREF
  __int64 v25; // [rsp+98h] [rbp+10h]
  __int64 v26; // [rsp+A0h] [rbp+18h]
  __int64 v27; // [rsp+A8h] [rbp+20h]

  v24 = 0;
  v1 = 0;
  v3 = *a1;
  if ( !*((_DWORD *)a1 + 24) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a1[1] + 1432), 4, 5, 39, (__int64)&WPP_21d6231090f93e4afbb8b064742420ef_Traceguids);
    return ((v1 >> 31) & 0xFFFFFFF4) + 4077;
  }
  v4 = a1[6];
  v26 = a1[13];
  v5 = a1[17];
  v6 = (_QWORD *)(v4 + 16);
  v27 = v4;
  v7 = *(_QWORD **)(v4 + 16);
  v25 = v5;
  while ( 1 )
  {
    v17 = v7 - 1;
    if ( v6 == v7 )
      goto LABEL_29;
    v8 = 0LL;
    if ( *((_DWORD *)v17 + 6) )
      break;
LABEL_23:
    v7 = (_QWORD *)v17[1];
  }
  while ( 1 )
  {
    v9 = &v17[9 * v8 + 5];
    if ( *((_DWORD *)v9 + 2) == 1 )
      break;
LABEL_22:
    v8 = (unsigned int)(v8 + 1);
    if ( (unsigned int)v8 >= *((_DWORD *)v17 + 6) )
      goto LABEL_23;
  }
  v10 = v9[6];
  v11 = *((unsigned int *)v9 + 10);
  v12 = v9[4];
  *((_DWORD *)v9 + 2) = 2;
  v1 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, __int64, _QWORD *))(v3 + 456))(
         *(_QWORD *)(v3 + 248),
         a1[3],
         v12,
         v11,
         v10,
         &v17[9 * v8 + 5]);
  if ( v1 >= 0 )
  {
    v13 = *(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(v3 + 600);
    if ( !v13 )
      goto LABEL_19;
    v14 = *((unsigned int *)v9 + 16);
    if ( (_DWORD)v14 )
      goto LABEL_17;
    if ( (int)HUBUCX_GetEndpointPriority(a1, v17, &v17[9 * v8 + 5], &v24) >= 0 )
    {
      switch ( v24 )
      {
        case 1:
          v14 = 1LL;
          goto LABEL_17;
        case 2:
          v14 = 2LL;
          goto LABEL_17;
        case 3:
          v14 = 3LL;
LABEL_17:
          v13(*(_QWORD *)(v3 + 248), a1[3], *v9, v14);
          break;
      }
    }
    v1 = 0;
LABEL_19:
    v15 = *v9;
    if ( (*((_DWORD *)v9 + 3) & 1) != 0 )
    {
      v16 = v25;
      *((_DWORD *)v9 + 2) = 6;
      *(_QWORD *)(v16 + 8LL * (unsigned int)(*((_DWORD *)a1 + 36))++) = v15;
    }
    else
    {
      *(_QWORD *)(v26 + 8LL * (unsigned int)(*((_DWORD *)a1 + 28))++) = v15;
    }
    goto LABEL_22;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v23) = v1;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 1432),
      2u,
      5u,
      0x28u,
      (__int64)&WPP_21d6231090f93e4afbb8b064742420ef_Traceguids,
      v23);
  }
  *((_DWORD *)v9 + 2) = 1;
LABEL_29:
  if ( v27 )
  {
    for ( i = (_QWORD *)*v6; ; i = (_QWORD *)v21[1] )
    {
      v21 = i - 1;
      if ( v6 == i )
        break;
      for ( j = 0LL; (unsigned int)j < *((_DWORD *)v21 + 6); j = (unsigned int)(j + 1) )
      {
        if ( LODWORD(v21[9 * j + 6]) == 2 )
        {
          if ( v1 >= 0 )
          {
            LODWORD(v21[9 * j + 6]) = 3;
          }
          else
          {
            v20 = v21[9 * j + 5];
            LODWORD(v21[9 * j + 6]) = 1;
            (*(void (__fastcall **)(_QWORD, __int64, __int64))(v3 + 464))(*(_QWORD *)(v3 + 248), a1[3], v20);
          }
        }
      }
    }
  }
  if ( v1 < 0 )
  {
    *((_DWORD *)a1 + 28) = 0;
    *((_DWORD *)a1 + 36) = 0;
    *((_DWORD *)a1 + 391) = -1073737728;
    *((_DWORD *)a1 + 390) = -1073741670;
  }
  return ((v1 >> 31) & 0xFFFFFFF4) + 4077;
}
