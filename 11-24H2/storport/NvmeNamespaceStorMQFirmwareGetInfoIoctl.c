/*
 * XREFs of NvmeNamespaceStorMQFirmwareGetInfoIoctl @ 0x1401128C0
 * Callers:
 *     NvmeNamespaceFirmwareGetInfoIoctl @ 0x140101D0C (NvmeNamespaceFirmwareGetInfoIoctl.c)
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

__int64 __fastcall NvmeNamespaceStorMQFirmwareGetInfoIoctl(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // rax
  int v4; // ebx
  __int64 v5; // r15
  int DmaBuffer; // esi
  _DWORD *v10; // rax
  __int64 *ExtendedCommand; // r14
  bool v13; // zf
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  int *v16; // rax
  const EVENT_DESCRIPTOR *v17; // rdx
  unsigned __int64 v18; // rdx
  char v19; // r15
  _BYTE *v20; // r9
  unsigned __int8 v21; // r10
  char v22; // r11
  char v23; // r14
  char v24; // r8
  char *v25; // r14
  unsigned int v26; // r13d
  unsigned __int64 v27; // r12
  __int64 v28; // r8
  int v29; // ecx
  char v30; // cl
  char v31; // r12
  _BYTE *v32; // rax
  unsigned int v33; // eax
  char v34; // al
  __int64 v35; // [rsp+20h] [rbp-49h]
  __int64 v36; // [rsp+28h] [rbp-41h]
  __int64 v37; // [rsp+30h] [rbp-39h]
  __int64 v38; // [rsp+38h] [rbp-31h]
  __int64 v39; // [rsp+40h] [rbp-29h]
  __int64 v40; // [rsp+48h] [rbp-21h]
  char v41; // [rsp+60h] [rbp-9h]
  char v42; // [rsp+61h] [rbp-8h]
  char v43; // [rsp+62h] [rbp-7h]
  unsigned int v44; // [rsp+64h] [rbp-5h]
  __int128 v45; // [rsp+68h] [rbp-1h] BYREF
  GUID v46; // [rsp+78h] [rbp+Fh] BYREF

  v3 = *(_QWORD *)(a2 + 184);
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 16);
  *a3 = 1;
  v45 = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( *(_DWORD *)(v3 + 16) >= 0x10u )
  {
    if ( *(_DWORD *)(v3 + 8) >= 0x38u )
    {
      v10 = *(_DWORD **)(a2 + 24);
      if ( *v10 == 16 && v10[1] >= 0x10u && (v10[2] & 1) != 0 )
      {
        ExtendedCommand = (__int64 *)NvmeControllerGetExtendedCommand(v5);
        if ( ExtendedCommand )
        {
          DmaBuffer = NvmeAllocateDmaBuffer(v5, 0x200u, (__int64)a3, (void **)&v45, (_QWORD *)&v45 + 1, 0);
          if ( DmaBuffer >= 0 )
          {
            *(_DWORD *)(*ExtendedCommand + 4256) |= 1u;
            *(_DWORD *)(*ExtendedCommand + 4256) |= 0x20u;
            *(_DWORD *)(*ExtendedCommand + 4256) |= 2u;
            *(_DWORD *)(*ExtendedCommand + 4256) &= ~0x40u;
            *(_WORD *)(*ExtendedCommand + 4252) = 0;
            *(_QWORD *)(*ExtendedCommand + 4184) = a2;
            *(_QWORD *)(*ExtendedCommand + 4192) = NvmeNamespaceStorMQFirmwareGetInfoIoctlCompletion;
            *(_QWORD *)(*ExtendedCommand + 4200) = ExtendedCommand;
            *(_QWORD *)(*ExtendedCommand + 4216) = a1;
            *(_OWORD *)(*ExtendedCommand + 4160) = v45;
            *(_DWORD *)(*ExtendedCommand + 4248) = 512;
            BuildGetLogPageCommand(
              v5,
              *ExtendedCommand + 4096,
              0x203u,
              0x200u,
              *((__int64 *)&v45 + 1),
              -1,
              0LL,
              0,
              *ExtendedCommand,
              ExtendedCommand[1]);
            DmaBuffer = NvmeControllerProcessCommand(v5, ExtendedCommand);
            if ( DmaBuffer >= 0 )
            {
              *a3 = 0;
              return 259LL;
            }
          }
          _interlockedbittestandreset((volatile signed __int32 *)(*ExtendedCommand + 4256), 3u);
          NvmeControllerReclaimExtendedCommand(v5, ExtendedCommand);
        }
        else
        {
          DmaBuffer = -1073741670;
        }
      }
      else
      {
        DmaBuffer = -1073741811;
      }
    }
    else
    {
      DmaBuffer = -1073741789;
    }
  }
  else
  {
    DmaBuffer = -1073741820;
  }
  if ( (_QWORD)v45 )
    NvmeFreeDmaBuffer(v5, 0x200u, (__int64)a3, v45, *((__int64 *)&v45 + 1));
  v13 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = DmaBuffer;
  if ( v13 )
    goto LABEL_83;
  v46 = 0LL;
  IoGetActivityIdIrp(a2, &v46);
  v15 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v15 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_83;
    v17 = &EventNonReadWriteRequestComplete;
    goto LABEL_82;
  }
  if ( *(_BYTE *)v15 != 15 )
  {
    if ( *(_BYTE *)v15 != 27 )
      goto LABEL_83;
    if ( *(_BYTE *)(v15 + 1) == 7 && !*(_DWORD *)(v15 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v16 = *(int **)(a2 + 56);
        if ( v16 )
          v4 = *v16;
        LODWORD(v36) = *(_DWORD *)(a2 + 48);
        LODWORD(v35) = v4;
        McTemplateK0pqd_EtwWriteTransfer(v14, v15, &v46, a2, v35, v36);
      }
      goto LABEL_83;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_83;
    v17 = &EventPnpRequestComplete;
LABEL_82:
    LODWORD(v35) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v14, v17, &v46, a2, v35);
    goto LABEL_83;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_83;
  v18 = *(_QWORD *)(v15 + 8);
  v19 = 0;
  v20 = 0LL;
  v42 = 0;
  v21 = 0;
  v41 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  if ( *(_BYTE *)(v18 + 2) != 40 )
  {
    v30 = *(_BYTE *)(v18 + 72);
    v20 = *(_BYTE **)(v18 + 32);
    v21 = *(_BYTE *)(v18 + 11);
    v19 = *(_BYTE *)(v18 + 4);
    if ( !*(_BYTE *)(v18 + 2) )
      goto LABEL_58;
    goto LABEL_83;
  }
  v25 = 0LL;
  v43 = 0;
  if ( *(_DWORD *)(v18 + 20) )
    goto LABEL_83;
  v26 = 0;
  v44 = *(_DWORD *)(v18 + 56);
  if ( !v44 )
    goto LABEL_55;
  while ( 1 )
  {
    v14 = *(unsigned int *)(v18 + 4LL * v26 + 120);
    if ( (unsigned int)v14 >= 0x80 )
    {
      v27 = *(unsigned int *)(v18 + 16);
      if ( (unsigned int)v14 < (unsigned int)v27 )
        break;
    }
LABEL_48:
    if ( ++v26 >= v44 )
      goto LABEL_54;
  }
  v28 = (unsigned int)v14;
  v29 = *(_DWORD *)(v14 + v18) - 64;
  if ( v29 )
  {
    v14 = (unsigned int)(v29 - 1);
    if ( (_DWORD)v14 )
    {
      if ( (_DWORD)v14 == 1 )
      {
        v14 = v28 + 40;
        if ( v28 + 40 <= v27 )
        {
          if ( *(_DWORD *)(v28 + v18 + 12) )
            v25 = (char *)(v28 + v18 + 32);
          v20 = *(_BYTE **)(v28 + v18 + 24);
          goto LABEL_53;
        }
      }
    }
    else
    {
      v14 = v28 + 56;
      if ( v28 + 56 <= v27 )
      {
        v43 = 1;
        if ( *(_BYTE *)(v28 + v18 + 10) )
          v25 = (char *)(v28 + v18 + 24);
        v19 = *(_BYTE *)(v28 + v18 + 8);
        v20 = *(_BYTE **)(v28 + v18 + 16);
        v21 = *(_BYTE *)(v28 + v18 + 9);
      }
    }
    goto LABEL_47;
  }
  v14 = v28 + 40;
  if ( v28 + 40 > v27 )
  {
LABEL_47:
    if ( v43 )
      goto LABEL_54;
    goto LABEL_48;
  }
  if ( *(_BYTE *)(v28 + v18 + 10) )
    v25 = (char *)(v28 + v18 + 24);
  v20 = *(_BYTE **)(v28 + v18 + 16);
LABEL_53:
  v21 = *(_BYTE *)(v28 + v18 + 9);
  v19 = *(_BYTE *)(v28 + v18 + 8);
LABEL_54:
  v24 = 0;
LABEL_55:
  if ( v25 )
  {
    v30 = *v25;
    v23 = 0;
LABEL_58:
    LOBYTE(v14) = v30 - 8;
    if ( (v14 & 0x5D) == 0 )
    {
      v31 = *(_BYTE *)(v18 + 3);
      if ( v31 == 1 || !v20 || !v21 )
        goto LABEL_78;
      LOBYTE(v18) = 0;
      v14 = (unsigned __int64)&v20[v21];
      v32 = v20 + 8;
      if ( (unsigned __int8)((*v20 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v32 <= v14 )
        {
          LOBYTE(v18) = 1;
          v23 = v20[2];
          v22 = v20[1] & 0xF;
          v24 = v20[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v32 <= v14 )
        {
          v22 = v20[2] & 0xF;
          v33 = v21;
          if ( (unsigned int)(unsigned __int8)v20[7] + 8 <= v21 )
            v33 = (unsigned __int8)v20[7] + 8;
          v14 = (unsigned __int64)(v20 + 13);
          v18 = (unsigned __int64)&v20[v33];
          if ( (unsigned __int64)(v20 + 13) > v18 )
            v42 = 0;
          else
            v42 = v20[12];
          if ( (unsigned __int64)(v20 + 14) > v18 )
            v41 = 0;
          else
            v41 = *(_BYTE *)v14;
          LOBYTE(v18) = 1;
        }
        v24 = v41;
        v23 = v42;
      }
      if ( (_BYTE)v18 )
      {
        LOBYTE(v4) = v23;
        v34 = v24;
      }
      else
      {
LABEL_78:
        v22 = 0;
        v34 = 0;
      }
      LOBYTE(v40) = v34;
      LOBYTE(v39) = v4;
      LOBYTE(v38) = v22;
      LOBYTE(v37) = v19;
      LOBYTE(v36) = v31;
      LODWORD(v35) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v14, v18, &v46, a2, v35, v36, v37, v38, v39, v40, a2);
    }
  }
LABEL_83:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)DmaBuffer;
}
