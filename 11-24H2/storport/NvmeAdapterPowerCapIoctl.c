/*
 * XREFs of NvmeAdapterPowerCapIoctl @ 0x1400D50F0
 * Callers:
 *     NvmeAdapterDeviceControlIrp @ 0x140195438 (NvmeAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeAdapterSetMaxOperationalPower @ 0x14013165C (NvmeAdapterSetMaxOperationalPower.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeAdapterPowerCapIoctl(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rbp
  int v7; // esi
  unsigned int v8; // ecx
  __int64 v9; // rax
  int v10; // ebx
  __int64 v11; // rax
  bool v12; // zf
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  int *v15; // rax
  const EVENT_DESCRIPTOR *v16; // rdx
  __int64 v17; // rdx
  char v18; // r12
  _BYTE *v19; // r9
  unsigned __int8 v20; // r10
  char v21; // bp
  char v22; // r11
  char v23; // r13
  char *v24; // r11
  unsigned int v25; // r15d
  unsigned __int64 v26; // r14
  __int64 v27; // r8
  int v28; // ecx
  char v29; // cl
  char v30; // r8
  _BYTE *v31; // rax
  unsigned int v32; // eax
  unsigned __int64 v33; // r8
  char v34; // al
  char v36; // [rsp+60h] [rbp-68h]
  char v37; // [rsp+61h] [rbp-67h]
  __int64 v38; // [rsp+68h] [rbp-60h] BYREF
  GUID v39; // [rsp+70h] [rbp-58h] BYREF

  v3 = *(_QWORD *)(a2 + 184);
  v4 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v3 + 16) < 0x18u || *(_DWORD *)(v3 + 8) < 0x18u )
  {
    v7 = -1073741820;
LABEL_13:
    v10 = 0;
    goto LABEL_14;
  }
  if ( *(_DWORD *)v4 != 1 || *(_DWORD *)(v4 + 4) < 0x18u || (v8 = *(_DWORD *)(v4 + 8), v8 > 1) )
  {
    v7 = -1073741811;
    goto LABEL_13;
  }
  v9 = *(_QWORD *)(a1 + 160);
  v10 = 0;
  if ( *(_BYTE *)v9 == 1 && *(_QWORD *)(*(_QWORD *)(v9 + 8) + 24LL) )
  {
    v38 = *(_QWORD *)(v4 + 16);
    LOBYTE(a3) = v8 == 0;
    v7 = NvmeAdapterSetMaxOperationalPower(a1, &v38, a3, 0LL);
    v11 = 0LL;
    if ( v7 >= 0 )
    {
      v11 = 24LL;
      *(_QWORD *)(v4 + 16) = v38;
    }
    goto LABEL_15;
  }
  v7 = -1073741637;
LABEL_14:
  v11 = 0LL;
LABEL_15:
  v12 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a2 + 56) = v11;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v7;
  if ( v12 )
    goto LABEL_79;
  v39 = 0LL;
  IoGetActivityIdIrp(a2, &v39);
  v14 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v14 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_79;
    v16 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_78;
  }
  if ( *(_BYTE *)v14 != 15 )
  {
    if ( *(_BYTE *)v14 != 27 )
      goto LABEL_79;
    if ( *(_BYTE *)(v14 + 1) == 7 && !*(_DWORD *)(v14 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v15 = *(int **)(a2 + 56);
        if ( v15 )
          v10 = *v15;
        McTemplateK0pqd_EtwWriteTransfer(v13, v14, &v39, a2, v10, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_79;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_79;
    v16 = &EventPnpRequestComplete;
LABEL_78:
    McTemplateK0pd_EtwWriteTransfer(v13, v16, &v39, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_79;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_79;
  v17 = *(_QWORD *)(v14 + 8);
  v18 = 0;
  v19 = 0LL;
  v36 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  if ( *(_BYTE *)(v17 + 2) != 40 )
  {
    v29 = *(_BYTE *)(v17 + 72);
    v19 = *(_BYTE **)(v17 + 32);
    v20 = *(_BYTE *)(v17 + 11);
    v18 = *(_BYTE *)(v17 + 4);
    if ( !*(_BYTE *)(v17 + 2) )
      goto LABEL_55;
    goto LABEL_79;
  }
  v24 = 0LL;
  v37 = 0;
  if ( *(_DWORD *)(v17 + 20) )
    goto LABEL_79;
  v25 = 0;
  LODWORD(v38) = *(_DWORD *)(v17 + 56);
  if ( !(_DWORD)v38 )
    goto LABEL_52;
  while ( 1 )
  {
    v13 = *(unsigned int *)(v17 + 4LL * v25 + 120);
    if ( (unsigned int)v13 >= 0x80 )
    {
      v26 = *(unsigned int *)(v17 + 16);
      if ( (unsigned int)v13 < (unsigned int)v26 )
        break;
    }
LABEL_46:
    if ( ++v25 >= (unsigned int)v38 )
      goto LABEL_52;
  }
  v27 = (unsigned int)v13;
  v28 = *(_DWORD *)(v13 + v17) - 64;
  if ( v28 )
  {
    v13 = (unsigned int)(v28 - 1);
    if ( (_DWORD)v13 )
    {
      if ( (_DWORD)v13 == 1 )
      {
        v13 = v27 + 40;
        if ( v27 + 40 <= v26 )
        {
          if ( *(_DWORD *)(v27 + v17 + 12) )
            v24 = (char *)(v27 + v17 + 32);
          v19 = *(_BYTE **)(v27 + v17 + 24);
          goto LABEL_51;
        }
      }
    }
    else
    {
      v13 = v27 + 56;
      if ( v27 + 56 <= v26 )
      {
        v37 = 1;
        if ( *(_BYTE *)(v27 + v17 + 10) )
          v24 = (char *)(v27 + v17 + 24);
        v18 = *(_BYTE *)(v27 + v17 + 8);
        v19 = *(_BYTE **)(v27 + v17 + 16);
        v20 = *(_BYTE *)(v27 + v17 + 9);
      }
    }
    goto LABEL_45;
  }
  v13 = v27 + 40;
  if ( v27 + 40 > v26 )
  {
LABEL_45:
    if ( v37 )
      goto LABEL_52;
    goto LABEL_46;
  }
  if ( *(_BYTE *)(v27 + v17 + 10) )
    v24 = (char *)(v27 + v17 + 24);
  v19 = *(_BYTE **)(v27 + v17 + 16);
LABEL_51:
  v20 = *(_BYTE *)(v27 + v17 + 9);
  v18 = *(_BYTE *)(v27 + v17 + 8);
LABEL_52:
  if ( v24 )
  {
    v29 = *v24;
    v22 = 0;
LABEL_55:
    LOBYTE(v13) = v29 - 8;
    if ( (v13 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v17 + 3) == 1 || !v19 || !v20 )
        goto LABEL_74;
      v30 = 0;
      v13 = (unsigned __int64)&v19[v20];
      v31 = v19 + 8;
      if ( (unsigned __int8)((*v19 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v31 <= v13 )
        {
          v30 = 1;
          v22 = v19[2];
          v21 = v19[1] & 0xF;
          v23 = v19[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v31 <= v13 )
        {
          v21 = v19[2] & 0xF;
          v32 = v20;
          if ( (unsigned int)(unsigned __int8)v19[7] + 8 <= v20 )
            v32 = (unsigned __int8)v19[7] + 8;
          v13 = (unsigned __int64)(v19 + 13);
          v33 = (unsigned __int64)&v19[v32];
          if ( (unsigned __int64)(v19 + 13) > v33 )
            v36 = 0;
          else
            v36 = v19[12];
          if ( (unsigned __int64)(v19 + 14) <= v33 )
            v23 = *(_BYTE *)v13;
          v30 = 1;
        }
        v22 = v36;
      }
      if ( v30 )
      {
        LOBYTE(v10) = v22;
        v34 = v23;
      }
      else
      {
LABEL_74:
        v21 = 0;
        v34 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        v13,
        v17,
        &v39,
        a2,
        *(_DWORD *)(a2 + 48),
        *(_BYTE *)(v17 + 3),
        v18,
        v21,
        v10,
        v34,
        a2);
    }
  }
LABEL_79:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v7;
}
