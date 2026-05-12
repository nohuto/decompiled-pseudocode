/*
 * XREFs of NvmeNamespaceDiskIsWritableIoctl @ 0x1401A4090
 * Callers:
 *     NvmeNamespaceDeviceControlIrp @ 0x1401A2234 (NvmeNamespaceDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeControllerGetHealthInfoLog @ 0x1400C7EF4 (NvmeControllerGetHealthInfoLog.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeNamespaceDiskIsWritableIoctl(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v4; // rcx
  int HealthInfoLog; // esi
  bool v7; // zf
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  int *v10; // rax
  const EVENT_DESCRIPTOR *v11; // rdx
  __int64 v12; // rdx
  char v13; // r15
  _BYTE *v14; // r9
  unsigned __int8 v15; // r10
  char v16; // bp
  char v17; // r11
  char v18; // r12
  char *v19; // r11
  unsigned int *v20; // r13
  __int64 v21; // rax
  unsigned __int64 v22; // r14
  char v23; // cl
  char v24; // r8
  _BYTE *v25; // rax
  unsigned int v26; // eax
  unsigned __int64 v27; // r8
  char v28; // al
  char v30; // [rsp+60h] [rbp-68h]
  char v31; // [rsp+61h] [rbp-67h]
  int v32; // [rsp+64h] [rbp-64h]
  unsigned int v33; // [rsp+68h] [rbp-60h]
  GUID v34; // [rsp+70h] [rbp-58h] BYREF

  v2 = 0;
  v4 = *(_QWORD *)(a1 + 16);
  HealthInfoLog = 0;
  if ( (*(_DWORD *)(v4 + 136) & 0x200000) != 0
    || (HealthInfoLog = NvmeControllerGetHealthInfoLog((_QWORD *)v4, 0), HealthInfoLog >= 0) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 136LL) & 0x10000000) != 0 )
      HealthInfoLog = -1073741662;
  }
  v7 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = HealthInfoLog;
  if ( v7 )
    goto LABEL_71;
  v34 = 0LL;
  IoGetActivityIdIrp(a2, &v34);
  v9 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v9 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_71;
    v11 = &EventNonReadWriteRequestComplete;
    goto LABEL_70;
  }
  if ( *(_BYTE *)v9 != 15 )
  {
    if ( *(_BYTE *)v9 != 27 )
      goto LABEL_71;
    if ( *(_BYTE *)(v9 + 1) == 7 && !*(_DWORD *)(v9 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v10 = *(int **)(a2 + 56);
        if ( v10 )
          v2 = *v10;
        McTemplateK0pqd_EtwWriteTransfer(v8, v9, &v34, a2, v2, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_71;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_71;
    v11 = &EventPnpRequestComplete;
LABEL_70:
    McTemplateK0pd_EtwWriteTransfer(v8, v11, &v34, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_71;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_71;
  v12 = *(_QWORD *)(v9 + 8);
  v13 = 0;
  v14 = 0LL;
  v30 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  if ( *(_BYTE *)(v12 + 2) != 40 )
  {
    v23 = *(_BYTE *)(v12 + 72);
    v14 = *(_BYTE **)(v12 + 32);
    v15 = *(_BYTE *)(v12 + 11);
    v13 = *(_BYTE *)(v12 + 4);
    if ( !*(_BYTE *)(v12 + 2) )
      goto LABEL_47;
    goto LABEL_71;
  }
  v19 = 0LL;
  v31 = 0;
  if ( *(_DWORD *)(v12 + 20) )
    goto LABEL_71;
  v8 = 0LL;
  v32 = 0;
  v33 = *(_DWORD *)(v12 + 56);
  if ( !v33 )
    goto LABEL_44;
  v20 = (unsigned int *)(v12 + 120);
  while ( 1 )
  {
    v21 = *v20;
    if ( (unsigned int)v21 >= 0x80 )
    {
      v22 = *(unsigned int *)(v12 + 16);
      if ( (unsigned int)v21 < (unsigned int)v22 )
        break;
    }
LABEL_38:
    v8 = (unsigned int)(v8 + 1);
    ++v20;
    v32 = v8;
    if ( (unsigned int)v8 >= v33 )
      goto LABEL_44;
  }
  if ( *(_DWORD *)(v21 + v12) != 64 )
  {
    v8 = (unsigned int)(*(_DWORD *)(v21 + v12) - 65);
    if ( *(_DWORD *)(v21 + v12) == 65 )
    {
      v8 = v21 + 56;
      if ( v21 + 56 <= v22 )
      {
        v31 = 1;
        if ( *(_BYTE *)(v21 + v12 + 10) )
          v19 = (char *)(v21 + v12 + 24);
        v13 = *(_BYTE *)(v21 + v12 + 8);
        v14 = *(_BYTE **)(v21 + v12 + 16);
        v15 = *(_BYTE *)(v21 + v12 + 9);
      }
    }
    else if ( *(_DWORD *)(v21 + v12) == 66 )
    {
      v8 = v21 + 40;
      if ( v21 + 40 <= v22 )
      {
        if ( *(_DWORD *)(v21 + v12 + 12) )
          v19 = (char *)(v21 + v12 + 32);
        v14 = *(_BYTE **)(v21 + v12 + 24);
        goto LABEL_43;
      }
    }
    goto LABEL_36;
  }
  v8 = v21 + 40;
  if ( v21 + 40 > v22 )
  {
LABEL_36:
    if ( v31 )
      goto LABEL_44;
    LODWORD(v8) = v32;
    goto LABEL_38;
  }
  if ( *(_BYTE *)(v21 + v12 + 10) )
    v19 = (char *)(v21 + v12 + 24);
  v14 = *(_BYTE **)(v21 + v12 + 16);
LABEL_43:
  v15 = *(_BYTE *)(v21 + v12 + 9);
  v13 = *(_BYTE *)(v21 + v12 + 8);
LABEL_44:
  if ( v19 )
  {
    v23 = *v19;
    v17 = 0;
LABEL_47:
    LOBYTE(v8) = v23 - 8;
    if ( (v8 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v12 + 3) == 1 || !v14 || !v15 )
        goto LABEL_66;
      v24 = 0;
      v8 = (unsigned __int64)&v14[v15];
      v25 = v14 + 8;
      if ( (unsigned __int8)((*v14 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v25 <= v8 )
        {
          v24 = 1;
          v17 = v14[2];
          v16 = v14[1] & 0xF;
          v18 = v14[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v25 <= v8 )
        {
          v16 = v14[2] & 0xF;
          v26 = v15;
          if ( (unsigned int)(unsigned __int8)v14[7] + 8 <= v15 )
            v26 = (unsigned __int8)v14[7] + 8;
          v8 = (unsigned __int64)(v14 + 13);
          v27 = (unsigned __int64)&v14[v26];
          if ( (unsigned __int64)(v14 + 13) > v27 )
            v30 = 0;
          else
            v30 = v14[12];
          if ( (unsigned __int64)(v14 + 14) <= v27 )
            v18 = *(_BYTE *)v8;
          v24 = 1;
        }
        v17 = v30;
      }
      if ( v24 )
      {
        LOBYTE(v2) = v17;
        v28 = v18;
      }
      else
      {
LABEL_66:
        v16 = 0;
        v28 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        v8,
        v12,
        &v34,
        a2,
        *(_DWORD *)(a2 + 48),
        *(_BYTE *)(v12 + 3),
        v13,
        v16,
        v2,
        v28,
        a2);
    }
  }
LABEL_71:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)HealthInfoLog;
}
