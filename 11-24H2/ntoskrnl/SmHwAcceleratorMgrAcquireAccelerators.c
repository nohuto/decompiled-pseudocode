/*
 * XREFs of SmHwAcceleratorMgrAcquireAccelerators @ 0x14079BF68
 * Callers:
 *     SmHwAcceleratorMgrPartitionRegister @ 0x14079C71C (SmHwAcceleratorMgrPartitionRegister.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     SmAllocEx @ 0x1402F5228 (SmAllocEx.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SmHwAcceleratorCreate @ 0x14079BD4C (SmHwAcceleratorCreate.c)
 *     SmHwAcceleratorMgrReleaseAccelerators @ 0x14079C918 (SmHwAcceleratorMgrReleaseAccelerators.c)
 *     RtlpQueryRegistryValues @ 0x1409B4DD0 (RtlpQueryRegistryValues.c)
 */

__int64 __fastcall SmHwAcceleratorMgrAcquireAccelerators(__int64 a1)
{
  int v2; // r15d
  _DWORD *v3; // r13
  struct _PRIVILEGE_SET *v4; // rdi
  struct _PRIVILEGE_SET *v5; // r14
  int v6; // ebx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int i; // r15d
  ULONG *v12; // r12
  __int64 v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rax
  unsigned int v16; // edi
  __int64 v17; // rcx
  ULONG v19; // [rsp+28h] [rbp-E0h]
  int v20; // [rsp+38h] [rbp-D0h]
  __int128 v21; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+58h] [rbp-B0h]
  __int128 v24; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v25; // [rsp+70h] [rbp-98h]
  _DWORD v26[2]; // [rsp+80h] [rbp-88h] BYREF
  __int128 v27; // [rsp+88h] [rbp-80h] BYREF
  __int128 v28; // [rsp+98h] [rbp-70h]
  int v29; // [rsp+A8h] [rbp-60h] BYREF
  int v30; // [rsp+ACh] [rbp-5Ch] BYREF
  __int64 v31; // [rsp+B0h] [rbp-58h]
  unsigned int v32; // [rsp+B8h] [rbp-50h]
  int v33; // [rsp+BCh] [rbp-4Ch]
  char v34; // [rsp+D0h] [rbp-38h]
  int v35; // [rsp+118h] [rbp+10h] BYREF
  __int64 v36; // [rsp+120h] [rbp+18h]
  GUID *v37; // [rsp+128h] [rbp+20h]
  int v38; // [rsp+130h] [rbp+28h]
  int v39; // [rsp+134h] [rbp+2Ch]
  _DWORD *v40; // [rsp+138h] [rbp+30h]
  void (__fastcall *v41)(__int64, ULONG_PTR, int); // [rsp+140h] [rbp+38h]
  __int64 v42; // [rsp+148h] [rbp+40h]
  int v43; // [rsp+150h] [rbp+48h]
  struct _PRIVILEGE_SET *v44; // [rsp+158h] [rbp+50h]
  int v45; // [rsp+160h] [rbp+58h]
  __int64 v46; // [rsp+168h] [rbp+60h]
  _OWORD v47[3]; // [rsp+178h] [rbp+70h] BYREF
  int v48[2]; // [rsp+1A8h] [rbp+A0h] BYREF
  int v49; // [rsp+1B0h] [rbp+A8h]
  const wchar_t *v50; // [rsp+1B8h] [rbp+B0h]
  __int64 v51; // [rsp+1C0h] [rbp+B8h]
  int v52; // [rsp+1C8h] [rbp+C0h]
  __int64 v53; // [rsp+1D0h] [rbp+C8h]
  int v54; // [rsp+1D8h] [rbp+D0h]
  __int64 v55; // [rsp+1E0h] [rbp+D8h]
  int v56; // [rsp+1E8h] [rbp+E0h]
  const wchar_t *v57; // [rsp+1F0h] [rbp+E8h]
  __int64 v58; // [rsp+1F8h] [rbp+F0h]
  int v59; // [rsp+200h] [rbp+F8h]
  __int64 v60; // [rsp+208h] [rbp+100h]
  int v61; // [rsp+210h] [rbp+108h]
  __int64 v62; // [rsp+218h] [rbp+110h]
  int v63; // [rsp+220h] [rbp+118h]
  __int128 v64; // [rsp+228h] [rbp+120h]
  int v65; // [rsp+238h] [rbp+130h]
  __int64 v66; // [rsp+240h] [rbp+138h]
  int v67; // [rsp+248h] [rbp+140h]

  v22 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  memset_0(&v35, 0, 0x58uLL);
  v30 = 0;
  v24 = 0LL;
  v25 = 0LL;
  v21 = 0LL;
  memset_0(&v29, 0, 0x64uLL);
  *(_QWORD *)v48 = 0LL;
  v53 = 0LL;
  v52 = 0x4000000;
  v49 = 288;
  v50 = L"MaxAcceleratorsPerNuma";
  v2 = *(_DWORD *)(a1 + 1312);
  v56 = 288;
  v3 = (_DWORD *)(a1 + 1308);
  v59 = 0x4000000;
  v57 = L"DescriptorsPerRequest";
  v51 = a1 + 1308;
  v54 = 0;
  memset(v47, 0, sizeof(v47));
  v55 = 0LL;
  v4 = 0LL;
  v58 = a1 + 1312;
  v5 = 0LL;
  v60 = 0LL;
  v61 = 0;
  v62 = 0LL;
  v63 = 0;
  v64 = 0LL;
  v65 = 0;
  v66 = 0LL;
  v67 = 0;
  v23 = 0LL;
  RtlpQueryRegistryValues(
    0,
    (int)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\StoreParameters",
    (int)v48,
    0,
    v19,
    1);
  if ( (unsigned int)(*(_DWORD *)(a1 + 1312) - 1) > 1 )
    *(_DWORD *)(a1 + 1312) = v2;
  if ( !*v3 )
  {
    v6 = -1073741756;
LABEL_5:
    v20 = v6;
LABEL_37:
    SmHwAcceleratorMgrReleaseAccelerators(a1);
    goto LABEL_38;
  }
  *(_QWORD *)&v27 = 2097153LL;
  *((_QWORD *)&v27 + 1) = &GUID_ACCELERATOR_TYPE_COMPRESSION;
  *((_QWORD *)&v28 + 1) = PnpDriverObject;
  *(_QWORD *)&v28 = 0LL;
  v20 = AccelInitializeOffloadWorkspace(&v27, a1 + 1320);
  v6 = v20;
  if ( v20 < 0 )
    goto LABEL_37;
  while ( 1 )
  {
    if ( HIDWORD(v22) )
    {
      v4 = (struct _PRIVILEGE_SET *)SmAllocEx(HIDWORD(v22), 0x4C496D73u, -1);
      if ( !v4 )
        goto LABEL_13;
    }
    v7 = AccelEnumAccelerators(&GUID_ACCELERATOR_TYPE_COMPRESSION, v4, (char *)&v22 + 4, &v22);
    v20 = v7;
    v6 = v7;
    if ( v7 >= 0 )
      break;
    if ( v7 != -1073741789 )
      goto LABEL_37;
    if ( v4 )
    {
      CmSiFreeMemory(v4);
      v4 = 0LL;
    }
  }
  if ( !(_DWORD)v22 )
  {
    v6 = -1073741275;
    goto LABEL_5;
  }
  v26[0] = 1;
  v8 = 16 * v22;
  v26[1] = 3;
  if ( 16 * (unsigned __int64)(unsigned int)v22 > 0xFFFFFFFF )
  {
    v6 = -1073741675;
    goto LABEL_5;
  }
  v5 = (struct _PRIVILEGE_SET *)SmAllocEx(16LL * (unsigned int)v22, 0x68526D73u, -1);
  if ( !v5 )
  {
LABEL_13:
    v6 = -1073741670;
    goto LABEL_5;
  }
  v36 = *(_QWORD *)(a1 + 1320);
  v37 = &GUID_ACCELERATOR_TYPE_COMPRESSION;
  v41 = SmHwAcceleratorMgrAccelCallback;
  v38 = v22;
  v40 = v26;
  v45 = HIDWORD(v22);
  v35 = 5767169;
  v42 = a1;
  v43 = 65537;
  v46 = 0LL;
  v39 = 2;
  v44 = v4;
  v24 = 0x200001uLL;
  *((_QWORD *)&v25 + 1) = v8;
  *(_QWORD *)&v25 = v5;
  KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v47);
  v6 = AccelAcquireResourcesSync(&v35, &v24);
  v20 = v6;
  KiUnstackDetachProcess((__int64)v47, 0, v9, v10);
  if ( v6 < 0 )
    goto LABEL_37;
  for ( i = 0; i < DWORD2(v24); i += 2 )
  {
    v21 = 0x100001uLL;
    v12 = &v5->PrivilegeCount + 2 * i;
    *((_QWORD *)&v21 + 1) = *(_QWORD *)v12;
    memset_0(&v30, 0, 0x64uLL);
    v29 = 6815745;
    v20 = AccelQueryResourceInformation(&v21, &v29);
    v6 = v20;
    if ( v20 < 0 )
      goto LABEL_37;
    if ( v33 == 2 )
    {
      v21 = 0x200100001uLL;
      *((_QWORD *)&v21 + 1) = *(_QWORD *)v12;
      memset_0(&v30, 0, 0x64uLL);
      v29 = 6815745;
      v20 = AccelQueryResourceInformation(&v21, &v29);
      v6 = v20;
      if ( v20 < 0 )
        goto LABEL_37;
      if ( (v31 & 0x100) != 0 )
      {
        v21 = 0x500100001uLL;
        *((_QWORD *)&v21 + 1) = *(_QWORD *)v12;
        memset_0(&v30, 0, 0x64uLL);
        v29 = 6815745;
        v20 = AccelQueryResourceInformation(&v21, &v29);
        v6 = v20;
        if ( v20 < 0 )
          goto LABEL_37;
        if ( (v34 & 1) != 0 )
        {
          v21 = 0x100100001uLL;
          *((_QWORD *)&v21 + 1) = *(_QWORD *)v12;
          memset_0(&v30, 0, 0x64uLL);
          v29 = 6815745;
          v20 = AccelQueryResourceInformation(&v21, &v29);
          v6 = v20;
          if ( v20 < 0 )
            goto LABEL_37;
          if ( v32 < (unsigned __int16)KeNumberNodes && *(_DWORD *)(a1 + 4LL * v32 + 1048) < *v3 )
          {
            v20 = SmHwAcceleratorCreate(a1, (__int64 *)v5 + i, v32);
            v6 = v20;
            if ( v20 < 0 )
              goto LABEL_37;
            v13 = v23;
            *(_OWORD *)v12 = 0LL;
            v14 = a1 + 16LL * *(unsigned int *)(v13 + 44) + 24;
            v15 = *(_QWORD **)(v14 + 8);
            if ( *v15 != v14 )
              __fastfail(3u);
            *(_QWORD *)v13 = v14;
            *(_QWORD *)(v13 + 8) = v15;
            *v15 = v13;
            *(_QWORD *)(v14 + 8) = v13;
            ++*(_DWORD *)(a1 + 4LL * *(unsigned int *)(v13 + 44) + 1048);
            ++*(_DWORD *)(a1 + 1304);
            v23 = 0LL;
          }
        }
      }
    }
  }
  v6 = 0;
  v20 = 0;
LABEL_38:
  if ( v4 )
    CmSiFreeMemory(v4);
  if ( v5 )
  {
    v16 = 0;
    if ( DWORD2(v24) )
    {
      do
      {
        v17 = *((_QWORD *)&v5->PrivilegeCount + v16);
        if ( v17 )
          AccelCloseResource(v17);
        ++v16;
      }
      while ( v16 < DWORD2(v24) );
      v6 = v20;
    }
    CmSiFreeMemory(v5);
  }
  return (unsigned int)v6;
}
