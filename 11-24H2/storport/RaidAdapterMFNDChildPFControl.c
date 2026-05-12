/*
 * XREFs of RaidAdapterMFNDChildPFControl @ 0x14005B108
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14002B3B0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     StorIsMFNDSupported @ 0x140055FDC (StorIsMFNDSupported.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     StorLogMFNDChildPFControl @ 0x140066F1C (StorLogMFNDChildPFControl.c)
 *     StorMapMFNDErrorToNtStatus @ 0x140067C1C (StorMapMFNDErrorToNtStatus.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     StorMFNDChildPFControl @ 0x14018E6B4 (StorMFNDChildPFControl.c)
 */

__int64 __fastcall RaidAdapterMFNDChildPFControl(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v3; // ebx
  __int64 v6; // rdx
  unsigned __int16 v7; // r9
  __int64 v8; // rdx
  unsigned __int16 v9; // ax
  int v10; // r15d
  int v11; // edx
  int v12; // r8d
  int v13; // eax
  bool v14; // zf
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  int *v17; // rax
  const EVENT_DESCRIPTOR *v18; // rdx
  unsigned __int64 v19; // rdx
  char v20; // r12
  _BYTE *v21; // r9
  unsigned __int8 v22; // r10
  char v23; // si
  char v24; // r11
  char v25; // r13
  char *v26; // r11
  unsigned int v27; // eax
  unsigned int v28; // r8d
  unsigned int *v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // r14
  char v32; // cl
  char v33; // r8
  _BYTE *v34; // rax
  unsigned int v35; // eax
  char v36; // al
  __int64 v38; // [rsp+20h] [rbp-49h]
  __int64 v39; // [rsp+28h] [rbp-41h]
  char v40; // [rsp+60h] [rbp-9h]
  char v41; // [rsp+61h] [rbp-8h]
  int v42; // [rsp+64h] [rbp-5h] BYREF
  unsigned int v43; // [rsp+68h] [rbp-1h] BYREF
  unsigned __int64 v44; // [rsp+70h] [rbp+7h]
  GUID v45; // [rsp+78h] [rbp+Fh] BYREF

  v2 = *(_QWORD *)(a2 + 24);
  v3 = 0;
  v43 = 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( !StorIsMFNDSupported(a1) )
  {
    v42 = -1073741637;
    goto LABEL_15;
  }
  if ( *(_DWORD *)(*(_QWORD *)(v6 + 184) + 16LL) >= 0x20u )
  {
    if ( v2 )
    {
      if ( *(_WORD *)v2 == 1 && *(_DWORD *)(v2 + 4) >= 0x20u )
      {
        v8 = *(unsigned int *)(v2 + 24);
        if ( (_DWORD)v8 )
        {
          if ( (int)v8 < 5 )
          {
            if ( (*(_DWORD *)(v2 + 16) & 1) != 0 )
            {
              v9 = -1;
              goto LABEL_12;
            }
            v9 = *(_WORD *)(v2 + 8);
            if ( v9 )
            {
LABEL_12:
              v10 = StorMFNDChildPFControl(a1, v8, v9, &v43);
              v7 = v43;
              v42 = v10;
              if ( v10 >= 0 )
                goto LABEL_16;
              goto LABEL_15;
            }
          }
        }
      }
    }
  }
  v42 = -1073741811;
LABEL_15:
  StorMapMFNDErrorToNtStatus(v7, &v42);
  v10 = v42;
  if ( !v2 )
  {
    v11 = -1;
    v12 = -1;
    v13 = -1;
    goto LABEL_18;
  }
LABEL_16:
  v11 = *(unsigned __int16 *)(v2 + 8);
  v12 = *(_DWORD *)(v2 + 16);
  v13 = *(_DWORD *)(v2 + 24);
LABEL_18:
  StorLogMFNDChildPFControl(a1, v11, v12, v13, v7, v10);
  v14 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v10;
  if ( v14 )
    goto LABEL_84;
  v45 = 0LL;
  IoGetActivityIdIrp(a2, &v45);
  v16 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v16 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_84;
    LODWORD(v38) = *(_DWORD *)(a2 + 48);
    v18 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_83;
  }
  if ( *(_BYTE *)v16 != 15 )
  {
    if ( *(_BYTE *)v16 != 27 )
      goto LABEL_84;
    if ( *(_BYTE *)(v16 + 1) == 7 && !*(_DWORD *)(v16 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v17 = *(int **)(a2 + 56);
        if ( v17 )
          v3 = *v17;
        LODWORD(v39) = *(_DWORD *)(a2 + 48);
        LODWORD(v38) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v15, v16, &v45, a2, v38, v39);
      }
      goto LABEL_84;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_84;
    v18 = (const EVENT_DESCRIPTOR *)&EventPnpRequestComplete;
    LODWORD(v38) = *(_DWORD *)(a2 + 48);
LABEL_83:
    McTemplateK0pd_EtwWriteTransfer(v15, v18, &v45, a2, v38);
    goto LABEL_84;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_84;
  v19 = *(_QWORD *)(v16 + 8);
  v20 = 0;
  v21 = 0LL;
  v40 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  if ( *(_BYTE *)(v19 + 2) != 40 )
  {
    v32 = *(_BYTE *)(v19 + 72);
    v21 = *(_BYTE **)(v19 + 32);
    v22 = *(_BYTE *)(v19 + 11);
    v20 = *(_BYTE *)(v19 + 4);
    if ( !*(_BYTE *)(v19 + 2) )
      goto LABEL_60;
    goto LABEL_84;
  }
  v26 = 0LL;
  v41 = 0;
  if ( *(_DWORD *)(v19 + 20) )
    goto LABEL_84;
  v27 = *(_DWORD *)(v19 + 56);
  v15 = 0LL;
  v42 = 0;
  v43 = v27;
  if ( !v27 )
    goto LABEL_57;
  v28 = v43;
  v29 = (unsigned int *)(v19 + 120);
  v44 = v19 + 120;
  while ( 1 )
  {
    v30 = *v29;
    if ( (unsigned int)v30 >= 0x80 )
    {
      v31 = *(unsigned int *)(v19 + 16);
      if ( (unsigned int)v30 < (unsigned int)v31 )
        break;
    }
LABEL_51:
    v15 = (unsigned int)(v15 + 1);
    v29 = (unsigned int *)(v44 + 4);
    v42 = v15;
    v44 += 4LL;
    if ( (unsigned int)v15 >= v28 )
      goto LABEL_57;
  }
  if ( *(_DWORD *)(v30 + v19) != 64 )
  {
    v15 = (unsigned int)(*(_DWORD *)(v30 + v19) - 65);
    if ( *(_DWORD *)(v30 + v19) == 65 )
    {
      v15 = v30 + 56;
      if ( v30 + 56 <= v31 )
      {
        v41 = 1;
        if ( *(_BYTE *)(v30 + v19 + 10) )
          v26 = (char *)(v30 + v19 + 24);
        v20 = *(_BYTE *)(v30 + v19 + 8);
        v21 = *(_BYTE **)(v30 + v19 + 16);
        v22 = *(_BYTE *)(v30 + v19 + 9);
      }
    }
    else if ( *(_DWORD *)(v30 + v19) == 66 )
    {
      v15 = v30 + 40;
      if ( v30 + 40 <= v31 )
      {
        if ( *(_DWORD *)(v30 + v19 + 12) )
          v26 = (char *)(v30 + v19 + 32);
        v21 = *(_BYTE **)(v30 + v19 + 24);
        goto LABEL_56;
      }
    }
    goto LABEL_49;
  }
  v15 = v30 + 40;
  if ( v30 + 40 > v31 )
  {
LABEL_49:
    if ( v41 )
      goto LABEL_57;
    LODWORD(v15) = v42;
    v28 = v43;
    goto LABEL_51;
  }
  if ( *(_BYTE *)(v30 + v19 + 10) )
    v26 = (char *)(v30 + v19 + 24);
  v21 = *(_BYTE **)(v30 + v19 + 16);
LABEL_56:
  v22 = *(_BYTE *)(v30 + v19 + 9);
  v20 = *(_BYTE *)(v30 + v19 + 8);
LABEL_57:
  if ( v26 )
  {
    v32 = *v26;
    v24 = 0;
LABEL_60:
    LOBYTE(v15) = v32 - 8;
    if ( (v15 & 0x5D) == 0 )
    {
      v33 = *(_BYTE *)(v19 + 3);
      if ( v33 == 1 || !v21 || !v22 )
        goto LABEL_79;
      LOBYTE(v19) = 0;
      v15 = (unsigned __int64)&v21[v22];
      v34 = v21 + 8;
      if ( (unsigned __int8)((*v21 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v34 <= v15 )
        {
          LOBYTE(v19) = 1;
          v24 = v21[2];
          v23 = v21[1] & 0xF;
          v25 = v21[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v34 <= v15 )
        {
          v23 = v21[2] & 0xF;
          v35 = v22;
          if ( (unsigned int)(unsigned __int8)v21[7] + 8 <= v22 )
            v35 = (unsigned __int8)v21[7] + 8;
          v15 = (unsigned __int64)(v21 + 13);
          v19 = (unsigned __int64)&v21[v35];
          if ( (unsigned __int64)(v21 + 13) > v19 )
            v40 = 0;
          else
            v40 = v21[12];
          if ( (unsigned __int64)(v21 + 14) <= v19 )
            v25 = *(_BYTE *)v15;
          LOBYTE(v19) = 1;
        }
        v24 = v40;
      }
      if ( (_BYTE)v19 )
      {
        LOBYTE(v3) = v24;
        v36 = v25;
      }
      else
      {
LABEL_79:
        v23 = 0;
        v36 = 0;
      }
      LOBYTE(v39) = v33;
      LODWORD(v38) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v15, v19, &v45, a2, v38, v39, v20, v23, v3, v36, a2);
    }
  }
LABEL_84:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v10;
}
