/*
 * XREFs of ?ToMigratedString@CAudioEndpointId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001C690
 * Callers:
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x18001B198 (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180014E40 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A116C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioEndpointId::ToMigratedString(_QWORD *a1, __int64 *a2)
{
  int *v4; // rax
  volatile signed __int32 *v5; // rdx
  __int64 v6; // rbx
  int v7; // r14d
  int v8; // r13d
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned __int16 *v11; // rbx
  __int64 v12; // rcx
  int v13; // eax
  __int16 i; // ax
  __int16 v15; // r12
  __int64 v16; // r15
  int v17; // edi
  __int64 v18; // rcx
  LPVOID pv; // [rsp+30h] [rbp-89h] BYREF
  __int64 v21; // [rsp+38h] [rbp-81h] BYREF
  __int64 v22; // [rsp+40h] [rbp-79h] BYREF
  int v23; // [rsp+48h] [rbp-71h] BYREF
  int v24; // [rsp+4Ch] [rbp-6Dh] BYREF
  _DWORD v25[2]; // [rsp+50h] [rbp-69h] BYREF
  __int64 v26; // [rsp+58h] [rbp-61h] BYREF
  __int64 v27; // [rsp+60h] [rbp-59h]
  _DWORD v28[2]; // [rsp+68h] [rbp-51h] BYREF
  __int64 v29; // [rsp+70h] [rbp-49h]
  unsigned __int16 *v30; // [rsp+80h] [rbp-39h]
  int v31; // [rsp+88h] [rbp-31h]
  int v32; // [rsp+8Ch] [rbp-2Dh]
  void *v33; // [rsp+90h] [rbp-29h]
  int v34; // [rsp+98h] [rbp-21h]
  int v35; // [rsp+9Ch] [rbp-1Dh]
  const char *v36; // [rsp+A0h] [rbp-19h]
  __int64 v37; // [rsp+A8h] [rbp-11h]
  _DWORD *v38; // [rsp+B0h] [rbp-9h]
  __int64 v39; // [rsp+B8h] [rbp-1h]
  int *v40; // [rsp+C0h] [rbp+7h]
  __int64 v41; // [rsp+C8h] [rbp+Fh]

  v4 = (int *)*a2;
  v5 = (volatile signed __int32 *)(*a2 - 24);
  v6 = *(_QWORD *)v5;
  v7 = 0;
  if ( *((_DWORD *)v5 + 2) )
  {
    if ( *((int *)v5 + 4) >= 0 )
    {
      if ( _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v5 + 8LL))(*(_QWORD *)v5);
      *a2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6) + 24;
    }
    else
    {
      if ( *(v4 - 3) < 0 )
        ATL::AtlThrowImpl(-2147024809);
      *(v4 - 4) = 0;
      *(_WORD *)*a2 = 0;
    }
  }
  v22 = 0LL;
  v21 = 0LL;
  v23 = 0;
  v27 = 0LL;
  v26 = 0LL;
  pv = 0LL;
  v8 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, _QWORD, __int64 *))g_DeviceEnumerator->lpVtbl->GetDevice)(
         g_DeviceEnumerator,
         *a1,
         &v22);
  if ( v8 < 0 )
    goto LABEL_44;
  v9 = v21;
  if ( v21 != v22 && v22 )
  {
    (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v22)(v22, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5, &v21);
    v9 = v21;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v9 + 24LL))(v9, &v23);
  if ( v8 < 0
    || (v8 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v22 + 24LL))(
               v22,
               &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
               23LL),
        v8 < 0)
    || (v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v27 + 32LL))(v27, 0LL, &v26), v8 < 0)
    || (v8 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v26 + 72LL))(v26, &pv), v8 < 0) )
  {
LABEL_44:
    v11 = (unsigned __int16 *)pv;
  }
  else
  {
    v11 = (unsigned __int16 *)pv;
    v12 = *(unsigned __int16 *)pv;
    if ( (_WORD)v12 )
    {
      do
      {
        v13 = v7 + 1;
        if ( (_WORD)v12 != 35 )
          v13 = v7;
        v7 = v13;
        if ( v13 == 2 )
        {
          for ( i = *++v11; *v11 != 35; i = *v11 )
          {
            if ( !i )
              break;
            ++v11;
          }
          v7 = 3;
          v12 = *v11;
        }
        v15 = _o_towlower(v12, v10);
        v16 = *(unsigned int *)(*a2 - 16);
        v17 = v16 + 1;
        if ( ((1 - *(_DWORD *)(*a2 - 8)) | (*(_DWORD *)(*a2 - 12) - ((int)v16 + 1))) < 0 )
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a2, v17);
        *(_WORD *)(*a2 + 2 * v16) = v15;
        if ( v17 < 0 || v17 > *(_DWORD *)(*a2 - 12) )
          ATL::AtlThrowImpl(-2147024809);
        *(_DWORD *)(*a2 - 16) = v17;
        v10 = 0LL;
        *(_WORD *)(*a2 + 2LL * v17) = 0;
        v12 = *++v11;
      }
      while ( (_WORD)v12 );
      v11 = (unsigned __int16 *)pv;
    }
  }
  if ( v11 )
  {
    CoTaskMemFree(v11);
    pv = 0LL;
  }
  if ( v8 < 0 )
  {
    v18 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *(_DWORD *)v18 > 4u )
    {
      v24 = v8;
      v25[0] = 250;
      v40 = &v24;
      v41 = 4LL;
      v38 = v25;
      v39 = 4LL;
      v36 = "CAudioEndpointId::ToMigratedString";
      v37 = 35LL;
      v28[0] = 184549376;
      v28[1] = 4;
      v29 = 0LL;
      v30 = *(unsigned __int16 **)(v18 + 8);
      v31 = *v30;
      v32 = 2;
      v33 = &unk_1801AB1CE;
      v34 = 35;
      v35 = 1;
      v25[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EtwEventWriteTransfer(*(_QWORD *)(v18 + 32), v28, 0LL, 0LL);
    }
  }
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  return (unsigned int)v8;
}
