/*
 * XREFs of _PnpDeviceRaisePropertyChangeEventWorker @ 0x1408B97F8
 * Callers:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1408B94C4 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1408B95AC (_PnpObjectRaisePropertyChangeEvent.c)
 *     _CmAddDeviceToContainerWorker @ 0x140A547D0 (_CmAddDeviceToContainerWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1406B3990 (RtlCompareMemory.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpStringFromGuid @ 0x1408B754C (_PnpStringFromGuid.c)
 *     PiPnpRtlObjectEventCallback @ 0x1408B9D10 (PiPnpRtlObjectEventCallback.c)
 *     _PnpGetObjectProperty @ 0x1408CDFD0 (_PnpGetObjectProperty.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x1409B3380 (_CmGetMatchingFilteredDeviceInterfaceList.c)
 */

char __fastcall PnpDeviceRaisePropertyChangeEventWorker(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall *a6)(int, int, int, int, __int64))
{
  __int64 v9; // r15
  __int64 *v10; // rdi
  __int64 v11; // rsi
  __int64 i; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 j; // r8
  DEVPROPKEY *v17; // r9
  char v18; // di
  int v19; // esi
  int ObjectProperty; // eax
  __int64 v21; // rdx
  __int64 m; // r8
  DEVPROPKEY *v23; // r9
  int MatchingFilteredDeviceInterfaceList; // eax
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // ecx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 *v30; // rdi
  __int64 v31; // rsi
  __int64 k; // rdx
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // rax
  char v37; // [rsp+60h] [rbp-A0h]
  _BYTE v38[24]; // [rsp+68h] [rbp-98h] BYREF
  int v39; // [rsp+80h] [rbp-80h] BYREF
  __int64 v40; // [rsp+88h] [rbp-78h]
  int v41; // [rsp+90h] [rbp-70h] BYREF
  __int64 v42; // [rsp+98h] [rbp-68h]
  __int128 v43; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v44; // [rsp+B0h] [rbp-50h]
  __int128 Source2; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t v46[40]; // [rsp+D0h] [rbp-30h] BYREF

  v42 = a3;
  v40 = a2;
  v41 = 0;
  v39 = 0;
  *(_OWORD *)&v38[8] = 0LL;
  Source2 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  if ( a4 )
    goto LABEL_2;
  v27 = *(_DWORD *)(a5 + 16);
  if ( v27 == 6 )
  {
    v29 = *(_QWORD *)a5 - *(_QWORD *)&DEVPKEY_Device_SessionId.fmtid.Data1;
    if ( *(_QWORD *)a5 == *(_QWORD *)&DEVPKEY_Device_SessionId.fmtid.Data1 )
      v29 = *(_QWORD *)(a5 + 8) - *(_QWORD *)DEVPKEY_Device_SessionId.fmtid.Data4;
    if ( !v29 )
      goto LABEL_59;
  }
  if ( v27 == 100 )
  {
    v35 = *(_QWORD *)a5 - DEVPKEY_Device_RestrictedSD;
    if ( *(_QWORD *)a5 == DEVPKEY_Device_RestrictedSD )
      v35 = *(_QWORD *)(a5 + 8) - 0x57C1C6A499921E96LL;
    if ( !v35 )
      goto LABEL_59;
  }
  if ( v27 != 101 )
    goto LABEL_2;
  v28 = *(_QWORD *)a5 - DEVPKEY_Device_InheritedRestrictedSD;
  if ( *(_QWORD *)a5 == DEVPKEY_Device_InheritedRestrictedSD )
    v28 = *(_QWORD *)(a5 + 8) - 0x57C1C6A499921E96LL;
  if ( v28 )
  {
LABEL_2:
    v37 = 0;
  }
  else
  {
LABEL_59:
    *(_QWORD *)v38 = 0LL;
    v37 = 1;
    guard_dispatch_icall_no_overrides(a1, a2, 1LL, 5LL);
    a2 = v40;
  }
  *(_QWORD *)v38 = a3;
  *(_QWORD *)&v38[8] = a4;
  *(_QWORD *)&v38[16] = a5;
  if ( a6 == PiPnpRtlObjectEventCallback )
    PiPnpRtlObjectEventCallback(a1, a2, 1, 4, (__int64)v38);
  else
    guard_dispatch_icall_no_overrides(a1, a2, 1LL, 4LL);
  v9 = v40;
  v10 = &qword_1400018E8;
  v11 = 14LL;
  do
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)v10; i = (unsigned int)(i + 1) )
    {
      v13 = *(_QWORD *)(*(v10 - 1) + 8 * i);
      if ( *(_DWORD *)(a5 + 16) == *(_DWORD *)(v13 + 16) )
      {
        v14 = *(_QWORD *)a5 - *(_QWORD *)v13;
        if ( *(_QWORD *)a5 == *(_QWORD *)v13 )
          v14 = *(_QWORD *)(a5 + 8) - *(_QWORD *)(v13 + 8);
        if ( !v14 )
        {
          *(_QWORD *)&v38[16] = v10[1];
          guard_dispatch_icall_no_overrides(a1, v9, 1LL, 4LL);
          break;
        }
      }
    }
    v10 += 3;
    --v11;
  }
  while ( v11 );
  v15 = 0LL;
