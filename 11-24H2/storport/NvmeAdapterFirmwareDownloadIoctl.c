/*
 * XREFs of NvmeAdapterFirmwareDownloadIoctl @ 0x1400D17BC
 * Callers:
 *     NvmeAdapterDeviceControlIrpFromNamespace @ 0x1400CE6CC (NvmeAdapterDeviceControlIrpFromNamespace.c)
 *     NvmeAdapterDeviceControlIrp @ 0x140195438 (NvmeAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     SetPrpFromBuffer @ 0x1400BFE7C (SetPrpFromBuffer.c)
 *     GetNvmeFirmwareGranularity @ 0x1400CB700 (GetNvmeFirmwareGranularity.c)
 *     NvmeAllocateDmaBuffer @ 0x1400E97F4 (NvmeAllocateDmaBuffer.c)
 *     NvmeFreeDmaBuffer @ 0x1400F8B80 (NvmeFreeDmaBuffer.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerProcessCommand @ 0x140129520 (NvmeControllerProcessCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memmove @ 0x140143780 (memmove.c)
 */

__int64 __fastcall NvmeAdapterFirmwareDownloadIoctl(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v4; // rax
  int v5; // ebx
  __int64 v8; // r15
  __int64 v9; // r13
  unsigned __int64 v10; // r8
  int DmaBuffer; // edi
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned int NvmeFirmwareGranularity; // eax
  __int64 *ExtendedCommand; // r12
  const void *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // eax
  bool v21; // zf
  unsigned __int64 v22; // rcx
  __int64 v23; // rdx
  int *v24; // rax
  const EVENT_DESCRIPTOR *v25; // rdx
  __int64 v26; // rdx
  char v27; // r15
  _BYTE *v28; // r9
  unsigned __int8 v29; // r10
  char v30; // r11
  char v31; // r12
  char v32; // r14
  char *v33; // r14
  unsigned int v34; // r13d
  unsigned __int64 v35; // r12
  __int64 v36; // r8
  int v37; // ecx
  char v38; // cl
  char v39; // r8
  _BYTE *v40; // rax
  unsigned int v41; // eax
  unsigned __int64 v42; // r8
  char v43; // al
  __int64 v44; // [rsp+20h] [rbp-59h]
  __int64 v45; // [rsp+28h] [rbp-51h]
  char v46; // [rsp+60h] [rbp-19h]
  char v47; // [rsp+61h] [rbp-18h]
  char v48; // [rsp+62h] [rbp-17h]
  void *v49[2]; // [rsp+68h] [rbp-11h] BYREF
  __int64 v50; // [rsp+78h] [rbp-1h]
  GUID v51; // [rsp+80h] [rbp+7h] BYREF

  v4 = *(_QWORD *)(a3 + 184);
  v5 = 0;
  *(_QWORD *)&v51.Data1 = a4;
  v50 = a1;
  v8 = 0LL;
  v9 = 0LL;
  *(_OWORD *)v49 = 0LL;
  v10 = *(unsigned int *)(v4 + 16);
  *a4 = 1;
  *(_QWORD *)(a3 + 56) = 0LL;
  if ( !a2 )
    goto LABEL_28;
  v8 = *(_QWORD *)(a3 + 24);
  if ( (unsigned int)v10 >= 0x28 )
  {
    if ( *(_DWORD *)v8 == 40 )
    {
      if ( (unsigned int)v10 < *(_DWORD *)(v8 + 4) )
        goto LABEL_3;
      v12 = *(_QWORD *)(v8 + 24);
      v13 = v12 + 32;
    }
    else
    {
      if ( *(_DWORD *)v8 != 48 )
        goto LABEL_28;
      v9 = *(_QWORD *)(a3 + 24);
      if ( (unsigned int)v10 < *(_DWORD *)(v8 + 4) )
        goto LABEL_3;
      v12 = *(_QWORD *)(v8 + 24);
      v13 = v12 + 40;
    }
    if ( v10 < v13 )
      goto LABEL_3;
    if ( v12
      && ((*(_BYTE *)(v8 + 16) | (unsigned __int8)v12) & 3) == 0
      && v12 <= *(unsigned int *)(*(_QWORD *)(a2 + 128) + 200LL) )
    {
      if ( (*(_QWORD *)(a2 + 968) & 0x800LL) == 0 )
        *(_QWORD *)(a2 + 968) |= 0x800uLL;
      NvmeFirmwareGranularity = GetNvmeFirmwareGranularity(a2);
      if ( !NvmeFirmwareGranularity || !(*(_QWORD *)(v8 + 24) % (unsigned __int64)NvmeFirmwareGranularity) )
      {
        ExtendedCommand = (__int64 *)NvmeControllerGetExtendedCommand(a2);
        if ( ExtendedCommand )
        {
          DmaBuffer = NvmeAllocateDmaBuffer(a2, *(unsigned int *)(v8 + 24), v10, v49, &v49[1], 0);
          if ( DmaBuffer >= 0 )
          {
            v16 = (const void *)(v9 + 40);
            if ( !v9 )
              v16 = (const void *)(v8 + 32);
            memmove(v49[0], v16, *(_QWORD *)(v8 + 24));
            *(_DWORD *)(*ExtendedCommand + 4256) |= 1u;
            *(_DWORD *)(*ExtendedCommand + 4256) |= 0x20u;
            *(_DWORD *)(*ExtendedCommand + 4256) |= 2u;
            *(_DWORD *)(*ExtendedCommand + 4256) &= ~0x40u;
            *(_WORD *)(*ExtendedCommand + 4252) = 0;
            *(_QWORD *)(*ExtendedCommand + 4184) = a3;
            *(_QWORD *)(*ExtendedCommand + 4192) = NvmeAdapterFirmwareDownloadIoctlCompletion;
            v17 = v50;
            *(_QWORD *)(*ExtendedCommand + 4200) = ExtendedCommand;
            *(_QWORD *)(*ExtendedCommand + 4224) = v17;
            *(void **)(*ExtendedCommand + 4160) = v49[0];
            *(void **)(*ExtendedCommand + 4168) = v49[1];
            *(_DWORD *)(*ExtendedCommand + 4248) = *(_DWORD *)(v8 + 24);
            v18 = *ExtendedCommand;
            v19 = (*(_QWORD *)(v8 + 24) >> 2) - 1;
            *(_DWORD *)(v18 + 4140) = *(_QWORD *)(v8 + 16) >> 2;
            *(_DWORD *)(v18 + 4136) = v19;
            *(_BYTE *)(v18 + 4096) = 17;
            if ( (unsigned int)SetPrpFromBuffer(
                                 *ExtendedCommand,
                                 *ExtendedCommand + 4096,
                                 (__int64)v49[1],
                                 *(_DWORD *)(v8 + 24),
                                 (_QWORD *)*ExtendedCommand,
                                 ExtendedCommand[1]) )
            {
              DmaBuffer = NvmeControllerProcessCommand(a2, ExtendedCommand);
              if ( DmaBuffer >= 0 )
              {
                **(_BYTE **)&v51.Data1 = 0;
                return 259LL;
              }
            }
            else
            {
              DmaBuffer = -1073741595;
            }
          }
          _interlockedbittestandreset((volatile signed __int32 *)(*ExtendedCommand + 4256), 3u);
          NvmeControllerReclaimExtendedCommand(a2, ExtendedCommand);
        }
        else
        {
          DmaBuffer = -1073741670;
        }
        goto LABEL_29;
      }
    }
LABEL_28:
    DmaBuffer = -1073741811;
    goto LABEL_29;
  }
LABEL_3:
  DmaBuffer = -1073741820;
LABEL_29:
  if ( v49[0] )
    NvmeFreeDmaBuffer(a2, *(_DWORD *)(v8 + 24), v10, v49[0], (__int64)v49[1]);
  v21 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a3 + 141) = -84;
  *(_DWORD *)(a3 + 48) = DmaBuffer;
  if ( v21 )
    goto LABEL_97;
  v51 = 0LL;
  IoGetActivityIdIrp(a3, &v51);
  v23 = *(_QWORD *)(a3 + 184);
  if ( *(_BYTE *)v23 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_97;
    v25 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_96;
  }
  if ( *(_BYTE *)v23 != 15 )
  {
    if ( *(_BYTE *)v23 != 27 )
      goto LABEL_97;
    if ( *(_BYTE *)(v23 + 1) == 7 && !*(_DWORD *)(v23 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v24 = *(int **)(a3 + 56);
        if ( v24 )
          v5 = *v24;
        LODWORD(v45) = *(_DWORD *)(a3 + 48);
        LODWORD(v44) = v5;
        McTemplateK0pqd_EtwWriteTransfer(v22, v23, &v51, a3, v44, v45);
      }
      goto LABEL_97;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_97;
    v25 = &EventPnpRequestComplete;
LABEL_96:
    LODWORD(v44) = *(_DWORD *)(a3 + 48);
    McTemplateK0pd_EtwWriteTransfer(v22, v25, &v51, a3, v44);
    goto LABEL_97;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_97;
  v26 = *(_QWORD *)(v23 + 8);
  v27 = 0;
  v28 = 0LL;
  v46 = 0;
  v29 = 0;
  v47 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  if ( *(_BYTE *)(v26 + 2) != 40 )
  {
    v38 = *(_BYTE *)(v26 + 72);
    v28 = *(_BYTE **)(v26 + 32);
    v29 = *(_BYTE *)(v26 + 11);
    v27 = *(_BYTE *)(v26 + 4);
    if ( !*(_BYTE *)(v26 + 2) )
      goto LABEL_72;
    goto LABEL_97;
  }
  v33 = 0LL;
  v48 = 0;
  if ( *(_DWORD *)(v26 + 20) )
    goto LABEL_97;
  v34 = 0;
  LODWORD(v50) = *(_DWORD *)(v26 + 56);
  if ( !(_DWORD)v50 )
    goto LABEL_69;
  while ( 1 )
  {
    v22 = *(unsigned int *)(v26 + 4LL * v34 + 120);
    if ( (unsigned int)v22 >= 0x80 )
    {
      v35 = *(unsigned int *)(v26 + 16);
      if ( (unsigned int)v22 < (unsigned int)v35 )
        break;
    }
LABEL_62:
    if ( ++v34 >= (unsigned int)v50 )
      goto LABEL_68;
  }
  v36 = (unsigned int)v22;
  v37 = *(_DWORD *)(v22 + v26) - 64;
  if ( v37 )
  {
    v22 = (unsigned int)(v37 - 1);
    if ( (_DWORD)v22 )
    {
      if ( (_DWORD)v22 == 1 )
      {
        v22 = v36 + 40;
        if ( v36 + 40 <= v35 )
        {
          if ( *(_DWORD *)(v36 + v26 + 12) )
            v33 = (char *)(v36 + v26 + 32);
          v28 = *(_BYTE **)(v36 + v26 + 24);
          goto LABEL_67;
        }
      }
    }
    else
    {
      v22 = v36 + 56;
      if ( v36 + 56 <= v35 )
      {
        v48 = 1;
        if ( *(_BYTE *)(v36 + v26 + 10) )
          v33 = (char *)(v36 + v26 + 24);
        v27 = *(_BYTE *)(v36 + v26 + 8);
        v28 = *(_BYTE **)(v36 + v26 + 16);
        v29 = *(_BYTE *)(v36 + v26 + 9);
      }
    }
    goto LABEL_61;
  }
  v22 = v36 + 40;
  if ( v36 + 40 > v35 )
  {
LABEL_61:
    if ( v48 )
      goto LABEL_68;
    goto LABEL_62;
  }
  if ( *(_BYTE *)(v36 + v26 + 10) )
    v33 = (char *)(v36 + v26 + 24);
  v28 = *(_BYTE **)(v36 + v26 + 16);
LABEL_67:
  v29 = *(_BYTE *)(v36 + v26 + 9);
  v27 = *(_BYTE *)(v36 + v26 + 8);
LABEL_68:
  v31 = 0;
LABEL_69:
  if ( v33 )
  {
    v38 = *v33;
    v32 = 0;
LABEL_72:
    LOBYTE(v22) = v38 - 8;
    if ( (v22 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v26 + 3) == 1 || !v28 || !v29 )
        goto LABEL_92;
      v39 = 0;
      v22 = (unsigned __int64)&v28[v29];
      v40 = v28 + 8;
      if ( (unsigned __int8)((*v28 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v40 <= v22 )
        {
          v39 = 1;
          v31 = v28[2];
          v30 = v28[1] & 0xF;
          v32 = v28[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v40 <= v22 )
        {
          v30 = v28[2] & 0xF;
          v41 = v29;
          if ( (unsigned int)(unsigned __int8)v28[7] + 8 <= v29 )
            v41 = (unsigned __int8)v28[7] + 8;
          v22 = (unsigned __int64)(v28 + 13);
          v42 = (unsigned __int64)&v28[v41];
          if ( (unsigned __int64)(v28 + 13) > v42 )
            v46 = 0;
          else
            v46 = v28[12];
          if ( (unsigned __int64)(v28 + 14) > v42 )
            v47 = 0;
          else
            v47 = *(_BYTE *)v22;
          v39 = 1;
        }
        v32 = v47;
        v31 = v46;
      }
      if ( v39 )
      {
        LOBYTE(v5) = v31;
        v43 = v32;
      }
      else
      {
LABEL_92:
        v30 = 0;
        v43 = 0;
      }
      LOBYTE(v45) = *(_BYTE *)(v26 + 3);
      LODWORD(v44) = *(_DWORD *)(a3 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v22, v26, &v51, a3, v44, v45, v27, v30, v5, v43, a3);
    }
  }
LABEL_97:
  IofCompleteRequest((PIRP)a3, 0);
  return (unsigned int)DmaBuffer;
}
