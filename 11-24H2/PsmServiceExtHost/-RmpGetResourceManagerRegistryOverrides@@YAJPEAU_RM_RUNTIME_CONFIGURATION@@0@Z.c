/*
 * XREFs of ?RmpGetResourceManagerRegistryOverrides@@YAJPEAU_RM_RUNTIME_CONFIGURATION@@0@Z @ 0x180086178
 * Callers:
 *     ?RmpGetResourceManagerRuntimeConfiguration@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@@Z @ 0x1800863D4 (-RmpGetResourceManagerRuntimeConfiguration@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@@Z.c)
 * Callees:
 *     ?HampSystemOpenKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180060B14 (-HampSystemOpenKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ?HampSystemQueryDWordValue@@YAJPEAUHKEY__@@PEBGPEAK@Z @ 0x180090744 (-HampSystemQueryDWordValue@@YAJPEAUHKEY__@@PEBGPEAK@Z.c)
 */

__int64 __fastcall RmpGetResourceManagerRegistryOverrides(
        struct _RM_RUNTIME_CONFIGURATION *a1,
        struct _RM_RUNTIME_CONFIGURATION *a2)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  LSTATUS v13; // ebx
  unsigned int v14; // eax
  int v15; // eax
  unsigned int v16; // ebx
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  _OWORD *v24; // rdi
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  unsigned int v29; // [rsp+20h] [rbp-89h] BYREF
  HKEY hKey; // [rsp+28h] [rbp-81h] BYREF
  HKEY v31; // [rsp+30h] [rbp-79h] BYREF
  __int128 v32; // [rsp+40h] [rbp-69h]
  __int128 v33; // [rsp+50h] [rbp-59h]
  __int128 v34; // [rsp+60h] [rbp-49h]
  __int128 v35; // [rsp+70h] [rbp-39h]
  __int128 v36; // [rsp+80h] [rbp-29h]
  __int128 v37; // [rsp+90h] [rbp-19h]
  __int128 v38; // [rsp+A0h] [rbp-9h]
  __int128 v39; // [rsp+B0h] [rbp+7h]
  __int128 v40; // [rsp+C0h] [rbp+17h] BYREF
  __int128 v41; // [rsp+D0h] [rbp+27h]
  __int128 v42; // [rsp+E0h] [rbp+37h]
  unsigned int v43; // [rsp+110h] [rbp+67h] BYREF
  unsigned int v44; // [rsp+120h] [rbp+77h] BYREF
  int v45; // [rsp+128h] [rbp+7Fh] BYREF

  v2 = *(_OWORD *)a1;
  v45 = 0;
  v3 = *((_OWORD *)a1 + 1);
  v44 = 0;
  v29 = 0;
  v43 = 0;
  hKey = 0LL;
  v31 = 0LL;
  v32 = v2;
  v5 = *((_OWORD *)a1 + 2);
  v33 = v3;
  v6 = *((_OWORD *)a1 + 3);
  v34 = v5;
  v7 = *((_OWORD *)a1 + 4);
  v35 = v6;
  v8 = *((_OWORD *)a1 + 5);
  v36 = v7;
  v9 = *((_OWORD *)a1 + 6);
  v37 = v8;
  v10 = *((_OWORD *)a1 + 8);
  v38 = v9;
  v39 = *((_OWORD *)a1 + 7);
  v11 = *((_OWORD *)a1 + 9);
  v40 = v10;
  v12 = *((_OWORD *)a1 + 10);
  v41 = v11;
  v42 = v12;
  v13 = HampSystemOpenKey(HKEY_LOCAL_MACHINE, L"System\\ResourceManager", 0x20019u, &hKey);
  if ( v13 < 0 )
    goto LABEL_21;
  if ( (int)HampSystemQueryDWordValue(hKey, L"MemoryFlags", &v43) >= 0 )
  {
    v14 = v32;
    if ( (v43 & 0xFFFFFFF0) == 0 )
      v14 = v43;
    LODWORD(v32) = v14;
  }
  v15 = HampSystemQueryDWordValue(hKey, L"CustomizationFlags", &v44);
  v16 = DWORD1(v32);
  if ( v15 >= 0 )
  {
    if ( (v44 & 0xFFFFFE00) == 0 )
      v16 = v44;
    DWORD1(v32) = v16;
  }
  RtlGetDeviceFamilyInfoEnum(0LL, &v45, 0LL);
  if ( v45 == 3 )
  {
    v16 |= 0x40u;
  }
  else
  {
    if ( v45 != 10 && v45 != 16 )
      goto LABEL_16;
    v16 |= 0x80u;
  }
  DWORD1(v32) = v16;
LABEL_16:
  if ( HampSystemOpenKey(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows NT\\CurrentVersion\\ResourceManager",
         0x20019u,
         &v31) >= 0
    && (int)HampSystemQueryDWordValue(v31, L"SimulateCommitSavings", &v29) >= 0
    && v29 <= 1 )
  {
    DWORD1(v32) = v16 & 0xFFFFFFFD | (2 * (v29 & 1));
  }
  HampSystemQueryDWordValue(hKey, L"UserPresenceIoDeduction", (unsigned int *)&v40);
  v17 = v33;
  *(_OWORD *)a2 = v32;
  v18 = v34;
  *((_OWORD *)a2 + 1) = v17;
  v19 = v35;
  *((_OWORD *)a2 + 2) = v18;
  v20 = v36;
  *((_OWORD *)a2 + 3) = v19;
  v21 = v37;
  *((_OWORD *)a2 + 4) = v20;
  v22 = v38;
  *((_OWORD *)a2 + 5) = v21;
  v23 = v39;
  *((_OWORD *)a2 + 6) = v22;
  v24 = (_OWORD *)((char *)a2 + 128);
  v25 = v40;
  v13 = 0;
  *(v24 - 1) = v23;
  v26 = v41;
  *v24 = v25;
  v27 = v42;
  v24[1] = v26;
  v24[2] = v27;
LABEL_21:
  if ( hKey )
    RegCloseKey(hKey);
  if ( v31 )
    RegCloseKey(v31);
  return (unsigned int)v13;
}
