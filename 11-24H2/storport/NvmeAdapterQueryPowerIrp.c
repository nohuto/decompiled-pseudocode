/*
 * XREFs of NvmeAdapterQueryPowerIrp @ 0x1401308A0
 * Callers:
 *     NvmeAdapterPowerIrp @ 0x1400D54F4 (NvmeAdapterPowerIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeAdapterQuerySystemPowerIrp @ 0x140130D58 (NvmeAdapterQuerySystemPowerIrp.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

NTSTATUS __fastcall NvmeAdapterQueryPowerIrp(__int64 a1, __int64 a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  int v5; // r8d
  bool v6; // zf
  int v7; // r15d
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  int *v10; // rax
  const EVENT_DESCRIPTOR *v11; // rdx
  unsigned __int64 v12; // rdx
  char v13; // r14
  _BYTE *v14; // r9
  unsigned __int8 v15; // r10
  char v16; // si
  char v17; // r11
  char v18; // r12
  char *v19; // r11
  unsigned int *v20; // r13
  __int64 v21; // rax
  unsigned __int64 v22; // rbp
  char v23; // cl
  char v24; // r8
  _BYTE *v25; // rax
  unsigned int v26; // eax
  char v27; // al
  char v30; // [rsp+60h] [rbp-68h]
  char v31; // [rsp+61h] [rbp-67h]
  int v32; // [rsp+64h] [rbp-64h]
  unsigned int v33; // [rsp+68h] [rbp-60h]
  GUID v34; // [rsp+70h] [rbp-58h] BYREF

  v3 = 0;
  v4 = *(_QWORD *)(a2 + 184);
  v5 = *(_DWORD *)(v4 + 16);
  if ( !v5 )
  {
    if ( *(int *)(v4 + 24) >= 6 )
    {
      *(_OWORD *)(v4 - 72) = *(_OWORD *)v4;
      *(_OWORD *)(v4 - 56) = *(_OWORD *)(v4 + 16);
      *(_OWORD *)(v4 - 40) = *(_OWORD *)(v4 + 32);
      *(_QWORD *)(v4 - 24) = *(_QWORD *)(v4 + 48);
      *(_BYTE *)(v4 - 69) = 0;
      return IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 24), (PIRP)a2);
    }
    return NvmeAdapterQuerySystemPowerIrp(a1, a2);
  }
  if ( v5 == 1 )
  {
    *(_OWORD *)(v4 - 72) = *(_OWORD *)v4;
    *(_OWORD *)(v4 - 56) = *(_OWORD *)(v4 + 16);
    *(_OWORD *)(v4 - 40) = *(_OWORD *)(v4 + 32);
    *(_QWORD *)(v4 - 24) = *(_QWORD *)(v4 + 48);
    *(_BYTE *)(v4 - 69) = 0;
    return IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 24), (PIRP)a2);
  }
  v6 = StorEtwLoggingEnabled == 0;
  v7 = -1073741823;
  *(_DWORD *)(a2 + 48) = -1073741823;
  *(_BYTE *)(a2 + 141) = -84;
  if ( v6 )
    goto LABEL_69;
  v34 = 0LL;
  IoGetActivityIdIrp(a2, &v34);
  v9 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v9 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_69;
    v11 = &EventNonReadWriteRequestComplete;
    goto LABEL_68;
  }
  if ( *(_BYTE *)v9 != 15 )
  {
    if ( *(_BYTE *)v9 != 27 )
      goto LABEL_69;
    if ( *(_BYTE *)(v9 + 1) == 7 && !*(_DWORD *)(v9 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v10 = *(int **)(a2 + 56);
        if ( v10 )
          v3 = *v10;
        McTemplateK0pqd_EtwWriteTransfer(v8, v9, &v34, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_69;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_69;
    v11 = &EventPnpRequestComplete;
LABEL_68:
    McTemplateK0pd_EtwWriteTransfer(v8, v11, &v34, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_69;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_69;
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
      goto LABEL_45;
    goto LABEL_69;
  }
  v19 = 0LL;
  v31 = 0;
  if ( *(_DWORD *)(v12 + 20) )
    goto LABEL_69;
  v8 = 0LL;
  v32 = 0;
  v33 = *(_DWORD *)(v12 + 56);
  if ( !v33 )
    goto LABEL_42;
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
LABEL_36:
    v8 = (unsigned int)(v8 + 1);
    ++v20;
    v32 = v8;
    if ( (unsigned int)v8 >= v33 )
      goto LABEL_42;
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
        goto LABEL_41;
      }
    }
    goto LABEL_34;
  }
  v8 = v21 + 40;
  if ( v21 + 40 > v22 )
  {
LABEL_34:
    if ( v31 )
      goto LABEL_42;
    LODWORD(v8) = v32;
    goto LABEL_36;
  }
  if ( *(_BYTE *)(v21 + v12 + 10) )
    v19 = (char *)(v21 + v12 + 24);
  v14 = *(_BYTE **)(v21 + v12 + 16);
LABEL_41:
  v15 = *(_BYTE *)(v21 + v12 + 9);
  v13 = *(_BYTE *)(v21 + v12 + 8);
LABEL_42:
  if ( v19 )
  {
    v23 = *v19;
    v17 = 0;
LABEL_45:
    LOBYTE(v8) = v23 - 8;
    if ( (v8 & 0x5D) == 0 )
    {
      v24 = *(_BYTE *)(v12 + 3);
      if ( v24 == 1 || !v14 || !v15 )
        goto LABEL_64;
      LOBYTE(v12) = 0;
      v8 = (unsigned __int64)&v14[v15];
      v25 = v14 + 8;
      if ( (unsigned __int8)((*v14 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v25 <= v8 )
        {
          LOBYTE(v12) = 1;
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
          v12 = (unsigned __int64)&v14[v26];
          if ( (unsigned __int64)(v14 + 13) > v12 )
            v30 = 0;
          else
            v30 = v14[12];
          if ( (unsigned __int64)(v14 + 14) <= v12 )
            v18 = *(_BYTE *)v8;
          LOBYTE(v12) = 1;
        }
        v17 = v30;
      }
      if ( (_BYTE)v12 )
      {
        LOBYTE(v3) = v17;
        v27 = v18;
      }
      else
      {
LABEL_64:
        v16 = 0;
        v27 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v8, v12, &v34, a2, *(_DWORD *)(a2 + 48), v24, v13, v16, v3, v27, a2);
    }
  }
LABEL_69:
  IofCompleteRequest((PIRP)a2, 0);
  return v7;
}
