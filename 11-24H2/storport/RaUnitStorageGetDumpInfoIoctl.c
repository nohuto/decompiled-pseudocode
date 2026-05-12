/*
 * XREFs of RaUnitStorageGetDumpInfoIoctl @ 0x140188924
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14002C620 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidAdapterFreeDumpInfo @ 0x14003BFA8 (RaidAdapterFreeDumpInfo.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140056648 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidAdapterFreeDriverInfo @ 0x14005A3F0 (RaidAdapterFreeDriverInfo.c)
 *     RaidUnitFreeDumpInfo @ 0x14009E1F0 (RaidUnitFreeDumpInfo.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     RaidAdapterCreateDumpInfo @ 0x1401BAF04 (RaidAdapterCreateDumpInfo.c)
 *     RaidUnitCreateDumpInfo @ 0x1401BBFBC (RaidUnitCreateDumpInfo.c)
 */

__int64 __fastcall RaUnitStorageGetDumpInfoIoctl(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v3; // ebx
  int DumpInfo; // r15d
  __int64 v7; // rsi
  int IsEnabledDeviceUsageNoInline; // eax
  _DWORD *v9; // rcx
  _QWORD *v10; // rdx
  _QWORD *v11; // r9
  _QWORD *v12; // rax
  _QWORD *v13; // r10
  _DWORD *v14; // rcx
  _QWORD *v15; // r9
  _QWORD *v16; // rax
  _QWORD *v17; // r9
  _QWORD *v18; // rax
  PVOID v19; // r14
  bool v20; // zf
  unsigned __int64 v21; // rcx
  __int64 v22; // rdx
  int *v23; // rax
  const EVENT_DESCRIPTOR *v24; // rdx
  unsigned __int64 v25; // rdx
  char v26; // r13
  _BYTE *v27; // r9
  unsigned __int8 v28; // r10
  char v29; // si
  char v30; // r14
  char v31; // r11
  char *v32; // r11
  unsigned int v33; // r12d
  unsigned __int64 v34; // r14
  __int64 v35; // r8
  int v36; // ecx
  char v37; // cl
  char v38; // r8
  _BYTE *v39; // rax
  unsigned int v40; // eax
  char v41; // al
  __int64 v43; // [rsp+20h] [rbp-49h]
  __int64 v44; // [rsp+28h] [rbp-41h]
  char v45; // [rsp+60h] [rbp-9h] BYREF
  char v46; // [rsp+61h] [rbp-8h] BYREF
  char v47; // [rsp+62h] [rbp-7h]
  _DWORD *v48; // [rsp+68h] [rbp-1h] BYREF
  PVOID v49; // [rsp+70h] [rbp+7h] BYREF
  GUID v50; // [rsp+78h] [rbp+Fh] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  v45 = 0;
  v49 = 0LL;
  *(_QWORD *)&v50.Data1 = 0LL;
  v46 = 0;
  v48 = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( !*(_BYTE *)(a2 + 64) )
  {
    if ( *(_DWORD *)(v2 + 16) < 0x48u )
    {
      DumpInfo = -1073741789;
      goto LABEL_30;
    }
    v7 = *(_QWORD *)(v2 + 32);
    if ( *(_DWORD *)v7 != 72 )
    {
      DumpInfo = -1073741811;
      goto LABEL_30;
    }
    DumpInfo = RaidUnitCreateDumpInfo(a1, a2, &v50);
    if ( DumpInfo >= 0 )
    {
      DumpInfo = RaidAdapterCreateDumpInfo(
                   *(_QWORD *)(a1 + 24),
                   v7,
                   (unsigned int)&v49,
                   (unsigned int)&v45,
                   (__int64)&v48,
                   (__int64)&v46);
      if ( DumpInfo < 0 )
      {
        v19 = v49;
        v14 = v48;
      }
      else
      {
        IsEnabledDeviceUsageNoInline = Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline();
        v9 = v48;
        v10 = *(_QWORD **)&v50.Data1;
        if ( IsEnabledDeviceUsageNoInline && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v50.Data1 + 48LL) + 96LL) )
          v48[16] |= 4u;
        if ( !v46 )
        {
          v11 = *(_QWORD **)(v7 + 64);
          v12 = v9 + 2;
          if ( *v11 != v7 + 56 )
            goto LABEL_19;
          *v12 = v7 + 56;
          *((_QWORD *)v9 + 2) = v11;
          *v11 = v12;
          *(_QWORD *)(v7 + 64) = v12;
        }
        v13 = v49;
        v10[8] = v9;
        v14 = 0LL;
        v48 = 0LL;
        if ( !v45 )
        {
          v15 = *(_QWORD **)(v7 + 48);
          v16 = v13 + 1;
          if ( *v15 != v7 + 40 )
            goto LABEL_19;
          *v16 = v7 + 40;
          v13[2] = v15;
          *v15 = v16;
          *(_QWORD *)(v7 + 48) = v16;
        }
        v10[7] = v13;
        v17 = *(_QWORD **)(v7 + 32);
        v18 = v10 + 1;
        v19 = 0LL;
        v49 = 0LL;
        if ( *v17 != v7 + 24 )
LABEL_19:
          __fastfail(3u);
        *v18 = v7 + 24;
        v10[2] = v17;
        *v17 = v18;
        *(_QWORD *)(v7 + 32) = v18;
        *(_QWORD *)(v7 + 16) = v10;
        *(_QWORD *)&v50.Data1 = 0LL;
      }
      if ( !v46 && v14 )
        RaidAdapterFreeDriverInfo((PVOID *)&v48);
      if ( !v45 && v19 )
        RaidAdapterFreeDumpInfo(&v49);
    }
    if ( *(_QWORD *)&v50.Data1 )
      RaidUnitFreeDumpInfo((PVOID *)&v50);
    goto LABEL_30;
  }
  DumpInfo = -1073741790;
