/*
 * XREFs of PiDevCfgFindDeviceMigrationNode @ 0x1407270E0
 * Callers:
 *     PiDevCfgMigrateDevice @ 0x1409CCE1C (PiDevCfgMigrateDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     PiDevCfgGetMigrationDeviceIdScore @ 0x140496D24 (PiDevCfgGetMigrationDeviceIdScore.c)
 *     PnpMultiSzContainsString @ 0x1404B23C0 (PnpMultiSzContainsString.c)
 *     PnpValidateRegistryDword @ 0x1404C0614 (PnpValidateRegistryDword.c)
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwEnumerateValueKey @ 0x1406A7610 (ZwEnumerateValueKey.c)
 *     ZwSetValueKey @ 0x1406A7FB0 (ZwSetValueKey.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     NtQueryKey @ 0x140845A20 (NtQueryKey.c)
 *     RtlCompareUnicodeStrings @ 0x14088C7D0 (RtlCompareUnicodeStrings.c)
 *     _CmIsRootEnumeratedDevice @ 0x1408B63E8 (_CmIsRootEnumeratedDevice.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     RtlGUIDFromString @ 0x1408C7C70 (RtlGUIDFromString.c)
 *     IopGetRegistryValue @ 0x1409B5F9C (IopGetRegistryValue.c)
 *     PiDevCfgGetDriverPackageId @ 0x1409C9F54 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgQueryObjectProperties @ 0x1409CA030 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgFreeDeviceMigrationNode @ 0x1409D1540 (PiDevCfgFreeDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x1409D1CC4 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x140A640A4 (PiDevCfgClearDeviceMigrationNode.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgFindDeviceMigrationNode(__int64 a1, __int64 a2, void *a3, int a4, PVOID **a5)
{
  ULONG v5; // r15d
  int v6; // r14d
  __int64 v7; // r12
  __int64 v8; // r13
  PVOID *v9; // rsi
  NTSTATUS v10; // edi
  ULONG v11; // ebx
  WCHAR *v12; // rdi
  const UNICODE_STRING *v13; // rcx
  NTSTATUS v14; // eax
  WCHAR v15; // dx
  int v16; // eax
  wchar_t **v17; // rbx
  PVOID *v18; // rax
  const wchar_t *v19; // rdx
  int v20; // r14d
  wchar_t **v21; // rdi
  __int64 v22; // r13
  __int64 *v23; // r15
  __int64 v24; // rbx
  int *v25; // r12
  __int16 MigrationDeviceIdScore; // ax
  __int64 v27; // rbx
  bool v28; // cl
  bool v29; // al
  wchar_t *v30; // rdi
  __int64 v31; // rax
  int v32; // r15d
  __int64 v33; // r9
  __int64 v34; // rdx
  int v35; // ecx
  __int64 v36; // r9
  __int64 v37; // rdx
  int v38; // ecx
  wchar_t *Buffer; // rax
  __int64 v40; // r13
  __int64 v41; // rax
  __int64 v42; // rcx
  int v43; // ecx
  __m128i *v44; // rax
  const WCHAR *v45; // xmm0_8
  __int64 v46; // rax
  unsigned __int64 v47; // rcx
  bool v48; // zf
  PVOID *v49; // rax
  PVOID v50; // rcx
  PVOID *v51; // rbx
  unsigned int *v52; // rcx
  PVOID *v53; // rcx
  PVOID **v54; // rax
  PVOID v55; // rcx
  __int64 v56; // rax
  int ObjectProperties; // [rsp+30h] [rbp-D0h]
  int v59; // [rsp+34h] [rbp-CCh]
  ULONG v60; // [rsp+38h] [rbp-C8h]
  WCHAR *P; // [rsp+40h] [rbp-C0h]
  PVOID v63; // [rsp+50h] [rbp-B0h] BYREF
  PVOID *v64; // [rsp+58h] [rbp-A8h]
  ULONG ResultLength; // [rsp+60h] [rbp-A0h] BYREF
  int v66; // [rsp+64h] [rbp-9Ch] BYREF
  int v67; // [rsp+68h] [rbp-98h] BYREF
  ULONG v68; // [rsp+6Ch] [rbp-94h]
  int v69; // [rsp+70h] [rbp-90h]
  int Data; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v71; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING v74; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v75; // [rsp+B0h] [rbp-50h]
  __int64 v76; // [rsp+B8h] [rbp-48h]
  UNICODE_STRING v77; // [rsp+C0h] [rbp-40h] BYREF
  PCWCH String2; // [rsp+D0h] [rbp-30h]
  UNICODE_STRING ValueName; // [rsp+D8h] [rbp-28h] BYREF
  const DEVPROPKEY *v80; // [rsp+F0h] [rbp-10h] BYREF
  int v81; // [rsp+F8h] [rbp-8h]
  UNICODE_STRING *p_DestinationString; // [rsp+100h] [rbp+0h]
  int v83; // [rsp+108h] [rbp+8h]
  int v84; // [rsp+10Ch] [rbp+Ch]
  int v85; // [rsp+110h] [rbp+10h]
  const DEVPROPKEY *v86; // [rsp+118h] [rbp+18h]
  int v87; // [rsp+120h] [rbp+20h]
  UNICODE_STRING *p_UnicodeString; // [rsp+128h] [rbp+28h]
  int v89; // [rsp+134h] [rbp+34h]
  int v90; // [rsp+138h] [rbp+38h]
  HANDLE KeyHandle; // [rsp+140h] [rbp+40h]
  PVOID **v92; // [rsp+148h] [rbp+48h]
  GUID Guid; // [rsp+150h] [rbp+50h] BYREF
  __int128 KeyInformation; // [rsp+160h] [rbp+60h] BYREF
  __int128 v95; // [rsp+170h] [rbp+70h]
  __int64 v96; // [rsp+180h] [rbp+80h]

  v5 = 0;
  v92 = a5;
  v96 = 0LL;
  v6 = a4;
  KeyHandle = a3;
  v64 = &v63;
  v75 = a2;
  v63 = &v63;
  v76 = a1;
  v7 = a2;
  v8 = a1;
  v71 = 0LL;
  v59 = 0;
  v67 = 0;
  v9 = 0LL;
  v66 = 0;
  KeyInformation = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v95 = 0LL;
  UnicodeString.Buffer = 0LL;
  Guid = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&v77.Length = 0LL;
  v77.Buffer = 0LL;
  LOWORD(v69) = 0;
  String2 = 0LL;
  *(_QWORD *)&v74.Length = 0LL;
  v74.Buffer = 0LL;
  ValueName = 0LL;
  Data = 0;
  ResultLength = 0;
  v10 = NtQueryKey(a3, KeyCachedInformation, &KeyInformation, 0x28u, &ResultLength);
  if ( v10 >= 0 )
  {
    if ( !DWORD1(v95) )
      goto LABEL_144;
    v11 = HIDWORD(v95) + 2 * (DWORD2(v95) + 13);
    v60 = v11;
    P = (WCHAR *)ExAllocatePool2(0x100uLL, v11, 0x63647050u);
    v12 = P;
    if ( !P )
    {
      v10 = -1073741670;
      goto LABEL_145;
    }
    v13 = *(const UNICODE_STRING **)(v8 + 40);
    if ( v13 )
    {
      v10 = RtlGUIDFromString(v13, &Guid);
      if ( v10 < 0 )
        goto LABEL_145;
      v12 = P;
    }
    while ( 1 )
    {
      v68 = v5;
      v14 = ZwEnumerateValueKey(KeyHandle, v5, KeyValueFullInformation, v12, v11, &ResultLength);
      ObjectProperties = v14;
      v10 = v14;
      if ( v14 == -2147483622 )
        break;
      if ( v14 != -2147483643 )
      {
        if ( v14 < 0 )
          goto LABEL_113;
        v12 = P;
        if ( PnpValidateRegistryDword((__int64)P) )
          v6 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
        P[((unsigned __int64)*((unsigned int *)P + 4) >> 1) + 10] = v15;
        if ( !(unsigned __int8)CmIsRootEnumeratedDevice(P + 10) )
        {
          v16 = PiDevCfgQueryDeviceMigrationNode(v8, P + 10, &v71);
          ObjectProperties = v16;
          v10 = v16;
          if ( v16 == -1073741772 )
          {
            v71 = 0LL;
            PiDevCfgClearDeviceMigrationNode(v8, P + 10);
            v12 = P;
            goto LABEL_18;
          }
          if ( v16 < 0 )
            goto LABEL_113;
          v17 = (wchar_t **)v71;
          *(_DWORD *)(v71 + 180) = v6;
          v18 = v64;
          if ( *v64 != &v63 )
            goto LABEL_149;
          v17[1] = (wchar_t *)v64;
          *v17 = (wchar_t *)&v63;
          *v18 = v17;
          v19 = *(const wchar_t **)(v7 + 8);
          v64 = (PVOID *)v17;
          v20 = wcsicmp(v17[4], v19) != 0 ? 0 : 0x10000000;
          if ( (*((_DWORD *)v17 + 45) & 0x10000000) != 0 && v20 == 0 )
            *((_DWORD *)v17 + 4) |= 1u;
          v21 = v17 + 7;
          v22 = v75 - (_QWORD)v17;
          v23 = &qword_140B3CF60;
          v24 = 2LL;
          v25 = &v67;
          do
          {
            MigrationDeviceIdScore = PiDevCfgGetMigrationDeviceIdScore(*v21, *(wchar_t **)((char *)v21 + v22 - 8));
            *(_WORD *)v25 = MigrationDeviceIdScore;
            if ( MigrationDeviceIdScore != -1 )
              v20 |= *(_DWORD *)v23;
            v21 += 2;
            v25 = (int *)((char *)v25 + 2);
            v23 = (__int64 *)((char *)v23 + 4);
            --v24;
          }
          while ( v24 );
          v27 = v71;
          if ( (*(_DWORD *)(v71 + 180) & 0x10000) != 0 )
          {
            if ( (v20 & 0x10000) != 0 )
            {
              v28 = (v20 & 0x11000) == 0;
              v29 = (*(_DWORD *)(v71 + 180) & 0x1000) != 0;
              goto LABEL_33;
            }
            goto LABEL_34;
          }
          v28 = (*(_DWORD *)(v71 + 180) & 0x1000) != 0;
          v29 = (v20 & 0x1000) == 0;
LABEL_33:
          if ( v28 && v29 )
LABEL_34:
            *(_DWORD *)(v71 + 16) |= 1u;
          v30 = *(wchar_t **)(v27 + 144);
          v7 = v75;
          if ( v30 && *(_QWORD *)(v75 + 80) )
          {
            while ( *v30 )
            {
              if ( PnpMultiSzContainsString(*(wchar_t **)(v7 + 80), v30) )
              {
                v20 |= 0x200u;
                *(_QWORD *)(v27 + 152) = v30;
                break;
              }
              v31 = -1LL;
              do
                ++v31;
              while ( v30[v31] );
              v30 += v31 + 1;
            }
          }
          if ( (*(_DWORD *)(v27 + 180) & 0x200) != 0 && (v20 & 0x200) == 0 )
            *(_DWORD *)(v27 + 16) |= 1u;
          v32 = v59;
          if ( *(_QWORD *)(v27 + 128) )
          {
            if ( (v59 & 0x100) == 0 )
            {
              memset_0(&v80, 0, 0x50uLL);
              v33 = *(_QWORD *)(v7 + 16);
              v34 = *(_QWORD *)(v7 + 8);
              v80 = &DEVPKEY_Device_LocationInfo;
              p_DestinationString = &DestinationString;
              v81 = 18;
              v84 = 6;
              ObjectProperties = PiDevCfgQueryObjectProperties(v35, v34, 1, v33, (__int64)&v80, 1);
              v10 = ObjectProperties;
              if ( ObjectProperties < 0 )
                goto LABEL_113;
              if ( v85 < 0 )
                RtlInitUnicodeString(&DestinationString, 0LL);
              v32 = v59 | 0x100;
              v59 |= 0x100u;
            }
            if ( DestinationString.Buffer
              && !RtlCompareUnicodeStrings(
                    *(PCWCH *)(v27 + 128),
                    (unsigned __int64)*(unsigned __int16 *)(v27 + 120) >> 1,
                    DestinationString.Buffer,
                    (unsigned __int64)DestinationString.Length >> 1,
                    1u) )
            {
              v20 |= 0x100u;
            }
          }
          if ( (v20 & 0x300) == 0 && (*(_DWORD *)(v27 + 180) & 0x100) != 0 )
            *(_DWORD *)(v27 + 16) |= 1u;
          if ( (v32 & 0x30) == 0 )
          {
            memset_0(&v80, 0, 0x50uLL);
            v36 = *(_QWORD *)(v7 + 16);
            v37 = *(_QWORD *)(v7 + 8);
            v80 = &DEVPKEY_Device_Capabilities;
            p_DestinationString = (UNICODE_STRING *)&v66;
            v86 = &DEVPKEY_Device_BusReportedDeviceDesc;
            p_UnicodeString = &UnicodeString;
            v81 = 7;
            v83 = 4;
            v87 = 18;
            v89 = 6;
            ObjectProperties = PiDevCfgQueryObjectProperties(v38, v37, 1, v36, (__int64)&v80, 2);
            v10 = ObjectProperties;
            if ( ObjectProperties < 0 )
              goto LABEL_113;
            if ( v90 < 0 )
              RtlInitUnicodeString(&UnicodeString, 0LL);
            v32 |= 0x30u;
            v59 = v32;
          }
          if ( ((*(_BYTE *)(v27 + 96) ^ (unsigned __int8)v66) & 0x10) != 0 )
          {
            if ( (*(_DWORD *)(v27 + 180) & 0x10) != 0 || (v66 & 0x10) != 0 )
              *(_DWORD *)(v27 + 16) |= 1u;
          }
          else
          {
            v20 |= 0x10u;
          }
          if ( *(_QWORD *)(v27 + 112) )
          {
            Buffer = UnicodeString.Buffer;
            if ( UnicodeString.Buffer )
            {
              if ( RtlCompareUnicodeStrings(
                     *(PCWCH *)(v27 + 112),
                     (unsigned __int64)*(unsigned __int16 *)(v27 + 104) >> 1,
                     UnicodeString.Buffer,
                     (unsigned __int64)UnicodeString.Length >> 1,
                     1u) )
              {
                goto LABEL_69;
              }
LABEL_72:
              v20 |= 0x20u;
LABEL_73:
              if ( (*(_BYTE *)(v27 + 180) & 0x20) != 0 && (v20 & 0x20) == 0 )
                *(_DWORD *)(v27 + 16) |= 1u;
              if ( *(_QWORD *)(v27 + 168) )
              {
                if ( (v32 & 2) == 0 )
                {
                  v40 = v76;
                  v41 = *(_QWORD *)(v76 + 48);
                  if ( v41 )
                  {
                    v42 = *(_QWORD *)(v41 + 8);
                    if ( v42 )
                    {
                      if ( (int)PiDevCfgGetDriverPackageId(v42, &v77) >= 0 )
                      {
                        memset_0(&v80, 0, 0x50uLL);
                        v80 = (const DEVPROPKEY *)&DEVPKEY_DriverPackage_OriginalInfName;
                        p_DestinationString = &v74;
                        v81 = 18;
                        v84 = 6;
                        v10 = PiDevCfgQueryObjectProperties(v43, v77.Buffer, 8, 0, (__int64)&v80, 1);
                        ObjectProperties = v10;
                        if ( v10 < 0 )
                          goto LABEL_113;
                        if ( v85 < 0 )
                          RtlInitUnicodeString(&v74, 0LL);
                      }
                      v44 = (__m128i *)&v74;
                      if ( !v74.Buffer )
                        v44 = *(__m128i **)(v40 + 48);
                      v45 = (const WCHAR *)v44->m128i_i64[1];
                      v69 = _mm_cvtsi128_si32(*v44);
                      String2 = v45;
                    }
                  }
                  v59 = v32 | 2;
                }
                if ( String2
                  && !RtlCompareUnicodeStrings(
                        *(PCWCH *)(v27 + 168),
                        (unsigned __int64)*(unsigned __int16 *)(v27 + 160) >> 1,
                        String2,
                        (unsigned __int64)(unsigned __int16)v69 >> 1,
                        1u) )
                {
                  v20 |= 2u;
                }
              }
              if ( (*(_BYTE *)(v27 + 180) & 2) != 0 && (v20 & 2) == 0 )
                *(_DWORD *)(v27 + 16) |= 1u;
              v46 = *(_QWORD *)(v27 + 80) - *(_QWORD *)&Guid.Data1;
              if ( !v46 )
                v46 = *(_QWORD *)(v27 + 88) - *(_QWORD *)Guid.Data4;
              if ( v46 )
              {
                if ( (*(_DWORD *)(v27 + 180) & 1) != 0 )
                  *(_DWORD *)(v27 + 16) |= 1u;
              }
              else
              {
                v20 |= 1u;
              }
              v47 = (HIWORD(v67) | ((unsigned __int64)(unsigned __int16)v67 << 16)) << 16;
              *(_QWORD *)(v27 + 184) = v47;
              if ( (v20 & 0x10000000) == 0 )
              {
                v47 |= 0xF000000000000000uLL;
                *(_QWORD *)(v27 + 184) = v47;
              }
              if ( (v20 & 0x200) == 0 )
              {
                v47 |= 0xF000uLL;
                *(_QWORD *)(v27 + 184) = v47;
              }
              if ( (v20 & 0x100) == 0 )
              {
                v47 |= 0x100uLL;
                *(_QWORD *)(v27 + 184) = v47;
              }
              if ( (v20 & 0x20) == 0 )
              {
                v47 |= 0x20uLL;
                *(_QWORD *)(v27 + 184) = v47;
              }
              if ( (v20 & 0x10) == 0 )
              {
                v47 |= 0x10uLL;
                *(_QWORD *)(v27 + 184) = v47;
              }
              if ( (v20 & 2) == 0 )
              {
                v47 |= 2uLL;
                *(_QWORD *)(v27 + 184) = v47;
              }
              v12 = P;
              v48 = (v20 & 1) == 0;
              v6 = a4;
              v5 = v68;
              v8 = v76;
              if ( v48 )
                *(_QWORD *)(v27 + 184) = v47 | 1;
LABEL_19:
              v11 = v60;
              goto LABEL_20;
            }
          }
          else
          {
LABEL_69:
            Buffer = UnicodeString.Buffer;
          }
          if ( !*(_QWORD *)(v27 + 112) && !Buffer )
            goto LABEL_72;
          goto LABEL_73;
        }
LABEL_18:
        v6 = a4;
        goto LABEL_19;
      }
      ExFreePoolWithTag(P, 0);
      v11 = ResultLength + 2;
      v60 = ResultLength + 2;
      P = (WCHAR *)ExAllocatePool2(0x100uLL, ResultLength + 2, 0x63647050u);
      v12 = P;
      if ( !P )
      {
        v10 = -1073741670;
        ObjectProperties = -1073741670;
        goto LABEL_113;
      }
      --v5;
LABEL_20:
      ++v5;
    }
    v10 = 0;
    ObjectProperties = 0;
LABEL_113:
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v10 >= 0 )
    {
      v49 = (PVOID *)v63;
      if ( v63 == &v63 )
        goto LABEL_144;
      while ( 1 )
      {
        v50 = v49[23];
        if ( v50 != (PVOID)-1LL )
        {
          if ( !v9 || v9[23] > v50 )
          {
LABEL_126:
            v9 = v49;
            goto LABEL_127;
          }
          if ( v9[23] == v50 )
          {
            if ( PnpSetupInProgress && *((_DWORD *)v49 + 44) && !*((_DWORD *)v9 + 44) )
              goto LABEL_126;
            *((_DWORD *)v9 + 4) |= 2u;
            *((_DWORD *)v49 + 4) |= 2u;
          }
        }
LABEL_127:
        v49 = (PVOID *)*v49;
        if ( v49 == &v63 )
        {
          if ( v9 )
          {
            if ( ((_DWORD)v9[2] & 2) != 0 )
            {
              v51 = (PVOID *)v63;
              Data = 1;
              if ( v63 != &v63 )
              {
                do
                {
                  if ( ((_DWORD)v51[2] & 2) != 0 && v51[23] == v9[23] )
                  {
                    *(_DWORD *)&ValueName.Length = 1310738;
                    ValueName.Buffer = L"Duplicate";
                    ZwSetValueKey(v51[5], &ValueName, 0, 4u, &Data, 4u);
                  }
                  v51 = (PVOID *)*v51;
                }
                while ( v51 != &v63 );
                v10 = ObjectProperties;
              }
            }
            else if ( (int)IopGetRegistryValue(v9[5]) >= 0 )
            {
              if ( PnpValidateRegistryDword((__int64)P) && *(unsigned int *)((char *)v52 + v52[2]) )
                *((_DWORD *)v9 + 4) |= 2u;
              ExFreePoolWithTag(v52, 0);
            }
            v53 = (PVOID *)*v9;
            if ( *((PVOID **)*v9 + 1) == v9 )
            {
              v54 = (PVOID **)v9[1];
              if ( *v54 == v9 )
              {
                *v54 = v53;
                v53[1] = v54;
                *v92 = v9;
                break;
              }
            }
LABEL_149:
            __fastfail(3u);
          }
LABEL_144:
          v10 = -1073741275;
          break;
        }
      }
    }
  }
LABEL_145:
  while ( 1 )
  {
    v55 = v63;
    if ( v63 == &v63 )
      break;
    if ( *((PVOID **)v63 + 1) != &v63 )
      goto LABEL_149;
    v56 = *(_QWORD *)v63;
    if ( *(PVOID *)(*(_QWORD *)v63 + 8LL) != v63 )
      goto LABEL_149;
    v63 = *(PVOID *)v63;
    *(_QWORD *)(v56 + 8) = &v63;
    PiDevCfgFreeDeviceMigrationNode(v55);
  }
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&v77);
  RtlFreeAnsiString(&v74);
  return (unsigned int)v10;
}
