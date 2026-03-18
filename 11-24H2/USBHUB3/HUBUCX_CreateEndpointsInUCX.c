/*
 * XREFs of HUBUCX_CreateEndpointsInUCX @ 0x140026848
 * Callers:
 *     HUBDSM_CreatingNewEndpoints @ 0x1400217E0 (HUBDSM_CreatingNewEndpoints.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     Feature_EUSB2__private_IsEnabledDeviceUsageNoInline @ 0x14000C860 (Feature_EUSB2__private_IsEnabledDeviceUsageNoInline.c)
 *     HUBUCX_GetEndpointPriority @ 0x14002778C (HUBUCX_GetEndpointPriority.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBUCX_CreateEndpointsInUCX(__int64 *a1)
{
  int v1; // edi
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 *v8; // rsi
  __int64 (__fastcall *v9)(_QWORD, __int64, __int64, _QWORD, __int64, __int64, __int64); // rax
  int v10; // eax
  void (__fastcall *v11)(_QWORD, __int64, _QWORD, __int64); // rbp
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r15
  __int64 i; // rax
  __int64 j; // rbp
  __int64 v18; // r8
  __int64 v19; // rsi
  __int64 v21; // [rsp+28h] [rbp-70h]
  __int64 v22; // [rsp+40h] [rbp-58h]
  int v23; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+10h]
  __int64 v25; // [rsp+B0h] [rbp+18h]
  __int64 v26; // [rsp+B8h] [rbp+20h]

  v23 = 0;
  v1 = 0;
  v3 = *a1;
  if ( !*((_DWORD *)a1 + 24) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a1[1] + 1432), 4, 5, 39, (__int64)&WPP_6f1e94dad5dd3d9188df346061fdcafd_Traceguids);
    return ((v1 >> 31) & 0xFFFFFFF4) + 4077;
  }
  v4 = a1[6];
  v25 = a1[13];
  v24 = a1[17];
  v5 = v4 + 16;
  v22 = v4;
  v6 = *(_QWORD *)(v4 + 16);
  v26 = v5;
  while ( 1 )
  {
    v15 = v6 - 8;
    if ( v5 == v6 )
      goto LABEL_38;
    v7 = 0LL;
    if ( *(_DWORD *)(v15 + 24) )
      break;
LABEL_29:
    v6 = *(_QWORD *)(v15 + 8);
  }
  while ( 1 )
  {
    v8 = (__int64 *)(v15 + 80 * v7 + 40);
    if ( *((_DWORD *)v8 + 2) == 1 )
      break;
LABEL_27:
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= *(_DWORD *)(v15 + 24) )
    {
      v5 = v26;
      goto LABEL_29;
    }
  }
  *((_DWORD *)v8 + 2) = 2;
  if ( !(unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline() )
    goto LABEL_11;
  v9 = *(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, __int64, __int64, __int64))(v3 + 608);
  if ( v9 )
  {
    v10 = v9(*(_QWORD *)(v3 + 248), a1[3], v8[4], *((unsigned int *)v8 + 10), v8[6], v8[8], v15 + 80 * v7 + 40);
    goto LABEL_12;
  }
  if ( !v8[8] )
  {
LABEL_11:
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, __int64, __int64))(v3 + 456))(
            *(_QWORD *)(v3 + 248),
            a1[3],
            v8[4],
            *((unsigned int *)v8 + 10),
            v8[6],
            v15 + 80 * v7 + 40);
LABEL_12:
    v1 = v10;
    if ( v10 < 0 )
      goto LABEL_35;
    v11 = *(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(v3 + 600);
    if ( !v11 )
      goto LABEL_24;
    v12 = *((unsigned int *)v8 + 18);
    if ( (_DWORD)v12 )
      goto LABEL_22;
    if ( (int)HUBUCX_GetEndpointPriority(a1, v15, v15 + 80 * v7 + 40, &v23) >= 0 )
    {
      switch ( v23 )
      {
        case 1:
          v12 = 1LL;
          goto LABEL_22;
        case 2:
          v12 = 2LL;
          goto LABEL_22;
        case 3:
          v12 = 3LL;
LABEL_22:
          v11(*(_QWORD *)(v3 + 248), a1[3], *v8, v12);
          break;
      }
    }
    v1 = 0;
LABEL_24:
    v13 = *v8;
    if ( (*((_DWORD *)v8 + 3) & 1) != 0 )
    {
      v14 = v24;
      *((_DWORD *)v8 + 2) = 6;
      *(_QWORD *)(v14 + 8LL * (unsigned int)(*((_DWORD *)a1 + 36))++) = v13;
    }
    else
    {
      *(_QWORD *)(v25 + 8LL * (unsigned int)(*((_DWORD *)a1 + 28))++) = v13;
    }
    goto LABEL_27;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a1[1] + 1432), 2, 5, 40, (__int64)&WPP_6f1e94dad5dd3d9188df346061fdcafd_Traceguids);
  v1 = -1073741637;
LABEL_35:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v21) = v1;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 1432),
      2u,
      5u,
      0x29u,
      (__int64)&WPP_6f1e94dad5dd3d9188df346061fdcafd_Traceguids,
      v21);
  }
  *((_DWORD *)v8 + 2) = 1;
LABEL_38:
  if ( v22 )
  {
    for ( i = *(_QWORD *)(v22 + 16); ; i = *(_QWORD *)(v19 + 8) )
    {
      v19 = i - 8;
      if ( v22 + 16 == i )
        break;
      for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v19 + 24); j = (unsigned int)(j + 1) )
      {
        if ( *(_DWORD *)(v19 + 80 * j + 48) == 2 )
        {
          if ( v1 >= 0 )
          {
            *(_DWORD *)(v19 + 80 * j + 48) = 3;
          }
          else
          {
            v18 = *(_QWORD *)(v19 + 80 * j + 40);
            *(_DWORD *)(v19 + 80 * j + 48) = 1;
            (*(void (__fastcall **)(_QWORD, __int64, __int64))(v3 + 464))(*(_QWORD *)(v3 + 248), a1[3], v18);
          }
        }
      }
    }
  }
  if ( v1 < 0 )
  {
    *((_DWORD *)a1 + 28) = 0;
    *((_DWORD *)a1 + 36) = 0;
    *((_DWORD *)a1 + 393) = -1073737728;
    *((_DWORD *)a1 + 392) = -1073741670;
  }
  return ((v1 >> 31) & 0xFFFFFFF4) + 4077;
}
