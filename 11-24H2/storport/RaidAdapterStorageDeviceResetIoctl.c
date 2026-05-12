/*
 * XREFs of RaidAdapterStorageDeviceResetIoctl @ 0x140062A2C
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14002B3B0 (RaidAdapterDeviceControlIrp.c)
 *     RaUnitDeviceControlIrp @ 0x14002C620 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidAdapterDeviceReset @ 0x140059DAC (RaidAdapterDeviceReset.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterStorageDeviceResetIoctl(__int64 a1, __int64 a2)
{
  int v2; // ebx
  _DWORD *v4; // rdx
  unsigned int v5; // esi
  bool v6; // zf
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  int *v9; // rax
  const EVENT_DESCRIPTOR *v10; // rdx
  unsigned __int64 v11; // rdx
  char v12; // r15
  _BYTE *v13; // r9
  unsigned __int8 v14; // r10
  char v15; // bp
  char v16; // r11
  char v17; // r12
  char *v18; // r11
  unsigned int *v19; // r13
  __int64 v20; // rax
  unsigned __int64 v21; // r14
  char v22; // cl
  char v23; // r8
  _BYTE *v24; // rax
  unsigned int v25; // eax
  char v26; // al
  char v28; // [rsp+60h] [rbp-68h]
  char v29; // [rsp+61h] [rbp-67h]
  int v30; // [rsp+64h] [rbp-64h]
  unsigned int v31; // [rsp+68h] [rbp-60h]
  GUID v32; // [rsp+70h] [rbp-58h] BYREF

  v2 = 0;
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) >= 0x20u
    && (v4 = *(_DWORD **)(a2 + 24)) != 0LL
    && *v4 == 32
    && v4[1] >= 0x20u )
  {
    v5 = RaidAdapterDeviceReset(a1, (__int64)v4, a2);
  }
  else
  {
    v5 = -1073741811;
  }
  v6 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v5;
  if ( v6 )
    goto LABEL_73;
  v32 = 0LL;
  IoGetActivityIdIrp(a2, &v32);
  v8 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v8 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_73;
    v10 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_72;
  }
  if ( *(_BYTE *)v8 != 15 )
  {
    if ( *(_BYTE *)v8 != 27 )
      goto LABEL_73;
    if ( *(_BYTE *)(v8 + 1) == 7 && !*(_DWORD *)(v8 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v9 = *(int **)(a2 + 56);
        if ( v9 )
          v2 = *v9;
        McTemplateK0pqd_EtwWriteTransfer(v7, v8, &v32, a2, v2, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_73;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_73;
    v10 = &EventPnpRequestComplete;
LABEL_72:
    McTemplateK0pd_EtwWriteTransfer(v7, v10, &v32, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_73;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_73;
  v11 = *(_QWORD *)(v8 + 8);
  v12 = 0;
  v13 = 0LL;
  v28 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  if ( *(_BYTE *)(v11 + 2) != 40 )
  {
    v22 = *(_BYTE *)(v11 + 72);
    v13 = *(_BYTE **)(v11 + 32);
    v14 = *(_BYTE *)(v11 + 11);
    v12 = *(_BYTE *)(v11 + 4);
    if ( !*(_BYTE *)(v11 + 2) )
      goto LABEL_49;
    goto LABEL_73;
  }
  v18 = 0LL;
  v29 = 0;
  if ( *(_DWORD *)(v11 + 20) )
    goto LABEL_73;
  v7 = 0LL;
  v30 = 0;
  v31 = *(_DWORD *)(v11 + 56);
  if ( !v31 )
    goto LABEL_46;
  v19 = (unsigned int *)(v11 + 120);
  while ( 1 )
  {
    v20 = *v19;
    if ( (unsigned int)v20 >= 0x80 )
    {
      v21 = *(unsigned int *)(v11 + 16);
      if ( (unsigned int)v20 < (unsigned int)v21 )
        break;
    }
LABEL_40:
    v7 = (unsigned int)(v7 + 1);
    ++v19;
    v30 = v7;
    if ( (unsigned int)v7 >= v31 )
      goto LABEL_46;
  }
  if ( *(_DWORD *)(v20 + v11) != 64 )
  {
    v7 = (unsigned int)(*(_DWORD *)(v20 + v11) - 65);
    if ( *(_DWORD *)(v20 + v11) == 65 )
    {
      v7 = v20 + 56;
      if ( v20 + 56 <= v21 )
      {
        v29 = 1;
        if ( *(_BYTE *)(v20 + v11 + 10) )
          v18 = (char *)(v20 + v11 + 24);
        v12 = *(_BYTE *)(v20 + v11 + 8);
        v13 = *(_BYTE **)(v20 + v11 + 16);
        v14 = *(_BYTE *)(v20 + v11 + 9);
      }
    }
    else if ( *(_DWORD *)(v20 + v11) == 66 )
    {
      v7 = v20 + 40;
      if ( v20 + 40 <= v21 )
      {
        if ( *(_DWORD *)(v20 + v11 + 12) )
          v18 = (char *)(v20 + v11 + 32);
        v13 = *(_BYTE **)(v20 + v11 + 24);
        goto LABEL_45;
      }
    }
    goto LABEL_38;
  }
  v7 = v20 + 40;
  if ( v20 + 40 > v21 )
  {
LABEL_38:
    if ( v29 )
      goto LABEL_46;
    LODWORD(v7) = v30;
    goto LABEL_40;
  }
  if ( *(_BYTE *)(v20 + v11 + 10) )
    v18 = (char *)(v20 + v11 + 24);
  v13 = *(_BYTE **)(v20 + v11 + 16);
LABEL_45:
  v14 = *(_BYTE *)(v20 + v11 + 9);
  v12 = *(_BYTE *)(v20 + v11 + 8);
LABEL_46:
  if ( v18 )
  {
    v22 = *v18;
    v16 = 0;
LABEL_49:
    LOBYTE(v7) = v22 - 8;
    if ( (v7 & 0x5D) == 0 )
    {
      v23 = *(_BYTE *)(v11 + 3);
      if ( v23 == 1 || !v13 || !v14 )
        goto LABEL_68;
      LOBYTE(v11) = 0;
      v7 = (unsigned __int64)&v13[v14];
      v24 = v13 + 8;
      if ( (unsigned __int8)((*v13 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v24 <= v7 )
        {
          LOBYTE(v11) = 1;
          v16 = v13[2];
          v15 = v13[1] & 0xF;
          v17 = v13[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v24 <= v7 )
        {
          v15 = v13[2] & 0xF;
          v25 = v14;
          if ( (unsigned int)(unsigned __int8)v13[7] + 8 <= v14 )
            v25 = (unsigned __int8)v13[7] + 8;
          v7 = (unsigned __int64)(v13 + 13);
          v11 = (unsigned __int64)&v13[v25];
          if ( (unsigned __int64)(v13 + 13) > v11 )
            v28 = 0;
          else
            v28 = v13[12];
          if ( (unsigned __int64)(v13 + 14) <= v11 )
            v17 = *(_BYTE *)v7;
          LOBYTE(v11) = 1;
        }
        v16 = v28;
      }
      if ( (_BYTE)v11 )
      {
        LOBYTE(v2) = v16;
        v26 = v17;
      }
      else
      {
LABEL_68:
        v15 = 0;
        v26 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v7, v11, &v32, a2, *(_DWORD *)(a2 + 48), v23, v12, v15, v2, v26, a2);
    }
  }
LABEL_73:
  IofCompleteRequest((PIRP)a2, 0);
  return v5;
}