LABEL_30:
  v20 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = DumpInfo;
  if ( v20 )
    goto LABEL_96;
  v50 = 0LL;
  IoGetActivityIdIrp(a2, &v50);
  v22 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v22 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_96;
    v24 = &EventNonReadWriteRequestComplete;
    goto LABEL_95;
  }
  if ( *(_BYTE *)v22 != 15 )
  {
    if ( *(_BYTE *)v22 != 27 )
      goto LABEL_96;
    if ( *(_BYTE *)(v22 + 1) == 7 && !*(_DWORD *)(v22 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v23 = *(int **)(a2 + 56);
        if ( v23 )
          v3 = *v23;
        LODWORD(v44) = *(_DWORD *)(a2 + 48);
        LODWORD(v43) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v21, v22, &v50, a2, v43, v44);
      }
      goto LABEL_96;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_96;
    v24 = &EventPnpRequestComplete;
LABEL_95:
    LODWORD(v43) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v21, v24, &v50, a2, v43);
    goto LABEL_96;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_96;
  v25 = *(_QWORD *)(v22 + 8);
  v26 = 0;
  v27 = 0LL;
  v45 = 0;
  v28 = 0;
  v46 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  if ( *(_BYTE *)(v25 + 2) != 40 )
  {
    v37 = *(_BYTE *)(v25 + 72);
    v27 = *(_BYTE **)(v25 + 32);
    v28 = *(_BYTE *)(v25 + 11);
    v26 = *(_BYTE *)(v25 + 4);
    if ( !*(_BYTE *)(v25 + 2) )
      goto LABEL_71;
    goto LABEL_96;
  }
  v32 = 0LL;
  v47 = 0;
  if ( *(_DWORD *)(v25 + 20) )
    goto LABEL_96;
  v33 = 0;
  LODWORD(v48) = *(_DWORD *)(v25 + 56);
  if ( !(_DWORD)v48 )
    goto LABEL_68;
  while ( 1 )
  {
    v21 = *(unsigned int *)(v25 + 4LL * v33 + 120);
    if ( (unsigned int)v21 >= 0x80 )
    {
      v34 = *(unsigned int *)(v25 + 16);
      if ( (unsigned int)v21 < (unsigned int)v34 )
        break;
    }
LABEL_61:
    if ( ++v33 >= (unsigned int)v48 )
      goto LABEL_67;
  }
  v35 = (unsigned int)v21;
  v36 = *(_DWORD *)(v21 + v25) - 64;
  if ( v36 )
  {
    v21 = (unsigned int)(v36 - 1);
    if ( (_DWORD)v21 )
    {
      if ( (_DWORD)v21 == 1 )
      {
        v21 = v35 + 40;
        if ( v35 + 40 <= v34 )
        {
          if ( *(_DWORD *)(v35 + v25 + 12) )
            v32 = (char *)(v35 + v25 + 32);
          v27 = *(_BYTE **)(v35 + v25 + 24);
          goto LABEL_66;
        }
      }
    }
    else
    {
      v21 = v35 + 56;
      if ( v35 + 56 <= v34 )
      {
        v47 = 1;
        if ( *(_BYTE *)(v35 + v25 + 10) )
          v32 = (char *)(v35 + v25 + 24);
        v26 = *(_BYTE *)(v35 + v25 + 8);
        v27 = *(_BYTE **)(v35 + v25 + 16);
        v28 = *(_BYTE *)(v35 + v25 + 9);
      }
    }
    goto LABEL_60;
  }
  v21 = v35 + 40;
  if ( v35 + 40 > v34 )
  {
LABEL_60:
    if ( v47 )
      goto LABEL_67;
    goto LABEL_61;
  }
  if ( *(_BYTE *)(v35 + v25 + 10) )
    v32 = (char *)(v35 + v25 + 24);
  v27 = *(_BYTE **)(v35 + v25 + 16);
