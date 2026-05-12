/*
 * XREFs of NvmeNamespaceGetDeviceInternalLogIoctl @ 0x1401A4DEC
 * Callers:
 *     NvmeNamespaceDeviceControlIrp @ 0x1401A2234 (NvmeNamespaceDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     NvmeControllerGetDeviceInternalLogIoctl @ 0x14019EAD8 (NvmeControllerGetDeviceInternalLogIoctl.c)
 */

__int64 __fastcall NvmeNamespaceGetDeviceInternalLogIoctl(__int64 a1, __int64 a2)
{
  int v3; // ebx
  bool v4; // zf
  unsigned int v5; // ebp
  unsigned __int64 v6; // rcx
  __int64 v7; // rdx
  int *v8; // rax
  const EVENT_DESCRIPTOR *v9; // rdx
  unsigned __int64 v10; // rdx
  char v11; // r15
  _BYTE *v12; // r9
  unsigned __int8 v13; // r10
  char v14; // si
  char v15; // r11
  char v16; // r12
  char *v17; // r11
  char v18; // r13
  unsigned int v19; // r14d
  unsigned __int64 v20; // rbp
  __int64 v21; // r8
  int v22; // ecx
  char v23; // cl
  char v24; // r8
  _BYTE *v25; // rax
  unsigned int v26; // eax
  char v27; // al
  char v29; // [rsp+60h] [rbp-68h]
  unsigned int DeviceInternalLogIoctl; // [rsp+64h] [rbp-64h]
  unsigned int v31; // [rsp+68h] [rbp-60h]
  GUID v32; // [rsp+70h] [rbp-58h] BYREF

  v3 = 0;
  DeviceInternalLogIoctl = NvmeControllerGetDeviceInternalLogIoctl(*(_QWORD *)(a1 + 16), a2);
  v4 = StorEtwLoggingEnabled == 0;
  v5 = DeviceInternalLogIoctl;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = DeviceInternalLogIoctl;
  if ( v4 )
    goto LABEL_66;
  v32 = 0LL;
  IoGetActivityIdIrp(a2, &v32);
  v7 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v7 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_66;
    v9 = &EventNonReadWriteRequestComplete;
    goto LABEL_65;
  }
  if ( *(_BYTE *)v7 != 15 )
  {
    if ( *(_BYTE *)v7 != 27 )
      goto LABEL_66;
    if ( *(_BYTE *)(v7 + 1) == 7 && !*(_DWORD *)(v7 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v8 = *(int **)(a2 + 56);
        if ( v8 )
          v3 = *v8;
        McTemplateK0pqd_EtwWriteTransfer(v6, v7, &v32, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_66;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_66;
    v9 = &EventPnpRequestComplete;
LABEL_65:
    McTemplateK0pd_EtwWriteTransfer(v6, v9, &v32, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_66;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_66;
  v10 = *(_QWORD *)(v7 + 8);
  v11 = 0;
  v12 = 0LL;
  v29 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  if ( *(_BYTE *)(v10 + 2) != 40 )
  {
    v23 = *(_BYTE *)(v10 + 72);
    v12 = *(_BYTE **)(v10 + 32);
    v13 = *(_BYTE *)(v10 + 11);
    v11 = *(_BYTE *)(v10 + 4);
    if ( !*(_BYTE *)(v10 + 2) )
      goto LABEL_42;
    goto LABEL_66;
  }
  v17 = 0LL;
  v18 = 0;
  if ( *(_DWORD *)(v10 + 20) )
    goto LABEL_66;
  v19 = 0;
  v31 = *(_DWORD *)(v10 + 56);
  if ( !v31 )
    goto LABEL_39;
  while ( 1 )
  {
    v6 = *(unsigned int *)(v10 + 4LL * v19 + 120);
    if ( (unsigned int)v6 >= 0x80 )
    {
      v20 = *(unsigned int *)(v10 + 16);
      if ( (unsigned int)v6 < (unsigned int)v20 )
        break;
    }
LABEL_32:
    if ( ++v19 >= v31 )
      goto LABEL_38;
  }
  v21 = (unsigned int)v6;
  v22 = *(_DWORD *)(v6 + v10) - 64;
  if ( v22 )
  {
    v6 = (unsigned int)(v22 - 1);
    if ( (_DWORD)v6 )
    {
      if ( (_DWORD)v6 == 1 )
      {
        v6 = v21 + 40;
        if ( v21 + 40 <= v20 )
        {
          if ( *(_DWORD *)(v21 + v10 + 12) )
            v17 = (char *)(v21 + v10 + 32);
          v12 = *(_BYTE **)(v21 + v10 + 24);
          goto LABEL_37;
        }
      }
    }
    else
    {
      v6 = v21 + 56;
      if ( v21 + 56 <= v20 )
      {
        v18 = 1;
        if ( *(_BYTE *)(v21 + v10 + 10) )
          v17 = (char *)(v21 + v10 + 24);
        v11 = *(_BYTE *)(v21 + v10 + 8);
        v12 = *(_BYTE **)(v21 + v10 + 16);
        v13 = *(_BYTE *)(v21 + v10 + 9);
      }
    }
    goto LABEL_31;
  }
  v6 = v21 + 40;
  if ( v21 + 40 > v20 )
  {
LABEL_31:
    if ( v18 )
      goto LABEL_38;
    goto LABEL_32;
  }
  if ( *(_BYTE *)(v21 + v10 + 10) )
    v17 = (char *)(v21 + v10 + 24);
  v12 = *(_BYTE **)(v21 + v10 + 16);
LABEL_37:
  v13 = *(_BYTE *)(v21 + v10 + 9);
  v11 = *(_BYTE *)(v21 + v10 + 8);
LABEL_38:
  v5 = DeviceInternalLogIoctl;
LABEL_39:
  if ( v17 )
  {
    v23 = *v17;
    v15 = 0;
LABEL_42:
    LOBYTE(v6) = v23 - 8;
    if ( (v6 & 0x5D) == 0 )
    {
      v24 = *(_BYTE *)(v10 + 3);
      if ( v24 == 1 || !v12 || !v13 )
        goto LABEL_61;
      LOBYTE(v10) = 0;
      v6 = (unsigned __int64)&v12[v13];
      v25 = v12 + 8;
      if ( (unsigned __int8)((*v12 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v25 <= v6 )
        {
          LOBYTE(v10) = 1;
          v15 = v12[2];
          v14 = v12[1] & 0xF;
          v16 = v12[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v25 <= v6 )
        {
          v14 = v12[2] & 0xF;
          v26 = v13;
          if ( (unsigned int)(unsigned __int8)v12[7] + 8 <= v13 )
            v26 = (unsigned __int8)v12[7] + 8;
          v6 = (unsigned __int64)(v12 + 13);
          v10 = (unsigned __int64)&v12[v26];
          if ( (unsigned __int64)(v12 + 13) > v10 )
            v29 = 0;
          else
            v29 = v12[12];
          if ( (unsigned __int64)(v12 + 14) <= v10 )
            v16 = *(_BYTE *)v6;
          LOBYTE(v10) = 1;
        }
        v15 = v29;
      }
      if ( (_BYTE)v10 )
      {
        LOBYTE(v3) = v15;
        v27 = v16;
      }
      else
      {
LABEL_61:
        v14 = 0;
        v27 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v6, v10, &v32, a2, *(_DWORD *)(a2 + 48), v24, v11, v14, v3, v27, a2);
    }
  }
LABEL_66:
  IofCompleteRequest((PIRP)a2, 0);
  return v5;
}
