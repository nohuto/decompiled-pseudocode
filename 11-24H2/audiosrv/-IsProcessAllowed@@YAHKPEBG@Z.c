/*
 * XREFs of ?IsProcessAllowed@@YAHKPEBG@Z @ 0x18004F204
 * Callers:
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18006449C (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800150E8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     WPP_SF_D @ 0x1800C03A4 (WPP_SF_D.c)
 *     WPP_SF_dd @ 0x1800C33FC (WPP_SF_dd.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall IsProcessAllowed(DWORD dwProcessId, const unsigned __int16 *a2)
{
  unsigned int v4; // esi
  int v5; // r15d
  int v6; // edi
  RPC_STATUS v7; // eax
  signed int v8; // ebx
  unsigned int v9; // eax
  DWORD pSessionId; // [rsp+30h] [rbp-49h] BYREF
  __int64 v12; // [rsp+38h] [rbp-41h] BYREF
  __int64 v13; // [rsp+40h] [rbp-39h] BYREF
  __int64 v14; // [rsp+48h] [rbp-31h] BYREF
  __int64 v15; // [rsp+50h] [rbp-29h] BYREF
  PROPVARIANT pvar[2]; // [rsp+58h] [rbp-21h] BYREF
  __int64 v17; // [rsp+68h] [rbp-11h]
  PROPVARIANT v18[2]; // [rsp+70h] [rbp-9h] BYREF
  __int64 v19; // [rsp+80h] [rbp+7h]
  DEVPROPGUID fmtid; // [rsp+88h] [rbp+Fh] BYREF
  int v21; // [rsp+98h] [rbp+1Fh]

  v4 = 0;
  v5 = 0;
  v15 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  v6 = 0;
  pSessionId = 0;
  *(_OWORD *)pvar = 0LL;
  v17 = 0LL;
  *(_OWORD *)v18 = 0LL;
  v19 = 0LL;
  v7 = RpcImpersonateClient(0LL);
  v8 = v7;
  if ( v7 )
  {
    if ( v7 > 0 )
      v8 = (unsigned __int16)v7 | 0x80070000;
    if ( v8 < 0 )
    {
      AudSrvTraceLoggingErrorHelper("IsProcessAllowed", 561, v8);
      goto LABEL_16;
    }
  }
  v5 = 1;
  if ( !ProcessIdToSessionId(dwProcessId, &pSessionId) )
    pSessionId = 0;
  v8 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, const unsigned __int16 *, __int64 *))g_DeviceEnumerator->lpVtbl->GetDevice)(
         g_DeviceEnumerator,
         a2,
         &v15);
  if ( v8 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v15 + 32LL))(v15, 0LL, &v14);
    if ( v8 >= 0 )
    {
      if ( !(*(unsigned int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v14 + 40LL))(
              v14,
              &PKEY_Endpoint_Devnode,
              pvar)
        && LOWORD(pvar[0]) == 31 )
      {
        v8 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, PROPVARIANT, __int64 *))g_DeviceEnumerator->lpVtbl->GetDevice)(
               g_DeviceEnumerator,
               pvar[1],
               &v12);
        if ( v8 < 0 )
          goto LABEL_16;
        v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v12 + 32LL))(v12, 0LL, &v13);
        if ( v8 < 0 )
          goto LABEL_16;
        fmtid = DEVPKEY_Device_SessionId.fmtid;
        v21 = 6;
        if ( (*(int (__fastcall **)(__int64, DEVPROPGUID *, PROPVARIANT *))(*(_QWORD *)v13 + 40LL))(v13, &fmtid, v18) >= 0
          && LOWORD(v18[0]) == 19 )
        {
          v6 = (int)v18[1];
        }
      }
      if ( pSessionId && v6 && pSessionId != v6 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_74ab4d28651a3ef962dcd31efa958cf9_Traceguids);
        }
        v4 = 0;
      }
      else
      {
        v4 = 1;
      }
    }
  }
LABEL_16:
  PropVariantClear(pvar);
  PropVariantClear(v18);
  if ( v5 )
  {
    v9 = RpcRevertToSelf();
    if ( v9 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_74ab4d28651a3ef962dcd31efa958cf9_Traceguids, v9);
      }
    }
  }
  if ( v8 < 0 )
    AudSrvTraceLoggingErrorHelper("IsProcessAllowed", 643, v8);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return v4;
}
