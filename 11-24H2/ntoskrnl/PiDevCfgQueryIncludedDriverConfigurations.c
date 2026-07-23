/*
 * XREFs of PiDevCfgQueryIncludedDriverConfigurations @ 0x1409C7B64
 * Callers:
 *     PiDevCfgQueryDriverConfiguration @ 0x1409C7EF4 (PiDevCfgQueryDriverConfiguration.c)
 * Callees:
 *     PnpDuplicateUnicodeString @ 0x1404BBB34 (PnpDuplicateUnicodeString.c)
 *     PiDevCfgPopDriverNodeEntry @ 0x1404C3B40 (PiDevCfgPopDriverNodeEntry.c)
 *     wcschr @ 0x1404FD650 (wcschr.c)
 *     wcsrchr @ 0x1404FDA40 (wcsrchr.c)
 *     PiDevCfgGetDriverConfigurationKeyScope @ 0x1405A3BF8 (PiDevCfgGetDriverConfigurationKeyScope.c)
 *     PiDevCfgPushDriverNodeEntry @ 0x1405A3E38 (PiDevCfgPushDriverNodeEntry.c)
 *     PiDevCfgAppendMultiSz @ 0x140726258 (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x140728A48 (PiDevCfgQueryIncludedDriverNode.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x1409C7EF4 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgFreeDriverNode @ 0x140ABF4A0 (PiDevCfgFreeDriverNode.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgQueryIncludedDriverConfigurations(__int64 a1)
{
  __int64 v1; // r15
  int DriverConfiguration; // ebx
  wchar_t *v3; // rsi
  wchar_t *v4; // r12
  wchar_t *v5; // r14
  wchar_t *v6; // rdi
  int v7; // eax
  const wchar_t *v8; // rdi
  wchar_t v9; // cx
  int v10; // r14d
  const wchar_t *v11; // r13
  wchar_t *v12; // rax
  int v13; // r8d
  wchar_t *v14; // rax
  wchar_t *v15; // rbx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rdi
  __int64 v19; // r14
  __int64 *v20; // r12
  __int64 *v21; // r13
  __int64 v22; // rax
  __int64 *v23; // rax
  PVOID v24; // rcx
  PVOID *v25; // rax
  _QWORD *v27; // [rsp+30h] [rbp-10h] BYREF
  PVOID P; // [rsp+38h] [rbp-8h]
  __int64 v30; // [rsp+88h] [rbp+48h] BYREF
  __int64 v31; // [rsp+90h] [rbp+50h] BYREF

  v1 = a1;
  P = &v27;
  v30 = 0LL;
  v27 = &v27;
  v31 = 0LL;
  if ( !*(_QWORD *)(a1 + 376) )
  {
    DriverConfiguration = 0;
    goto LABEL_53;
  }
  DriverConfiguration = PiDevCfgPushDriverNodeEntry((__int64)&v27, a1);
  if ( DriverConfiguration < 0 )
    goto LABEL_53;
  do
  {
LABEL_4:
    if ( !PiDevCfgPopDriverNodeEntry(&v27, &v30) )
      goto LABEL_53;
    v3 = *(wchar_t **)(v30 + 376);
  }
  while ( !v3 );
  while ( 1 )
  {
    v4 = v3;
    if ( !*v3 )
    {
      if ( DriverConfiguration < 0 )
        break;
      goto LABEL_4;
    }
    v5 = v3;
    v6 = wcschr(v3, 0x3Au);
    v7 = 0;
    if ( !v6 )
      goto LABEL_32;
    *v6 = 0;
    v8 = v6 + 1;
    v3 = (wchar_t *)v8;
    if ( *v5 != 42 )
    {
      v10 = 0;
LABEL_12:
      v7 = 1;
      goto LABEL_13;
    }
    v9 = v5[1];
    v10 = 0;
    if ( v9 )
      goto LABEL_12;
LABEL_13:
    v11 = (const wchar_t *)((unsigned __int64)v4 & -(__int64)(v7 != 0));
    v12 = wcsrchr(v8, 0x2Eu);
    if ( v12 )
    {
      *v12 = 0;
      v3 = v12 + 1;
      v13 = v12[1] - 42;
      if ( v12[1] == 42 )
        v13 = v12[2];
      if ( v13 )
      {
        v3 = v12 + 1;
        if ( v12[1] )
        {
          do
          {
            v14 = wcschr(v3, 0x2Cu);
            if ( v14 )
            {
              *v14 = 0;
              v15 = v14 + 1;
            }
            else
            {
              v16 = -1LL;
              do
                ++v16;
              while ( v3[v16] );
              v15 = &v3[v16];
            }
            v10 |= PiDevCfgGetDriverConfigurationKeyScope(v3);
            v3 = v15;
          }
          while ( *v15 );
        }
      }
      else
      {
        v10 = -1;
      }
      v17 = PiDevCfgQueryIncludedDriverNode(v30, v11, v8, v10, &v31);
      DriverConfiguration = v17;
      if ( v17 < 0 )
      {
        *(_DWORD *)(v1 + 444) = v17;
        break;
      }
      v18 = v31;
      v19 = v1 + 384;
      v20 = *(__int64 **)(v1 + 384);
      if ( v20 != (__int64 *)(v1 + 384) )
      {
        do
        {
          v21 = v20;
          if ( RtlEqualUnicodeString((PCUNICODE_STRING)(v20 + 11), (PCUNICODE_STRING)(v18 + 88), 1u)
            && RtlEqualUnicodeString((PCUNICODE_STRING)(v20 + 5), (PCUNICODE_STRING)(v18 + 40), 1u) )
          {
            break;
          }
          v20 = (__int64 *)*v20;
          v21 = 0LL;
        }
        while ( v20 != (__int64 *)v19 );
        v1 = a1;
        if ( v21 )
        {
          PiDevCfgFreeDriverNode(v18);
          goto LABEL_32;
        }
      }
      v23 = *(__int64 **)(v19 + 8);
      if ( *v23 != v19 )
LABEL_57:
        __fastfail(3u);
      *(_QWORD *)v18 = v19;
      *(_QWORD *)(v18 + 8) = v23;
      *v23 = v18;
      *(_QWORD *)(v19 + 8) = v18;
      DriverConfiguration = PiDevCfgQueryDriverConfiguration(v18);
      if ( DriverConfiguration < 0 )
        break;
      if ( *(_QWORD *)(v18 + 296) && !*(_QWORD *)(v1 + 296) && !PnpDuplicateUnicodeString(v1 + 288, v18 + 288) )
      {
        DriverConfiguration = -1073741670;
        break;
      }
      if ( *(_QWORD *)(v18 + 312) )
      {
        DriverConfiguration = PiDevCfgAppendMultiSz((PUNICODE_STRING)(v1 + 304), 0LL, (const void **)(v18 + 304), 0);
        if ( DriverConfiguration < 0 )
          break;
      }
      if ( *(_QWORD *)(v18 + 328) )
      {
        DriverConfiguration = PiDevCfgAppendMultiSz((PUNICODE_STRING)(v1 + 320), 0LL, (const void **)(v18 + 320), 0);
        if ( DriverConfiguration < 0 )
          break;
      }
      if ( *(_QWORD *)(v18 + 344) )
      {
        DriverConfiguration = PiDevCfgAppendMultiSz((PUNICODE_STRING)(v1 + 336), 0LL, (const void **)(v18 + 336), 0);
        if ( DriverConfiguration < 0 )
          break;
      }
      DriverConfiguration = PiDevCfgPushDriverNodeEntry((__int64)&v27, v18);
      if ( DriverConfiguration < 0 )
        break;
    }
LABEL_32:
    v22 = -1LL;
    do
      ++v22;
    while ( v3[v22] );
    v3 += v22 + 1;
  }
LABEL_53:
  while ( v27 != &v27 )
  {
    v24 = P;
    if ( *(_QWORD ***)P != &v27 )
      goto LABEL_57;
    v25 = (PVOID *)*((_QWORD *)P + 1);
    if ( *v25 != P )
      goto LABEL_57;
    P = (PVOID)*((_QWORD *)P + 1);
    *v25 = &v27;
    ExFreePoolWithTag(v24, 0);
  }
  return (unsigned int)DriverConfiguration;
}
