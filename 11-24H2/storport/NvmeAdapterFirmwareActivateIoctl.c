/*
 * XREFs of NvmeAdapterFirmwareActivateIoctl @ 0x1400D0584
 * Callers:
 *     NvmeAdapterDeviceControlIrpFromNamespace @ 0x1400CE6CC (NvmeAdapterDeviceControlIrpFromNamespace.c)
 *     NvmeAdapterFirmwareActivateIoctlCompletion @ 0x1400D0B30 (NvmeAdapterFirmwareActivateIoctlCompletion.c)
 *     NvmeAdapterDeviceControlIrp @ 0x140195438 (NvmeAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     IsNvmeFirmwareActivateWithoutResetEnabled @ 0x1400CB728 (IsNvmeFirmwareActivateWithoutResetEnabled.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerProcessCommand @ 0x140129520 (NvmeControllerProcessCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeAdapterFirmwareActivateIoctl(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  __int64 v5; // rax
  int v6; // ebx
  __int64 ExtendedCommand; // r14
  unsigned int v10; // edx
  char v11; // r13
  __int64 v12; // rsi
  unsigned int v13; // esi
  int v14; // r12d
  unsigned __int8 v15; // dl
  _DWORD *v16; // r8
  int v17; // edx
  unsigned int v18; // edx
  __int64 result; // rax
  bool v20; // zf
  unsigned __int64 v21; // rcx
  __int64 v22; // rdx
  int *v23; // rax
  const EVENT_DESCRIPTOR *v24; // rdx
  __int64 v25; // rdx
  char v26; // bp
  _BYTE *v27; // r9
  unsigned __int8 v28; // r10
  char v29; // r11
  char v30; // r14
  char v31; // r13
  char *v32; // r14
  unsigned int v33; // r12d
  unsigned __int64 v34; // r15
  __int64 v35; // r8
  int v36; // ecx
  char v37; // cl
  char v38; // r8
  _BYTE *v39; // rax
  char *v40; // r13
  unsigned int v41; // eax
  char v42; // al
  char v43; // [rsp+60h] [rbp-68h]
  char v44; // [rsp+60h] [rbp-68h]
  char v45; // [rsp+61h] [rbp-67h]
  unsigned int v47; // [rsp+68h] [rbp-60h]
  GUID v48; // [rsp+70h] [rbp-58h] BYREF

  v5 = *(_QWORD *)(a3 + 184);
  v6 = 0;
  *(_QWORD *)&v48.Data1 = a4;
  ExtendedCommand = a4;
  v10 = *(_DWORD *)(v5 + 16);
  v11 = 0;
  v43 = 0;
  if ( a5 )
    *a5 = 1;
  *(_QWORD *)(a3 + 56) = 0LL;
  if ( !a2 )
    goto LABEL_31;
  v12 = *(_QWORD *)(a3 + 24);
  if ( v10 < 0x10 )
  {
    v13 = -1073741820;
    goto LABEL_32;
  }
  if ( *(_DWORD *)v12 != 16
    || *(_DWORD *)(v12 + 4) != 16
    || *(_BYTE *)(v12 + 12) > (unsigned int)((*(_BYTE *)(*(_QWORD *)(a2 + 592) + 260LL) >> 1) & 7) )
  {
LABEL_31:
    v13 = -1073741811;
LABEL_32:
    if ( ExtendedCommand )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)ExtendedCommand + 4256LL), 3u);
      NvmeControllerReclaimExtendedCommand(a2, ExtendedCommand);
    }
    goto LABEL_34;
  }
  v14 = *(_DWORD *)(v12 + 8) >> 31;
  if ( (*(_QWORD *)(a2 + 968) & 0x400LL) == 0
    && (IsNvmeFirmwareActivateWithoutResetEnabled(a2) || (*(_DWORD *)(v12 + 8) & 0x10000000) != 0) )
  {
    v11 = 1;
  }
  if ( (*(_DWORD *)(v12 + 8) & 0x40000000) != 0 )
  {
    v11 = 0;
    v43 = 1;
    *(_QWORD *)(a2 + 968) |= 0x10000uLL;
  }
  if ( a4 || (ExtendedCommand = NvmeControllerGetExtendedCommand(a2)) != 0 )
  {
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 1u;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x20u;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) &= ~2u;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x100u;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) &= ~0x40u;
    *(_WORD *)(*(_QWORD *)ExtendedCommand + 4252LL) = 0;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4184LL) = a3;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4192LL) = NvmeAdapterFirmwareActivateIoctlCompletion;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4200LL) = ExtendedCommand;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4224LL) = a1;
    v15 = *(_BYTE *)(v12 + 12);
    v16 = (_DWORD *)(*(_QWORD *)ExtendedCommand + 4136LL);
    *(_BYTE *)(*(_QWORD *)ExtendedCommand + 4096LL) = 16;
    v17 = *v16 ^ ((unsigned __int8)*v16 ^ v15) & 7;
    *v16 = v17;
    if ( v43 )
    {
      v18 = v17 & 0xFFFFFFE7;
    }
    else if ( v11 )
    {
      v18 = v17 | 0x18;
    }
    else if ( (_BYTE)v14 )
    {
      v18 = v17 & 0xFFFFFFE7 | 0x10;
    }
    else
    {
      v18 = v17 & 0xFFFFFFE7 | 8;
    }
    *v16 = v18;
    result = NvmeControllerProcessCommand(a2, ExtendedCommand);
    v13 = result;
    if ( (int)result >= 0 )
    {
      if ( a5 )
        *a5 = 0;
      return 259LL;
    }
    if ( *(_QWORD *)&v48.Data1 )
      return result;
    goto LABEL_32;
  }
  v13 = -1073741670;
LABEL_34:
  v20 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a3 + 141) = -84;
  *(_DWORD *)(a3 + 48) = v13;
  if ( v20 )
    goto LABEL_99;
  v48 = 0LL;
  IoGetActivityIdIrp(a3, &v48);
  v22 = *(_QWORD *)(a3 + 184);
  if ( *(_BYTE *)v22 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_99;
    v24 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_98;
  }
  if ( *(_BYTE *)v22 != 15 )
  {
    if ( *(_BYTE *)v22 != 27 )
      goto LABEL_99;
    if ( *(_BYTE *)(v22 + 1) == 7 && !*(_DWORD *)(v22 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v23 = *(int **)(a3 + 56);
        if ( v23 )
          v6 = *v23;
        McTemplateK0pqd_EtwWriteTransfer(v21, v22, &v48, a3, v6, *(_DWORD *)(a3 + 48));
      }
      goto LABEL_99;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_99;
    v24 = &EventPnpRequestComplete;
LABEL_98:
    McTemplateK0pd_EtwWriteTransfer(v21, v24, &v48, a3, *(_DWORD *)(a3 + 48));
    goto LABEL_99;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_99;
  v25 = *(_QWORD *)(v22 + 8);
  v26 = 0;
  v27 = 0LL;
  v44 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  if ( *(_BYTE *)(v25 + 2) != 40 )
  {
    v37 = *(_BYTE *)(v25 + 72);
    v27 = *(_BYTE **)(v25 + 32);
    v28 = *(_BYTE *)(v25 + 11);
    v26 = *(_BYTE *)(v25 + 4);
    if ( !*(_BYTE *)(v25 + 2) )
      goto LABEL_74;
    goto LABEL_99;
  }
  v32 = 0LL;
  v45 = 0;
  if ( *(_DWORD *)(v25 + 20) )
    goto LABEL_99;
  v33 = 0;
  v47 = *(_DWORD *)(v25 + 56);
  if ( !v47 )
    goto LABEL_71;
  while ( 1 )
  {
    v21 = *(unsigned int *)(v25 + 4LL * v33 + 120);
    if ( (unsigned int)v21 >= 0x80 )
    {
      v34 = *(unsigned int *)(v25 + 16);
      if ( (unsigned int)v21 < (unsigned int)v34 )
        break;
    }
LABEL_65:
    if ( ++v33 >= v47 )
      goto LABEL_71;
  }
  v35 = (unsigned int)v21;
  v36 = *(_DWORD *)(v21 + v25) - 64;
  if ( v36 )
  {
    v21 = (unsigned int)(v36 - 1);
    if ( (_DWORD)v21 )
    {
      if ( (_DWORD)v21 == 1 )
      {
        v21 = v35 + 40;
        if ( v35 + 40 <= v34 )
        {
          if ( *(_DWORD *)(v35 + v25 + 12) )
            v32 = (char *)(v35 + v25 + 32);
          v27 = *(_BYTE **)(v35 + v25 + 24);
          goto LABEL_70;
        }
      }
    }
    else
    {
      v21 = v35 + 56;
      if ( v35 + 56 <= v34 )
      {
        v45 = 1;
        if ( *(_BYTE *)(v35 + v25 + 10) )
          v32 = (char *)(v35 + v25 + 24);
        v26 = *(_BYTE *)(v35 + v25 + 8);
        v27 = *(_BYTE **)(v35 + v25 + 16);
        v28 = *(_BYTE *)(v35 + v25 + 9);
      }
    }
    goto LABEL_64;
  }
  v21 = v35 + 40;
  if ( v35 + 40 > v34 )
  {
LABEL_64:
    if ( v45 )
      goto LABEL_71;
    goto LABEL_65;
  }
  if ( *(_BYTE *)(v35 + v25 + 10) )
    v32 = (char *)(v35 + v25 + 24);
  v27 = *(_BYTE **)(v35 + v25 + 16);
LABEL_70:
  v28 = *(_BYTE *)(v35 + v25 + 9);
  v26 = *(_BYTE *)(v35 + v25 + 8);
LABEL_71:
  if ( v32 )
  {
    v37 = *v32;
    v30 = 0;
LABEL_74:
    LOBYTE(v21) = v37 - 8;
    if ( (v21 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v25 + 3) == 1 || !v27 || !v28 )
        goto LABEL_94;
      v38 = 0;
      v21 = (unsigned __int64)&v27[v28];
      v39 = v27 + 8;
      if ( (unsigned __int8)((*v27 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v39 <= v21 )
        {
          v38 = 1;
          v30 = v27[2];
          v29 = v27[1] & 0xF;
          v31 = v27[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v39 <= v21 )
        {
          v40 = v27 + 13;
          v29 = v27[2] & 0xF;
          v41 = v28;
          if ( (unsigned int)(unsigned __int8)v27[7] + 8 <= v28 )
            v41 = (unsigned __int8)v27[7] + 8;
          v21 = (unsigned __int64)&v27[v41];
          if ( (unsigned __int64)v40 > v21 )
            v44 = 0;
          else
            v44 = v27[12];
          if ( (unsigned __int64)(v27 + 14) > v21 )
            v31 = 0;
          else
            v31 = *v40;
          v38 = 1;
        }
        v30 = v44;
      }
      if ( v38 )
      {
        LOBYTE(v6) = v30;
        v42 = v31;
      }
      else
      {
LABEL_94:
        v29 = 0;
        v42 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        v21,
        v25,
        &v48,
        a3,
        *(_DWORD *)(a3 + 48),
        *(_BYTE *)(v25 + 3),
        v26,
        v29,
        v6,
        v42,
        a3);
    }
  }
LABEL_99:
  IofCompleteRequest((PIRP)a3, 0);
  return v13;
}
