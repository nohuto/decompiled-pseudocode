/*
 * XREFs of RaUnitPowerCapIoctl @ 0x140094920
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14002C620 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidUnitIsRegisteredForIdleDetection @ 0x1400713D4 (RaidUnitIsRegisteredForIdleDetection.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RaUnitPowerCapIoctl(__int64 a1, __int64 a2)
{
  int v3; // ebx
  _DWORD *v4; // rdx
  int v5; // esi
  __int64 v6; // rcx
  bool v8; // zf
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  int *v11; // rax
  const EVENT_DESCRIPTOR *v12; // rdx
  __int64 v13; // rdx
  char v14; // r15
  _BYTE *v15; // r9
  unsigned __int8 v16; // r10
  char v17; // bp
  char v18; // r11
  char v19; // r12
  char *v20; // r11
  unsigned int *v21; // r13
  __int64 v22; // rax
  unsigned __int64 v23; // r14
  char v24; // cl
  char v25; // r8
  _BYTE *v26; // rax
  unsigned int v27; // eax
  unsigned __int64 v28; // r8
  char v29; // al
  int v30; // [rsp+20h] [rbp-A8h]
  char v31; // [rsp+60h] [rbp-68h]
  char v32; // [rsp+61h] [rbp-67h]
  int v33; // [rsp+64h] [rbp-64h]
  unsigned int v34; // [rsp+68h] [rbp-60h]
  GUID v35; // [rsp+70h] [rbp-58h] BYREF

  v3 = 0;
  v4 = *(_DWORD **)(a2 + 24);
  v5 = -1073741808;
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) >= 0x18u )
  {
    if ( v4 && *v4 == 1 && v4[1] >= 0x18u && v4[2] <= 1u )
    {
      if ( (!RaidUnitIsRegisteredForIdleDetection(a1) || (*(_BYTE *)(*(_QWORD *)(v6 + 24) + 110LL) & 0x40) != 0)
        && *(_QWORD *)(*(_QWORD *)(v6 + 24) + 4960LL) )
      {
        ++*(_BYTE *)(a2 + 67);
        *(_QWORD *)(a2 + 184) += 72LL;
        return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(v6 + 24) + 8LL), (PIRP)a2);
      }
    }
    else
    {
      v5 = -1073741811;
    }
  }
  else
  {
    v5 = -1073741820;
  }
  v8 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v5;
  if ( v8 )
    goto LABEL_78;
  v35 = 0LL;
  IoGetActivityIdIrp(a2, &v35);
  v10 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v10 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_78;
    v9 = *(unsigned int *)(a2 + 48);
    v12 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    v30 = *(_DWORD *)(a2 + 48);
    goto LABEL_77;
  }
  if ( *(_BYTE *)v10 != 15 )
  {
    if ( *(_BYTE *)v10 != 27 )
      goto LABEL_78;
    if ( *(_BYTE *)(v10 + 1) == 7 && !*(_DWORD *)(v10 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v11 = *(int **)(a2 + 56);
        if ( v11 )
          v3 = *v11;
        McTemplateK0pqd_EtwWriteTransfer(v9, v10, &v35, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_78;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_78;
    v12 = &EventPnpRequestComplete;
    v30 = *(_DWORD *)(a2 + 48);
LABEL_77:
    McTemplateK0pd_EtwWriteTransfer(v9, v12, &v35, a2, v30);
    goto LABEL_78;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_78;
  v13 = *(_QWORD *)(v10 + 8);
  v14 = 0;
  v15 = 0LL;
  v31 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  if ( *(_BYTE *)(v13 + 2) != 40 )
  {
    v24 = *(_BYTE *)(v13 + 72);
    v15 = *(_BYTE **)(v13 + 32);
    v16 = *(_BYTE *)(v13 + 11);
    v14 = *(_BYTE *)(v13 + 4);
    if ( !*(_BYTE *)(v13 + 2) )
      goto LABEL_54;
    goto LABEL_78;
  }
  v20 = 0LL;
  v32 = 0;
  if ( *(_DWORD *)(v13 + 20) )
    goto LABEL_78;
  v9 = 0LL;
  v33 = 0;
  v34 = *(_DWORD *)(v13 + 56);
  if ( !v34 )
    goto LABEL_51;
  v21 = (unsigned int *)(v13 + 120);
  while ( 1 )
  {
    v22 = *v21;
    if ( (unsigned int)v22 >= 0x80 )
    {
      v23 = *(unsigned int *)(v13 + 16);
      if ( (unsigned int)v22 < (unsigned int)v23 )
        break;
    }
LABEL_45:
    v9 = (unsigned int)(v9 + 1);
    ++v21;
    v33 = v9;
    if ( (unsigned int)v9 >= v34 )
      goto LABEL_51;
  }
  if ( *(_DWORD *)(v22 + v13) != 64 )
  {
    v9 = (unsigned int)(*(_DWORD *)(v22 + v13) - 65);
    if ( *(_DWORD *)(v22 + v13) == 65 )
    {
      v9 = v22 + 56;
      if ( v22 + 56 <= v23 )
      {
        v32 = 1;
        if ( *(_BYTE *)(v22 + v13 + 10) )
          v20 = (char *)(v22 + v13 + 24);
        v14 = *(_BYTE *)(v22 + v13 + 8);
        v15 = *(_BYTE **)(v22 + v13 + 16);
        v16 = *(_BYTE *)(v22 + v13 + 9);
      }
    }
    else if ( *(_DWORD *)(v22 + v13) == 66 )
    {
      v9 = v22 + 40;
      if ( v22 + 40 <= v23 )
      {
        if ( *(_DWORD *)(v22 + v13 + 12) )
          v20 = (char *)(v22 + v13 + 32);
        v15 = *(_BYTE **)(v22 + v13 + 24);
        goto LABEL_50;
      }
    }
    goto LABEL_43;
  }
  v9 = v22 + 40;
  if ( v22 + 40 > v23 )
  {
LABEL_43:
    if ( v32 )
      goto LABEL_51;
    LODWORD(v9) = v33;
    goto LABEL_45;
  }
  if ( *(_BYTE *)(v22 + v13 + 10) )
    v20 = (char *)(v22 + v13 + 24);
  v15 = *(_BYTE **)(v22 + v13 + 16);
LABEL_50:
  v16 = *(_BYTE *)(v22 + v13 + 9);
  v14 = *(_BYTE *)(v22 + v13 + 8);
LABEL_51:
  if ( v20 )
  {
    v24 = *v20;
    v18 = 0;
LABEL_54:
    LOBYTE(v9) = v24 - 8;
    if ( (v9 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v13 + 3) == 1 || !v15 || !v16 )
        goto LABEL_73;
      v25 = 0;
      v9 = (unsigned __int64)&v15[v16];
      v26 = v15 + 8;
      if ( (unsigned __int8)((*v15 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v26 <= v9 )
        {
          v25 = 1;
          v18 = v15[2];
          v17 = v15[1] & 0xF;
          v19 = v15[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v26 <= v9 )
        {
          v17 = v15[2] & 0xF;
          v27 = v16;
          if ( (unsigned int)(unsigned __int8)v15[7] + 8 <= v16 )
            v27 = (unsigned __int8)v15[7] + 8;
          v9 = (unsigned __int64)(v15 + 13);
          v28 = (unsigned __int64)&v15[v27];
          if ( (unsigned __int64)(v15 + 13) > v28 )
            v31 = 0;
          else
            v31 = v15[12];
          if ( (unsigned __int64)(v15 + 14) <= v28 )
            v19 = *(_BYTE *)v9;
          v25 = 1;
        }
        v18 = v31;
      }
      if ( v25 )
      {
        LOBYTE(v3) = v18;
        v29 = v19;
      }
      else
      {
LABEL_73:
        v17 = 0;
        v29 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        v9,
        v13,
        &v35,
        a2,
        *(_DWORD *)(a2 + 48),
        *(_BYTE *)(v13 + 3),
        v14,
        v17,
        v3,
        v29,
        a2);
    }
  }
LABEL_78:
  IofCompleteRequest((PIRP)a2, 0);
  return v5;
}
