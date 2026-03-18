/*
 * XREFs of SmHwAcceleratorMgrAcquireAccelerators @ 0x14078CA98
 * Callers:
 *     SmHwAcceleratorMgrPartitionRegister @ 0x14078D24C (SmHwAcceleratorMgrPartitionRegister.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     SmAllocEx @ 0x14039350C (SmAllocEx.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SmHwAcceleratorCreate @ 0x14078C87C (SmHwAcceleratorCreate.c)
 *     SmHwAcceleratorMgrReleaseAccelerators @ 0x14078D448 (SmHwAcceleratorMgrReleaseAccelerators.c)
 *     RtlpQueryRegistryValues @ 0x1409B3FD0 (RtlpQueryRegistryValues.c)
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
  unsigned int i; // r15d
  ULONG *v10; // r12
  __int64 v11; // rcx
  __int64 v12; // rdx
  _QWORD *v13; // rax
  unsigned int v14; // edi
  __int64 v15; // rcx
  ULONG v17; // [rsp+28h] [rbp-E0h]
  int v18; // [rsp+38h] [rbp-D0h]
  __int128 v19; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+58h] [rbp-B0h]
  __int128 v22; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v23; // [rsp+70h] [rbp-98h]
  _DWORD v24[2]; // [rsp+80h] [rbp-88h] BYREF
  __int128 v25; // [rsp+88h] [rbp-80h] BYREF
  __int128 v26; // [rsp+98h] [rbp-70h]
  int v27; // [rsp+A8h] [rbp-60h] BYREF
  int v28; // [rsp+ACh] [rbp-5Ch] BYREF
  __int64 v29; // [rsp+B0h] [rbp-58h]
  unsigned int v30; // [rsp+B8h] [rbp-50h]
  int v31; // [rsp+BCh] [rbp-4Ch]
  char v32; // [rsp+D0h] [rbp-38h]
  int v33; // [rsp+118h] [rbp+10h] BYREF
  __int64 v34; // [rsp+120h] [rbp+18h]
  GUID *v35; // [rsp+128h] [rbp+20h]
  int v36; // [rsp+130h] [rbp+28h]
  int v37; // [rsp+134h] [rbp+2Ch]
  _DWORD *v38; // [rsp+138h] [rbp+30h]
  void (__fastcall *v39)(__int64, ULONG_PTR, int); // [rsp+140h] [rbp+38h]
  __int64 v40; // [rsp+148h] [rbp+40h]
  int v41; // [rsp+150h] [rbp+48h]
  struct _PRIVILEGE_SET *v42; // [rsp+158h] [rbp+50h]
  int v43; // [rsp+160h] [rbp+58h]
  __int64 v44; // [rsp+168h] [rbp+60h]
  _OWORD v45[3]; // [rsp+178h] [rbp+70h] BYREF
  int v46[2]; // [rsp+1A8h] [rbp+A0h] BYREF
  int v47; // [rsp+1B0h] [rbp+A8h]
  const wchar_t *v48; // [rsp+1B8h] [rbp+B0h]
  __int64 v49; // [rsp+1C0h] [rbp+B8h]
  int v50; // [rsp+1C8h] [rbp+C0h]
  __int64 v51; // [rsp+1D0h] [rbp+C8h]
  int v52; // [rsp+1D8h] [rbp+D0h]
  __int64 v53; // [rsp+1E0h] [rbp+D8h]
  int v54; // [rsp+1E8h] [rbp+E0h]
  const wchar_t *v55; // [rsp+1F0h] [rbp+E8h]
  __int64 v56; // [rsp+1F8h] [rbp+F0h]
  int v57; // [rsp+200h] [rbp+F8h]
  __int64 v58; // [rsp+208h] [rbp+100h]
  int v59; // [rsp+210h] [rbp+108h]
  __int64 v60; // [rsp+218h] [rbp+110h]
  int v61; // [rsp+220h] [rbp+118h]
  __int128 v62; // [rsp+228h] [rbp+120h]
  int v63; // [rsp+238h] [rbp+130h]
  __int64 v64; // [rsp+240h] [rbp+138h]
  int v65; // [rsp+248h] [rbp+140h]

  v20 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  memset_0(&v33, 0, 0x58uLL);
  v28 = 0;
  v22 = 0LL;
  v23 = 0LL;
  v19 = 0LL;
  memset_0(&v27, 0, 0x64uLL);
  *(_QWORD *)v46 = 0LL;
  v51 = 0LL;
  v50 = 0x4000000;
  v47 = 288;
  v48 = L"MaxAcceleratorsPerNuma";
  v2 = *(_DWORD *)(a1 + 1312);
  v54 = 288;
  v3 = (_DWORD *)(a1 + 1308);
  v57 = 0x4000000;
  v55 = L"DescriptorsPerRequest";
  v49 = a1 + 1308;
  v52 = 0;
  memset(v45, 0, sizeof(v45));
  v53 = 0LL;
  v4 = 0LL;
  v56 = a1 + 1312;
  v5 = 0LL;
  v58 = 0LL;
  v59 = 0;
  v60 = 0LL;
  v61 = 0;
  v62 = 0LL;
  v63 = 0;
  v64 = 0LL;
  v65 = 0;
  v21 = 0LL;
  RtlpQueryRegistryValues(
    0,
    (int)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\StoreParameters",
    (int)v46,
    0,
    v17,
    1);
  if ( (unsigned int)(*(_DWORD *)(a1 + 1312) - 1) > 1 )
    *(_DWORD *)(a1 + 1312) = v2;
  if ( !*v3 )
  {
    v6 = -1073741756;
LABEL_5:
    v18 = v6;
LABEL_37:
    SmHwAcceleratorMgrReleaseAccelerators(a1);
    goto LABEL_38;
  }
  *(_QWORD *)&v25 = 2097153LL;
  *((_QWORD *)&v25 + 1) = &GUID_ACCELERATOR_TYPE_COMPRESSION;
  *((_QWORD *)&v26 + 1) = PnpDriverObject;
  *(_QWORD *)&v26 = 0LL;
  v18 = AccelInitializeOffloadWorkspace(&v25, a1 + 1320);
  v6 = v18;
  if ( v18 < 0 )
    goto LABEL_37;
  while ( 1 )
  {
    if ( HIDWORD(v20) )
    {
      v4 = (struct _PRIVILEGE_SET *)SmAllocEx(HIDWORD(v20), 1279880563LL, -1);
      if ( !v4 )
        goto LABEL_13;
    }
    v7 = AccelEnumAccelerators(&GUID_ACCELERATOR_TYPE_COMPRESSION, v4, (char *)&v20 + 4, &v20);
    v18 = v7;
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
  if ( !(_DWORD)v20 )
  {
    v6 = -1073741275;
    goto LABEL_5;
  }
  v24[0] = 1;
  v8 = 16 * v20;
  v24[1] = 3;
  if ( 16 * (unsigned __int64)(unsigned int)v20 > 0xFFFFFFFF )
  {
    v6 = -1073741675;
    goto LABEL_5;
  }
  v5 = (struct _PRIVILEGE_SET *)SmAllocEx(16LL * (unsigned int)v20, 1750232435LL, -1);
  if ( !v5 )
  {
LABEL_13:
    v6 = -1073741670;
    goto LABEL_5;
  }
  v34 = *(_QWORD *)(a1 + 1320);
  v35 = &GUID_ACCELERATOR_TYPE_COMPRESSION;
  v39 = SmHwAcceleratorMgrAccelCallback;
  v36 = v20;
  v38 = v24;
  v43 = HIDWORD(v20);
  v33 = 5767169;
  v40 = a1;
  v41 = 65537;
  v44 = 0LL;
  v37 = 2;
  v42 = v4;
  v22 = 0x200001uLL;
  *((_QWORD *)&v23 + 1) = v8;
  *(_QWORD *)&v23 = v5;
  KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v45);
  v6 = AccelAcquireResourcesSync(&v33, &v22);
  v18 = v6;
  KiUnstackDetachProcess((__int64)v45, 0LL);
  if ( v6 < 0 )
    goto LABEL_37;
  for ( i = 0; i < DWORD2(v22); i += 2 )
  {
    v19 = 0x100001uLL;
    v10 = &v5->PrivilegeCount + 2 * i;
    *((_QWORD *)&v19 + 1) = *(_QWORD *)v10;
    memset_0(&v28, 0, 0x64uLL);
    v27 = 6815745;
    v18 = AccelQueryResourceInformation(&v19, &v27);
    v6 = v18;
    if ( v18 < 0 )
      goto LABEL_37;
    if ( v31 == 2 )
    {
      v19 = 0x200100001uLL;
      *((_QWORD *)&v19 + 1) = *(_QWORD *)v10;
      memset_0(&v28, 0, 0x64uLL);
      v27 = 6815745;
      v18 = AccelQueryResourceInformation(&v19, &v27);
      v6 = v18;
      if ( v18 < 0 )
        goto LABEL_37;
      if ( (v29 & 0x100) != 0 )
      {
        v19 = 0x500100001uLL;
        *((_QWORD *)&v19 + 1) = *(_QWORD *)v10;
        memset_0(&v28, 0, 0x64uLL);
        v27 = 6815745;
        v18 = AccelQueryResourceInformation(&v19, &v27);
        v6 = v18;
        if ( v18 < 0 )
          goto LABEL_37;
        if ( (v32 & 1) != 0 )
        {
          v19 = 0x100100001uLL;
          *((_QWORD *)&v19 + 1) = *(_QWORD *)v10;
          memset_0(&v28, 0, 0x64uLL);
          v27 = 6815745;
          v18 = AccelQueryResourceInformation(&v19, &v27);
          v6 = v18;
          if ( v18 < 0 )
            goto LABEL_37;
          if ( v30 < (unsigned __int16)KeNumberNodes && *(_DWORD *)(a1 + 4LL * v30 + 1048) < *v3 )
          {
            v18 = SmHwAcceleratorCreate(a1, (__int64 *)v5 + i, v30);
            v6 = v18;
            if ( v18 < 0 )
              goto LABEL_37;
            v11 = v21;
            *(_OWORD *)v10 = 0LL;
            v12 = a1 + 16LL * *(unsigned int *)(v11 + 44) + 24;
            v13 = *(_QWORD **)(v12 + 8);
            if ( *v13 != v12 )
              __fastfail(3u);
            *(_QWORD *)v11 = v12;
            *(_QWORD *)(v11 + 8) = v13;
            *v13 = v11;
            *(_QWORD *)(v12 + 8) = v11;
            ++*(_DWORD *)(a1 + 4LL * *(unsigned int *)(v11 + 44) + 1048);
            ++*(_DWORD *)(a1 + 1304);
            v21 = 0LL;
          }
        }
      }
    }
  }
  v6 = 0;
  v18 = 0;
LABEL_38:
  if ( v4 )
    CmSiFreeMemory(v4);
  if ( v5 )
  {
    v14 = 0;
    if ( DWORD2(v22) )
    {
      do
      {
        v15 = *((_QWORD *)&v5->PrivilegeCount + v14);
        if ( v15 )
          AccelCloseResource(v15);
        ++v14;
      }
      while ( v14 < DWORD2(v22) );
      v6 = v18;
    }
    CmSiFreeMemory(v5);
  }
  return (unsigned int)v6;
}
