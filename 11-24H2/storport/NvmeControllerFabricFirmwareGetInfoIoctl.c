/*
 * XREFs of NvmeControllerFabricFirmwareGetInfoIoctl @ 0x1400ED1D8
 * Callers:
 *     NvmeNamespaceFirmwareGetInfoIoctl @ 0x140101D0C (NvmeNamespaceFirmwareGetInfoIoctl.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     StorCopyNVMeFirmwareRevision @ 0x1400A1C98 (StorCopyNVMeFirmwareRevision.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall NvmeControllerFabricFirmwareGetInfoIoctl(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v4; // rax
  unsigned int v5; // r12d
  size_t v6; // r14
  __int64 v7; // rbp
  _DWORD *v8; // rsi
  GUID v9; // xmm0
  bool v10; // zf
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  int *v13; // rax
  const EVENT_DESCRIPTOR *v14; // rdx
  unsigned __int64 v15; // rdx
  char v16; // r14
  _BYTE *v17; // r9
  unsigned __int8 v18; // r10
  char v19; // si
  char v20; // r11
  char v21; // r15
  char *v22; // r11
  unsigned int v23; // r13d
  unsigned int *v24; // r12
  __int64 v25; // rax
  unsigned __int64 v26; // rbp
  char v27; // cl
  char v28; // r8
  _BYTE *v29; // rax
  unsigned int v30; // eax
  char v31; // al
  int v33; // [rsp+20h] [rbp-A8h]
  char v34; // [rsp+60h] [rbp-68h]
  char v35; // [rsp+61h] [rbp-67h]
  unsigned int v36; // [rsp+64h] [rbp-64h]
  unsigned int v37; // [rsp+68h] [rbp-60h]
  GUID v38; // [rsp+70h] [rbp-58h] BYREF
  char v39; // [rsp+80h] [rbp-48h]

  v2 = 0;
  v36 = 0;
  v38 = 0LL;
  v39 = 0;
  v4 = *(_QWORD *)(a2 + 184);
  v5 = 0;
  if ( *(_DWORD *)(v4 + 16) < 0x10u )
  {
    v5 = -1073741820;
LABEL_9:
    v36 = v5;
    v7 = 0LL;
    goto LABEL_10;
  }
  v6 = *(unsigned int *)(v4 + 8);
  v7 = 56LL;
  if ( (unsigned int)v6 < 0x38 )
  {
    v5 = -1073741789;
    goto LABEL_9;
  }
  v8 = *(_DWORD **)(a2 + 24);
  if ( *v8 != 16 || v8[1] < 0x10u )
  {
    v5 = -1073741811;
    goto LABEL_9;
  }
  StorCopyNVMeFirmwareRevision(*(_QWORD *)(a1 + 592), (__int64)&v38, 0x11u);
  memset_0(v8, 0, v6);
  *((_BYTE *)v8 + 8) &= ~1u;
  v9 = v38;
  v8[1] = 56;
  *((_BYTE *)v8 + 33) |= 1u;
  *v8 = 56;
  *(_DWORD *)((char *)v8 + 9) = 16711937;
  v8[4] = 4096;
  v8[5] = 0x10000;
  *(GUID *)(v8 + 10) = v9;
  v8[6] = 32;
  v8[7] = 32;
  *((_BYTE *)v8 + 32) = 1;
LABEL_10:
  *(_QWORD *)(a2 + 56) = v7;
  v10 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v5;
  if ( v10 )
    goto LABEL_76;
  v38 = 0LL;
  IoGetActivityIdIrp(a2, &v38);
  v12 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v12 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_76;
    v33 = *(_DWORD *)(a2 + 48);
    v14 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_75;
  }
  if ( *(_BYTE *)v12 != 15 )
  {
    if ( *(_BYTE *)v12 != 27 )
      goto LABEL_76;
    if ( *(_BYTE *)(v12 + 1) == 7 && !*(_DWORD *)(v12 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v13 = *(int **)(a2 + 56);
        if ( v13 )
          v2 = *v13;
        McTemplateK0pqd_EtwWriteTransfer(v11, v12, &v38, a2, v2, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_76;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_76;
    v14 = &EventPnpRequestComplete;
    v33 = *(_DWORD *)(a2 + 48);
LABEL_75:
    McTemplateK0pd_EtwWriteTransfer(v11, v14, &v38, a2, v33);
    goto LABEL_76;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_76;
  v15 = *(_QWORD *)(v12 + 8);
  v16 = 0;
  v17 = 0LL;
  v34 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  if ( *(_BYTE *)(v15 + 2) != 40 )
  {
    v27 = *(_BYTE *)(v15 + 72);
    v17 = *(_BYTE **)(v15 + 32);
    v18 = *(_BYTE *)(v15 + 11);
    v16 = *(_BYTE *)(v15 + 4);
    if ( !*(_BYTE *)(v15 + 2) )
      goto LABEL_52;
    goto LABEL_76;
  }
  v22 = 0LL;
  v35 = 0;
  if ( *(_DWORD *)(v15 + 20) )
    goto LABEL_76;
  v23 = 0;
  v37 = *(_DWORD *)(v15 + 56);
  if ( !v37 )
    goto LABEL_49;
  v24 = (unsigned int *)(v15 + 120);
  while ( 1 )
  {
    v25 = *v24;
    if ( (unsigned int)v25 >= 0x80 )
    {
      v26 = *(unsigned int *)(v15 + 16);
      if ( (unsigned int)v25 < (unsigned int)v26 )
        break;
    }
LABEL_42:
    ++v23;
    ++v24;
    if ( v23 >= v37 )
      goto LABEL_48;
  }
  if ( *(_DWORD *)(v25 + v15) != 64 )
  {
    v11 = (unsigned int)(*(_DWORD *)(v25 + v15) - 65);
    if ( *(_DWORD *)(v25 + v15) == 65 )
    {
      v11 = v25 + 56;
      if ( v25 + 56 <= v26 )
      {
        v35 = 1;
        if ( *(_BYTE *)(v25 + v15 + 10) )
          v22 = (char *)(v25 + v15 + 24);
        v16 = *(_BYTE *)(v25 + v15 + 8);
        v17 = *(_BYTE **)(v25 + v15 + 16);
        v18 = *(_BYTE *)(v25 + v15 + 9);
      }
    }
    else if ( *(_DWORD *)(v25 + v15) == 66 )
    {
      v11 = v25 + 40;
      if ( v25 + 40 <= v26 )
      {
        if ( *(_DWORD *)(v25 + v15 + 12) )
          v22 = (char *)(v25 + v15 + 32);
        v17 = *(_BYTE **)(v25 + v15 + 24);
        goto LABEL_47;
      }
    }
    goto LABEL_41;
  }
  v11 = v25 + 40;
  if ( v25 + 40 > v26 )
  {
LABEL_41:
    if ( v35 )
      goto LABEL_48;
    goto LABEL_42;
  }
  if ( *(_BYTE *)(v25 + v15 + 10) )
    v22 = (char *)(v25 + v15 + 24);
  v17 = *(_BYTE **)(v25 + v15 + 16);
LABEL_47:
  v18 = *(_BYTE *)(v25 + v15 + 9);
  v16 = *(_BYTE *)(v25 + v15 + 8);
LABEL_48:
  v5 = v36;
LABEL_49:
  if ( v22 )
  {
    v27 = *v22;
    v20 = 0;
LABEL_52:
    LOBYTE(v11) = v27 - 8;
    if ( (v11 & 0x5D) == 0 )
    {
      v28 = *(_BYTE *)(v15 + 3);
      if ( v28 == 1 || !v17 || !v18 )
        goto LABEL_71;
      LOBYTE(v15) = 0;
      v11 = (unsigned __int64)&v17[v18];
      v29 = v17 + 8;
      if ( (unsigned __int8)((*v17 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v29 <= v11 )
        {
          LOBYTE(v15) = 1;
          v20 = v17[2];
          v19 = v17[1] & 0xF;
          v21 = v17[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v29 <= v11 )
        {
          v19 = v17[2] & 0xF;
          v30 = v18;
          if ( (unsigned int)(unsigned __int8)v17[7] + 8 <= v18 )
            v30 = (unsigned __int8)v17[7] + 8;
          v11 = (unsigned __int64)(v17 + 13);
          v15 = (unsigned __int64)&v17[v30];
          if ( (unsigned __int64)(v17 + 13) > v15 )
            v34 = 0;
          else
            v34 = v17[12];
          if ( (unsigned __int64)(v17 + 14) <= v15 )
            v21 = *(_BYTE *)v11;
          LOBYTE(v15) = 1;
        }
        v20 = v34;
      }
      if ( (_BYTE)v15 )
      {
        LOBYTE(v2) = v20;
        v31 = v21;
      }
      else
      {
LABEL_71:
        v19 = 0;
        v31 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v11, v15, &v38, a2, *(_DWORD *)(a2 + 48), v28, v16, v19, v2, v31, a2);
    }
  }
LABEL_76:
  IofCompleteRequest((PIRP)a2, 0);
  return v5;
}
