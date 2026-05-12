/*
 * XREFs of NvmeControllerGetDeviceInternalLogIoctl @ 0x14019EAD8
 * Callers:
 *     NvmeNamespaceGetDeviceInternalLogIoctl @ 0x1401A4DEC (NvmeNamespaceGetDeviceInternalLogIoctl.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeControllerGetTelemetryLog @ 0x1400EEEB0 (NvmeControllerGetTelemetryLog.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memmove @ 0x140143780 (memmove.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall NvmeControllerGetDeviceInternalLogIoctl(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ebx
  _DWORD *v4; // rsi
  unsigned int v7; // r12d
  char *v8; // r15
  int TelemetryLog; // r14d
  int v10; // ecx
  int v11; // eax
  char v12; // dl
  char v13; // r13
  unsigned int v14; // r13d
  bool v15; // zf
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  int *v18; // rax
  const EVENT_DESCRIPTOR *v19; // rdx
  unsigned __int64 v20; // rdx
  char v21; // r12
  _BYTE *v22; // r9
  unsigned __int8 v23; // r10
  char v24; // r11
  char v25; // r15
  char v26; // r8
  char *v27; // rsi
  unsigned int v28; // r13d
  unsigned __int64 v29; // r15
  __int64 v30; // r8
  int v31; // ecx
  char v32; // cl
  char v33; // si
  _BYTE *v34; // rax
  unsigned int v35; // eax
  char v36; // al
  __int64 v38; // [rsp+20h] [rbp-49h]
  char v39; // [rsp+60h] [rbp-9h]
  char v40; // [rsp+61h] [rbp-8h]
  char v41; // [rsp+62h] [rbp-7h]
  unsigned int Size; // [rsp+64h] [rbp-5h]
  unsigned int Size_4; // [rsp+68h] [rbp-1h] BYREF
  PVOID P[2]; // [rsp+70h] [rbp+7h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  v4 = *(_DWORD **)(a2 + 24);
  P[0] = 0LL;
  v7 = 0;
  Size_4 = 0;
  v8 = 0LL;
  Size = *(_DWORD *)(v2 + 8);
  if ( *(_DWORD *)(v2 + 16) < 0x10u || !v4 || *v4 != 16 || v4[1] != 16 )
  {
    TelemetryLog = -1073741811;
    goto LABEL_26;
  }
  if ( *(_DWORD *)(v2 + 8) >= 0x2A8u )
  {
    v10 = v4[2];
    if ( v10 != 2 )
    {
      if ( v10 == 1 )
        goto LABEL_16;
      if ( v10 != 4 )
      {
        if ( v10 != 3 )
        {
LABEL_11:
          TelemetryLog = -1073741811;
          goto LABEL_28;
        }
LABEL_15:
        v12 = 0;
        goto LABEL_17;
      }
    }
    v11 = v4[3];
    if ( !v11 || v11 >= 5 )
      goto LABEL_11;
    if ( (unsigned int)(v10 - 1) > 1 )
      goto LABEL_15;
LABEL_16:
    v12 = 1;
    if ( v10 == 1 )
    {
LABEL_18:
      v13 = 1;
LABEL_19:
      TelemetryLog = NvmeControllerGetTelemetryLog(a1, v12, v13, &Size_4, P);
      if ( TelemetryLog < 0 )
      {
        v8 = (char *)P[0];
      }
      else
      {
        memset_0(v4, 0, Size);
        v8 = (char *)P[0];
        *v4 = 176;
        v4[1] = 176;
        *((_BYTE *)v4 + 32) = 0;
        *((_WORD *)v4 + 4) = *(_WORD *)(v8 + 5);
        *((_BYTE *)v4 + 10) = v8[7];
        v4[4] = *((unsigned __int16 *)v8 + 4);
        v4[5] = *((unsigned __int16 *)v8 + 5);
        v4[6] = *((unsigned __int16 *)v8 + 6);
        v4[7] = *((_DWORD *)v8 + 4);
        *(_OWORD *)(v4 + 9) = *((_OWORD *)v8 + 24);
        *(_OWORD *)(v4 + 13) = *((_OWORD *)v8 + 25);
        *(_OWORD *)(v4 + 17) = *((_OWORD *)v8 + 26);
        *(_OWORD *)(v4 + 21) = *((_OWORD *)v8 + 27);
        *(_OWORD *)(v4 + 25) = *((_OWORD *)v8 + 28);
        *(_OWORD *)(v4 + 29) = *((_OWORD *)v8 + 29);
        *(_OWORD *)(v4 + 33) = *((_OWORD *)v8 + 30);
        *(_OWORD *)(v4 + 37) = *((_OWORD *)v8 + 31);
        if ( v13 )
        {
          v7 = 168;
          v14 = 0;
        }
        else
        {
          v14 = Size_4;
          memmove(v4 + 42, v8 + 0x40000, Size_4);
          v7 = v14 + 168;
        }
        v4[41] = v14;
        v4[1] = v7;
      }
LABEL_26:
      if ( v8 )
        ExFreePoolWithTag(v8, 0x4C4E6152u);
      goto LABEL_28;
    }
LABEL_17:
    v13 = 0;
    if ( v10 != 3 )
      goto LABEL_19;
    goto LABEL_18;
  }
  TelemetryLog = -1073741789;
LABEL_28:
  v15 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a2 + 56) = v7;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = TelemetryLog;
  if ( v15 )
    goto LABEL_94;
  *(_OWORD *)P = 0LL;
  IoGetActivityIdIrp(a2, P);
  v17 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v17 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_94;
    v19 = &EventNonReadWriteRequestComplete;
    goto LABEL_93;
  }
  if ( *(_BYTE *)v17 != 15 )
  {
    if ( *(_BYTE *)v17 != 27 )
      goto LABEL_94;
    if ( *(_BYTE *)(v17 + 1) == 7 && !*(_DWORD *)(v17 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v18 = *(int **)(a2 + 56);
        if ( v18 )
          v3 = *v18;
        LODWORD(v38) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v16, v17, (const GUID *)P, a2, v38, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_94;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_94;
    v19 = &EventPnpRequestComplete;
LABEL_93:
    LODWORD(v38) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v16, v19, (const GUID *)P, a2, v38);
    goto LABEL_94;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_94;
  v20 = *(_QWORD *)(v17 + 8);
  v21 = 0;
  v22 = 0LL;
  v40 = 0;
  v23 = 0;
  v39 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  if ( *(_BYTE *)(v20 + 2) != 40 )
  {
    v32 = *(_BYTE *)(v20 + 72);
    v22 = *(_BYTE **)(v20 + 32);
    v23 = *(_BYTE *)(v20 + 11);
    v21 = *(_BYTE *)(v20 + 4);
    if ( !*(_BYTE *)(v20 + 2) )
      goto LABEL_69;
    goto LABEL_94;
  }
  v27 = 0LL;
  v41 = 0;
  if ( *(_DWORD *)(v20 + 20) )
    goto LABEL_94;
  v28 = 0;
  Size = *(_DWORD *)(v20 + 56);
  if ( !Size )
    goto LABEL_66;
  while ( 1 )
  {
    v16 = *(unsigned int *)(v20 + 4LL * v28 + 120);
    if ( (unsigned int)v16 >= 0x80 )
    {
      v29 = *(unsigned int *)(v20 + 16);
      if ( (unsigned int)v16 < (unsigned int)v29 )
        break;
    }
LABEL_59:
    if ( ++v28 >= Size )
      goto LABEL_65;
  }
  v30 = (unsigned int)v16;
  v31 = *(_DWORD *)(v16 + v20) - 64;
  if ( v31 )
  {
    v16 = (unsigned int)(v31 - 1);
    if ( (_DWORD)v16 )
    {
      if ( (_DWORD)v16 == 1 )
      {
        v16 = v30 + 40;
        if ( v30 + 40 <= v29 )
        {
          if ( *(_DWORD *)(v30 + v20 + 12) )
            v27 = (char *)(v30 + v20 + 32);
          v22 = *(_BYTE **)(v30 + v20 + 24);
          goto LABEL_64;
        }
      }
    }
    else
    {
      v16 = v30 + 56;
      if ( v30 + 56 <= v29 )
      {
        v41 = 1;
        if ( *(_BYTE *)(v30 + v20 + 10) )
          v27 = (char *)(v30 + v20 + 24);
        v21 = *(_BYTE *)(v30 + v20 + 8);
        v22 = *(_BYTE **)(v30 + v20 + 16);
        v23 = *(_BYTE *)(v30 + v20 + 9);
      }
    }
    goto LABEL_58;
  }
  v16 = v30 + 40;
  if ( v30 + 40 > v29 )
  {
LABEL_58:
    if ( v41 )
      goto LABEL_65;
    goto LABEL_59;
  }
  if ( *(_BYTE *)(v30 + v20 + 10) )
    v27 = (char *)(v30 + v20 + 24);
  v22 = *(_BYTE **)(v30 + v20 + 16);
LABEL_64:
  v23 = *(_BYTE *)(v30 + v20 + 9);
  v21 = *(_BYTE *)(v30 + v20 + 8);
LABEL_65:
  v25 = 0;
  v26 = 0;
LABEL_66:
  if ( v27 )
  {
    v32 = *v27;
LABEL_69:
    LOBYTE(v16) = v32 - 8;
    if ( (v16 & 0x5D) == 0 )
    {
      v33 = *(_BYTE *)(v20 + 3);
      if ( v33 == 1 || !v22 || !v23 )
        goto LABEL_89;
      LOBYTE(v20) = 0;
      v16 = (unsigned __int64)&v22[v23];
      v34 = v22 + 8;
      if ( (unsigned __int8)((*v22 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v34 <= v16 )
        {
          LOBYTE(v20) = 1;
          v25 = v22[2];
          v24 = v22[1] & 0xF;
          v26 = v22[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v34 <= v16 )
        {
          v24 = v22[2] & 0xF;
          v35 = v23;
          if ( (unsigned int)(unsigned __int8)v22[7] + 8 <= v23 )
            v35 = (unsigned __int8)v22[7] + 8;
          v16 = (unsigned __int64)(v22 + 13);
          v20 = (unsigned __int64)&v22[v35];
          if ( (unsigned __int64)(v22 + 13) > v20 )
            v40 = 0;
          else
            v40 = v22[12];
          if ( (unsigned __int64)(v22 + 14) > v20 )
            v39 = 0;
          else
            v39 = *(_BYTE *)v16;
          LOBYTE(v20) = 1;
        }
        v26 = v39;
        v25 = v40;
      }
      if ( (_BYTE)v20 )
      {
        LOBYTE(v3) = v25;
        v36 = v26;
      }
      else
      {
LABEL_89:
        v24 = 0;
        v36 = 0;
      }
      LODWORD(v38) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v16, v20, (const GUID *)P, a2, v38, v33, v21, v24, v3, v36, a2);
    }
  }
LABEL_94:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)TelemetryLog;
}
