/*
 * XREFs of HUBPDO_FindAndStoreMatchingInternalPipeHandle @ 0x140018A58
 * Callers:
 *     HUBDSM_GettingMatchingPipeHandleOnClientResetPipe @ 0x140022F90 (HUBDSM_GettingMatchingPipeHandleOnClientResetPipe.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14001E0AC (WPP_RECORDER_SF_qq.c)
 *     __security_check_cookie @ 0x140045CC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBPDO_FindAndStoreMatchingInternalPipeHandle(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v3; // r10
  _QWORD **v4; // rdi
  _QWORD *i; // rax
  unsigned int v6; // r8d
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  unsigned int v9; // edi
  __int64 v10; // rdx
  _QWORD *v12; // rax
  _OWORD v13[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v14; // [rsp+60h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 456);
  v14 = 0LL;
  memset(v13, 0, sizeof(v13));
  LOWORD(v13[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v1,
    v13);
  v3 = *((_QWORD *)&v13[0] + 1);
  v4 = (_QWORD **)(*(_QWORD *)(a1 + 48) + 16LL);
  for ( i = *v4; ; i = (_QWORD *)*i )
  {
    v8 = i - 1;
    if ( v4 == i )
      break;
    v6 = *((_DWORD *)v8 + 6);
    v7 = 0LL;
    if ( v6 )
    {
      while ( v8[9 * v7 + 7] != *(_QWORD *)(*((_QWORD *)&v13[0] + 1) + 24LL) )
      {
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= v6 )
          goto LABEL_5;
      }
      v12 = &v8[9 * v7 + 5];
      if ( v12 )
      {
        *(_QWORD *)(a1 + 1656) = v12;
        return 4077;
      }
      break;
    }
LABEL_5:
    ;
  }
  v9 = 4065;
  *(_DWORD *)(a1 + 1564) = -2147482112;
  *(_DWORD *)(a1 + 1560) = -1073741811;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = *(_QWORD *)(v3 + 24);
    LOBYTE(v10) = 3;
    WPP_RECORDER_SF_qq(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      v10,
      5,
      44,
      (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
      *(_QWORD *)(v3 + 24),
      v3);
  }
  return v9;
}
