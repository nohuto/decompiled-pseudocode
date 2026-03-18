/*
 * XREFs of HUBUCX_NotifyDeviceResetUsingUCXIoctl @ 0x140028664
 * Callers:
 *     HUBDSM_NotifyingDeviceResetToUCXAfterReset2 @ 0x140023520 (HUBDSM_NotifyingDeviceResetToUCXAfterReset2.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x140028C5C (HUBUCX_SubmitUcxIoctl.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBUCX_NotifyDeviceResetUsingUCXIoctl(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbp
  __int64 v3; // rsi
  _QWORD *i; // rax
  __int64 v6; // r8
  _QWORD *v7; // rdx
  __int64 v8; // rax
  __int64 result; // rax
  __int64 j; // rdx
  __int64 v11; // rcx

  v1 = *(_QWORD *)(a1 + 48);
  v2 = 0LL;
  v3 = 0LL;
  if ( !v1 || !*(_DWORD *)(a1 + 96) )
  {
LABEL_11:
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 440),
           0LL);
    *(_OWORD *)v8 = 0LL;
    *(_OWORD *)(v8 + 16) = 0LL;
    *(_OWORD *)(v8 + 32) = 0LL;
    *(_DWORD *)v8 = 48;
    *(_QWORD *)(v8 + 8) = *(_QWORD *)(**(_QWORD **)(a1 + 8) + 248LL);
    *(_QWORD *)(v8 + 16) = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(v8 + 24) = *(_QWORD *)(a1 + 88);
    *(_QWORD *)(v8 + 40) = v3;
    *(_DWORD *)(v8 + 32) = v2;
    result = HUBUCX_SubmitUcxIoctl(a1, 4788251LL);
    if ( (int)result < 0 )
      goto LABEL_12;
    return result;
  }
  v3 = *(_QWORD *)(a1 + 120);
  for ( i = *(_QWORD **)(v1 + 16); ; i = (_QWORD *)*i )
  {
    v7 = i - 1;
    if ( (_QWORD *)(v1 + 16) == i )
      goto LABEL_11;
    v6 = 0LL;
    if ( *((_DWORD *)v7 + 6) )
      break;
LABEL_9:
    ;
  }
  while ( LODWORD(v7[10 * v6 + 6]) != 4 )
  {
LABEL_8:
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= *((_DWORD *)v7 + 6) )
      goto LABEL_9;
  }
  if ( v3 )
  {
    LODWORD(v7[10 * v6 + 6]) = 5;
    *(_QWORD *)(v3 + 8 * v2) = v7[10 * v6 + 5];
    v2 = (unsigned int)(v2 + 1);
    goto LABEL_8;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      (_DWORD)v7,
      5,
      23,
      (__int64)&WPP_6f1e94dad5dd3d9188df346061fdcafd_Traceguids);
  }
  result = 3221225485LL;
LABEL_12:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    result = WPP_RECORDER_SF_d(
               *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
               2u,
               5u,
               0x18u,
               (__int64)&WPP_6f1e94dad5dd3d9188df346061fdcafd_Traceguids,
               result);
  if ( v1 )
  {
    for ( result = *(_QWORD *)(v1 + 16); ; result = *(_QWORD *)result )
    {
      v11 = result - 8;
      if ( v1 + 16 == result )
        break;
      for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v11 + 24); j = (unsigned int)(j + 1) )
      {
        if ( *(_DWORD *)(v11 + 80 * j + 48) == 5 )
          *(_DWORD *)(v11 + 80 * j + 48) = 4;
      }
    }
  }
  return result;
}
