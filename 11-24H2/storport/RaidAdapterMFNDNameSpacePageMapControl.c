/*
 * XREFs of RaidAdapterMFNDNameSpacePageMapControl @ 0x14005B548
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14002B3B0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     StorIsMFNDSupported @ 0x140055FDC (StorIsMFNDSupported.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     StorLogMFNDNSPageMapControl @ 0x1400670F4 (StorLogMFNDNSPageMapControl.c)
 *     StorMapMFNDErrorToNtStatus @ 0x140067C1C (StorMapMFNDErrorToNtStatus.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     StorMFNDNSPageMapControl @ 0x14018E7E8 (StorMFNDNSPageMapControl.c)
 */

__int64 __fastcall RaidAdapterMFNDNameSpacePageMapControl(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v3; // ebx
  __int64 v6; // rdx
  unsigned int v7; // r9d
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // r15d
  int v11; // edx
  int v12; // r8d
  bool v13; // zf
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  int *v16; // rax
  const EVENT_DESCRIPTOR *v17; // rdx
  unsigned __int64 v18; // rdx
  char v19; // r12
  _BYTE *v20; // r9
  unsigned __int8 v21; // r10
  char v22; // si
  char v23; // r11
  char v24; // r13
  char *v25; // r11
  unsigned int v26; // eax
  unsigned int v27; // r8d
  unsigned int *v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // r14
  char v31; // cl
  char v32; // r8
  _BYTE *v33; // rax
  unsigned int v34; // eax
  char v35; // al
  __int64 v37; // [rsp+20h] [rbp-49h]
  char v38; // [rsp+60h] [rbp-9h]
  char v39; // [rsp+61h] [rbp-8h]
  int v40; // [rsp+64h] [rbp-5h] BYREF
  unsigned int v41; // [rsp+68h] [rbp-1h] BYREF
  unsigned __int64 v42; // [rsp+70h] [rbp+7h]
  GUID v43; // [rsp+78h] [rbp+Fh] BYREF

  v2 = *(_QWORD *)(a2 + 24);
  v3 = 0;
  v41 = 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( StorIsMFNDSupported(a1) )
  {
    if ( *(_DWORD *)(*(_QWORD *)(v6 + 184) + 16LL) >= 0x18u
      && v2
      && *(_WORD *)v2 == 1
      && *(_DWORD *)(v2 + 4) >= 0x18u
      && (v8 = *(unsigned __int16 *)(v2 + 8), (_WORD)v8)
      && (v9 = *(unsigned int *)(v2 + 16), (_DWORD)v9)
      && (int)v9 < 4 )
    {
      v10 = StorMFNDNSPageMapControl(a1, v8, v9, &v41);
      v7 = v41;
      v40 = v10;
      if ( v10 >= 0 )
        goto LABEL_14;
    }
    else
    {
      v40 = -1073741811;
    }
  }
  else
  {
    v40 = -1073741637;
  }
  StorMapMFNDErrorToNtStatus((unsigned __int16)v7, &v40);
  v10 = v40;
  if ( !v2 )
  {
    v11 = -1;
    v12 = -1;
    goto LABEL_16;
  }
LABEL_14:
  v11 = *(unsigned __int16 *)(v2 + 8);
  v12 = *(_DWORD *)(v2 + 16);
LABEL_16:
  StorLogMFNDNSPageMapControl(a1, v11, v12, v7, v10);
  v13 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v10;
  if ( v13 )
    goto LABEL_82;
  v43 = 0LL;
  IoGetActivityIdIrp(a2, &v43);
  v15 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v15 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_82;
    LODWORD(v37) = *(_DWORD *)(a2 + 48);
    v17 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_81;
  }
  if ( *(_BYTE *)v15 != 15 )
  {
    if ( *(_BYTE *)v15 != 27 )
      goto LABEL_82;
    if ( *(_BYTE *)(v15 + 1) == 7 && !*(_DWORD *)(v15 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v16 = *(int **)(a2 + 56);
        if ( v16 )
          v3 = *v16;
        LODWORD(v37) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v14, v15, &v43, a2, v37, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_82;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_82;
    v17 = (const EVENT_DESCRIPTOR *)&EventPnpRequestComplete;
    LODWORD(v37) = *(_DWORD *)(a2 + 48);
LABEL_81:
    McTemplateK0pd_EtwWriteTransfer(v14, v17, &v43, a2, v37);
    goto LABEL_82;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_82;
  v18 = *(_QWORD *)(v15 + 8);
  v19 = 0;
  v20 = 0LL;
  v38 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  if ( *(_BYTE *)(v18 + 2) != 40 )
  {
    v31 = *(_BYTE *)(v18 + 72);
    v20 = *(_BYTE **)(v18 + 32);
    v21 = *(_BYTE *)(v18 + 11);
    v19 = *(_BYTE *)(v18 + 4);
    if ( !*(_BYTE *)(v18 + 2) )
      goto LABEL_58;
    goto LABEL_82;
  }
  v25 = 0LL;
  v39 = 0;
  if ( *(_DWORD *)(v18 + 20) )
    goto LABEL_82;
  v26 = *(_DWORD *)(v18 + 56);
  v14 = 0LL;
  v40 = 0;
  v41 = v26;
  if ( !v26 )
    goto LABEL_55;
  v27 = v41;
  v28 = (unsigned int *)(v18 + 120);
  v42 = v18 + 120;
  while ( 1 )
  {
    v29 = *v28;
    if ( (unsigned int)v29 >= 0x80 )
    {
      v30 = *(unsigned int *)(v18 + 16);
      if ( (unsigned int)v29 < (unsigned int)v30 )
        break;
    }
LABEL_49:
    v14 = (unsigned int)(v14 + 1);
    v28 = (unsigned int *)(v42 + 4);
    v40 = v14;
    v42 += 4LL;
    if ( (unsigned int)v14 >= v27 )
      goto LABEL_55;
  }
  if ( *(_DWORD *)(v29 + v18) != 64 )
  {
    v14 = (unsigned int)(*(_DWORD *)(v29 + v18) - 65);
    if ( *(_DWORD *)(v29 + v18) == 65 )
    {
      v14 = v29 + 56;
      if ( v29 + 56 <= v30 )
      {
        v39 = 1;
        if ( *(_BYTE *)(v29 + v18 + 10) )
          v25 = (char *)(v29 + v18 + 24);
        v19 = *(_BYTE *)(v29 + v18 + 8);
        v20 = *(_BYTE **)(v29 + v18 + 16);
        v21 = *(_BYTE *)(v29 + v18 + 9);
      }
    }
    else if ( *(_DWORD *)(v29 + v18) == 66 )
    {
      v14 = v29 + 40;
      if ( v29 + 40 <= v30 )
      {
        if ( *(_DWORD *)(v29 + v18 + 12) )
          v25 = (char *)(v29 + v18 + 32);
        v20 = *(_BYTE **)(v29 + v18 + 24);
        goto LABEL_54;
      }
    }
    goto LABEL_47;
  }
  v14 = v29 + 40;
  if ( v29 + 40 > v30 )
  {
LABEL_47:
    if ( v39 )
      goto LABEL_55;
    LODWORD(v14) = v40;
    v27 = v41;
    goto LABEL_49;
  }
  if ( *(_BYTE *)(v29 + v18 + 10) )
    v25 = (char *)(v29 + v18 + 24);
  v20 = *(_BYTE **)(v29 + v18 + 16);
LABEL_54:
  v21 = *(_BYTE *)(v29 + v18 + 9);
  v19 = *(_BYTE *)(v29 + v18 + 8);
LABEL_55:
  if ( v25 )
  {
    v31 = *v25;
    v23 = 0;
LABEL_58:
    LOBYTE(v14) = v31 - 8;
    if ( (v14 & 0x5D) == 0 )
    {
      v32 = *(_BYTE *)(v18 + 3);
      if ( v32 == 1 || !v20 || !v21 )
        goto LABEL_77;
      LOBYTE(v18) = 0;
      v14 = (unsigned __int64)&v20[v21];
      v33 = v20 + 8;
      if ( (unsigned __int8)((*v20 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v33 <= v14 )
        {
          LOBYTE(v18) = 1;
          v23 = v20[2];
          v22 = v20[1] & 0xF;
          v24 = v20[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v33 <= v14 )
        {
          v22 = v20[2] & 0xF;
          v34 = v21;
          if ( (unsigned int)(unsigned __int8)v20[7] + 8 <= v21 )
            v34 = (unsigned __int8)v20[7] + 8;
          v14 = (unsigned __int64)(v20 + 13);
          v18 = (unsigned __int64)&v20[v34];
          if ( (unsigned __int64)(v20 + 13) > v18 )
            v38 = 0;
          else
            v38 = v20[12];
          if ( (unsigned __int64)(v20 + 14) <= v18 )
            v24 = *(_BYTE *)v14;
          LOBYTE(v18) = 1;
        }
        v23 = v38;
      }
      if ( (_BYTE)v18 )
      {
        LOBYTE(v3) = v23;
        v35 = v24;
      }
      else
      {
LABEL_77:
        v22 = 0;
        v35 = 0;
      }
      LODWORD(v37) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v14, v18, &v43, a2, v37, v32, v19, v22, v3, v35, a2);
    }
  }
LABEL_82:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v10;
}
