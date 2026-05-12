/*
 * XREFs of RaidAdapterReconfigureMFND @ 0x14005DA44
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14002B3B0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     StorIsMFNDSupported @ 0x140055FDC (StorIsMFNDSupported.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     StorLogMFNDReconfigure @ 0x1400678D8 (StorLogMFNDReconfigure.c)
 *     StorMapMFNDErrorToNtStatus @ 0x140067C1C (StorMapMFNDErrorToNtStatus.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     StorResetMFND @ 0x140190CF8 (StorResetMFND.c)
 */

__int64 __fastcall RaidAdapterReconfigureMFND(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  int v3; // ebx
  int v6; // r12d
  _BYTE **v7; // rdx
  int v8; // r9d
  unsigned int v9; // esi
  _BYTE **v10; // r15
  unsigned int v11; // ecx
  unsigned int v12; // eax
  __int64 v13; // r14
  __int64 v14; // rdx
  int v15; // eax
  int v16; // r8d
  bool v17; // zf
  unsigned __int64 v18; // rcx
  _BYTE *v19; // rdx
  int *v20; // rax
  const EVENT_DESCRIPTOR *v21; // rdx
  unsigned __int64 v22; // rdx
  char v23; // r12
  _BYTE *v24; // r9
  unsigned __int8 v25; // r10
  char v26; // r14
  char v27; // r11
  char v28; // r13
  char *v29; // r11
  unsigned int v30; // eax
  unsigned int v31; // r8d
  unsigned int *v32; // rax
  __int64 v33; // rax
  unsigned __int64 v34; // r15
  char v35; // cl
  char v36; // r8
  _BYTE *v37; // rax
  unsigned int v38; // eax
  char v39; // al
  __int64 v41; // [rsp+20h] [rbp-49h]
  char v42; // [rsp+60h] [rbp-9h]
  char v43; // [rsp+61h] [rbp-8h]
  int v44; // [rsp+64h] [rbp-5h] BYREF
  unsigned int v45; // [rsp+68h] [rbp-1h] BYREF
  unsigned __int64 v46; // [rsp+70h] [rbp+7h]
  GUID v47; // [rsp+78h] [rbp+Fh] BYREF

  v2 = *(_QWORD *)(a2 + 24);
  v3 = 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  v44 = 0;
  v6 = 0;
  if ( !StorIsMFNDSupported(a1) )
  {
    v9 = -1073741637;
LABEL_21:
    v16 = -1;
    v10 = v7;
    goto LABEL_22;
  }
  v10 = v7;
  v11 = *((_DWORD *)*v7 + 4);
  if ( v11 < 0x14
    || !v2
    || *(_WORD *)v2 != 1
    || (v12 = *(_DWORD *)(v2 + 4), v12 < 0x14)
    || (v6 = *(_DWORD *)(v2 + 12), v6 != 1) )
  {
    v9 = -1073741811;
    goto LABEL_21;
  }
  if ( v11 < 0x20 || v12 < 0x20 )
  {
    v9 = -1073741789;
    goto LABEL_21;
  }
  v13 = v2 + 16;
  if ( *(_WORD *)v13 == 1
    && *(_DWORD *)(v13 + 4) >= 0x10u
    && (v14 = *(unsigned int *)(v13 + 8), (_DWORD)v14)
    && (unsigned int)v14 <= *(unsigned __int16 *)(*(_QWORD *)(a1 + 6152) + 8LL) )
  {
    v15 = StorResetMFND(a1, v14, &v44);
    v8 = v44;
    v9 = v15;
    v45 = v15;
    if ( v15 < 0 )
    {
      StorMapMFNDErrorToNtStatus((unsigned __int16)v44, &v45);
      v9 = v45;
    }
  }
  else
  {
    v9 = -1073741811;
  }
  v7 = v10;
  if ( !v13 )
    goto LABEL_21;
  v16 = *(_DWORD *)(v13 + 8);
LABEL_22:
  StorLogMFNDReconfigure(a1, v6, v16, v8, v9);
  v17 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v9;
  if ( v17 )
    goto LABEL_88;
  v47 = 0LL;
  IoGetActivityIdIrp(a2, &v47);
  v19 = *v10;
  if ( **v10 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_88;
    LODWORD(v41) = *(_DWORD *)(a2 + 48);
    v21 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_87;
  }
  if ( **v10 != 15 )
  {
    if ( **v10 != 27 )
      goto LABEL_88;
    if ( v19[1] == 7 && !*((_DWORD *)v19 + 2) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v20 = *(int **)(a2 + 56);
        if ( v20 )
          v3 = *v20;
        LODWORD(v41) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v18, (__int64)v19, &v47, a2, v41, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_88;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_88;
    v21 = &EventPnpRequestComplete;
    LODWORD(v41) = *(_DWORD *)(a2 + 48);
LABEL_87:
    McTemplateK0pd_EtwWriteTransfer(v18, v21, &v47, a2, v41);
    goto LABEL_88;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_88;
  v22 = *((_QWORD *)v19 + 1);
  v23 = 0;
  v24 = 0LL;
  v42 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  if ( *(_BYTE *)(v22 + 2) != 40 )
  {
    v35 = *(_BYTE *)(v22 + 72);
    v24 = *(_BYTE **)(v22 + 32);
    v25 = *(_BYTE *)(v22 + 11);
    v23 = *(_BYTE *)(v22 + 4);
    if ( !*(_BYTE *)(v22 + 2) )
      goto LABEL_64;
    goto LABEL_88;
  }
  v29 = 0LL;
  v43 = 0;
  if ( *(_DWORD *)(v22 + 20) )
    goto LABEL_88;
  v30 = *(_DWORD *)(v22 + 56);
  v18 = 0LL;
  v44 = 0;
  v45 = v30;
  if ( !v30 )
    goto LABEL_61;
  v31 = v45;
  v32 = (unsigned int *)(v22 + 120);
  v46 = v22 + 120;
  while ( 1 )
  {
    v33 = *v32;
    if ( (unsigned int)v33 >= 0x80 )
    {
      v34 = *(unsigned int *)(v22 + 16);
      if ( (unsigned int)v33 < (unsigned int)v34 )
        break;
    }
LABEL_55:
    v18 = (unsigned int)(v18 + 1);
    v32 = (unsigned int *)(v46 + 4);
    v44 = v18;
    v46 += 4LL;
    if ( (unsigned int)v18 >= v31 )
      goto LABEL_61;
  }
  if ( *(_DWORD *)(v33 + v22) != 64 )
  {
    v18 = (unsigned int)(*(_DWORD *)(v33 + v22) - 65);
    if ( *(_DWORD *)(v33 + v22) == 65 )
    {
      v18 = v33 + 56;
      if ( v33 + 56 <= v34 )
      {
        v43 = 1;
        if ( *(_BYTE *)(v33 + v22 + 10) )
          v29 = (char *)(v33 + v22 + 24);
        v23 = *(_BYTE *)(v33 + v22 + 8);
        v24 = *(_BYTE **)(v33 + v22 + 16);
        v25 = *(_BYTE *)(v33 + v22 + 9);
      }
    }
    else if ( *(_DWORD *)(v33 + v22) == 66 )
    {
      v18 = v33 + 40;
      if ( v33 + 40 <= v34 )
      {
        if ( *(_DWORD *)(v33 + v22 + 12) )
          v29 = (char *)(v33 + v22 + 32);
        v24 = *(_BYTE **)(v33 + v22 + 24);
        goto LABEL_60;
      }
    }
    goto LABEL_53;
  }
  v18 = v33 + 40;
  if ( v33 + 40 > v34 )
  {
LABEL_53:
    if ( v43 )
      goto LABEL_61;
    LODWORD(v18) = v44;
    v31 = v45;
    goto LABEL_55;
  }
  if ( *(_BYTE *)(v33 + v22 + 10) )
    v29 = (char *)(v33 + v22 + 24);
  v24 = *(_BYTE **)(v33 + v22 + 16);
LABEL_60:
  v25 = *(_BYTE *)(v33 + v22 + 9);
  v23 = *(_BYTE *)(v33 + v22 + 8);
LABEL_61:
  if ( v29 )
  {
    v35 = *v29;
    v27 = 0;
LABEL_64:
    LOBYTE(v18) = v35 - 8;
    if ( (v18 & 0x5D) == 0 )
    {
      v36 = *(_BYTE *)(v22 + 3);
      if ( v36 == 1 || !v24 || !v25 )
        goto LABEL_83;
      LOBYTE(v22) = 0;
      v18 = (unsigned __int64)&v24[v25];
      v37 = v24 + 8;
      if ( (unsigned __int8)((*v24 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v37 <= v18 )
        {
          LOBYTE(v22) = 1;
          v27 = v24[2];
          v26 = v24[1] & 0xF;
          v28 = v24[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v37 <= v18 )
        {
          v26 = v24[2] & 0xF;
          v38 = v25;
          if ( (unsigned int)(unsigned __int8)v24[7] + 8 <= v25 )
            v38 = (unsigned __int8)v24[7] + 8;
          v18 = (unsigned __int64)(v24 + 13);
          v22 = (unsigned __int64)&v24[v38];
          if ( (unsigned __int64)(v24 + 13) > v22 )
            v42 = 0;
          else
            v42 = v24[12];
          if ( (unsigned __int64)(v24 + 14) <= v22 )
            v28 = *(_BYTE *)v18;
          LOBYTE(v22) = 1;
        }
        v27 = v42;
      }
      if ( (_BYTE)v22 )
      {
        LOBYTE(v3) = v27;
        v39 = v28;
      }
      else
      {
LABEL_83:
        v26 = 0;
        v39 = 0;
      }
      LODWORD(v41) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v18, v22, &v47, a2, v41, v36, v23, v26, v3, v39, a2);
    }
  }
LABEL_88:
  IofCompleteRequest((PIRP)a2, 0);
  return v9;
}
