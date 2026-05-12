/*
 * XREFs of NvmeAdapterFirmwareGetInfoIoctl @ 0x1400D2588
 * Callers:
 *     NvmeAdapterDeviceControlIrpFromNamespace @ 0x1400CE6CC (NvmeAdapterDeviceControlIrpFromNamespace.c)
 *     NvmeAdapterDeviceControlIrp @ 0x140195438 (NvmeAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     BuildGetLogPageCommand @ 0x1400BE764 (BuildGetLogPageCommand.c)
 *     NvmeAllocateDmaBuffer @ 0x1400E97F4 (NvmeAllocateDmaBuffer.c)
 *     NvmeFreeDmaBuffer @ 0x1400F8B80 (NvmeFreeDmaBuffer.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerProcessCommand @ 0x140129520 (NvmeControllerProcessCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeAdapterFirmwareGetInfoIoctl(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v4; // rax
  int v5; // ebx
  int v10; // esi
  _DWORD *v11; // rax
  __int64 *ExtendedCommand; // r14
  bool v14; // zf
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  int *v17; // rax
  const EVENT_DESCRIPTOR *v18; // rdx
  unsigned __int64 v19; // rdx
  char v20; // r15
  _BYTE *v21; // r9
  unsigned __int8 v22; // r10
  char v23; // r11
  char v24; // r14
  char v25; // r8
  char *v26; // r14
  unsigned int v27; // r13d
  unsigned __int64 v28; // r12
  __int64 v29; // r8
  int v30; // ecx
  char v31; // cl
  char v32; // r12
  _BYTE *v33; // rax
  unsigned int v34; // eax
  char v35; // al
  __int64 v36; // [rsp+20h] [rbp-49h]
  __int64 v37; // [rsp+28h] [rbp-41h]
  __int64 v38; // [rsp+30h] [rbp-39h]
  __int64 v39; // [rsp+38h] [rbp-31h]
  __int64 v40; // [rsp+40h] [rbp-29h]
  __int64 v41; // [rsp+48h] [rbp-21h]
  char v42; // [rsp+60h] [rbp-9h]
  char v43; // [rsp+61h] [rbp-8h]
  char v44; // [rsp+62h] [rbp-7h]
  unsigned int v45; // [rsp+64h] [rbp-5h]
  __int128 v46; // [rsp+68h] [rbp-1h] BYREF
  GUID v47; // [rsp+78h] [rbp+Fh] BYREF

  v4 = *(_QWORD *)(a3 + 184);
  v5 = 0;
  *a4 = 1;
  *(_QWORD *)(a3 + 56) = 0LL;
  v46 = 0LL;
  if ( !a2 )
    goto LABEL_14;
  if ( *(_DWORD *)(v4 + 16) >= 0x10u )
  {
    if ( *(_DWORD *)(v4 + 8) < 0x38u )
    {
      v10 = -1073741789;
      goto LABEL_15;
    }
    v11 = *(_DWORD **)(a3 + 24);
    if ( *v11 == 16 && v11[1] >= 0x10u )
    {
      ExtendedCommand = (__int64 *)NvmeControllerGetExtendedCommand(a2);
      if ( ExtendedCommand )
      {
        v10 = NvmeAllocateDmaBuffer(a2, 512LL, a3, &v46, (char *)&v46 + 8, 0);
        if ( v10 >= 0 )
        {
          *(_DWORD *)(*ExtendedCommand + 4256) |= 1u;
          *(_DWORD *)(*ExtendedCommand + 4256) |= 0x20u;
          *(_DWORD *)(*ExtendedCommand + 4256) |= 2u;
          *(_DWORD *)(*ExtendedCommand + 4256) &= ~0x40u;
          *(_WORD *)(*ExtendedCommand + 4252) = 0;
          *(_QWORD *)(*ExtendedCommand + 4184) = a3;
          *(_QWORD *)(*ExtendedCommand + 4192) = NvmeAdapterFirmwareGetInfoIoctlCompletion;
          *(_QWORD *)(*ExtendedCommand + 4200) = ExtendedCommand;
          *(_QWORD *)(*ExtendedCommand + 4224) = a1;
          *(_OWORD *)(*ExtendedCommand + 4160) = v46;
          *(_DWORD *)(*ExtendedCommand + 4248) = 512;
          BuildGetLogPageCommand(
            a2,
            *ExtendedCommand + 4096,
            0x203u,
            0x200u,
            *((__int64 *)&v46 + 1),
            -1,
            0LL,
            0,
            *ExtendedCommand,
            ExtendedCommand[1]);
          v10 = NvmeControllerProcessCommand(a2, ExtendedCommand);
          if ( v10 >= 0 )
          {
            *a4 = 0;
            return 259LL;
          }
        }
        _interlockedbittestandreset((volatile signed __int32 *)(*ExtendedCommand + 4256), 3u);
        NvmeControllerReclaimExtendedCommand(a2, ExtendedCommand);
      }
      else
      {
        v10 = -1073741670;
      }
      goto LABEL_15;
    }
LABEL_14:
    v10 = -1073741811;
    goto LABEL_15;
  }
  v10 = -1073741820;
LABEL_15:
  if ( (_QWORD)v46 )
    NvmeFreeDmaBuffer(a2, 512, a3, v46, *((__int64 *)&v46 + 1));
  v14 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a3 + 141) = -84;
  *(_DWORD *)(a3 + 48) = v10;
  if ( v14 )
    goto LABEL_83;
  v47 = 0LL;
  IoGetActivityIdIrp(a3, &v47);
  v16 = *(_QWORD *)(a3 + 184);
  if ( *(_BYTE *)v16 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_83;
    v18 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_82;
  }
  if ( *(_BYTE *)v16 != 15 )
  {
    if ( *(_BYTE *)v16 != 27 )
      goto LABEL_83;
    if ( *(_BYTE *)(v16 + 1) == 7 && !*(_DWORD *)(v16 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v17 = *(int **)(a3 + 56);
        if ( v17 )
          v5 = *v17;
        LODWORD(v37) = *(_DWORD *)(a3 + 48);
        LODWORD(v36) = v5;
        McTemplateK0pqd_EtwWriteTransfer(v15, v16, &v47, a3, v36, v37);
      }
      goto LABEL_83;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_83;
    v18 = &EventPnpRequestComplete;
LABEL_82:
    LODWORD(v36) = *(_DWORD *)(a3 + 48);
    McTemplateK0pd_EtwWriteTransfer(v15, v18, &v47, a3, v36);
    goto LABEL_83;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_83;
  v19 = *(_QWORD *)(v16 + 8);
  v20 = 0;
  v21 = 0LL;
  v43 = 0;
  v22 = 0;
  v42 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  if ( *(_BYTE *)(v19 + 2) != 40 )
  {
    v31 = *(_BYTE *)(v19 + 72);
    v21 = *(_BYTE **)(v19 + 32);
    v22 = *(_BYTE *)(v19 + 11);
    v20 = *(_BYTE *)(v19 + 4);
    if ( !*(_BYTE *)(v19 + 2) )
      goto LABEL_58;
    goto LABEL_83;
  }
  v26 = 0LL;
  v44 = 0;
  if ( *(_DWORD *)(v19 + 20) )
    goto LABEL_83;
  v27 = 0;
  v45 = *(_DWORD *)(v19 + 56);
  if ( !v45 )
    goto LABEL_55;
  while ( 1 )
  {
    v15 = *(unsigned int *)(v19 + 4LL * v27 + 120);
    if ( (unsigned int)v15 >= 0x80 )
    {
      v28 = *(unsigned int *)(v19 + 16);
      if ( (unsigned int)v15 < (unsigned int)v28 )
        break;
    }
LABEL_48:
    if ( ++v27 >= v45 )
      goto LABEL_54;
  }
  v29 = (unsigned int)v15;
  v30 = *(_DWORD *)(v15 + v19) - 64;
  if ( v30 )
  {
    v15 = (unsigned int)(v30 - 1);
    if ( (_DWORD)v15 )
    {
      if ( (_DWORD)v15 == 1 )
      {
        v15 = v29 + 40;
        if ( v29 + 40 <= v28 )
        {
          if ( *(_DWORD *)(v29 + v19 + 12) )
            v26 = (char *)(v29 + v19 + 32);
          v21 = *(_BYTE **)(v29 + v19 + 24);
          goto LABEL_53;
        }
      }
    }
    else
    {
      v15 = v29 + 56;
      if ( v29 + 56 <= v28 )
      {
        v44 = 1;
        if ( *(_BYTE *)(v29 + v19 + 10) )
          v26 = (char *)(v29 + v19 + 24);
        v20 = *(_BYTE *)(v29 + v19 + 8);
        v21 = *(_BYTE **)(v29 + v19 + 16);
        v22 = *(_BYTE *)(v29 + v19 + 9);
      }
    }
    goto LABEL_47;
  }
  v15 = v29 + 40;
  if ( v29 + 40 > v28 )
  {
LABEL_47:
    if ( v44 )
      goto LABEL_54;
    goto LABEL_48;
  }
  if ( *(_BYTE *)(v29 + v19 + 10) )
    v26 = (char *)(v29 + v19 + 24);
  v21 = *(_BYTE **)(v29 + v19 + 16);
LABEL_53:
  v22 = *(_BYTE *)(v29 + v19 + 9);
  v20 = *(_BYTE *)(v29 + v19 + 8);
LABEL_54:
  v25 = 0;
LABEL_55:
  if ( v26 )
  {
    v31 = *v26;
    v24 = 0;
LABEL_58:
    LOBYTE(v15) = v31 - 8;
    if ( (v15 & 0x5D) == 0 )
    {
      v32 = *(_BYTE *)(v19 + 3);
      if ( v32 == 1 || !v21 || !v22 )
        goto LABEL_78;
      LOBYTE(v19) = 0;
      v15 = (unsigned __int64)&v21[v22];
      v33 = v21 + 8;
      if ( (unsigned __int8)((*v21 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v33 <= v15 )
        {
          LOBYTE(v19) = 1;
          v24 = v21[2];
          v23 = v21[1] & 0xF;
          v25 = v21[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v33 <= v15 )
        {
          v23 = v21[2] & 0xF;
          v34 = v22;
          if ( (unsigned int)(unsigned __int8)v21[7] + 8 <= v22 )
            v34 = (unsigned __int8)v21[7] + 8;
          v15 = (unsigned __int64)(v21 + 13);
          v19 = (unsigned __int64)&v21[v34];
          if ( (unsigned __int64)(v21 + 13) > v19 )
            v43 = 0;
          else
            v43 = v21[12];
          if ( (unsigned __int64)(v21 + 14) > v19 )
            v42 = 0;
          else
            v42 = *(_BYTE *)v15;
          LOBYTE(v19) = 1;
        }
        v25 = v42;
        v24 = v43;
      }
      if ( (_BYTE)v19 )
      {
        LOBYTE(v5) = v24;
        v35 = v25;
      }
      else
      {
LABEL_78:
        v23 = 0;
        v35 = 0;
      }
      LOBYTE(v41) = v35;
      LOBYTE(v40) = v5;
      LOBYTE(v39) = v23;
      LOBYTE(v38) = v20;
      LOBYTE(v37) = v32;
      LODWORD(v36) = *(_DWORD *)(a3 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v15, v19, &v47, a3, v36, v37, v38, v39, v40, v41, a3);
    }
  }
LABEL_83:
  IofCompleteRequest((PIRP)a3, 0);
  return (unsigned int)v10;
}
