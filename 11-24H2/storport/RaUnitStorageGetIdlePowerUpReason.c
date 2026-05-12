/*
 * XREFs of RaUnitStorageGetIdlePowerUpReason @ 0x140188E14
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14002C620 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitStorageGetIdlePowerUpReason(__int64 a1, __int64 a2)
{
  int v3; // ebx
  __int64 v5; // rax
  unsigned int v6; // ebp
  _DWORD *v7; // rcx
  bool v8; // zf
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  int *v11; // rax
  const EVENT_DESCRIPTOR *v12; // rdx
  unsigned __int64 v13; // rdx
  char v14; // r15
  _BYTE *v15; // r9
  unsigned __int8 v16; // r10
  char v17; // si
  char v18; // r11
  char v19; // r12
  char *v20; // r11
  char v21; // r13
  unsigned int v22; // r14d
  unsigned __int64 v23; // rbp
  __int64 v24; // r8
  int v25; // ecx
  char v26; // cl
  char v27; // r8
  _BYTE *v28; // rax
  unsigned int v29; // eax
  char v30; // al
  int v32; // [rsp+20h] [rbp-98h]
  char v33; // [rsp+60h] [rbp-58h]
  unsigned int v34; // [rsp+64h] [rbp-54h]
  unsigned int v35; // [rsp+68h] [rbp-50h]
  GUID v36; // [rsp+70h] [rbp-48h] BYREF

  v3 = 0;
  v5 = *(_QWORD *)(a2 + 184);
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( *(_DWORD *)(v5 + 8) >= 0xCu )
  {
    v7 = *(_DWORD **)(a2 + 24);
    if ( v7 )
    {
      *v7 = 1;
      v6 = 0;
      v7[1] = 12;
      v7[2] = *(_DWORD *)(a1 + 936);
      *(_QWORD *)(a2 + 56) = 12LL;
    }
    else
    {
      v6 = -1073741811;
    }
  }
  else
  {
    v6 = -1073741789;
  }
  v34 = v6;
  v8 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v6;
  if ( v8 )
    goto LABEL_71;
  v36 = 0LL;
  IoGetActivityIdIrp(a2, &v36);
  v10 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v10 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_71;
    v32 = *(_DWORD *)(a2 + 48);
    v12 = &EventNonReadWriteRequestComplete;
    goto LABEL_70;
  }
  if ( *(_BYTE *)v10 != 15 )
  {
    if ( *(_BYTE *)v10 != 27 )
      goto LABEL_71;
    if ( *(_BYTE *)(v10 + 1) == 7 && !*(_DWORD *)(v10 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v11 = *(int **)(a2 + 56);
        if ( v11 )
          v3 = *v11;
        McTemplateK0pqd_EtwWriteTransfer(v9, v10, &v36, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_71;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_71;
    v12 = &EventPnpRequestComplete;
    v32 = *(_DWORD *)(a2 + 48);
LABEL_70:
    McTemplateK0pd_EtwWriteTransfer(v9, v12, &v36, a2, v32);
    goto LABEL_71;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_71;
  v13 = *(_QWORD *)(v10 + 8);
  v14 = 0;
  v15 = 0LL;
  v33 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  if ( *(_BYTE *)(v13 + 2) != 40 )
  {
    v26 = *(_BYTE *)(v13 + 72);
    v15 = *(_BYTE **)(v13 + 32);
    v16 = *(_BYTE *)(v13 + 11);
    v14 = *(_BYTE *)(v13 + 4);
    if ( !*(_BYTE *)(v13 + 2) )
      goto LABEL_47;
    goto LABEL_71;
  }
  v20 = 0LL;
  v21 = 0;
  if ( *(_DWORD *)(v13 + 20) )
    goto LABEL_71;
  v22 = 0;
  v35 = *(_DWORD *)(v13 + 56);
  if ( !v35 )
    goto LABEL_44;
  while ( 1 )
  {
    v9 = *(unsigned int *)(v13 + 4LL * v22 + 120);
    if ( (unsigned int)v9 >= 0x80 )
    {
      v23 = *(unsigned int *)(v13 + 16);
      if ( (unsigned int)v9 < (unsigned int)v23 )
        break;
    }
LABEL_37:
    if ( ++v22 >= v35 )
      goto LABEL_43;
  }
  v24 = (unsigned int)v9;
  v25 = *(_DWORD *)(v9 + v13) - 64;
  if ( v25 )
  {
    v9 = (unsigned int)(v25 - 1);
    if ( (_DWORD)v9 )
    {
      if ( (_DWORD)v9 == 1 )
      {
        v9 = v24 + 40;
        if ( v24 + 40 <= v23 )
        {
          if ( *(_DWORD *)(v24 + v13 + 12) )
            v20 = (char *)(v24 + v13 + 32);
          v15 = *(_BYTE **)(v24 + v13 + 24);
          goto LABEL_42;
        }
      }
    }
    else
    {
      v9 = v24 + 56;
      if ( v24 + 56 <= v23 )
      {
        v21 = 1;
        if ( *(_BYTE *)(v24 + v13 + 10) )
          v20 = (char *)(v24 + v13 + 24);
        v14 = *(_BYTE *)(v24 + v13 + 8);
        v15 = *(_BYTE **)(v24 + v13 + 16);
        v16 = *(_BYTE *)(v24 + v13 + 9);
      }
    }
    goto LABEL_36;
  }
  v9 = v24 + 40;
  if ( v24 + 40 > v23 )
  {
LABEL_36:
    if ( v21 )
      goto LABEL_43;
    goto LABEL_37;
  }
  if ( *(_BYTE *)(v24 + v13 + 10) )
    v20 = (char *)(v24 + v13 + 24);
  v15 = *(_BYTE **)(v24 + v13 + 16);
LABEL_42:
  v16 = *(_BYTE *)(v24 + v13 + 9);
  v14 = *(_BYTE *)(v24 + v13 + 8);
LABEL_43:
  v6 = v34;
LABEL_44:
  if ( v20 )
  {
    v26 = *v20;
    v18 = 0;
LABEL_47:
    LOBYTE(v9) = v26 - 8;
    if ( (v9 & 0x5D) == 0 )
    {
      v27 = *(_BYTE *)(v13 + 3);
      if ( v27 == 1 || !v15 || !v16 )
        goto LABEL_66;
      LOBYTE(v13) = 0;
      v9 = (unsigned __int64)&v15[v16];
      v28 = v15 + 8;
      if ( (unsigned __int8)((*v15 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v28 <= v9 )
        {
          LOBYTE(v13) = 1;
          v18 = v15[2];
          v17 = v15[1] & 0xF;
          v19 = v15[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v28 <= v9 )
        {
          v17 = v15[2] & 0xF;
          v29 = v16;
          if ( (unsigned int)(unsigned __int8)v15[7] + 8 <= v16 )
            v29 = (unsigned __int8)v15[7] + 8;
          v9 = (unsigned __int64)(v15 + 13);
          v13 = (unsigned __int64)&v15[v29];
          if ( (unsigned __int64)(v15 + 13) > v13 )
            v33 = 0;
          else
            v33 = v15[12];
          if ( (unsigned __int64)(v15 + 14) <= v13 )
            v19 = *(_BYTE *)v9;
          LOBYTE(v13) = 1;
        }
        v18 = v33;
      }
      if ( (_BYTE)v13 )
      {
        LOBYTE(v3) = v18;
        v30 = v19;
      }
      else
      {
LABEL_66:
        v17 = 0;
        v30 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v9, v13, &v36, a2, *(_DWORD *)(a2 + 48), v27, v14, v17, v3, v30, a2);
    }
  }
LABEL_71:
  IofCompleteRequest((PIRP)a2, 0);
  return v6;
}