LABEL_16:
  if ( (unsigned int)v15 >= 3 )
  {
    v18 = 0;
  }
  else
  {
    for ( j = 0LL; ; j = (unsigned int)(j + 1) )
    {
      if ( (unsigned int)j >= LODWORD((&off_140001A30)[3 * v15 + 1]) )
      {
        v15 = (unsigned int)(v15 + 1);
        goto LABEL_16;
      }
      v17 = (&off_140001A30)[3 * v15][j];
      if ( *(_DWORD *)(a5 + 16) == v17->pid )
      {
        v25 = *(_QWORD *)a5 - *(_QWORD *)&v17->fmtid.Data1;
        if ( *(_QWORD *)a5 == *(_QWORD *)&v17->fmtid.Data1 )
          v25 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v17->fmtid.Data4;
        if ( !v25 )
          break;
      }
    }
    v18 = 1;
  }
  if ( v37 || v18 )
  {
    v19 = v40;
    ObjectProperty = PnpGetObjectProperty(
                       a1,
                       v40,
                       1,
                       v42,
                       0LL,
                       (__int64)&DEVPKEY_Device_ContainerId,
                       (__int64)&v41,
                       (__int64)&Source2,
                       16,
                       (__int64)&v39,
                       0);
    if ( ObjectProperty == -1073741275 || ObjectProperty == -1073741772 )
      goto LABEL_25;
    if ( ObjectProperty < 0 )
      goto LABEL_55;
    if ( RtlCompareMemory(qword_140011690, &Source2, 0x10uLL) == 16 )
      goto LABEL_25;
    if ( PnpStringFromGuid((int *)&Source2, v46) < 0 )
    {
LABEL_55:
      *(_QWORD *)v38 = 0LL;
      guard_dispatch_icall_no_overrides(a1, 0LL, 5LL, 1LL);
      goto LABEL_25;
    }
    if ( v37 )
    {
      *(_QWORD *)v38 = 0LL;
      guard_dispatch_icall_no_overrides(a1, v46, 5LL, 5LL);
    }
    if ( !v18 )
      goto LABEL_25;
    v30 = &qword_140001A38;
    *(_OWORD *)v38 = 0LL;
    v31 = 3LL;
    do
    {
      for ( k = 0LL; (unsigned int)k < *(_DWORD *)v30; k = (unsigned int)(k + 1) )
      {
        v33 = *(_QWORD *)(*(v30 - 1) + 8 * k);
        if ( *(_DWORD *)(a5 + 16) == *(_DWORD *)(v33 + 16) )
        {
          v34 = *(_QWORD *)a5 - *(_QWORD *)v33;
          if ( *(_QWORD *)a5 == *(_QWORD *)v33 )
            v34 = *(_QWORD *)(a5 + 8) - *(_QWORD *)(v33 + 8);
          if ( !v34 )
          {
            *(_QWORD *)&v38[16] = v30[1];
            guard_dispatch_icall_no_overrides(a1, v46, 5LL, 4LL);
            break;
          }
        }
      }
      v30 += 3;
      --v31;
    }
    while ( v31 );
  }
  v19 = v40;
LABEL_25:
  v21 = 0LL;
LABEL_26:
  if ( (_DWORD)v21 )
  {
    LOBYTE(MatchingFilteredDeviceInterfaceList) = 0;
  }
  else
  {
    for ( m = 0LL; ; m = (unsigned int)(m + 1) )
    {
      if ( (unsigned int)m >= LODWORD((&off_1400018C0)[3 * v21 + 1]) )
      {
        v21 = 1LL;
        goto LABEL_26;
      }
      v23 = (&off_1400018C0)[3 * v21][m];
      if ( *(_DWORD *)(a5 + 16) == v23->pid )
      {
        v26 = *(_QWORD *)a5 - *(_QWORD *)&v23->fmtid.Data1;
        if ( *(_QWORD *)a5 == *(_QWORD *)&v23->fmtid.Data1 )
          v26 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v23->fmtid.Data4;
        if ( !v26 )
          break;
      }
    }
    LOBYTE(MatchingFilteredDeviceInterfaceList) = 1;
  }
  if ( v37 || (_BYTE)MatchingFilteredDeviceInterfaceList )
  {
    *(_QWORD *)&v43 = a6;
    BYTE12(v44) = v37;
    if ( (_BYTE)MatchingFilteredDeviceInterfaceList )
    {
      *((_QWORD *)&v43 + 1) = a5;
      *(_QWORD *)&v44 = &off_1400018C0;
      DWORD2(v44) = 1;
    }
    MatchingFilteredDeviceInterfaceList = CmGetMatchingFilteredDeviceInterfaceList(
                                            a1,
                                            0,
                                            v19,
                                            0,
                                            (__int64)PnpUpdateInterfacesCallback,
                                            (__int64)&v43,
                                            0LL,
                                            0,
                                            (__int64)&v39,
                                            0);
    if ( MatchingFilteredDeviceInterfaceList < 0 )
    {
      *(_QWORD *)v38 = 0LL;
      LOBYTE(MatchingFilteredDeviceInterfaceList) = guard_dispatch_icall_no_overrides(a1, 0LL, 3LL, 1LL);
    }
  }
  return MatchingFilteredDeviceInterfaceList;
}
