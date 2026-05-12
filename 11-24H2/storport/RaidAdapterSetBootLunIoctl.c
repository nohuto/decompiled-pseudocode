/*
 * XREFs of RaidAdapterSetBootLunIoctl @ 0x140060F48
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14002B3B0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x140010664 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaBuildSetBootLunBufferForMiniport @ 0x140089864 (RaBuildSetBootLunBufferForMiniport.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterSetBootLunIoctl(__int64 a1, __int64 a2)
{
  int v2; // ebx
  PVOID v5; // r14
  _BYTE **v6; // rsi
  unsigned int v7; // r12d
  unsigned int v8; // eax
  bool v9; // zf
  unsigned __int64 v10; // rcx
  _BYTE *v11; // rdx
  int *v12; // rax
  const EVENT_DESCRIPTOR *v13; // rdx
  unsigned __int64 v14; // rdx
  char v15; // r15
  _BYTE *v16; // r9
  unsigned __int8 v17; // r10
  char v18; // si
  char v19; // r11
  char v20; // r13
  char *v21; // r11
  ULONG v22; // eax
  unsigned int v23; // r8d
  unsigned int *v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // r14
  char v27; // cl
  char v28; // r8
  _BYTE *v29; // rax
  unsigned int v30; // eax
  char v31; // al
  __int64 v33; // [rsp+20h] [rbp-49h]
  __int64 v34; // [rsp+28h] [rbp-41h]
  __int64 v35; // [rsp+30h] [rbp-39h]
  __int64 v36; // [rsp+38h] [rbp-31h]
  char v37; // [rsp+60h] [rbp-9h]
  char v38; // [rsp+61h] [rbp-8h]
  ULONG v39; // [rsp+64h] [rbp-5h] BYREF
  PVOID P; // [rsp+68h] [rbp-1h] BYREF
  unsigned __int64 v41; // [rsp+70h] [rbp+7h]
  GUID v42; // [rsp+78h] [rbp+Fh] BYREF

  v2 = 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  v5 = 0LL;
  P = 0LL;
  v39 = 0;
  if ( !*(_QWORD *)(a1 + 608) || !*(_QWORD *)(a1 + 616) )
  {
    v7 = -1073741823;
    v6 = (_BYTE **)(a2 + 184);
    goto LABEL_11;
  }
  v6 = (_BYTE **)(a2 + 184);
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) >= 0x18u )
  {
    v8 = RaBuildSetBootLunBufferForMiniport(a1, a2, &P, &v39);
    v5 = P;
    v7 = v8;
    if ( !v8 )
    {
      if ( P )
      {
        v7 = RaidAdapterSendSrbIoControlSynchronously(a1, (IRP *)a2, (unsigned int *)P, v39, 0LL, 0, 128, 0);
        goto LABEL_11;
      }
      v7 = -1073741801;
    }
    *(_QWORD *)(a2 + 56) = 0LL;
LABEL_11:
    if ( v5 )
      ExFreePoolWithTag(v5, 0x72536152u);
    goto LABEL_13;
  }
  v7 = -1073741820;
LABEL_13:
  v9 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v7;
  if ( v9 )
    goto LABEL_79;
  v42 = 0LL;
  IoGetActivityIdIrp(a2, &v42);
  v11 = *v6;
  if ( **v6 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_79;
    v13 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_78;
  }
  if ( **v6 != 15 )
  {
    if ( **v6 != 27 )
      goto LABEL_79;
    if ( v11[1] == 7 && !*((_DWORD *)v11 + 2) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v12 = *(int **)(a2 + 56);
        if ( v12 )
          v2 = *v12;
        LODWORD(v34) = *(_DWORD *)(a2 + 48);
        LODWORD(v33) = v2;
        McTemplateK0pqd_EtwWriteTransfer(v10, (__int64)v11, &v42, a2, v33, v34);
      }
      goto LABEL_79;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_79;
    v13 = &EventPnpRequestComplete;
LABEL_78:
    LODWORD(v33) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v10, v13, &v42, a2, v33);
    goto LABEL_79;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_79;
  v14 = *((_QWORD *)v11 + 1);
  v15 = 0;
  v16 = 0LL;
  v37 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  if ( *(_BYTE *)(v14 + 2) != 40 )
  {
    v27 = *(_BYTE *)(v14 + 72);
    v16 = *(_BYTE **)(v14 + 32);
    v17 = *(_BYTE *)(v14 + 11);
    v15 = *(_BYTE *)(v14 + 4);
    if ( !*(_BYTE *)(v14 + 2) )
      goto LABEL_55;
    goto LABEL_79;
  }
  v21 = 0LL;
  v38 = 0;
  if ( *(_DWORD *)(v14 + 20) )
    goto LABEL_79;
  v22 = *(_DWORD *)(v14 + 56);
  v10 = 0LL;
  LODWORD(P) = 0;
  v39 = v22;
  if ( !v22 )
    goto LABEL_52;
  v23 = v39;
  v24 = (unsigned int *)(v14 + 120);
  v41 = v14 + 120;
  while ( 1 )
  {
    v25 = *v24;
    if ( (unsigned int)v25 >= 0x80 )
    {
      v26 = *(unsigned int *)(v14 + 16);
      if ( (unsigned int)v25 < (unsigned int)v26 )
        break;
    }
LABEL_46:
    v10 = (unsigned int)(v10 + 1);
    v24 = (unsigned int *)(v41 + 4);
    LODWORD(P) = v10;
    v41 += 4LL;
    if ( (unsigned int)v10 >= v23 )
      goto LABEL_52;
  }
  if ( *(_DWORD *)(v25 + v14) != 64 )
  {
    v10 = (unsigned int)(*(_DWORD *)(v25 + v14) - 65);
    if ( *(_DWORD *)(v25 + v14) == 65 )
    {
      v10 = v25 + 56;
      if ( v25 + 56 <= v26 )
      {
        v38 = 1;
        if ( *(_BYTE *)(v25 + v14 + 10) )
          v21 = (char *)(v25 + v14 + 24);
        v15 = *(_BYTE *)(v25 + v14 + 8);
        v16 = *(_BYTE **)(v25 + v14 + 16);
        v17 = *(_BYTE *)(v25 + v14 + 9);
      }
    }
    else if ( *(_DWORD *)(v25 + v14) == 66 )
    {
      v10 = v25 + 40;
      if ( v25 + 40 <= v26 )
      {
        if ( *(_DWORD *)(v25 + v14 + 12) )
          v21 = (char *)(v25 + v14 + 32);
        v16 = *(_BYTE **)(v25 + v14 + 24);
        goto LABEL_51;
      }
    }
    goto LABEL_44;
  }
  v10 = v25 + 40;
  if ( v25 + 40 > v26 )
  {
LABEL_44:
    if ( v38 )
      goto LABEL_52;
    LODWORD(v10) = (_DWORD)P;
    v23 = v39;
    goto LABEL_46;
  }
  if ( *(_BYTE *)(v25 + v14 + 10) )
    v21 = (char *)(v25 + v14 + 24);
  v16 = *(_BYTE **)(v25 + v14 + 16);
LABEL_51:
  v17 = *(_BYTE *)(v25 + v14 + 9);
  v15 = *(_BYTE *)(v25 + v14 + 8);
LABEL_52:
  if ( v21 )
  {
    v27 = *v21;
    v19 = 0;
LABEL_55:
    LOBYTE(v10) = v27 - 8;
    if ( (v10 & 0x5D) == 0 )
    {
      v28 = *(_BYTE *)(v14 + 3);
      if ( v28 == 1 || !v16 || !v17 )
        goto LABEL_74;
      LOBYTE(v14) = 0;
      v10 = (unsigned __int64)&v16[v17];
      v29 = v16 + 8;
      if ( (unsigned __int8)((*v16 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v29 <= v10 )
        {
          LOBYTE(v14) = 1;
          v19 = v16[2];
          v18 = v16[1] & 0xF;
          v20 = v16[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v29 <= v10 )
        {
          v18 = v16[2] & 0xF;
          v30 = v17;
          if ( (unsigned int)(unsigned __int8)v16[7] + 8 <= v17 )
            v30 = (unsigned __int8)v16[7] + 8;
          v10 = (unsigned __int64)(v16 + 13);
          v14 = (unsigned __int64)&v16[v30];
          if ( (unsigned __int64)(v16 + 13) > v14 )
            v37 = 0;
          else
            v37 = v16[12];
          if ( (unsigned __int64)(v16 + 14) <= v14 )
            v20 = *(_BYTE *)v10;
          LOBYTE(v14) = 1;
        }
        v19 = v37;
      }
      if ( (_BYTE)v14 )
      {
        LOBYTE(v2) = v19;
        v31 = v20;
      }
      else
      {
LABEL_74:
        v18 = 0;
        v31 = 0;
      }
      LOBYTE(v36) = v18;
      LOBYTE(v35) = v15;
      LOBYTE(v34) = v28;
      LODWORD(v33) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v10, v14, &v42, a2, v33, v34, v35, v36, v2, v31, a2);
    }
  }
LABEL_79:
  IofCompleteRequest((PIRP)a2, 0);
  return v7;
}
