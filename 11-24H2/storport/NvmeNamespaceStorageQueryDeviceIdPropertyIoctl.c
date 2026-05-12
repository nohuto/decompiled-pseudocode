/*
 * XREFs of NvmeNamespaceStorageQueryDeviceIdPropertyIoctl @ 0x1401AC904
 * Callers:
 *     NvmeNamespaceStorageQueryPropertyIoctl @ 0x1401AF820 (NvmeNamespaceStorageQueryPropertyIoctl.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     NvmeNamespaceGetStorageDeviceIdProperty @ 0x1401A5160 (NvmeNamespaceGetStorageDeviceIdProperty.c)
 */

__int64 __fastcall NvmeNamespaceStorageQueryDeviceIdPropertyIoctl(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rdx
  int v5; // ebx
  int v6; // ecx
  __int64 v7; // rax
  int StorageDeviceIdProperty; // r14d
  bool v9; // zf
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  int *v12; // rax
  const EVENT_DESCRIPTOR *v13; // rdx
  unsigned __int64 v14; // rdx
  char v15; // r15
  _BYTE *v16; // r9
  unsigned __int8 v17; // r10
  char v18; // si
  char v19; // r11
  char v20; // r12
  char *v21; // r11
  unsigned int v22; // eax
  unsigned int *v23; // r13
  __int64 v24; // rax
  unsigned __int64 v25; // rbp
  char v26; // cl
  char v27; // r8
  _BYTE *v28; // rax
  unsigned int v29; // eax
  char v30; // al
  char v32; // [rsp+60h] [rbp-68h]
  char v33; // [rsp+61h] [rbp-67h]
  unsigned int v34; // [rsp+64h] [rbp-64h] BYREF
  unsigned int v35; // [rsp+68h] [rbp-60h]
  GUID v36; // [rsp+70h] [rbp-58h] BYREF

  v4 = *(_DWORD **)(a2 + 24);
  v5 = 0;
  v34 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  v6 = v4[1];
  if ( v6 )
  {
    v7 = 0LL;
    if ( v6 == 1 )
      StorageDeviceIdProperty = 0;
    else
      StorageDeviceIdProperty = -1073741637;
  }
  else
  {
    StorageDeviceIdProperty = NvmeNamespaceGetStorageDeviceIdProperty(a1, v4, &v34);
    v7 = v34;
    if ( StorageDeviceIdProperty < 0 )
      v7 = 0LL;
  }
  *(_QWORD *)(a2 + 56) = v7;
  v9 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = StorageDeviceIdProperty;
  if ( v9 )
    goto LABEL_73;
  v36 = 0LL;
  IoGetActivityIdIrp(a2, &v36);
  v11 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v11 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_73;
    v13 = &EventNonReadWriteRequestComplete;
    goto LABEL_72;
  }
  if ( *(_BYTE *)v11 != 15 )
  {
    if ( *(_BYTE *)v11 != 27 )
      goto LABEL_73;
    if ( *(_BYTE *)(v11 + 1) == 7 && !*(_DWORD *)(v11 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v12 = *(int **)(a2 + 56);
        if ( v12 )
          v5 = *v12;
        McTemplateK0pqd_EtwWriteTransfer(v10, v11, &v36, a2, v5, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_73;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_73;
    v13 = &EventPnpRequestComplete;
LABEL_72:
    McTemplateK0pd_EtwWriteTransfer(v10, v13, &v36, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_73;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_73;
  v14 = *(_QWORD *)(v11 + 8);
  v15 = 0;
  v16 = 0LL;
  v32 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  if ( *(_BYTE *)(v14 + 2) != 40 )
  {
    v26 = *(_BYTE *)(v14 + 72);
    v16 = *(_BYTE **)(v14 + 32);
    v17 = *(_BYTE *)(v14 + 11);
    v15 = *(_BYTE *)(v14 + 4);
    if ( !*(_BYTE *)(v14 + 2) )
      goto LABEL_49;
    goto LABEL_73;
  }
  v21 = 0LL;
  v33 = 0;
  if ( *(_DWORD *)(v14 + 20) )
    goto LABEL_73;
  v22 = *(_DWORD *)(v14 + 56);
  v10 = 0LL;
  v34 = 0;
  v35 = v22;
  if ( !v22 )
    goto LABEL_46;
  v23 = (unsigned int *)(v14 + 120);
  while ( 1 )
  {
    v24 = *v23;
    if ( (unsigned int)v24 >= 0x80 )
    {
      v25 = *(unsigned int *)(v14 + 16);
      if ( (unsigned int)v24 < (unsigned int)v25 )
        break;
    }
LABEL_40:
    v10 = (unsigned int)(v10 + 1);
    ++v23;
    v34 = v10;
    if ( (unsigned int)v10 >= v35 )
      goto LABEL_46;
  }
  if ( *(_DWORD *)(v24 + v14) != 64 )
  {
    v10 = (unsigned int)(*(_DWORD *)(v24 + v14) - 65);
    if ( *(_DWORD *)(v24 + v14) == 65 )
    {
      v10 = v24 + 56;
      if ( v24 + 56 <= v25 )
      {
        v33 = 1;
        if ( *(_BYTE *)(v24 + v14 + 10) )
          v21 = (char *)(v24 + v14 + 24);
        v15 = *(_BYTE *)(v24 + v14 + 8);
        v16 = *(_BYTE **)(v24 + v14 + 16);
        v17 = *(_BYTE *)(v24 + v14 + 9);
      }
    }
    else if ( *(_DWORD *)(v24 + v14) == 66 )
    {
      v10 = v24 + 40;
      if ( v24 + 40 <= v25 )
      {
        if ( *(_DWORD *)(v24 + v14 + 12) )
          v21 = (char *)(v24 + v14 + 32);
        v16 = *(_BYTE **)(v24 + v14 + 24);
        goto LABEL_45;
      }
    }
    goto LABEL_38;
  }
  v10 = v24 + 40;
  if ( v24 + 40 > v25 )
  {
LABEL_38:
    if ( v33 )
      goto LABEL_46;
    LODWORD(v10) = v34;
    goto LABEL_40;
  }
  if ( *(_BYTE *)(v24 + v14 + 10) )
    v21 = (char *)(v24 + v14 + 24);
  v16 = *(_BYTE **)(v24 + v14 + 16);
LABEL_45:
  v17 = *(_BYTE *)(v24 + v14 + 9);
  v15 = *(_BYTE *)(v24 + v14 + 8);
LABEL_46:
  if ( v21 )
  {
    v26 = *v21;
    v19 = 0;
LABEL_49:
    LOBYTE(v10) = v26 - 8;
    if ( (v10 & 0x5D) == 0 )
    {
      v27 = *(_BYTE *)(v14 + 3);
      if ( v27 == 1 || !v16 || !v17 )
        goto LABEL_68;
      LOBYTE(v14) = 0;
      v10 = (unsigned __int64)&v16[v17];
      v28 = v16 + 8;
      if ( (unsigned __int8)((*v16 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v28 <= v10 )
        {
          LOBYTE(v14) = 1;
          v19 = v16[2];
          v18 = v16[1] & 0xF;
          v20 = v16[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v28 <= v10 )
        {
          v18 = v16[2] & 0xF;
          v29 = v17;
          if ( (unsigned int)(unsigned __int8)v16[7] + 8 <= v17 )
            v29 = (unsigned __int8)v16[7] + 8;
          v10 = (unsigned __int64)(v16 + 13);
          v14 = (unsigned __int64)&v16[v29];
          if ( (unsigned __int64)(v16 + 13) > v14 )
            v32 = 0;
          else
            v32 = v16[12];
          if ( (unsigned __int64)(v16 + 14) <= v14 )
            v20 = *(_BYTE *)v10;
          LOBYTE(v14) = 1;
        }
        v19 = v32;
      }
      if ( (_BYTE)v14 )
      {
        LOBYTE(v5) = v19;
        v30 = v20;
      }
      else
      {
LABEL_68:
        v18 = 0;
        v30 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v10, v14, &v36, a2, *(_DWORD *)(a2 + 48), v27, v15, v18, v5, v30, a2);
    }
  }
LABEL_73:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)StorageDeviceIdProperty;
}