LABEL_66:
  v28 = *(_BYTE *)(v35 + v25 + 9);
  v26 = *(_BYTE *)(v35 + v25 + 8);
LABEL_67:
  v30 = 0;
LABEL_68:
  if ( v32 )
  {
    v37 = *v32;
    v31 = 0;
LABEL_71:
    LOBYTE(v21) = v37 - 8;
    if ( (v21 & 0x5D) == 0 )
    {
      v38 = *(_BYTE *)(v25 + 3);
      if ( v38 == 1 || !v27 || !v28 )
        goto LABEL_91;
      LOBYTE(v25) = 0;
      v21 = (unsigned __int64)&v27[v28];
      v39 = v27 + 8;
      if ( (unsigned __int8)((*v27 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v39 <= v21 )
        {
          LOBYTE(v25) = 1;
          v30 = v27[2];
          v29 = v27[1] & 0xF;
          v31 = v27[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v39 <= v21 )
        {
          v29 = v27[2] & 0xF;
          v40 = v28;
          if ( (unsigned int)(unsigned __int8)v27[7] + 8 <= v28 )
            v40 = (unsigned __int8)v27[7] + 8;
          v21 = (unsigned __int64)(v27 + 13);
          v25 = (unsigned __int64)&v27[v40];
          if ( (unsigned __int64)(v27 + 13) > v25 )
            v45 = 0;
          else
            v45 = v27[12];
          if ( (unsigned __int64)(v27 + 14) > v25 )
            v46 = 0;
          else
            v46 = *(_BYTE *)v21;
          LOBYTE(v25) = 1;
        }
        v31 = v46;
        v30 = v45;
      }
      if ( (_BYTE)v25 )
      {
        LOBYTE(v3) = v30;
        v41 = v31;
      }
      else
      {
LABEL_91:
        v29 = 0;
        v41 = 0;
      }
      LOBYTE(v44) = v38;
      LODWORD(v43) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v21, v25, &v50, a2, v43, v44, v26, v29, v3, v41, a2);
    }
  }
LABEL_96:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)DumpInfo;
}
