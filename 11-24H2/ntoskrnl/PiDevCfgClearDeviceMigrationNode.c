/*
 * XREFs of PiDevCfgClearDeviceMigrationNode @ 0x140A640A4
 * Callers:
 *     PiDevCfgFindDeviceMigrationNode @ 0x1407270E0 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgMigrateDevice @ 0x1409CCE1C (PiDevCfgMigrateDevice.c)
 * Callees:
 *     PnpValidateMultiSzData @ 0x1404ADA64 (PnpValidateMultiSzData.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     _PnpCtxRegOpenKey @ 0x1408C552C (_PnpCtxRegOpenKey.c)
 *     _RegRtlOpenKeyTransacted @ 0x1408C5590 (_RegRtlOpenKeyTransacted.c)
 *     _PnpCtxRegDeleteValue @ 0x14097AAB4 (_PnpCtxRegDeleteValue.c)
 *     RtlpQueryRegistryValues @ 0x1409B4DD0 (RtlpQueryRegistryValues.c)
 *     _PnpCtxRegDeletePath @ 0x140A643FC (_PnpCtxRegDeletePath.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 */

__int64 __fastcall PiDevCfgClearDeviceMigrationNode(__int64 *a1, const WCHAR *a2)
{
  __int64 v2; // r10
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // eax
  int RegistryValues; // esi
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rcx
  void *v13; // rdx
  __int64 v14; // r10
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 *v19; // rdi
  int v20; // eax
  _WORD *i; // rbx
  __int64 v22; // rcx
  __int64 v23; // rax
  ULONG v24; // [rsp+20h] [rbp-E0h]
  PVOID P[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v26; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  PVOID v28[2]; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v29; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE v30; // [rsp+68h] [rbp-98h] BYREF
  int v31[4]; // [rsp+70h] [rbp-90h] BYREF
  const wchar_t *v32; // [rsp+80h] [rbp-80h]
  PVOID *v33; // [rsp+88h] [rbp-78h]
  int v34; // [rsp+90h] [rbp-70h]
  int v35; // [rsp+B0h] [rbp-50h]
  const wchar_t *v36; // [rsp+B8h] [rbp-48h]
  PVOID *v37; // [rsp+C0h] [rbp-40h]
  int v38; // [rsp+C8h] [rbp-38h]
  int v39; // [rsp+E8h] [rbp-18h]
  const wchar_t *v40; // [rsp+F0h] [rbp-10h]
  int *v41; // [rsp+F8h] [rbp-8h]
  int v42; // [rsp+100h] [rbp+0h]

  v2 = a1[1];
  Handle = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  P[0] = 0LL;
  P[1] = 0LL;
  v28[0] = 0LL;
  v28[1] = 0LL;
  v26 = 0;
  if ( *(_QWORD *)&PiPnpRtlCtx && (v5 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
    v6 = *(_QWORD *)(v5 + 8);
  else
    v6 = 0LL;
  v7 = RegRtlOpenKeyTransacted(v2, a2, 0, 0x20019u, &Handle, v6);
  RegistryValues = v7;
  if ( v7 == -1073741772 )
    goto LABEL_30;
  if ( v7 < 0 )
    goto LABEL_21;
  memset_0(v31, 0, 0xE0uLL);
  v32 = L"ClassGuid";
  v34 = 0x1000000;
  v31[2] = 288;
  v33 = P;
  v39 = 288;
  v36 = L"LocationPaths";
  v38 = 117440512;
  v37 = v28;
  v40 = L"Persist";
  v41 = &v26;
  v35 = 304;
  v42 = 0x4000000;
  RegistryValues = RtlpQueryRegistryValues(3221225472LL, (const WCHAR *)Handle, (__int64)v31, 0LL, v24, 1);
  if ( RegistryValues < 0 )
    goto LABEL_21;
  if ( !LOWORD(P[0]) && P[1] )
    RtlFreeAnsiString((PUNICODE_STRING)P);
  if ( v28[1] && !PnpValidateMultiSzData((_WORD *)v28[1], LOWORD(v28[0])) )
    RtlFreeAnsiString((PUNICODE_STRING)v28);
  if ( v26 )
  {
LABEL_30:
    RegistryValues = 0;
    goto LABEL_21;
  }
  ZwClose(Handle);
  v9 = a1[1];
  LOBYTE(v10) = 1;
  Handle = 0LL;
  PnpCtxRegDeletePath(v11, v9, a2, v10);
  v13 = (void *)a1[3];
  if ( v13 )
    PnpCtxRegDeleteValue(v12, v13, a2);
  v14 = a1[2];
  if ( v14 && P[1] )
  {
    if ( *(_QWORD *)&PiPnpRtlCtx && (v15 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
      v16 = *(_QWORD *)(v15 + 8);
    else
      v16 = 0LL;
    if ( (int)RegRtlOpenKeyTransacted(v14, (const WCHAR *)P[1], 0, 0xF003Fu, &v29, v16) >= 0 )
    {
      PnpCtxRegDeleteValue(v17, v29, a2);
      ZwClose(v29);
    }
    PnpCtxRegDeletePath(v17, a1[2], P[1], 0LL);
  }
  if ( v28[1] )
  {
    v19 = a1 + 4;
    if ( a1[4] )
      goto LABEL_41;
    v20 = PnpCtxRegOpenKey(*(__int64 *)&PiPnpRtlCtx, *a1, (__int64)L"Locations", 0, 0xF003Fu, (__int64)(a1 + 4));
    if ( v20 == -1073741772 )
    {
      *v19 = 0LL;
    }
    else if ( v20 < 0 )
    {
      RegistryValues = v20;
      goto LABEL_21;
    }
    if ( *v19 )
    {
LABEL_41:
      for ( i = v28[1]; *i; i += v23 + 1 )
      {
        if ( (int)PnpCtxRegOpenKey(*(__int64 *)&PiPnpRtlCtx, *v19, (__int64)i, 0, 0xF003Fu, (__int64)&v30) >= 0 )
        {
          PnpCtxRegDeleteValue(v22, v30, a2);
          ZwClose(v30);
        }
        PnpCtxRegDeletePath(v22, *v19, i, 0LL);
        v23 = -1LL;
        do
          ++v23;
        while ( i[v23] );
      }
    }
  }
LABEL_21:
  if ( P[1] )
  {
    ExFreePool(P[1]);
    *(_OWORD *)P = 0LL;
  }
  if ( v28[1] )
  {
    ExFreePool(v28[1]);
    *(_OWORD *)v28 = 0LL;
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)RegistryValues;
}
