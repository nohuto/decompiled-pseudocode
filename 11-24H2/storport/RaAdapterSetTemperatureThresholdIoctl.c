/*
 * XREFs of RaAdapterSetTemperatureThresholdIoctl @ 0x1400588F8
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14002B3B0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x140010664 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaBuildSetTemperatureThresholdBufferForMiniport @ 0x140089B58 (RaBuildSetTemperatureThresholdBufferForMiniport.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaAdapterSetTemperatureThresholdIoctl(_QWORD *a1, __int64 a2)
{
  int v2; // ebx
  __int64 v4; // rcx
  PVOID v6; // r14
  _BYTE **v7; // rsi
  unsigned int v8; // r15d
  __int16 v9; // ax
  int v10; // eax
  bool v11; // zf
  unsigned __int64 v12; // rcx
  _BYTE *v13; // rdx
  int *v14; // rax
  const EVENT_DESCRIPTOR *v15; // rdx
  unsigned __int64 v16; // rdx
  char v17; // r12
  _BYTE *v18; // r9
  unsigned __int8 v19; // r10
  char v20; // si
  char v21; // r11
  char v22; // r13
  char *v23; // r11
  ULONG v24; // eax
  unsigned int v25; // r8d
  unsigned int *v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // r14
  char v29; // cl
  char v30; // r8
  _BYTE *v31; // rax
  unsigned int v32; // eax
  char v33; // al
  __int64 v35; // [rsp+20h] [rbp-49h]
  __int64 v36; // [rsp+28h] [rbp-41h]
  __int64 v37; // [rsp+30h] [rbp-39h]
  __int64 v38; // [rsp+38h] [rbp-31h]
  char v39; // [rsp+60h] [rbp-9h]
  char v40; // [rsp+61h] [rbp-8h]
  ULONG v41; // [rsp+64h] [rbp-5h] BYREF
  PVOID P; // [rsp+68h] [rbp-1h] BYREF
  unsigned __int64 v43; // [rsp+70h] [rbp+7h]
  GUID v44; // [rsp+78h] [rbp+Fh] BYREF

  v2 = 0;
  v4 = *(_QWORD *)(a2 + 24);
  v6 = 0LL;
  P = 0LL;
  v41 = 0;
  if ( !a1[76] || !a1[77] )
  {
    v8 = -1073741823;
    v7 = (_BYTE **)(a2 + 184);
LABEL_12:
    if ( v6 )
      ExFreePoolWithTag(v6, 0x72536152u);
    goto LABEL_14;
  }
  v7 = (_BYTE **)(a2 + 184);
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) >= 0x10u )
  {
    v9 = *(_WORD *)(v4 + 8);
    if ( (v9 & 1) == 0 )
      *(_WORD *)(v4 + 8) = v9 | 1;
    v10 = RaBuildSetTemperatureThresholdBufferForMiniport(a1[1], a2, &P, &v41);
    v6 = P;
    if ( v10 >= 0 && P )
      v8 = RaidAdapterSendSrbIoControlSynchronously((__int64)a1, (IRP *)a2, (unsigned int *)P, v41, 0LL, 0, 128, 0);
    else
      v8 = -1073741801;
    goto LABEL_12;
  }
  v8 = -1073741820;
LABEL_14:
  v11 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v8;
  if ( v11 )
    goto LABEL_80;
  v44 = 0LL;
  IoGetActivityIdIrp(a2, &v44);
  v13 = *v7;
  if ( **v7 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_80;
    v15 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_79;
  }
  if ( **v7 != 15 )
  {
    if ( **v7 != 27 )
      goto LABEL_80;
    if ( v13[1] == 7 && !*((_DWORD *)v13 + 2) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v14 = *(int **)(a2 + 56);
        if ( v14 )
          v2 = *v14;
        LODWORD(v36) = *(_DWORD *)(a2 + 48);
        LODWORD(v35) = v2;
        McTemplateK0pqd_EtwWriteTransfer(v12, (__int64)v13, &v44, a2, v35, v36);
      }
      goto LABEL_80;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_80;
    v15 = (const EVENT_DESCRIPTOR *)&EventPnpRequestComplete;
LABEL_79:
    LODWORD(v35) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v12, v15, &v44, a2, v35);
    goto LABEL_80;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_80;
  v16 = *((_QWORD *)v13 + 1);
  v17 = 0;
  v18 = 0LL;
  v39 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  if ( *(_BYTE *)(v16 + 2) != 40 )
  {
    v29 = *(_BYTE *)(v16 + 72);
    v18 = *(_BYTE **)(v16 + 32);
    v19 = *(_BYTE *)(v16 + 11);
    v17 = *(_BYTE *)(v16 + 4);
    if ( !*(_BYTE *)(v16 + 2) )
      goto LABEL_56;
    goto LABEL_80;
  }
  v23 = 0LL;
  v40 = 0;
  if ( *(_DWORD *)(v16 + 20) )
    goto LABEL_80;
  v24 = *(_DWORD *)(v16 + 56);
  v12 = 0LL;
  LODWORD(P) = 0;
  v41 = v24;
  if ( !v24 )
    goto LABEL_53;
  v25 = v41;
  v26 = (unsigned int *)(v16 + 120);
  v43 = v16 + 120;
  while ( 1 )
  {
    v27 = *v26;
    if ( (unsigned int)v27 >= 0x80 )
    {
      v28 = *(unsigned int *)(v16 + 16);
      if ( (unsigned int)v27 < (unsigned int)v28 )
        break;
    }
LABEL_47:
    v12 = (unsigned int)(v12 + 1);
    v26 = (unsigned int *)(v43 + 4);
    LODWORD(P) = v12;
    v43 += 4LL;
    if ( (unsigned int)v12 >= v25 )
      goto LABEL_53;
  }
  if ( *(_DWORD *)(v27 + v16) != 64 )
  {
    v12 = (unsigned int)(*(_DWORD *)(v27 + v16) - 65);
    if ( *(_DWORD *)(v27 + v16) == 65 )
    {
      v12 = v27 + 56;
      if ( v27 + 56 <= v28 )
      {
        v40 = 1;
        if ( *(_BYTE *)(v27 + v16 + 10) )
          v23 = (char *)(v27 + v16 + 24);
        v17 = *(_BYTE *)(v27 + v16 + 8);
        v18 = *(_BYTE **)(v27 + v16 + 16);
        v19 = *(_BYTE *)(v27 + v16 + 9);
      }
    }
    else if ( *(_DWORD *)(v27 + v16) == 66 )
    {
      v12 = v27 + 40;
      if ( v27 + 40 <= v28 )
      {
        if ( *(_DWORD *)(v27 + v16 + 12) )
          v23 = (char *)(v27 + v16 + 32);
        v18 = *(_BYTE **)(v27 + v16 + 24);
        goto LABEL_52;
      }
    }
    goto LABEL_45;
  }
  v12 = v27 + 40;
  if ( v27 + 40 > v28 )
  {
LABEL_45:
    if ( v40 )
      goto LABEL_53;
    LODWORD(v12) = (_DWORD)P;
    v25 = v41;
    goto LABEL_47;
  }
  if ( *(_BYTE *)(v27 + v16 + 10) )
    v23 = (char *)(v27 + v16 + 24);
  v18 = *(_BYTE **)(v27 + v16 + 16);
LABEL_52:
  v19 = *(_BYTE *)(v27 + v16 + 9);
  v17 = *(_BYTE *)(v27 + v16 + 8);
LABEL_53:
  if ( v23 )
  {
    v29 = *v23;
    v21 = 0;
LABEL_56:
    LOBYTE(v12) = v29 - 8;
    if ( (v12 & 0x5D) == 0 )
    {
      v30 = *(_BYTE *)(v16 + 3);
      if ( v30 == 1 || !v18 || !v19 )
        goto LABEL_75;
      LOBYTE(v16) = 0;
      v12 = (unsigned __int64)&v18[v19];
      v31 = v18 + 8;
      if ( (unsigned __int8)((*v18 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v31 <= v12 )
        {
          LOBYTE(v16) = 1;
          v21 = v18[2];
          v20 = v18[1] & 0xF;
          v22 = v18[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v31 <= v12 )
        {
          v20 = v18[2] & 0xF;
          v32 = v19;
          if ( (unsigned int)(unsigned __int8)v18[7] + 8 <= v19 )
            v32 = (unsigned __int8)v18[7] + 8;
          v12 = (unsigned __int64)(v18 + 13);
          v16 = (unsigned __int64)&v18[v32];
          if ( (unsigned __int64)(v18 + 13) > v16 )
            v39 = 0;
          else
            v39 = v18[12];
          if ( (unsigned __int64)(v18 + 14) <= v16 )
            v22 = *(_BYTE *)v12;
          LOBYTE(v16) = 1;
        }
        v21 = v39;
      }
      if ( (_BYTE)v16 )
      {
        LOBYTE(v2) = v21;
        v33 = v22;
      }
      else
      {
LABEL_75:
        v20 = 0;
        v33 = 0;
      }
      LOBYTE(v38) = v20;
      LOBYTE(v37) = v17;
      LOBYTE(v36) = v30;
      LODWORD(v35) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v12, v16, &v44, a2, v35, v36, v37, v38, v2, v33, a2);
    }
  }
LABEL_80:
  IofCompleteRequest((PIRP)a2, 0);
  return v8;
}
