/*
 * XREFs of RaUnitSetTemperatureThresholdIoctl @ 0x140098118
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14002C620 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidUnitSendSrbIoControlSynchronously @ 0x14000CE9C (RaidUnitSendSrbIoControlSynchronously.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaBuildSetTemperatureThresholdBufferForMiniport @ 0x140089B58 (RaBuildSetTemperatureThresholdBufferForMiniport.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RaUnitSetTemperatureThresholdIoctl(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v4; // rdx
  int v6; // r12d
  int v8; // eax
  PVOID v9; // rsi
  bool v10; // zf
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  int *v13; // rax
  const EVENT_DESCRIPTOR *v14; // rdx
  unsigned __int64 v15; // rdx
  char v16; // r15
  _BYTE *v17; // r9
  unsigned __int8 v18; // r10
  char v19; // si
  char v20; // r11
  char v21; // r13
  char *v22; // r11
  int v23; // eax
  unsigned int v24; // r8d
  unsigned int *v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // r14
  char v28; // cl
  char v29; // r8
  _BYTE *v30; // rax
  unsigned int v31; // eax
  char v32; // al
  __int64 v33; // [rsp+20h] [rbp-49h]
  __int64 v34; // [rsp+28h] [rbp-41h]
  __int64 v35; // [rsp+30h] [rbp-39h]
  char v36; // [rsp+60h] [rbp-9h]
  char v37; // [rsp+61h] [rbp-8h]
  int v38; // [rsp+64h] [rbp-5h] BYREF
  PVOID P; // [rsp+68h] [rbp-1h] BYREF
  unsigned __int64 v40; // [rsp+70h] [rbp+7h]
  GUID v41; // [rsp+78h] [rbp+Fh] BYREF

  v2 = 0;
  v4 = *(_QWORD *)(a2 + 184);
  P = 0LL;
  v38 = 0;
  if ( *(_DWORD *)(v4 + 16) >= 0x10u )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a2 + 24) + 8LL) & 1) != 0 )
    {
      ++*(_BYTE *)(a2 + 67);
      *(_QWORD *)(a2 + 184) = v4 + 72;
      return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), (PIRP)a2);
    }
    v8 = RaBuildSetTemperatureThresholdBufferForMiniport(*(_QWORD *)(a1 + 8), a2, (__int64 *)&P, &v38);
    v9 = P;
    v6 = v8;
    if ( v8 >= 0 )
    {
      if ( !P )
        goto LABEL_10;
      v6 = RaidUnitSendSrbIoControlSynchronously(a1, a2, (__int64)P, v38, 0LL, 0, 128);
    }
    if ( v9 )
      ExFreePoolWithTag(v9, 0x72536152u);
    goto LABEL_10;
  }
  v6 = -1073741820;
LABEL_10:
  v10 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v6;
  if ( v10 )
    goto LABEL_76;
  v41 = 0LL;
  IoGetActivityIdIrp(a2, &v41);
  v12 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v12 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_76;
    v14 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_75;
  }
  if ( *(_BYTE *)v12 != 15 )
  {
    if ( *(_BYTE *)v12 != 27 )
      goto LABEL_76;
    if ( *(_BYTE *)(v12 + 1) == 7 && !*(_DWORD *)(v12 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v13 = *(int **)(a2 + 56);
        if ( v13 )
          v2 = *v13;
        LODWORD(v34) = *(_DWORD *)(a2 + 48);
        LODWORD(v33) = v2;
        McTemplateK0pqd_EtwWriteTransfer(v11, v12, &v41, a2, v33, v34);
      }
      goto LABEL_76;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_76;
    v14 = &EventPnpRequestComplete;
LABEL_75:
    LODWORD(v33) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v11, v14, &v41, a2, v33);
    goto LABEL_76;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_76;
  v15 = *(_QWORD *)(v12 + 8);
  v16 = 0;
  v17 = 0LL;
  v36 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  if ( *(_BYTE *)(v15 + 2) != 40 )
  {
    v28 = *(_BYTE *)(v15 + 72);
    v17 = *(_BYTE **)(v15 + 32);
    v18 = *(_BYTE *)(v15 + 11);
    v16 = *(_BYTE *)(v15 + 4);
    if ( !*(_BYTE *)(v15 + 2) )
      goto LABEL_52;
    goto LABEL_76;
  }
  v22 = 0LL;
  v37 = 0;
  if ( *(_DWORD *)(v15 + 20) )
    goto LABEL_76;
  v23 = *(_DWORD *)(v15 + 56);
  v11 = 0LL;
  LODWORD(P) = 0;
  v38 = v23;
  if ( !v23 )
    goto LABEL_49;
  v24 = v38;
  v25 = (unsigned int *)(v15 + 120);
  v40 = v15 + 120;
  while ( 1 )
  {
    v26 = *v25;
    if ( (unsigned int)v26 >= 0x80 )
    {
      v27 = *(unsigned int *)(v15 + 16);
      if ( (unsigned int)v26 < (unsigned int)v27 )
        break;
    }
LABEL_43:
    v11 = (unsigned int)(v11 + 1);
    v25 = (unsigned int *)(v40 + 4);
    LODWORD(P) = v11;
    v40 += 4LL;
    if ( (unsigned int)v11 >= v24 )
      goto LABEL_49;
  }
  if ( *(_DWORD *)(v26 + v15) != 64 )
  {
    v11 = (unsigned int)(*(_DWORD *)(v26 + v15) - 65);
    if ( *(_DWORD *)(v26 + v15) == 65 )
    {
      v11 = v26 + 56;
      if ( v26 + 56 <= v27 )
      {
        v37 = 1;
        if ( *(_BYTE *)(v26 + v15 + 10) )
          v22 = (char *)(v26 + v15 + 24);
        v16 = *(_BYTE *)(v26 + v15 + 8);
        v17 = *(_BYTE **)(v26 + v15 + 16);
        v18 = *(_BYTE *)(v26 + v15 + 9);
      }
    }
    else if ( *(_DWORD *)(v26 + v15) == 66 )
    {
      v11 = v26 + 40;
      if ( v26 + 40 <= v27 )
      {
        if ( *(_DWORD *)(v26 + v15 + 12) )
          v22 = (char *)(v26 + v15 + 32);
        v17 = *(_BYTE **)(v26 + v15 + 24);
        goto LABEL_48;
      }
    }
    goto LABEL_41;
  }
  v11 = v26 + 40;
  if ( v26 + 40 > v27 )
  {
LABEL_41:
    if ( v37 )
      goto LABEL_49;
    LODWORD(v11) = (_DWORD)P;
    v24 = v38;
    goto LABEL_43;
  }
  if ( *(_BYTE *)(v26 + v15 + 10) )
    v22 = (char *)(v26 + v15 + 24);
  v17 = *(_BYTE **)(v26 + v15 + 16);
LABEL_48:
  v18 = *(_BYTE *)(v26 + v15 + 9);
  v16 = *(_BYTE *)(v26 + v15 + 8);
LABEL_49:
  if ( v22 )
  {
    v28 = *v22;
    v20 = 0;
LABEL_52:
    LOBYTE(v11) = v28 - 8;
    if ( (v11 & 0x5D) == 0 )
    {
      v29 = *(_BYTE *)(v15 + 3);
      if ( v29 == 1 || !v17 || !v18 )
        goto LABEL_71;
      LOBYTE(v15) = 0;
      v11 = (unsigned __int64)&v17[v18];
      v30 = v17 + 8;
      if ( (unsigned __int8)((*v17 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v30 <= v11 )
        {
          LOBYTE(v15) = 1;
          v20 = v17[2];
          v19 = v17[1] & 0xF;
          v21 = v17[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v30 <= v11 )
        {
          v19 = v17[2] & 0xF;
          v31 = v18;
          if ( (unsigned int)(unsigned __int8)v17[7] + 8 <= v18 )
            v31 = (unsigned __int8)v17[7] + 8;
          v11 = (unsigned __int64)(v17 + 13);
          v15 = (unsigned __int64)&v17[v31];
          if ( (unsigned __int64)(v17 + 13) > v15 )
            v36 = 0;
          else
            v36 = v17[12];
          if ( (unsigned __int64)(v17 + 14) <= v15 )
            v21 = *(_BYTE *)v11;
          LOBYTE(v15) = 1;
        }
        v20 = v36;
      }
      if ( (_BYTE)v15 )
      {
        LOBYTE(v2) = v20;
        v32 = v21;
      }
      else
      {
LABEL_71:
        v19 = 0;
        v32 = 0;
      }
      LOBYTE(v35) = v16;
      LOBYTE(v34) = v29;
      LODWORD(v33) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v11, v15, &v41, a2, v33, v34, v35, v19, v2, v32, a2);
    }
  }
LABEL_76:
  IofCompleteRequest((PIRP)a2, 0);
  return v6;
}
