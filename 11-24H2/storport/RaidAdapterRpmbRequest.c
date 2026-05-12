/*
 * XREFs of RaidAdapterRpmbRequest @ 0x14005E29C
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14002B3B0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x140060440 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall RaidAdapterRpmbRequest(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ebx
  int v5; // r13d
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  _BYTE *v8; // r15
  unsigned __int64 *v9; // rax
  unsigned int v10; // ebp
  unsigned int v11; // r14d
  int v12; // esi
  unsigned int i; // r12d
  int v14; // eax
  char v15; // al
  unsigned int j; // r14d
  int v17; // eax
  unsigned int k; // r14d
  int v19; // eax
  unsigned __int64 *v20; // r14
  unsigned __int64 v21; // rcx
  bool v22; // zf
  unsigned __int64 v23; // rcx
  __int64 v24; // rdx
  const EVENT_DESCRIPTOR *v25; // rdx
  unsigned __int64 v26; // rdx
  char v27; // r12
  char v28; // r11
  _BYTE *v29; // r8
  unsigned __int8 v30; // r10
  char v31; // bp
  int v32; // eax
  char v33; // r13
  char v34; // r15
  char *v35; // r14
  unsigned int v36; // r9d
  unsigned int *v37; // r13
  __int64 v38; // rax
  unsigned __int64 v39; // r15
  int v40; // r14d
  char v41; // r9
  _BYTE *v42; // rax
  unsigned int v43; // eax
  char v44; // al
  __int64 v46; // [rsp+20h] [rbp-A8h]
  char v47; // [rsp+60h] [rbp-68h]
  char v48; // [rsp+61h] [rbp-67h]
  char v49; // [rsp+62h] [rbp-66h]
  int v50; // [rsp+68h] [rbp-60h]
  unsigned int v51; // [rsp+6Ch] [rbp-5Ch]
  GUID v52; // [rsp+70h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  v5 = a1;
  if ( !*(_DWORD *)(a1 + 5560) || !*(_DWORD *)(a1 + 5564) )
  {
    v9 = (unsigned __int64 *)(a2 + 56);
    goto LABEL_37;
  }
  v6 = *(unsigned int *)(v2 + 16);
  v7 = *(unsigned int *)(v2 + 8);
  v8 = *(_BYTE **)(a2 + 24);
  if ( (((unsigned int)v7 | *(_DWORD *)(v2 + 16)) & 0x1FF) != 0 )
    goto LABEL_16;
  if ( v8[511] == 1 || v8[511] == 2 )
  {
    v10 = 1;
    goto LABEL_14;
  }
  if ( v8[511] == 3 )
    goto LABEL_12;
  if ( v8[511] != 4 )
  {
    if ( v8[511] != 6 )
    {
      if ( v8[511] != 7 )
      {
        v9 = (unsigned __int64 *)(a2 + 56);
LABEL_37:
        v12 = -1073741808;
        goto LABEL_38;
      }
      goto LABEL_11;
    }
LABEL_12:
    v10 = 1;
    v11 = (unsigned int)v6 >> 9;
    goto LABEL_15;
  }
LABEL_11:
  v10 = (unsigned int)v7 >> 9;
LABEL_14:
  v11 = 1;
LABEL_15:
  if ( v6 < (unsigned __int64)v11 << 9 )
  {
LABEL_16:
    v12 = -1073741811;
LABEL_17:
    v9 = (unsigned __int64 *)(a2 + 56);
LABEL_38:
    v20 = v9;
    goto LABEL_39;
  }
  if ( v7 < (unsigned __int64)v10 << 9 )
  {
    v12 = -2147483643;
    goto LABEL_17;
  }
  for ( i = 0; i < 0x14; ++i )
  {
    LOBYTE(v7) = -75;
    v14 = RaidAdapterSendRPMBCommandSynchronously(v5, a2, v7, (_DWORD)v8, v11);
    v12 = v14;
    if ( v14 != -2147483631 )
      break;
  }
  if ( v14 >= 0 )
  {
    v15 = v8[511];
    if ( v15 != 3 && v15 != 6 )
      goto LABEL_30;
    memset_0(v8, 0, 0x1FFuLL);
    v8[511] = 5;
    for ( j = 0; j < 0x14; ++j )
    {
      LOBYTE(v7) = -75;
      v17 = RaidAdapterSendRPMBCommandSynchronously(v5, a2, v7, (_DWORD)v8, 1);
      v12 = v17;
      if ( v17 != -2147483631 )
        break;
    }
    if ( v17 >= 0 )
    {
LABEL_30:
      for ( k = 0; k < 0x14; ++k )
      {
        LOBYTE(v7) = -94;
        v19 = RaidAdapterSendRPMBCommandSynchronously(v5, a2, v7, (_DWORD)v8, v10);
        v12 = v19;
        if ( v19 != -2147483631 )
          break;
      }
      if ( v19 < 0 )
        goto LABEL_17;
    }
  }
  v9 = (unsigned __int64 *)(a2 + 56);
  v20 = (unsigned __int64 *)(a2 + 56);
  if ( v12 >= 0 )
  {
    v21 = (unsigned __int64)v10 << 9;
    goto LABEL_40;
  }
LABEL_39:
  v21 = 0LL;
LABEL_40:
  *v9 = v21;
  v22 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v12;
  if ( v22 )
    goto LABEL_109;
  v52 = 0LL;
  IoGetActivityIdIrp(a2, &v52);
  v24 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v24 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_109;
    v25 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_108;
  }
  if ( *(_BYTE *)v24 != 15 )
  {
    if ( *(_BYTE *)v24 != 27 )
      goto LABEL_109;
    if ( *(_BYTE *)(v24 + 1) == 7 && !*(_DWORD *)(v24 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        if ( *v20 )
          v3 = *(_DWORD *)*v20;
        LODWORD(v46) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v23, v24, &v52, a2, v46, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_109;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_109;
    v25 = &EventPnpRequestComplete;
LABEL_108:
    LODWORD(v46) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v23, v25, &v52, a2, v46);
    goto LABEL_109;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_109;
  v26 = *(_QWORD *)(v24 + 8);
  v27 = 0;
  v28 = 0;
  v48 = 0;
  v29 = 0LL;
  v47 = 0;
  v30 = 0;
  v31 = 0;
  v32 = *(unsigned __int8 *)(v26 + 2);
  v33 = 0;
  v34 = 0;
  if ( (_BYTE)v32 != 40 )
  {
    v27 = *(_BYTE *)(v26 + 72);
    v29 = *(_BYTE **)(v26 + 32);
    v30 = *(_BYTE *)(v26 + 11);
    v28 = *(_BYTE *)(v26 + 4);
    goto LABEL_83;
  }
  v32 = *(_DWORD *)(v26 + 20);
  v35 = 0LL;
  v49 = 0;
  if ( v32 )
    goto LABEL_109;
  v36 = *(_DWORD *)(v26 + 56);
  v23 = 0LL;
  v50 = 0;
  v51 = v36;
  if ( !v36 )
    goto LABEL_80;
  v37 = (unsigned int *)(v26 + 120);
  while ( 1 )
  {
    v38 = *v37;
    if ( (unsigned int)v38 >= 0x80 )
    {
      v39 = *(unsigned int *)(v26 + 16);
      if ( (unsigned int)v38 < (unsigned int)v39 )
        break;
    }
LABEL_73:
    v23 = (unsigned int)(v23 + 1);
    ++v37;
    v50 = v23;
    if ( (unsigned int)v23 >= v36 )
      goto LABEL_79;
  }
  if ( *(_DWORD *)(v38 + v26) != 64 )
  {
    v23 = (unsigned int)(*(_DWORD *)(v38 + v26) - 65);
    if ( *(_DWORD *)(v38 + v26) == 65 )
    {
      v23 = v38 + 56;
      if ( v38 + 56 <= v39 )
      {
        v49 = 1;
        if ( *(_BYTE *)(v38 + v26 + 10) )
          v35 = (char *)(v38 + v26 + 24);
        v28 = *(_BYTE *)(v38 + v26 + 8);
        v29 = *(_BYTE **)(v38 + v26 + 16);
        v30 = *(_BYTE *)(v38 + v26 + 9);
      }
    }
    else if ( *(_DWORD *)(v38 + v26) == 66 )
    {
      v23 = v38 + 40;
      if ( v38 + 40 <= v39 )
      {
        if ( *(_DWORD *)(v38 + v26 + 12) )
          v35 = (char *)(v38 + v26 + 32);
        v29 = *(_BYTE **)(v38 + v26 + 24);
        goto LABEL_78;
      }
    }
    goto LABEL_71;
  }
  v23 = v38 + 40;
  if ( v38 + 40 > v39 )
  {
LABEL_71:
    if ( v49 )
      goto LABEL_79;
    LODWORD(v23) = v50;
    v36 = v51;
    goto LABEL_73;
  }
  if ( *(_BYTE *)(v38 + v26 + 10) )
    v35 = (char *)(v38 + v26 + 24);
  v29 = *(_BYTE **)(v38 + v26 + 16);
LABEL_78:
  v30 = *(_BYTE *)(v38 + v26 + 9);
  v28 = *(_BYTE *)(v38 + v26 + 8);
LABEL_79:
  v32 = 0;
  v33 = 0;
  v34 = 0;
LABEL_80:
  if ( !v35 )
  {
LABEL_83:
    v40 = v12;
    if ( !v32 )
      goto LABEL_84;
    goto LABEL_109;
  }
  v27 = *v35;
  v40 = v12;
LABEL_84:
  if ( ((v27 - 8) & 0x5D) == 0 )
  {
    v41 = *(_BYTE *)(v26 + 3);
    if ( v41 == 1 || !v29 || !v30 )
      goto LABEL_104;
    LOBYTE(v26) = 0;
    v23 = (unsigned __int64)&v29[v30];
    v42 = v29 + 8;
    if ( (unsigned __int8)((*v29 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v42 <= v23 )
      {
        LOBYTE(v26) = 1;
        v33 = v29[2];
        v31 = v29[1] & 0xF;
        v34 = v29[3];
      }
    }
    else
    {
      if ( (unsigned __int64)v42 <= v23 )
      {
        v31 = v29[2] & 0xF;
        v43 = v30;
        if ( (unsigned int)(unsigned __int8)v29[7] + 8 <= v30 )
          v43 = (unsigned __int8)v29[7] + 8;
        v23 = (unsigned __int64)(v29 + 13);
        v26 = (unsigned __int64)&v29[v43];
        if ( (unsigned __int64)(v29 + 13) > v26 )
          v48 = 0;
        else
          v48 = v29[12];
        if ( (unsigned __int64)(v29 + 14) > v26 )
          v47 = 0;
        else
          v47 = *(_BYTE *)v23;
        LOBYTE(v26) = 1;
      }
      v34 = v47;
      v33 = v48;
    }
    if ( (_BYTE)v26 )
    {
      LOBYTE(v3) = v33;
      v12 = v40;
      v44 = v34;
    }
    else
    {
LABEL_104:
      v31 = 0;
      v44 = 0;
    }
    LODWORD(v46) = *(_DWORD *)(a2 + 48);
    McTemplateK0pduuuuup_EtwWriteTransfer(v23, v26, &v52, a2, v46, v41, v28, v31, v3, v44, a2);
  }
LABEL_109:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v12;
}
