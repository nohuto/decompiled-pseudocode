/*
 * XREFs of NvmeAdapterStorageProtocolCommandIoctl @ 0x14019CCFC
 * Callers:
 *     NvmeAdapterDeviceControlIrpFromNamespace @ 0x1400CE6CC (NvmeAdapterDeviceControlIrpFromNamespace.c)
 *     NvmeAdapterDeviceControlIrp @ 0x140195438 (NvmeAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeGetProtocolCommandEffects @ 0x1400881D0 (NvmeGetProtocolCommandEffects.c)
 *     NvmeValidateProtocolCommandIoctl @ 0x140088828 (NvmeValidateProtocolCommandIoctl.c)
 *     StorEtwNvmeControllerEvent @ 0x1400A9028 (StorEtwNvmeControllerEvent.c)
 *     SetPrpFromBuffer @ 0x1400BFE7C (SetPrpFromBuffer.c)
 *     NvmeAllocateDmaBuffer @ 0x1400E97F4 (NvmeAllocateDmaBuffer.c)
 *     NvmeFreeDmaBuffer @ 0x1400F8B80 (NvmeFreeDmaBuffer.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerProcessCommand @ 0x140129520 (NvmeControllerProcessCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memmove @ 0x140143780 (memmove.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall NvmeAdapterStorageProtocolCommandIoctl(__int64 a1, union _SLIST_HEADER *a2, __int64 a3, _BYTE *a4)
{
  __int64 v4; // rax
  int v5; // ebx
  _DWORD *v6; // rsi
  char *v9; // r12
  PHYSICAL_ADDRESS *ExtendedCommand; // r15
  int ProtocolCommandEffects; // edi
  int v12; // eax
  bool v13; // zf
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  int *v16; // rax
  unsigned int v17; // eax
  __int64 v18; // r12
  int v19; // edi
  int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // edx
  int v24; // eax
  const EVENT_DESCRIPTOR *v26; // rdx
  unsigned __int64 v27; // rdx
  char v28; // r15
  _BYTE *v29; // r9
  unsigned __int8 v30; // r10
  char v31; // r11
  char v32; // si
  char v33; // r8
  char *v34; // rsi
  unsigned int v35; // r13d
  unsigned __int64 v36; // r12
  __int64 v37; // r8
  int v38; // ecx
  char v39; // cl
  char v40; // r12
  _BYTE *v41; // rax
  unsigned int v42; // eax
  char v43; // al
  __int64 v44; // [rsp+20h] [rbp-99h]
  __int64 v45; // [rsp+28h] [rbp-91h]
  __int64 v46; // [rsp+30h] [rbp-89h]
  __int64 v47; // [rsp+38h] [rbp-81h]
  __int64 v48; // [rsp+40h] [rbp-79h]
  __int64 v49; // [rsp+48h] [rbp-71h]
  char v50; // [rsp+A0h] [rbp-19h] BYREF
  char v51; // [rsp+A1h] [rbp-18h] BYREF
  char v52; // [rsp+A2h] [rbp-17h]
  unsigned int Size[5]; // [rsp+A4h] [rbp-15h] BYREF
  __int64 v54; // [rsp+B8h] [rbp-1h]
  GUID v55; // [rsp+C0h] [rbp+7h] BYREF

  v4 = *(_QWORD *)(a3 + 184);
  v5 = 0;
  *a4 = 1;
  v6 = *(_DWORD **)(a3 + 24);
  *(_QWORD *)&v55.Data1 = a4;
  v54 = a1;
  v9 = 0LL;
  v50 = 0;
  ExtendedCommand = 0LL;
  v51 = 0;
  memset(Size, 0, sizeof(Size));
  if ( v6 && a2 )
  {
    if ( *(_DWORD *)(v4 + 16) < 0x10u )
    {
      StorEtwNvmeControllerEvent(
        (__int64)a2,
        0,
        2,
        (__int64)L"Input buffer does not contain a valid STORAGE_PROTOCOL_COMMAND.",
        (void *)&word_140150F48,
        0,
        &word_140150F48,
        0,
        &word_140150F48,
        0,
        &word_140150F48,
        0,
        (void *)&word_140150F48,
        0,
        (void *)&word_140150F48,
        0,
        (void *)&word_140150F48,
        0,
        (void *)&word_140150F48,
        0);
      ProtocolCommandEffects = -1073741820;
      goto LABEL_13;
    }
    ProtocolCommandEffects = NvmeValidateProtocolCommandIoctl((__int64)a2, a3);
    if ( ProtocolCommandEffects < 0 )
      goto LABEL_13;
    ProtocolCommandEffects = NvmeGetProtocolCommandEffects((__int64)a2, a3, &v50, &v51);
    if ( ProtocolCommandEffects < 0 )
      goto LABEL_13;
    v12 = v6[20] & 3;
    if ( v12 )
    {
      if ( v12 != 1 )
      {
        if ( v12 != 2 || v6[8] || !v6[9] )
          goto LABEL_11;
        goto LABEL_33;
      }
      if ( !v6[8] )
        goto LABEL_11;
    }
    else if ( v6[8] )
    {
LABEL_11:
      ProtocolCommandEffects = -1056964602;
LABEL_12:
      v6[4] = 3;
      goto LABEL_13;
    }
    if ( v6[9] )
      goto LABEL_11;
LABEL_33:
    if ( v6[14] == 2 && !_bittest64((const signed __int64 *)&a2[36].Region, 0x25u) )
    {
      ProtocolCommandEffects = -1056964601;
      goto LABEL_12;
    }
    ExtendedCommand = NvmeControllerGetExtendedCommand(a2);
    if ( !ExtendedCommand )
    {
      ProtocolCommandEffects = -1073741670;
      goto LABEL_13;
    }
    v17 = v6[9];
    if ( v17 )
    {
      v18 = (unsigned int)v6[13];
    }
    else
    {
      v17 = v6[8];
      if ( !v17 )
      {
        v19 = 0;
        goto LABEL_49;
      }
      v18 = (unsigned int)v6[12];
    }
    v9 = (char *)v6 + v18;
    Size[0] = v17;
    if ( v9 )
    {
      ProtocolCommandEffects = NvmeAllocateDmaBuffer((__int64)a2, v17, a3, (void **)&Size[1], &Size[3], 0);
      if ( ProtocolCommandEffects < 0 )
        goto LABEL_13;
      v19 = Size[0];
      if ( v6[9] )
        memset_0(*(void **)&Size[1], 0, Size[0]);
      else
        memmove(*(void **)&Size[1], v9, Size[0]);
    }
    else
    {
      v19 = Size[0];
    }
LABEL_49:
    *(_DWORD *)(ExtendedCommand->QuadPart + 4256) = (v6[14] == 1) | *(_DWORD *)(ExtendedCommand->QuadPart + 4256) & 0xFFFFFFFE;
    *(_DWORD *)(ExtendedCommand->QuadPart + 4256) |= 0x20u;
    *(_DWORD *)(ExtendedCommand->QuadPart + 4256) = (v9 != 0LL ? 2 : 0) | *(_DWORD *)(ExtendedCommand->QuadPart + 4256) & 0xFFFFFFFD;
    *(_DWORD *)(ExtendedCommand->QuadPart + 4256) &= ~0x40u;
    if ( v51 || (v20 = 0, v50) )
      v20 = 256;
    *(_DWORD *)(ExtendedCommand->QuadPart + 4256) = v20 | *(_DWORD *)(ExtendedCommand->QuadPart + 4256) & 0xFFFFFEFF;
    *(_WORD *)(ExtendedCommand->QuadPart + 4252) = 0;
    *(_QWORD *)(ExtendedCommand->QuadPart + 4184) = a3;
    *(_QWORD *)(ExtendedCommand->QuadPart + 4192) = NvmeAdapterStorageProtocolCommandIoctlCompletion;
    v21 = v54;
    *(_QWORD *)(ExtendedCommand->QuadPart + 4200) = ExtendedCommand;
    *(_QWORD *)(ExtendedCommand->QuadPart + 4216) = 0LL;
    *(_QWORD *)(ExtendedCommand->QuadPart + 4224) = v21;
    *(_OWORD *)(ExtendedCommand->QuadPart + 4160) = *(_OWORD *)&Size[1];
    *(_DWORD *)(ExtendedCommand->QuadPart + 4248) = v19;
    v22 = ExtendedCommand->QuadPart + 4096;
    v23 = v6[21];
    *(_BYTE *)v22 = *((_BYTE *)v6 + 80);
    v24 = *(_DWORD *)v22;
    LODWORD(v21) = v6[20] ^ *(_DWORD *)v22;
    *(_DWORD *)(v22 + 4) = v23;
    *(_DWORD *)v22 = v24 ^ v21 & 0x300;
    *(_DWORD *)(v22 + 40) = v6[30];
    *(_DWORD *)(v22 + 44) = v6[31];
    *(_DWORD *)(v22 + 48) = v6[32];
    *(_DWORD *)(v22 + 52) = v6[33];
    *(_DWORD *)(v22 + 56) = v6[34];
    *(_DWORD *)(v22 + 60) = v6[35];
    if ( !v9
      || (unsigned int)SetPrpFromBuffer(
                         ExtendedCommand->QuadPart,
                         ExtendedCommand->QuadPart + 4096,
                         *(__int64 *)&Size[3],
                         v19,
                         ExtendedCommand->QuadPart,
                         ExtendedCommand[1].QuadPart) )
    {
      ProtocolCommandEffects = NvmeControllerProcessCommand((__int64)a2, ExtendedCommand);
      if ( ProtocolCommandEffects >= 0 )
      {
        **(_BYTE **)&v55.Data1 = 0;
        return 259LL;
      }
    }
    else
    {
      ProtocolCommandEffects = -1073741595;
    }
    goto LABEL_13;
  }
  ProtocolCommandEffects = -1073741811;
LABEL_13:
  *(_QWORD *)(a3 + 56) = 0LL;
  if ( ExtendedCommand )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(ExtendedCommand->QuadPart + 4256), 3u);
    NvmeControllerReclaimExtendedCommand(a2, (__int64)ExtendedCommand);
  }
  if ( *(_QWORD *)&Size[1] )
    NvmeFreeDmaBuffer((__int64)a2, Size[0], a3, *(__int64 *)&Size[1], *(__int64 *)&Size[3]);
  v13 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a3 + 141) = -84;
  *(_DWORD *)(a3 + 48) = ProtocolCommandEffects;
  if ( v13 )
    goto LABEL_113;
  v55 = 0LL;
  IoGetActivityIdIrp(a3, &v55);
  v15 = *(_QWORD *)(a3 + 184);
  if ( *(_BYTE *)v15 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_113;
    v26 = &EventNonReadWriteRequestComplete;
    goto LABEL_112;
  }
  if ( *(_BYTE *)v15 != 15 )
  {
    if ( *(_BYTE *)v15 != 27 )
      goto LABEL_113;
    if ( *(_BYTE *)(v15 + 1) == 7 && !*(_DWORD *)(v15 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v16 = *(int **)(a3 + 56);
        if ( v16 )
          v5 = *v16;
        LODWORD(v45) = *(_DWORD *)(a3 + 48);
        LODWORD(v44) = v5;
        McTemplateK0pqd_EtwWriteTransfer(v14, v15, &v55, a3, v44, v45);
      }
      goto LABEL_113;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_113;
    v26 = &EventPnpRequestComplete;
LABEL_112:
    LODWORD(v44) = *(_DWORD *)(a3 + 48);
    McTemplateK0pd_EtwWriteTransfer(v14, v26, &v55, a3, v44);
    goto LABEL_113;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_113;
  v27 = *(_QWORD *)(v15 + 8);
  v28 = 0;
  v29 = 0LL;
  v51 = 0;
  v30 = 0;
  v50 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  if ( *(_BYTE *)(v27 + 2) != 40 )
  {
    v39 = *(_BYTE *)(v27 + 72);
    v29 = *(_BYTE **)(v27 + 32);
    v30 = *(_BYTE *)(v27 + 11);
    v28 = *(_BYTE *)(v27 + 4);
    if ( !*(_BYTE *)(v27 + 2) )
      goto LABEL_88;
    goto LABEL_113;
  }
  v34 = 0LL;
  v52 = 0;
  if ( *(_DWORD *)(v27 + 20) )
    goto LABEL_113;
  v35 = 0;
  Size[0] = *(_DWORD *)(v27 + 56);
  if ( !Size[0] )
    goto LABEL_85;
  while ( 1 )
  {
    v14 = *(unsigned int *)(v27 + 4LL * v35 + 120);
    if ( (unsigned int)v14 >= 0x80 )
    {
      v36 = *(unsigned int *)(v27 + 16);
      if ( (unsigned int)v14 < (unsigned int)v36 )
        break;
    }
LABEL_78:
    if ( ++v35 >= Size[0] )
      goto LABEL_84;
  }
  v37 = (unsigned int)v14;
  v38 = *(_DWORD *)(v14 + v27) - 64;
  if ( v38 )
  {
    v14 = (unsigned int)(v38 - 1);
    if ( (_DWORD)v14 )
    {
      if ( (_DWORD)v14 == 1 )
      {
        v14 = v37 + 40;
        if ( v37 + 40 <= v36 )
        {
          if ( *(_DWORD *)(v37 + v27 + 12) )
            v34 = (char *)(v37 + v27 + 32);
          v29 = *(_BYTE **)(v37 + v27 + 24);
          goto LABEL_83;
        }
      }
    }
    else
    {
      v14 = v37 + 56;
      if ( v37 + 56 <= v36 )
      {
        v52 = 1;
        if ( *(_BYTE *)(v37 + v27 + 10) )
          v34 = (char *)(v37 + v27 + 24);
        v28 = *(_BYTE *)(v37 + v27 + 8);
        v29 = *(_BYTE **)(v37 + v27 + 16);
        v30 = *(_BYTE *)(v37 + v27 + 9);
      }
    }
    goto LABEL_77;
  }
  v14 = v37 + 40;
  if ( v37 + 40 > v36 )
  {
LABEL_77:
    if ( v52 )
      goto LABEL_84;
    goto LABEL_78;
  }
  if ( *(_BYTE *)(v37 + v27 + 10) )
    v34 = (char *)(v37 + v27 + 24);
  v29 = *(_BYTE **)(v37 + v27 + 16);
LABEL_83:
  v30 = *(_BYTE *)(v37 + v27 + 9);
  v28 = *(_BYTE *)(v37 + v27 + 8);
LABEL_84:
  v33 = 0;
LABEL_85:
  if ( v34 )
  {
    v39 = *v34;
    v32 = 0;
LABEL_88:
    LOBYTE(v14) = v39 - 8;
    if ( (v14 & 0x5D) == 0 )
    {
      v40 = *(_BYTE *)(v27 + 3);
      if ( v40 == 1 || !v29 || !v30 )
        goto LABEL_108;
      LOBYTE(v27) = 0;
      v14 = (unsigned __int64)&v29[v30];
      v41 = v29 + 8;
      if ( (unsigned __int8)((*v29 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v41 <= v14 )
        {
          LOBYTE(v27) = 1;
          v32 = v29[2];
          v31 = v29[1] & 0xF;
          v33 = v29[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v41 <= v14 )
        {
          v31 = v29[2] & 0xF;
          v42 = v30;
          if ( (unsigned int)(unsigned __int8)v29[7] + 8 <= v30 )
            v42 = (unsigned __int8)v29[7] + 8;
          v14 = (unsigned __int64)(v29 + 13);
          v27 = (unsigned __int64)&v29[v42];
          if ( (unsigned __int64)(v29 + 13) > v27 )
            v51 = 0;
          else
            v51 = v29[12];
          if ( (unsigned __int64)(v29 + 14) > v27 )
            v50 = 0;
          else
            v50 = *(_BYTE *)v14;
          LOBYTE(v27) = 1;
        }
        v33 = v50;
        v32 = v51;
      }
      if ( (_BYTE)v27 )
      {
        LOBYTE(v5) = v32;
        v43 = v33;
      }
      else
      {
LABEL_108:
        v31 = 0;
        v43 = 0;
      }
      LOBYTE(v49) = v43;
      LOBYTE(v48) = v5;
      LOBYTE(v47) = v31;
      LOBYTE(v46) = v28;
      LOBYTE(v45) = v40;
      LODWORD(v44) = *(_DWORD *)(a3 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v14, v27, &v55, a3, v44, v45, v46, v47, v48, v49, a3);
    }
  }
LABEL_113:
  IofCompleteRequest((PIRP)a3, 0);
  return (unsigned int)ProtocolCommandEffects;
}
