/*
 * XREFs of NvmeAdapterGetDeviceNumberEx @ 0x140197CA8
 * Callers:
 *     NvmeAdapterDeviceControlIrp @ 0x140195438 (NvmeAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall NvmeAdapterGetDeviceNumberEx(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // edi
  unsigned int v6; // r12d
  _DWORD *v7; // rbx
  bool v8; // zf
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  int *v11; // rax
  const EVENT_DESCRIPTOR *v12; // rdx
  unsigned __int64 v13; // rdx
  char v14; // r14
  _BYTE *v15; // r9
  unsigned __int8 v16; // r10
  char v17; // bl
  char v18; // r11
  char v19; // r15
  char *v20; // r11
  unsigned int v21; // r13d
  unsigned int *v22; // r12
  __int64 v23; // rax
  unsigned __int64 v24; // rbp
  char v25; // cl
  char v26; // r8
  _BYTE *v27; // rax
  unsigned int v28; // eax
  char v29; // al
  int v31; // [rsp+20h] [rbp-98h]
  char v32; // [rsp+60h] [rbp-58h]
  char v33; // [rsp+61h] [rbp-57h]
  int v34; // [rsp+64h] [rbp-54h]
  unsigned int v35; // [rsp+68h] [rbp-50h]
  GUID v36; // [rsp+70h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  v34 = 0;
  v6 = 0;
  if ( *(_DWORD *)(v2 + 8) >= 0x28u )
  {
    v7 = *(_DWORD **)(a2 + 24);
    memset_0(v7, 0, *(unsigned int *)(v2 + 8));
    *v7 = 40;
    v7[1] = 40;
    v7[3] = 4;
    v7[4] = *(_DWORD *)(a1 + 56);
    *(_OWORD *)(v7 + 5) = *(_OWORD *)(a1 + 1032);
    *(_QWORD *)(a2 + 56) = 40LL;
  }
  else
  {
    v6 = -1073741789;
    v34 = -1073741789;
  }
  v8 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v6;
  if ( v8 )
    goto LABEL_70;
  v36 = 0LL;
  IoGetActivityIdIrp(a2, &v36);
  v10 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v10 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_70;
    v31 = *(_DWORD *)(a2 + 48);
    v12 = &EventNonReadWriteRequestComplete;
    goto LABEL_69;
  }
  if ( *(_BYTE *)v10 != 15 )
  {
    if ( *(_BYTE *)v10 != 27 )
      goto LABEL_70;
    if ( *(_BYTE *)(v10 + 1) == 7 && !*(_DWORD *)(v10 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v11 = *(int **)(a2 + 56);
        if ( v11 )
          v3 = *v11;
        McTemplateK0pqd_EtwWriteTransfer(v9, v10, &v36, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_70;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_70;
    v12 = &EventPnpRequestComplete;
    v31 = *(_DWORD *)(a2 + 48);
LABEL_69:
    McTemplateK0pd_EtwWriteTransfer(v9, v12, &v36, a2, v31);
    goto LABEL_70;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_70;
  v13 = *(_QWORD *)(v10 + 8);
  v14 = 0;
  v15 = 0LL;
  v32 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  if ( *(_BYTE *)(v13 + 2) != 40 )
  {
    v25 = *(_BYTE *)(v13 + 72);
    v15 = *(_BYTE **)(v13 + 32);
    v16 = *(_BYTE *)(v13 + 11);
    v14 = *(_BYTE *)(v13 + 4);
    if ( !*(_BYTE *)(v13 + 2) )
      goto LABEL_46;
    goto LABEL_70;
  }
  v20 = 0LL;
  v33 = 0;
  if ( *(_DWORD *)(v13 + 20) )
    goto LABEL_70;
  v21 = 0;
  v35 = *(_DWORD *)(v13 + 56);
  if ( !v35 )
    goto LABEL_43;
  v22 = (unsigned int *)(v13 + 120);
  while ( 1 )
  {
    v23 = *v22;
    if ( (unsigned int)v23 >= 0x80 )
    {
      v24 = *(unsigned int *)(v13 + 16);
      if ( (unsigned int)v23 < (unsigned int)v24 )
        break;
    }
LABEL_36:
    ++v21;
    ++v22;
    if ( v21 >= v35 )
      goto LABEL_42;
  }
  if ( *(_DWORD *)(v23 + v13) != 64 )
  {
    v9 = (unsigned int)(*(_DWORD *)(v23 + v13) - 65);
    if ( *(_DWORD *)(v23 + v13) == 65 )
    {
      v9 = v23 + 56;
      if ( v23 + 56 <= v24 )
      {
        v33 = 1;
        if ( *(_BYTE *)(v23 + v13 + 10) )
          v20 = (char *)(v23 + v13 + 24);
        v14 = *(_BYTE *)(v23 + v13 + 8);
        v15 = *(_BYTE **)(v23 + v13 + 16);
        v16 = *(_BYTE *)(v23 + v13 + 9);
      }
    }
    else if ( *(_DWORD *)(v23 + v13) == 66 )
    {
      v9 = v23 + 40;
      if ( v23 + 40 <= v24 )
      {
        if ( *(_DWORD *)(v23 + v13 + 12) )
          v20 = (char *)(v23 + v13 + 32);
        v15 = *(_BYTE **)(v23 + v13 + 24);
        goto LABEL_41;
      }
    }
    goto LABEL_35;
  }
  v9 = v23 + 40;
  if ( v23 + 40 > v24 )
  {
LABEL_35:
    if ( v33 )
      goto LABEL_42;
    goto LABEL_36;
  }
  if ( *(_BYTE *)(v23 + v13 + 10) )
    v20 = (char *)(v23 + v13 + 24);
  v15 = *(_BYTE **)(v23 + v13 + 16);
LABEL_41:
  v16 = *(_BYTE *)(v23 + v13 + 9);
  v14 = *(_BYTE *)(v23 + v13 + 8);
LABEL_42:
  v6 = v34;
LABEL_43:
  if ( v20 )
  {
    v25 = *v20;
    v18 = 0;
LABEL_46:
    LOBYTE(v9) = v25 - 8;
    if ( (v9 & 0x5D) == 0 )
    {
      v26 = *(_BYTE *)(v13 + 3);
      if ( v26 == 1 || !v15 || !v16 )
        goto LABEL_65;
      LOBYTE(v13) = 0;
      v9 = (unsigned __int64)&v15[v16];
      v27 = v15 + 8;
      if ( (unsigned __int8)((*v15 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v27 <= v9 )
        {
          LOBYTE(v13) = 1;
          v18 = v15[2];
          v17 = v15[1] & 0xF;
          v19 = v15[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v27 <= v9 )
        {
          v17 = v15[2] & 0xF;
          v28 = v16;
          if ( (unsigned int)(unsigned __int8)v15[7] + 8 <= v16 )
            v28 = (unsigned __int8)v15[7] + 8;
          v9 = (unsigned __int64)(v15 + 13);
          v13 = (unsigned __int64)&v15[v28];
          if ( (unsigned __int64)(v15 + 13) > v13 )
            v32 = 0;
          else
            v32 = v15[12];
          if ( (unsigned __int64)(v15 + 14) <= v13 )
            v19 = *(_BYTE *)v9;
          LOBYTE(v13) = 1;
        }
        v18 = v32;
      }
      if ( (_BYTE)v13 )
      {
        LOBYTE(v3) = v18;
        v29 = v19;
      }
      else
      {
LABEL_65:
        v17 = 0;
        v29 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v9, v13, &v36, a2, *(_DWORD *)(a2 + 48), v26, v14, v17, v3, v29, a2);
    }
  }
LABEL_70:
  IofCompleteRequest((PIRP)a2, 0);
  return v6;
}
