/*
 * XREFs of NvmeNamespaceStorageProtocolCommandIoctl @ 0x1401AA82C
 * Callers:
 *     NvmeNamespaceDeviceControlIrp @ 0x1401A2234 (NvmeNamespaceDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeGetProtocolCommandEffects @ 0x1400881D0 (NvmeGetProtocolCommandEffects.c)
 *     NvmeValidateProtocolCommandIoctl @ 0x140088828 (NvmeValidateProtocolCommandIoctl.c)
 *     SetPrpFromBuffer @ 0x1400BFE7C (SetPrpFromBuffer.c)
 *     NvmeAdapterDeviceControlIrpFromNamespace @ 0x1400CE6CC (NvmeAdapterDeviceControlIrpFromNamespace.c)
 *     NvmeAllocateDmaBuffer @ 0x1400E97F4 (NvmeAllocateDmaBuffer.c)
 *     NvmeFreeDmaBuffer @ 0x1400F8B80 (NvmeFreeDmaBuffer.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerProcessCommand @ 0x140129520 (NvmeControllerProcessCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memmove @ 0x140143780 (memmove.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall NvmeNamespaceStorageProtocolCommandIoctl(__int64 a1, __int64 a2, _BYTE *a3)
{
  int v3; // ebx
  __int64 v5; // rdx
  __int64 v7; // rcx
  char *v8; // r12
  unsigned int v9; // esi
  PHYSICAL_ADDRESS *ExtendedCommand; // r15
  int ProtocolCommandEffects; // edi
  _DWORD *v12; // rsi
  bool v13; // zf
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  int *v16; // rax
  int v18; // eax
  unsigned int v19; // eax
  __int64 v20; // r12
  unsigned int v21; // edi
  __int64 v22; // r8
  int v23; // edx
  int v24; // eax
  int v25; // ecx
  const EVENT_DESCRIPTOR *v26; // rdx
  __int64 v27; // rdx
  char v28; // r15
  _BYTE *v29; // r9
  unsigned __int8 v30; // r10
  char v31; // r11
  unsigned __int8 v32; // r12
  char v33; // si
  char *v34; // rsi
  unsigned int v35; // r13d
  unsigned __int64 v36; // r12
  __int64 v37; // r8
  int v38; // ecx
  char v39; // cl
  char v40; // r8
  _BYTE *v41; // rax
  unsigned int v42; // eax
  unsigned __int64 v43; // r8
  char v44; // al
  __int64 v45; // [rsp+20h] [rbp-59h]
  __int64 v46; // [rsp+28h] [rbp-51h]
  unsigned __int8 v47; // [rsp+60h] [rbp-19h] BYREF
  _BYTE v48[3]; // [rsp+61h] [rbp-18h] BYREF
  unsigned int Size; // [rsp+64h] [rbp-15h]
  char Size_4; // [rsp+68h] [rbp-11h]
  void *v51[2]; // [rsp+70h] [rbp-9h] BYREF
  GUID v52; // [rsp+80h] [rbp+7h] BYREF

  v3 = 0;
  *(_QWORD *)&v52.Data1 = a3;
  v48[0] = 0;
  v5 = *(_QWORD *)(a2 + 184);
  *a3 = 1;
  v7 = *(_QWORD *)(a1 + 16);
  v8 = 0LL;
  *(_OWORD *)v51 = 0LL;
  v47 = 0;
  v9 = 0;
  Size = 0;
  ExtendedCommand = 0LL;
  if ( (*(_BYTE *)(v7 + 136) & 2) == 0 )
  {
    v12 = *(_DWORD **)(a2 + 24);
    if ( !v12 )
    {
      ProtocolCommandEffects = -1073741811;
LABEL_5:
      v9 = 0;
      goto LABEL_6;
    }
    if ( *(_DWORD *)(v5 + 16) < 0x10u )
    {
      ProtocolCommandEffects = -1073741820;
      goto LABEL_5;
    }
    if ( (int)v12[3] < 0 )
      return NvmeAdapterDeviceControlIrpFromNamespace(*(_QWORD *)(v7 + 128), v7, a2);
    ProtocolCommandEffects = NvmeValidateProtocolCommandIoctl(v7, a2);
    if ( ProtocolCommandEffects < 0 )
      goto LABEL_5;
    ProtocolCommandEffects = NvmeGetProtocolCommandEffects(*(_QWORD *)(a1 + 16), a2, v48, &v47);
    if ( ProtocolCommandEffects < 0 )
      goto LABEL_5;
    if ( v48[0] )
    {
      v7 = *(_QWORD *)(a1 + 16);
      return NvmeAdapterDeviceControlIrpFromNamespace(*(_QWORD *)(v7 + 128), v7, a2);
    }
    v18 = v12[20] & 3;
    if ( v18 )
    {
      if ( v18 != 1 )
      {
        if ( v18 != 2 || v12[8] || !v12[9] )
          goto LABEL_31;
        goto LABEL_38;
      }
      if ( !v12[8] )
        goto LABEL_31;
    }
    else if ( v12[8] )
    {
LABEL_31:
      v12[4] = 3;
      ProtocolCommandEffects = -1056964602;
      goto LABEL_5;
    }
    if ( v12[9] )
      goto LABEL_31;
LABEL_38:
    if ( v12[14] == 2 && !_bittest64((const signed __int64 *)(*(_QWORD *)(a1 + 16) + 584LL), 0x25u) )
    {
      v12[4] = 3;
      ProtocolCommandEffects = -1056964601;
      goto LABEL_5;
    }
    ExtendedCommand = NvmeControllerGetExtendedCommand(*(union _SLIST_HEADER **)(a1 + 16));
    if ( !ExtendedCommand )
    {
      ProtocolCommandEffects = -1073741670;
      goto LABEL_5;
    }
    v19 = v12[9];
    if ( v19 )
    {
      v20 = (unsigned int)v12[13];
    }
    else
    {
      v19 = v12[8];
      if ( !v19 )
      {
        v21 = 0;
        goto LABEL_54;
      }
      v20 = (unsigned int)v12[12];
    }
    v8 = (char *)v12 + v20;
    Size = v19;
    if ( v8 )
    {
      ProtocolCommandEffects = NvmeAllocateDmaBuffer(*(_QWORD *)(a1 + 16), v19, (__int64)a3, v51, &v51[1], 0);
      if ( ProtocolCommandEffects < 0 )
      {
        v9 = Size;
        goto LABEL_6;
      }
      v21 = Size;
      if ( v12[9] )
        memset_0(v51[0], 0, Size);
      else
        memmove(v51[0], v8, Size);
    }
    else
    {
      v21 = Size;
    }
LABEL_54:
    *(_DWORD *)(ExtendedCommand->QuadPart + 4256) = (v12[14] == 1) | *(_DWORD *)(ExtendedCommand->QuadPart + 4256) & 0xFFFFFFFE;
    *(_DWORD *)(ExtendedCommand->QuadPart + 4256) |= 0x20u;
    *(_DWORD *)(ExtendedCommand->QuadPart + 4256) = (v8 != 0LL ? 2 : 0) | *(_DWORD *)(ExtendedCommand->QuadPart + 4256) & 0xFFFFFFFD;
    *(_DWORD *)(ExtendedCommand->QuadPart + 4256) &= ~0x40u;
    *(_DWORD *)(ExtendedCommand->QuadPart + 4256) ^= ((unsigned __int16)*(_DWORD *)(ExtendedCommand->QuadPart + 4256) ^ (unsigned __int16)(v47 << 8)) & 0x100;
    *(_WORD *)(ExtendedCommand->QuadPart + 4252) = 0;
    *(_QWORD *)(ExtendedCommand->QuadPart + 4184) = a2;
    *(_QWORD *)(ExtendedCommand->QuadPart + 4192) = NvmeNamespaceStorageProtocolCommandIoctlCompletion;
    *(_QWORD *)(ExtendedCommand->QuadPart + 4200) = ExtendedCommand;
    *(_QWORD *)(ExtendedCommand->QuadPart + 4216) = a1;
    *(void **)(ExtendedCommand->QuadPart + 4160) = v51[0];
    *(void **)(ExtendedCommand->QuadPart + 4168) = v51[1];
    *(_DWORD *)(ExtendedCommand->QuadPart + 4248) = v21;
    v22 = ExtendedCommand->QuadPart + 4096;
    v23 = *(_DWORD *)(a1 + 56);
    *(_BYTE *)v22 = *((_BYTE *)v12 + 80);
    v24 = *(_DWORD *)v22;
    v25 = v12[20] ^ *(_DWORD *)v22;
    *(_DWORD *)(v22 + 4) = v23;
    *(_DWORD *)v22 = v24 ^ v25 & 0x300;
    *(_DWORD *)(v22 + 40) = v12[30];
    *(_DWORD *)(v22 + 44) = v12[31];
    *(_DWORD *)(v22 + 48) = v12[32];
    *(_DWORD *)(v22 + 52) = v12[33];
    *(_DWORD *)(v22 + 56) = v12[34];
    *(_DWORD *)(v22 + 60) = v12[35];
    v9 = Size;
    if ( !v8
      || (unsigned int)SetPrpFromBuffer(
                         ExtendedCommand->QuadPart,
                         ExtendedCommand->QuadPart + 4096,
                         (__int64)v51[1],
                         Size,
                         ExtendedCommand->QuadPart,
                         ExtendedCommand[1].QuadPart) )
    {
      ProtocolCommandEffects = NvmeControllerProcessCommand(*(_QWORD *)(a1 + 16), ExtendedCommand);
      if ( ProtocolCommandEffects >= 0 )
      {
        **(_BYTE **)&v52.Data1 = 0;
        return 259LL;
      }
    }
    else
    {
      ProtocolCommandEffects = -1073741595;
    }
    goto LABEL_6;
  }
  ProtocolCommandEffects = -1073741637;
LABEL_6:
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( ExtendedCommand )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(ExtendedCommand->QuadPart + 4256), 3u);
    NvmeControllerReclaimExtendedCommand(*(union _SLIST_HEADER **)(a1 + 16), (__int64)ExtendedCommand);
  }
  if ( v51[0] )
    NvmeFreeDmaBuffer(*(_QWORD *)(a1 + 16), v9, (__int64)a3, (__int64)v51[0], (__int64)v51[1]);
  v13 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = ProtocolCommandEffects;
  if ( v13 )
    goto LABEL_116;
  v52 = 0LL;
  IoGetActivityIdIrp(a2, &v52);
  v15 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v15 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_116;
    v26 = &EventNonReadWriteRequestComplete;
    goto LABEL_115;
  }
  if ( *(_BYTE *)v15 != 15 )
  {
    if ( *(_BYTE *)v15 != 27 )
      goto LABEL_116;
    if ( *(_BYTE *)(v15 + 1) == 7 && !*(_DWORD *)(v15 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v16 = *(int **)(a2 + 56);
        if ( v16 )
          v3 = *v16;
        LODWORD(v46) = *(_DWORD *)(a2 + 48);
        LODWORD(v45) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v14, v15, &v52, a2, v45, v46);
      }
      goto LABEL_116;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_116;
    v26 = &EventPnpRequestComplete;
LABEL_115:
    LODWORD(v45) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v14, v26, &v52, a2, v45);
    goto LABEL_116;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_116;
  v27 = *(_QWORD *)(v15 + 8);
  v28 = 0;
  v29 = 0LL;
  v47 = 0;
  v30 = 0;
  v48[0] = 0;
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
      goto LABEL_91;
    goto LABEL_116;
  }
  v34 = 0LL;
  Size_4 = 0;
  if ( *(_DWORD *)(v27 + 20) )
    goto LABEL_116;
  v35 = 0;
  Size = *(_DWORD *)(v27 + 56);
  if ( !Size )
    goto LABEL_88;
  while ( 1 )
  {
    v14 = *(unsigned int *)(v27 + 4LL * v35 + 120);
    if ( (unsigned int)v14 >= 0x80 )
    {
      v36 = *(unsigned int *)(v27 + 16);
      if ( (unsigned int)v14 < (unsigned int)v36 )
        break;
    }
LABEL_81:
    if ( ++v35 >= Size )
      goto LABEL_87;
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
          goto LABEL_86;
        }
      }
    }
    else
    {
      v14 = v37 + 56;
      if ( v37 + 56 <= v36 )
      {
        Size_4 = 1;
        if ( *(_BYTE *)(v37 + v27 + 10) )
          v34 = (char *)(v37 + v27 + 24);
        v28 = *(_BYTE *)(v37 + v27 + 8);
        v29 = *(_BYTE **)(v37 + v27 + 16);
        v30 = *(_BYTE *)(v37 + v27 + 9);
      }
    }
    goto LABEL_80;
  }
  v14 = v37 + 40;
  if ( v37 + 40 > v36 )
  {
LABEL_80:
    if ( Size_4 )
      goto LABEL_87;
    goto LABEL_81;
  }
  if ( *(_BYTE *)(v37 + v27 + 10) )
    v34 = (char *)(v37 + v27 + 24);
  v29 = *(_BYTE **)(v37 + v27 + 16);
LABEL_86:
  v30 = *(_BYTE *)(v37 + v27 + 9);
  v28 = *(_BYTE *)(v37 + v27 + 8);
LABEL_87:
  v32 = 0;
LABEL_88:
  if ( v34 )
  {
    v39 = *v34;
    v33 = 0;
LABEL_91:
    LOBYTE(v14) = v39 - 8;
    if ( (v14 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v27 + 3) == 1 || !v29 || !v30 )
        goto LABEL_111;
      v40 = 0;
      v14 = (unsigned __int64)&v29[v30];
      v41 = v29 + 8;
      if ( (unsigned __int8)((*v29 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v41 <= v14 )
        {
          v40 = 1;
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
          v43 = (unsigned __int64)&v29[v42];
          if ( (unsigned __int64)(v29 + 13) > v43 )
            v47 = 0;
          else
            v47 = v29[12];
          if ( (unsigned __int64)(v29 + 14) > v43 )
            v48[0] = 0;
          else
            v48[0] = *(_BYTE *)v14;
          v40 = 1;
        }
        v33 = v48[0];
        v32 = v47;
      }
      if ( v40 )
      {
        LOBYTE(v3) = v32;
        v44 = v33;
      }
      else
      {
LABEL_111:
        v31 = 0;
        v44 = 0;
      }
      LOBYTE(v46) = *(_BYTE *)(v27 + 3);
      LODWORD(v45) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v14, v27, &v52, a2, v45, v46, v28, v31, v3, v44, a2);
    }
  }
LABEL_116:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)ProtocolCommandEffects;
}
