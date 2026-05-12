/*
 * XREFs of NvmeNamespaceQueryIdIrp @ 0x1401A7394
 * Callers:
 *     NvmeNamespacePnpIrp @ 0x140105C68 (NvmeNamespacePnpIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeNamespaceGetCompatibleIds @ 0x140103A48 (NvmeNamespaceGetCompatibleIds.c)
 *     NvmeNamespaceGetDeviceId @ 0x140103C30 (NvmeNamespaceGetDeviceId.c)
 *     NvmeNamespaceGetDeviceIdEx @ 0x140103D18 (NvmeNamespaceGetDeviceIdEx.c)
 *     NvmeNamespaceGetHardwareIds @ 0x140103F20 (NvmeNamespaceGetHardwareIds.c)
 *     NvmeNamespaceGetHardwareIdsEx @ 0x14010434C (NvmeNamespaceGetHardwareIdsEx.c)
 *     NvmeNamespaceGetInstanceId @ 0x1401045F8 (NvmeNamespaceGetInstanceId.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeNamespaceQueryIdIrp(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v4; // rcx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  unsigned int v9; // esi
  unsigned int DeviceId; // eax
  bool v11; // zf
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  int *v14; // rax
  const EVENT_DESCRIPTOR *v15; // rdx
  unsigned __int64 v16; // rdx
  char v17; // r12
  _BYTE *v18; // r9
  unsigned __int8 v19; // r10
  char v20; // r14
  char v21; // r11
  char v22; // r13
  char *v23; // r11
  unsigned int v24; // eax
  unsigned int v25; // r8d
  unsigned int *v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // r15
  char v29; // cl
  char v30; // r8
  _BYTE *v31; // rax
  unsigned int v32; // eax
  char v33; // al
  char v35; // [rsp+60h] [rbp-19h]
  char v36; // [rsp+61h] [rbp-18h]
  wchar_t *v37; // [rsp+68h] [rbp-11h] BYREF
  unsigned int v38; // [rsp+70h] [rbp-9h]
  unsigned __int64 v39; // [rsp+78h] [rbp-1h]
  GUID v40; // [rsp+80h] [rbp+7h] BYREF

  v2 = 0;
  v4 = *(_QWORD *)(a2 + 184);
  v37 = 0LL;
  v6 = *(_DWORD *)(v4 + 8);
  if ( !v6 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 16) + 136LL) & 2) != 0 )
      DeviceId = NvmeNamespaceGetDeviceId(a1, &v37);
    else
      DeviceId = NvmeNamespaceGetDeviceIdEx(a1, &v37);
    goto LABEL_14;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 16) + 136LL) & 2) != 0 )
      DeviceId = NvmeNamespaceGetHardwareIds(a1, &v37);
    else
      DeviceId = NvmeNamespaceGetHardwareIdsEx(a1, &v37);
    goto LABEL_14;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    DeviceId = NvmeNamespaceGetCompatibleIds(a1, &v37);
    goto LABEL_14;
  }
  if ( v8 == 1 )
  {
    DeviceId = NvmeNamespaceGetInstanceId(a1, &v37);
LABEL_14:
    v9 = DeviceId;
    goto LABEL_15;
  }
  v9 = *(_DWORD *)(a2 + 48);
LABEL_15:
  v11 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a2 + 56) = v37;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v9;
  if ( v11 )
    goto LABEL_81;
  v40 = 0LL;
  IoGetActivityIdIrp(a2, &v40);
  v13 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v13 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_81;
    v15 = &EventNonReadWriteRequestComplete;
    goto LABEL_80;
  }
  if ( *(_BYTE *)v13 != 15 )
  {
    if ( *(_BYTE *)v13 != 27 )
      goto LABEL_81;
    if ( *(_BYTE *)(v13 + 1) == 7 && !*(_DWORD *)(v13 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v14 = *(int **)(a2 + 56);
        if ( v14 )
          v2 = *v14;
        McTemplateK0pqd_EtwWriteTransfer(v12, v13, &v40, a2, v2, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_81;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_81;
    v15 = &EventPnpRequestComplete;
LABEL_80:
    McTemplateK0pd_EtwWriteTransfer(v12, v15, &v40, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_81;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_81;
  v16 = *(_QWORD *)(v13 + 8);
  v17 = 0;
  v18 = 0LL;
  v35 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  if ( *(_BYTE *)(v16 + 2) != 40 )
  {
    v29 = *(_BYTE *)(v16 + 72);
    v18 = *(_BYTE **)(v16 + 32);
    v19 = *(_BYTE *)(v16 + 11);
    v17 = *(_BYTE *)(v16 + 4);
    if ( !*(_BYTE *)(v16 + 2) )
      goto LABEL_57;
    goto LABEL_81;
  }
  v23 = 0LL;
  v36 = 0;
  if ( *(_DWORD *)(v16 + 20) )
    goto LABEL_81;
  v24 = *(_DWORD *)(v16 + 56);
  v12 = 0LL;
  LODWORD(v37) = 0;
  v38 = v24;
  if ( !v24 )
    goto LABEL_54;
  v25 = v38;
  v26 = (unsigned int *)(v16 + 120);
  v39 = v16 + 120;
  while ( 1 )
  {
    v27 = *v26;
    if ( (unsigned int)v27 >= 0x80 )
    {
      v28 = *(unsigned int *)(v16 + 16);
      if ( (unsigned int)v27 < (unsigned int)v28 )
        break;
    }
LABEL_48:
    v12 = (unsigned int)(v12 + 1);
    v26 = (unsigned int *)(v39 + 4);
    LODWORD(v37) = v12;
    v39 += 4LL;
    if ( (unsigned int)v12 >= v25 )
      goto LABEL_54;
  }
  if ( *(_DWORD *)(v27 + v16) != 64 )
  {
    v12 = (unsigned int)(*(_DWORD *)(v27 + v16) - 65);
    if ( *(_DWORD *)(v27 + v16) == 65 )
    {
      v12 = v27 + 56;
      if ( v27 + 56 <= v28 )
      {
        v36 = 1;
        if ( *(_BYTE *)(v27 + v16 + 10) )
          v23 = (char *)(v27 + v16 + 24);
        v17 = *(_BYTE *)(v27 + v16 + 8);
        v18 = *(_BYTE **)(v27 + v16 + 16);
        v19 = *(_BYTE *)(v27 + v16 + 9);
      }
    }
    else if ( *(_DWORD *)(v27 + v16) == 66 )
    {
      v12 = v27 + 40;
      if ( v27 + 40 <= v28 )
      {
        if ( *(_DWORD *)(v27 + v16 + 12) )
          v23 = (char *)(v27 + v16 + 32);
        v18 = *(_BYTE **)(v27 + v16 + 24);
        goto LABEL_53;
      }
    }
    goto LABEL_46;
  }
  v12 = v27 + 40;
  if ( v27 + 40 > v28 )
  {
LABEL_46:
    if ( v36 )
      goto LABEL_54;
    LODWORD(v12) = (_DWORD)v37;
    v25 = v38;
    goto LABEL_48;
  }
  if ( *(_BYTE *)(v27 + v16 + 10) )
    v23 = (char *)(v27 + v16 + 24);
  v18 = *(_BYTE **)(v27 + v16 + 16);
LABEL_53:
  v19 = *(_BYTE *)(v27 + v16 + 9);
  v17 = *(_BYTE *)(v27 + v16 + 8);
LABEL_54:
  if ( v23 )
  {
    v29 = *v23;
    v21 = 0;
LABEL_57:
    LOBYTE(v12) = v29 - 8;
    if ( (v12 & 0x5D) == 0 )
    {
      v30 = *(_BYTE *)(v16 + 3);
      if ( v30 == 1 || !v18 || !v19 )
        goto LABEL_76;
      LOBYTE(v16) = 0;
      v12 = (unsigned __int64)&v18[v19];
      v31 = v18 + 8;
      if ( (unsigned __int8)((*v18 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v31 <= v12 )
        {
          LOBYTE(v16) = 1;
          v21 = v18[2];
          v20 = v18[1] & 0xF;
          v22 = v18[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v31 <= v12 )
        {
          v20 = v18[2] & 0xF;
          v32 = v19;
          if ( (unsigned int)(unsigned __int8)v18[7] + 8 <= v19 )
            v32 = (unsigned __int8)v18[7] + 8;
          v12 = (unsigned __int64)(v18 + 13);
          v16 = (unsigned __int64)&v18[v32];
          if ( (unsigned __int64)(v18 + 13) > v16 )
            v35 = 0;
          else
            v35 = v18[12];
          if ( (unsigned __int64)(v18 + 14) <= v16 )
            v22 = *(_BYTE *)v12;
          LOBYTE(v16) = 1;
        }
        v21 = v35;
      }
      if ( (_BYTE)v16 )
      {
        LOBYTE(v2) = v21;
        v33 = v22;
      }
      else
      {
LABEL_76:
        v20 = 0;
        v33 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v12, v16, &v40, a2, *(_DWORD *)(a2 + 48), v30, v17, v20, v2, v33, a2);
    }
  }
LABEL_81:
  IofCompleteRequest((PIRP)a2, 0);
  return v9;
}
