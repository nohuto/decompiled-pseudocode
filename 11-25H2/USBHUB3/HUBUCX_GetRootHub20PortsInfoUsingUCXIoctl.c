/*
 * XREFs of HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl @ 0x14002775C
 * Callers:
 *     HUBHSM_GettingRootHub20PortsInfo @ 0x1400093C0 (HUBHSM_GettingRootHub20PortsInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x14000A83C (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 *     memset @ 0x1400460C0 (memset.c)
 */

__int64 __fastcall HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // r15
  int v7; // eax
  void **v8; // rdi
  size_t v9; // rsi
  int v10; // eax
  unsigned __int16 v11; // r9
  unsigned int v12; // r9d
  _QWORD *v13; // r8
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  int v16; // esi
  __int64 result; // rax
  int v18; // [rsp+28h] [rbp-51h]
  __int64 v19; // [rsp+28h] [rbp-51h]
  __int128 v20; // [rsp+60h] [rbp-19h] BYREF
  __int128 v21; // [rsp+70h] [rbp-9h]
  __int128 v22; // [rsp+80h] [rbp+7h]
  __int64 v23; // [rsp+90h] [rbp+17h]
  __int64 v24; // [rsp+E0h] [rbp+67h] BYREF
  unsigned __int64 v25; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v26; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v27; // [rsp+F8h] [rbp+7Fh] BYREF

  DWORD1(v20) = 0;
  v26 = 0LL;
  v24 = 0LL;
  v27 = 0LL;
  v25 = 0LL;
  if ( !*(_WORD *)(a1 + 112) )
  {
    *(_QWORD *)(a1 + 128) = 0LL;
    v2 = 2042;
    v3 = a1 + 1272;
    return HUBSM_AddEvent(v3, v2);
  }
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16));
  v5 = *(_QWORD *)(a1 + 16);
  v6 = v4;
  *(_QWORD *)&v21 = 0LL;
  v23 = 0LL;
  v22 = v5;
  v20 = 0LL;
  *((_QWORD *)&v21 + 1) = 0x100000001LL;
  LODWORD(v20) = 56;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, unsigned __int64 *))(WdfFunctions_01015
                                                                                               + 1976))(
         WdfDriverGlobals,
         &v20,
         v4,
         &v25);
  if ( v7 < 0 )
  {
    v25 = 0LL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = v7;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2528),
        2u,
        3u,
        0x2Du,
        (__int64)&WPP_21d6231090f93e4afbb8b064742420ef_Traceguids,
        v18);
    }
    v8 = (void **)(a1 + 128);
    goto LABEL_23;
  }
  v8 = (void **)(a1 + 128);
  v9 = 28LL * *(unsigned __int16 *)(a1 + 112);
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  *(_QWORD *)&v22 = *(_QWORD *)(a1 + 16);
  v20 = 0LL;
  LODWORD(v20) = 56;
  *((_QWORD *)&v21 + 1) = 0x100000001LL;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, size_t, __int64 *, __int64))(WdfFunctions_01015 + 1536))(
          WdfDriverGlobals,
          &v20,
          (unsigned int)ExDefaultNonPagedPoolType,
          1882409045LL,
          v9,
          &v27,
          a1 + 128);
  if ( v10 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_23:
      if ( v25 )
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
      if ( v27 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
        *v8 = 0LL;
      }
      v3 = a1 + 1272;
      v2 = 2038;
      return HUBSM_AddEvent(v3, v2);
    }
    v11 = 46;
LABEL_10:
    LODWORD(v19) = v10;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2528),
      2u,
      3u,
      v11,
      (__int64)&WPP_21d6231090f93e4afbb8b064742420ef_Traceguids,
      v19);
    goto LABEL_23;
  }
  memset(*v8, 0, v9);
  v23 = 0LL;
  *(_QWORD *)&v21 = 0LL;
  *((_QWORD *)&v21 + 1) = 0x100000001LL;
  v22 = v25;
  v20 = 0LL;
  LODWORD(v20) = 56;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, __int64 *, __int64 *))(WdfFunctions_01015 + 1536))(
          WdfDriverGlobals,
          &v20,
          (unsigned int)ExDefaultNonPagedPoolType,
          1882409045LL,
          16LL,
          &v26,
          &v24);
  if ( v10 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_23;
    v11 = 47;
    goto LABEL_10;
  }
  v12 = 0;
  *(_OWORD *)v24 = 0LL;
  v13 = *v8;
  *(_DWORD *)v24 = 16;
  *(_WORD *)(v24 + 4) = *(_WORD *)(a1 + 112);
  *(_WORD *)(v24 + 6) = 20;
  *(_QWORD *)(v24 + 8) = v13;
  v14 = *(unsigned __int16 *)(v24 + 4);
  v15 = &v13[v14];
  if ( (_WORD)v14 )
  {
    do
    {
      *v13 = v15;
      ++v12;
      *((_WORD *)v15 + 1) = 0;
      ++v13;
      v15 = (_QWORD *)((char *)v15 + 20);
    }
    while ( v12 < *(unsigned __int16 *)(v24 + 4) );
  }
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, __int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(WdfFunctions_01015 + 1528))(
          WdfDriverGlobals,
          v6,
          v25,
          4788239LL,
          v26,
          0LL,
          0LL,
          0LL,
          0LL,
          0LL);
  v16 = v10;
  if ( v10 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_23;
    v11 = 48;
    goto LABEL_10;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int64 (__fastcall *)(), __int64))(WdfFunctions_01015 + 2080))(
    WdfDriverGlobals,
    v25,
    HUBUCX_GetRootHub20PortsInfoUsingUCXIoctlComplete,
    a1);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int64, _QWORD))(WdfFunctions_01015 + 2024))(
             WdfDriverGlobals,
             v25,
             v6,
             0LL);
  if ( !(_BYTE)result )
  {
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64))(WdfFunctions_01015 + 2032))(
               WdfDriverGlobals,
               v25);
    v16 = result;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v19) = result;
      result = WPP_RECORDER_SF_d(
                 *(_QWORD *)(a1 + 2528),
                 2u,
                 3u,
                 0x31u,
                 (__int64)&WPP_21d6231090f93e4afbb8b064742420ef_Traceguids,
                 v19);
    }
  }
  if ( v16 < 0 )
    goto LABEL_23;
  return result;
}
